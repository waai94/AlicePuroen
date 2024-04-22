
#pragma once

#include "DSP/BufferVectorOperations.h"
#include "DSP/EnvelopeFollower.h"
#include "DSP/InterpolatedOnePole.h"
#include "DSP/ParamInterpolator.h"

//#include "IAudioLink.h"
//#include "IAudioLinkFactory.h"

#include "Atom/AtomRuntime.h"
#include "Atom/AtomAudioBus.h"
#include "Atom/AtomAudioBusSubsystem.h"
#include "Atom/Mixer/AtomMixer.h"
#include "Atom/Mixer/AtomMixerBus.h"

namespace Atom
{
	// Forward Definitons
	class FMixerSourceVoice;

	class ISourceListener
	{
	public:
		virtual ~ISourceListener() = default;

		// Called before a source begins to generate audio. 
		virtual void OnBeginGenerate() = 0;

		// Called when a loop point is hit
		//virtual void OnLoopEnd() = 0;

		// Called when the source finishes on the ASR render thread
		virtual void OnDone() = 0;

		// Called when the source's effect tails finish on the ASR render thread.
		//virtual void OnEffectTailsDone() = 0;
	};

	// Struct holding mappings of bus ids (unique ids) to send level
	struct FInitAudioBusSend
	{
		uint32 AudioBusID = INDEX_NONE;
		float SendLevel = 0.0f;
		int32 BusChannels = 0;
	};

	struct FSourceManagerInitParams
	{
		// Total number of sources to use in the source manager
		int32 NumSources = 0;

		// Number of worker threads to use for the source manager.
		int32 NumSourceWorkers = 0;
	};

	struct FMixerSourceVoiceInitParams
	{
		//TSharedPtr<FAtomSourceBuffer, ESPMode::ThreadSafe> MixerSourceBuffer = nullptr;
		ISourceListener* SourceListener = nullptr;
		//TArray<FMixerSourceSubmixSend> SubmixSends;
		TArray<Atom::FInitAudioBusSend> AudioBusSends[(int32)EBusSendType::Count];
		uint32 AudioBusID = INDEX_NONE;
		int32 AudioBusChannels = 0;
		float SourceBusDuration = 0.0f;
		//uint32 SourceEffectChainId = INDEX_NONE;
		//TArray<FSourceEffectChainEntry> SourceEffectChain;
		FMixerSourceVoice* SourceVoice = nullptr;
		int32 NumInputChannels = 0;
		int32 NumInputFrames = 0;
		float EnvelopeFollowerAttackTime = 10.0f;
		float EnvelopeFollowerReleaseTime = 100.0f;
		FString DebugName;
		//USpatializationPluginSourceSettingsBase* SpatializationPluginSettings = nullptr;
		//UOcclusionPluginSourceSettingsBase* OcclusionPluginSettings = nullptr;
		//UReverbPluginSourceSettingsBase* ReverbPluginSettings = nullptr;
		UAtomSourceDataOverridePluginSourceSettingsBase* SourceDataOverridePluginSettings = nullptr;

		FAtomSoundModulationDefaultSettings ModulationSettings;

		//FQuartzQuantizedRequestData QuantizedRequestData;

		FSharedISourceBufferListenerPtr SourceBufferListener;

		//IBufferedAudioOutput
		//IAudioLinkFactory::FAudioLinkSourcePushedSharedPtr AudioLink;

		FName AtomComponentUserID;
		uint64 AtomComponentID = 0;
		bool bIs3D = false;
		bool bPlayEffectChainTails = false;
		bool bUseHRTFSpatialization = false;
		bool bIsExternalSend = false;
		bool bIsDebugMode = false;
		bool bEnableBusSends = false;
		bool bEnableBaseSubmix = false;
		bool bEnableSubmixSends = false;
		bool bIsVorbis = false;
		bool bIsSoundfield = false;
		//bool bIsSeeking = false;
		//bool bShouldSourceBufferListenerZeroBuffer = false;
		EAtomFormat InputFormat = EAtomFormat::None;
		int32 InputSampleRate = 48000;
		bool bIsStreamed = false;

		FCriAtomVoicePoolPtr ExternalVoicePool = nullptr;

		uint32 PlayOrder = INDEX_NONE;
	};

	// Atom sources and voice pool manager
	class FAtomSourceManager
	{
	public:

		FAtomSourceManager(FAtomRuntime* InAtomRuntime);
		~FAtomSourceManager();

		void Init(const FSourceManagerInitParams& InitParams);
		void Update(bool bTimedOut = false);

		bool GetFreeSourceID(int32& OutSourceID);
		int32 GetNumActiveSources() const;
		int32 GetNumActiveAudioBuses() const;

		void ReleaseSourceID(const int32 SourceID);
		void InitSource(const int32 SourceId, const FMixerSourceVoiceInitParams& InitParams);

		// Creates and starts an audio bus manually.
		void StartAudioBus(Atom::FAudioBusKey InAudioBusKey, int32 InNumChannels, bool bInIsAutomatic);

		// Stops an audio bus manually
		void StopAudioBus(Atom::FAudioBusKey InAudioBusKey);

		// Queries if an audio bus is active. Must be called from the audio thread.
		bool IsAudioBusActive(Atom::FAudioBusKey InAudioBusKey) const;

		// Returns the number of channels currently set for the audio bus associated with
		// the provided BusId.  Returns 0 if the audio bus is inactive.
		int32 GetAudioBusNumChannels(Atom::FAudioBusKey InAudioBusKey) const;

		// Adds a patch output for an audio bus from the Audio Render Thread
		void AddPatchOutputForAudioBus(Atom::FAudioBusKey InAudioBusKey, const Audio::FPatchOutputStrongPtr& InPatchOutputStrongPtr);

		// Adds a patch output for an audio bus from the Audio Thread
		void AddPatchOutputForAudioBus_AudioThread(Atom::FAudioBusKey InAudioBusKey, const Audio::FPatchOutputStrongPtr& InPatchOutputStrongPtr);

		// Adds a patch input for an audio bus
		void AddPatchInputForAudioBus(Atom::FAudioBusKey InAudioBusKey, const Audio::FPatchInput& InPatchInput);

		// Adds a patch input for an audio bus from the Audio Thread
		void AddPatchInputForAudioBus_AudioThread(Atom::FAudioBusKey InAudioBusKey, const Audio::FPatchInput& InPatchInput);

		bool IsUsingHRTFSpatializer(const int32 SourceID) const;

		// Buffer getters
		const float* GetPreDistanceAttenuationBuffer(const int32 SourceId) const;
		const float* GetPreEffectBuffer(const int32 SourceId) const;
		const float* GetPreviousSourceBusBuffer(const int32 SourceId) const;
		const float* GetPreviousAudioBusBuffer(const int32 AudioBusId) const;
		int32 GetNumChannels(const int32 SourceId) const;
		int32 GetNumOutputFrames() const { return 0; } // return NumOutputFrames; }
		bool IsSourceBus(const int32 SourceId) const;

		// grab info
		void IterateOverVoicePools(TFunctionRef<void(EAtomVoicePoolType Type, int32 ID, int32 NumUsedVoices, int32 MaxVoices)> Func) const;

	private:

		void ReleaseSource(const int32 SourceId);

		void GenerateSourceAudio(const bool bGenerateBuses);
		void GenerateSourceAudio(const bool bGenerateBuses, const int32 SourceIdStart, const int32 SourceIdEnd);

		void ComputeBuses();
		void UpdateBuses();

		static const int32 NUM_BYTES_PER_SAMPLE = 2;

		FAtomRuntime* AtomRuntime;

		// Cached ptr to an optional source data override plugin
		TAtomSourceDataOverridePtr SourceDataOverridePlugin;

		// Array of pointers to game thread audio source objects
		TArray<FMixerSourceVoice*> MixerSources;

		struct FSourceInfo
		{
			FSourceInfo() {}
			~FSourceInfo() {}

			// What audio bus Id this source is sonfiying, if it is a source bus. This is INDEX_NONE for sources which are not source buses.
			uint32 AudioBusID;

			// A DSP object which tracks the amplitude envelope of a source.
			//Audio::FInlineEnvelopeFollower SourceEnvelopeFollower;
			//float SourceEnvelopeValue;

			// Modulation destinations
			//FAtomModulationDestination VolumeModulation;
			//FAtomModulationDestination PitchModulation;
			//FAtomModulationDestination LowpassModulation;
			//FAtomModulationDestination HighpassModulation;

			// Modulation Base (i.e. Carrier) Values
			//float VolumeModulationBase;
			//float PitchModulationBase;
			//float LowpassModulationBase;
			//float HighpassModulationBase;

			uint8 bUseHRTFSpatializer : 1;
			uint8 bIsExternalSend : 1;
			//uint8 bHasPreDistanceAttenuationSend : 1;
			uint8 bIsSoundfield : 1;

			// Source format info
			//FAtomWaveInfo WaveInfo;

			// ID for associated Atom Component if there is one, 0 otherwise
			uint64 AtomComponentID;

#if ATOM_MIXER_ENABLE_DEBUG_MODE
			uint8 bIsDebugMode : 1;
			FString DebugName;
#endif // ATOM_MIXER_ENABLE_DEBUG_MODE
		};

		// Array of listener transforms
		TArray<FTransform> ListenerTransforms;

		// Array of source infos.
		TArray<FSourceInfo> SourceInfos;

	

		// Map of bus object Id's to audio bus data. 
		TMap<Atom::FAudioBusKey, TSharedPtr<Atom::FMixerAudioBus>> AudioBuses;
		TArray<Atom::FAudioBusKey> AudioBusKeys_AudioThread;

		// General information about sources in source manager accessible from game thread.
		struct FGameThreadInfo
		{
			TArray<int32> FreeSourceIndices;
			TArray<bool> bIsBusy;
			TArray<bool> bNeedsSpeakerMap;
			TArray<bool> bIsDebugMode;
			TArray<bool> bIsUsingHRTFSpatializer;
		} GameThreadInfo;

		int32 NumActiveSources;
		int32 NumTotalSources;

		uint8 bInitialized : 1;
		uint8 bUsingSpatializationPlugin : 1;
		uint8 bUsingSourceDataOverridePlugin : 1;

		friend class FMixerSourceVoice;
	};
} // namespace
