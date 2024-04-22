
#pragma once

#include "Atom/Atom.h"
#include "Atom/Modulation/AtomModulationDestination.h"
#include "Atom/Mixer/AtomMixerSourceManager.h"

// Forward Definitons
class FAtomRuntime;

namespace Atom
{
	// Forward Definitons
	class FMixerSourceVoice;

	/** Base class for sound sources that uses mixer ("Ex" in CriAtom) and source voices. */
	class FMixerSource
		: public FAtomSource
		, public ISourceListener
	{
	public:

		FMixerSource(FAtomRuntime* InAtomRuntime);
		virtual ~FMixerSource();

		//~ Begin ISourceListener Interface
		virtual void OnBeginGenerate() override {}
		//virtual void OnLoopEnd() override {}
		virtual void OnDone() override {}
		//virtual void OnEffectTailsDone() override {}
		//~ End ISourceListener Interface

	protected:

		virtual void FreeResources() = 0;

		// Init the voice with MixerSourceManager.
		bool InitSourceVoice(FAtomPlaybackInstance* InPlaybackInstance);

		/** Whether or not we should create the source voice with the HRTF spatializer. */
		bool UseObjectBasedSpatialization() const;

		/** Whether or not existing or new sources will use the HRTF spatializer. */
		bool IsUsingObjectBasedSpatialization() const;

		/** Whether or not to use the source data override plugin */
		bool UseSourceDataOverridePlugin() const;

		FMixerSourceVoice* MixerSourceVoice = nullptr;

		bool bDebugMode = false;
	};

	/**
	 * FAtomPlayer class
	 * 
	 * Class which implements a simplest sound source object using an Atom Player (CriAtomPlayer is a voice by itself).
	 */
	class FAtomPlayer : public FAtomSource
	{
	public:

		FAtomPlayer(FAtomRuntime* InAtomRuntime);
		~FAtomPlayer();

		//~ Begin FAtomSource Interface
		void* GetNativeHandle() const override { return Player.Get(); }
		FString Describe(bool bUseLongName) override { return bUseLongName ? TEXT("Atom Player") : TEXT("Player"); }
		bool IsVoiceSource() const override { return true; }
		bool PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance) override;
		bool IsPreparedToInit() override;
		bool Init(FAtomPlaybackInstance* InPlaybackInstance) override;
		void Update() override;
		void Play() override;
		void Pause() override;
		void Stop() override;
		void StopNow() override;
		bool IsStopping() override;
		bool IsFinished() override;
		//~ End FAtomSource Interface 

	protected:

		void FreeResources();

		bool IsPlaybackFinished();

		/** Updates the volume parameter set from the game thread. */
		void UpdateVolume();

		FCriAtomPlayerPtr Player;

		CriAtomPlayerStatus Status;

		/** Task used to create player. */
		FGraphEventRef CreatePlayerTask;

		FThreadSafeBool bIsPreparingForInit; // global prepare status -> replace with InitializationState
		FThreadSafeBool bIsLoadingResource; // asset resource loading
		FThreadSafeBool bIsPreparingPlayer; // atom player preparing
		FThreadSafeBool bIsPrepareFailed; // on someting failed
		FThreadSafeBool bIsStopping;

	public:

		void HandleNativePlayerOnPcmDecode(CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumSamples, void* Data[]);
	};

	/** State to track initialization stages. */
	enum class EAtomPlayerExInitializationState : uint8
	{
		NotInitialized,
		Initializing,
		Initialized
	};

	/**
	 * FAtomExPlayer class
	 * 
	 * Class which implements a mixer sound source object using the advanced Atom PlayerEx.
	 */
	class FAtomExPlayer : public FMixerSource
	{
	public:

		using FAtomPlaybackId = CriAtomExPlaybackId;

		/** Constructor. */
		FAtomExPlayer(FAtomRuntime* InAtomRuntime, FCriAtomExPlayerPtr&& ExternalPlayer = FCriAtomExPlayerPtr());

		/** Destructor. */
		~FAtomExPlayer();

		//~ Begin FAtomSource Interface
		virtual void* GetNativeHandle() const override { return ExPlayer.Get(); }
		virtual FString Describe(bool bUseLongName) override { return bUseLongName ? TEXT("AtomEx Player") : TEXT("ExPlayer"); }
		virtual bool IsVoiceSource() const override { return false; }
		virtual bool PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance) override;
		virtual bool IsPreparedToInit() override;
		virtual bool Init(FAtomPlaybackInstance* InPlaybackInstance) override;
		virtual void Update() override;
		virtual void Play() override;
		virtual void Pause() override;
		virtual void Stop() override;
		virtual void StopNow() override;
		virtual bool IsStopping() override;
		virtual bool IsFinished() override;
		virtual float GetPlaybackPercent() const override;
		//~ End FAtomSource Interface

		//~ Begin IAtomSourceListener
		//virtual void OnBeginGenerate() override;
		//virtual void OnDone() override;
		//virtual void OnEffectTailsDone() override;
		//virtual void OnLoopEnd() override { bLoopCallback = true; };
		//~ End IAtomSourceListener

		/** Returns true if sub-player has finished playing. */
		bool IsPlaybackFinished(FAtomPlaybackId PlaybackID);

		FAtomRuntime* GetAtomRuntime() const { return AtomRuntime; }

	protected:

		/** Initializes the bus sends. */
		//void SetupBusData(TArray<FInitAudioBusSend>* OutAudioBusSends = nullptr, bool bEnableBusSends = true);

		/** Frees any resources for this sound source. */
		virtual void FreeResources() override;

		bool LoadSoundInternal(FAtomPlaybackInstance* InPlaybackInstance);
		bool PrepareSoundInternal();

		void AddSpatialization();
		void RemoveSpatialization();

		void SetLooping();

		void SetCategories();
		void UnsetCategories();

		void AttachAisacPatches();
		void DetachAisacPatches();

		void SetCueSelectorLabels();
		void SetCueFirstBlockIndex();

		/** Updates the pitch parameter set from the game thread. */
		void UpdatePitch();

		/** Updates the volume parameter set from the game thread. */
		void UpdateVolume();

		/** Updates the spatialization information set from the game thread. */
		void UpdateSpatialization();

		/** Updates source effects of the sound. */
		void UpdateEffects();

		/** Updates the Modulation Routing settings on this voice. */
		void UpdateModulation();

		/** Updates source bus send levels based on game data. */
		void UpdateBusSends();

		/** Updates the channel map of the sound.*/
		void UpdateChannelMap();

		/** Updates all parameters used by sound cue.*/
		void UpdateCueParameters();

		/** */
		void Update3DSource(FCriAtomExSourcePtr& InExSource, const FTransform& InTransform, const FAtomAttenuationSettings* InAttenuationSettings);

		bool ComputeChannelMap(const int32 NumSourceChannels);
		bool ComputeMonoChannelMap();
		bool ComputeStereoChannelMap();

	protected:

		/** the lock for player handle. */
		FCriticalSection PlayerLock;

		/** The native AtomEx player handle. */
		FCriAtomExPlayerPtr ExPlayer;

		/** The native AtomEx source handle if this sound is 3d sound. */
		FCriAtomExSourcePtr ExSource;

		/** The native AtomEx source list handle if this sound use multiple 3d sound positions. */
		FCriAtomExSourceListPtr ExSourceList;

		/** The native AtomEx source handles if this sound use multiple 3d sound positions. */
		TArray<FCriAtomExSourcePtr> ExSources;

		/** The native PlaybackID of the first playback. */
		FAtomPlaybackId MainPlaybackID;

		/** The native Status of the player. */
		CriAtomExPlayerStatus Status;

		EAtomPlayerExInitializationState InitializationState; // global init state

		FThreadSafeBool bIsPreparingForInit; // global prepare status -> replace with InitializationState
		FThreadSafeBool bIsLoadingResource; // asset resource loading
		FThreadSafeBool bIsPreparingPlayer; // atom player preparing
		FThreadSafeBool bIsPrepareFailed; // on someting failed
		FThreadSafeBool bIsStopping;
		FThreadSafeBool bIsExternal;

		uint32 bIs3D : 1;
		uint32 bDebugMode : 1;
		//uint32 bIsVorbis : 1; // bIsHCA ...
		uint32 bAttenuationReady : 1;

		uint32 bPreviousBaseRackEnablement : 1;
		mutable float PreviousPlaybackPercent;
		float PreviousAzimuth;

		// Array of copied FSoundSourceBusSendInfo data for all the bus sends this
		// source may need to live-update during its lifespan
		//TArray<FDynamicBusSendInfo> DynamicBusSendInfos;

		// An array of bus sends from previous update. Allows us to clear out bus sends if they are no longer being sent.
		TArray<FAtomSoundToBusSend> PreviousBusSendSettings;

		// An array of cue selector labels from previous update. Allows us to clear out labels if they are no longer set.
		TArray<FAtomSelectorParam> PreviousCueSelectorParams;

		// cue block index to set from previous update. Allows us to call native set function only if index is modified.
		int32 PreviousCueNextBlockIndex;

		// synchronized cue's beatsync info
		TSharedPtr<FAtomBeatSyncInfo, ESPMode::ThreadSafe> CueBeatSyncInfo;

		// Inner properties extending Atom player capabilities
		struct FSourceInfo
		{
			// Modulation destinations
			FAtomModulationDestination VolumeModulation;
			FAtomModulationDestination PitchModulation;
			FAtomModulationDestination LowpassModulation;
			FAtomModulationDestination HighpassModulation;

			// Modulation Base (i.e. Carrier) Values
			float VolumeModulationBase = 0.0f; // dB
			float PitchModulationBase = 0.0f; // Semitones
			float HighpassModulationBase = ATOM_MIN_FILTER_FREQUENCY; // Hz
			float LowpassModulationBase = ATOM_MAX_FILTER_FREQUENCY; // Hz

			//Asiacs
			struct FSourceAisacModulation
			{
				FAtomModulationDestination Modulation;
				float ModulationBase = 1.0f;
			};
			TMap<FAtomAisacControl, FSourceAisacModulation> AisacControlModulations;

			FORCEINLINE void ResetModulators(const FAtomRuntimeId InRuntimeID)
			{
				VolumeModulation.Init(InRuntimeID, FName("Volume"), false /* bInIsBuffered */, true /* bInValueLinear */);
				PitchModulation.Init(InRuntimeID, FName("Pitch"));
				HighpassModulation.Init(InRuntimeID, FName("HPFCutoffFrequency"));
				LowpassModulation.Init(InRuntimeID, FName("LPFCutoffFrequency"));

				VolumeModulationBase = 0.0f;
				PitchModulationBase = 0.0f;
				HighpassModulationBase = MIN_FILTER_FREQUENCY;
				LowpassModulationBase = MAX_FILTER_FREQUENCY;

				AisacControlModulations.Empty();
			}
		};
		FSourceInfo SourceInfo;

	public:

		void HandleNativeOnPlaybackEvent(CriAtomExPlaybackEvent PlaybackEvent, const CriAtomExPlaybackInfoDetail* Info);
		void HandleNativeOnCueBlockIndexChanged(CriAtomExPlaybackId PlaybackID, CriAtomExBlockIndex BlockIndex);
		void HandleNativePlayerOnFilter(CriAtomExPlaybackId PlaybackID, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumFrames, void* Data[]);
		void HandleNativePlayerOnInputPortFilter(CriAtomExPlaybackId PlaybackID, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumFrames, void* Data[]);
	};

	/**
	 * FAtomExPlayback class
	 *
	 * Class which implements a mixer sound source object using Playback Instancing from an FAtomExPlayer.
	 */
	struct FAtomExPlayback : public FMixerSource
	{
	public:

		using FAtomPlaybackId = CriAtomExPlaybackId;

		FAtomExPlayback(FAtomExPlayer* InExPlayer);
		~FAtomExPlayback();

		virtual void FreeResources() override {}

		//~ Begin FAtomSource Interface 
		FString Describe(bool bUseLongName) override { return bUseLongName ? TEXT("AtomEx Playback") : TEXT("ExPlayback"); }
		bool IsVoiceSource() const override { return false; }
		bool PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance) override;
		bool IsPreparedToInit() override;
		bool Init(FAtomPlaybackInstance* InPlaybackInstance) override;
		void Update() override;
		void Play() override;
		void Pause() override;
		void Stop() override;
		void StopNow() override;
		bool IsStopping() override;
		bool IsFinished() override;
		//~ End FAtomSource Interface

	protected:

		bool PrepareToInitializeInternal(FAtomPlaybackInstance* InPlaybackInstance);

		bool IsPlaybackFinished();

		FAtomExPlayer* ExPlayer;

		/** Associated Playback Instance. */
		FAtomPlaybackInstance* PlaybackInstance;

		FAtomPlaybackId ExPlaybackID;

		CriAtomExPlaybackStatus Status;

		uint8 bIsPreparingForInit : 1;
		uint8 bIsWaitingExPlayerReady : 1;
		uint8 bIsPrepareFailed : 1;
		uint8 bIsStopping : 1;
	};

	/**
	 * FAtomExPlayback class
	 *
	 * Class which implements a mixer sound source object using an external AtomExPlayer.
	 */
	class FAtomExternalExPlayer : public FAtomExPlayer
	{
	public:

		FAtomExternalExPlayer(FAtomRuntime* InAtomRuntime, FCriAtomExPlayerPtr&& InExternalExPlayer);
		~FAtomExternalExPlayer();

		virtual FString Describe(bool bUseLongName) override { return bUseLongName ? TEXT("External AtomEx Player") : TEXT("External ExPlayer"); }
		virtual bool PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance) override;
		virtual bool IsPreparedToInit() override;
		virtual bool Init(FAtomPlaybackInstance* InPlaybackInstance) override;
		virtual bool IsVoiceSource() const override { return true; }
	};
} // namespace
