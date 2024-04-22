#pragma once

#include "CoreMinimal.h"

#include "Atom.h"
#include "Modulation/AtomModulationDestination.h"
#include "Extensions/IAtomEndpoint.h"

#include "AtomRack.generated.h"

// Forward Declarations
class UEdGraph;
class UAtomDspBusSetting;
class UAtomBus;
class FAtomRuntime;
class FAtomRackSubmixListener;

/**
* Called when a new rack envelope value is generated on the given runtime id (different for multiple PIE). Array is an envelope value for each channel.
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRackEnvelope, const TArray<float>&, Envelope);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRackSpectralAnalysis, const TArray<float>&, Magnitudes);

/*UENUM(BlueprintType)
enum class EFFTSize : uint8
{
	// 512
	DefaultSize,

	// 64
	Min,

	// 256
	Small,

	// 512
	Medium,

	// 1024
	Large,

	// 2048
	VeryLarge,

	// 4096
	Max
};

UENUM()
enum class EFFTPeakInterpolationMethod : uint8
{
	NearestNeighbor,
	Linear,
	Quadratic,
	ConstantQ,
};

UENUM()
enum class EFFTWindowType : uint8
{
	// No window is applied. Technically a boxcar window.
	None,

	// Mainlobe width of -3 dB and sidelobe attenuation of ~-40 dB. Good for COLA.
	Hamming,

	// Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA.
	Hann,

	// Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA.
	Blackman
};

UENUM(BlueprintType)
enum class EAudioSpectrumType : uint8
{
	// Spectrum frequency values are equal to magnitude of frequency.
	MagnitudeSpectrum,

	// Spectrum frequency values are equal to magnitude squared.
	PowerSpectrum,

	// Returns decibels (0.0 dB is 1.0)
	Decibel,
};

struct FSoundSpectrumAnalyzerSettings
{
	// FFTSize used in spectrum analyzer.
	EFFTSize FFTSize;

	// Type of window to apply to audio.
	EFFTWindowType WindowType;

	// Metric used when analyzing spectrum. 
	EAudioSpectrumType SpectrumType;

	// Interpolation method used when getting frequencies.
	EFFTPeakInterpolationMethod  InterpolationMethod;

	// Hopsize between audio windows as a ratio of the FFTSize.
	float HopSize;
};

struct FSoundSpectrumAnalyzerDelegateSettings
{
	// Settings for individual bands.
	TArray<FSoundSubmixSpectralAnalysisBandSettings> BandSettings;

	// Number of times a second the delegate is triggered. 
	float UpdateRate;

	// The decibel level considered silence.
	float DecibelNoiseFloor;

	// If true, returned values are scaled between 0 and 1.
	bool bDoNormalize;

	// If true, the band values are tracked to always have values between 0 and 1. 
	bool bDoAutoRange;

	// The time in seconds for the range to expand to a new observed range.
	float AutoRangeAttackTime;

	// The time in seconds for the range to shrink to a new observed range.
	float AutoRangeReleaseTime;
};*/

#if WITH_EDITOR

/** Interface for Atom rack submix graph interaction with the CriWareCoreEditor module. */
class IAtomRackEditor
{
public:
	virtual ~IAtomRackEditor() {}

	/** Refreshes the sound class graph links. */
	virtual void RefreshGraphLinks(UEdGraph* SoundClassGraph) = 0;
};
#endif


UCLASS(config = CriWare, abstract, HideCategories = Object, EditInlineNew, BlueprintType)
class CRIWARECORE_API UAtomRackBase 
	: public UObject
{
	GENERATED_BODY()

public:

	UAtomRackBase(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITORONLY_DATA
	/** EdGraph based representation of the AtomRack */
	UEdGraph* AtomRackGraph;
#endif

	// Auto-manage enabling and disabling the submix as a CPU optimization. It will be disabled if the submix and all child submixes are silent. It will re-enable if a sound is sent to the submix or a child submix is audible.
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AutoDisablement)
	//bool bAutoDisable = true;

	// The minimum amount of time to wait before automatically disabling a submix if it is silent. Will immediately re-enable if source audio is sent to it. 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutoDisablement, meta = (EditCondition = "bAutoDisable"))
	//float AutoDisableTime = 0.01f;

	// Child racks to this rack
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom Rack")
	TArray<TObjectPtr<UAtomRackBase>> ChildRacks;

	// Master Bus - always one defined per rack
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Buses", Instanced, meta = (ShowOnlyInnerProperties))
	TObjectPtr<UAtomBus> MasterBus;

protected:

	//~ Begin UObject Interface.
	virtual FString GetDesc() override;
	virtual void BeginDestroy() override;
	virtual void PostLoad() override;
	virtual void PostInitProperties() override;

public:

	/** The master out bus name. */
	static const FName MasterBusName;

	// Atom Rack Editor functionality
#if WITH_EDITOR

	/**
	* @return true if the child sound class exists in the tree
	*/
	bool RecurseCheckChild(const UAtomRackBase* ChildAtomRack) const;

	/**
	* Add Referenced objects
	*
	* @param	InThis		AtomRack we are adding references from.
	* @param	Collector	Reference Collector
	*/
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

protected:

	virtual void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	//~ End UObject Interface.

private:

	static TArray<UAtomRackBase*> BackupChildRacks;
#endif // WITH_EDITOR
};

/**
 * This rack class can be derived from for racks that output to a parent rack.
 */
UCLASS(config = CriWare, abstract, HideCategories = Object, EditInlineNew, BlueprintType)
class CRIWARECORE_API UAtomRackWithParentBase
	: public UAtomRackBase
{
	GENERATED_BODY()

public:

	UAtomRackWithParentBase(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom Rack")
	TObjectPtr<UAtomRackBase> ParentRack;

	/**
	* Set the parent rack of this AtomRack, removing it as a child from its previous owner
	*
	* @param	InParentRack	The new parent rack of this
	*/
	void SetParentRack(UAtomRackBase* InParentRack);

protected:

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;
#endif 
};

// Whether to use linear or decibel values for audio gains
UENUM(BlueprintType)
enum class EAtomGainParamMode : uint8
{
	Linear = 0,
	Decibels,
};

/**
 * Atom Rack class meant for applying an effect to the downmixed sum of multiple audio sources.
 */
UCLASS(config = CriWare, HideCategories = Object, EditInlineNew, BlueprintType)
class CRIWARECORE_API UAtomRack
	: public UAtomRackWithParentBase
{
	GENERATED_BODY()

public:

	UAtomRack(const FObjectInitializer& ObjectInitializer);

	/** Mute this rack when the application is muted or in the background. Used to prevent rack effect tails from continuing when tabbing out of application or if application is muted. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom Rack")
	uint8 bMuteWhenBackgrounded : 1;

	// Number of channels to output.
	UPROPERTY(EditAnywhere, AssetRegistrySearchable, Category = "Sound Renderer", meta = (ClampMin = "0", ClampMax = "128"))
	int32 NumChannels;

	// Sample Rate to output.
	UPROPERTY(EditAnywhere, AssetRegistrySearchable, Category = "Sound Renderer", meta = (ClampMin = "0", Units = Hz))
	int32 SamplingRate;

	// Atom server frequency to use.
	UPROPERTY(EditAnywhere, AssetRegistrySearchable, Category = "Sound Renderer", meta = (ClampMin = "0.0", ClampMax = "120.0", Units = Hz))
	float ServerFrequency;

	// AtomConfig to use with this rack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AssetRegistrySearchable, BlueprintSetter = SetAtomConfig, Category = "Buses")
	TObjectPtr<const UAtomConfig> AtomConfig;

	// The name of the DSP bus setting to use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintGetter = GetDspBusSettingName, BlueprintSetter = SetDspBusSettingName, Category = "Buses")
	FName DspBusSettingName;

	// Attached Dsp Bus Settings
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, BlueprintSetter = SetDspBusSetting, AssetRegistrySearchable, Category = "Buses")
	TObjectPtr<const UAtomDspBusSetting> DspBusSetting;

	// Initial snapshot. Will use this snapshot at initialisation of the rack.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintGetter = GetSnapshot, BlueprintSetter = SetSnapshot, Category = "Snapshot")
	FName Snapshot;

	// Buses used in this rack.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Buses")
	TArray<TObjectPtr<UAtomBus>> Buses;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom|Submix")
	//TArray<UAtomDSPPreset*> SubmixEffectChain;

	/** Optional settings used by plugins which support ambisonics file playback. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom|Submix")
	//TObjectPtr<USoundfieldEncodingSettingsBase>* AmbisonicsPluginSettings;

	/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EnvelopeFollower, meta = (ClampMin = "0", UIMin = "0"))
	int32 EnvelopeFollowerAttackTime;

	/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EnvelopeFollower, meta = (ClampMin = "0", UIMin = "0"))
	int32 EnvelopeFollowerReleaseTime;

	/** Whether to treat submix gain levels as linear or decibel values. */
	//UPROPERTY(EditAnywhere, Category = RackLevel, meta = (InlineCategoryProperty))
	//EAtomGainParamMode GainMode;

	/** The output volume of the submix in Decibels. Applied after buses effects and analysis are performed.*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RackLevel, meta = (DisplayName = "Output Volume (dB)", AtomParam = "Volume", AtomParamClass = "AtomModulationParameterVolume", ClampMin = "-96.0", ClampMax = "0.0", UIMin = "-96.0", UIMax = "0.0"))
	//FAtomSoundModulationSettings OutputVolumeModulation;

	/** The wet level of the submixin Decibels. Applied after submix effects and analysis are performed. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RackLevel, meta = (DisplayName = "Wet Level (dB)", AtomParam = "Volume", AtomParamClass = "AtomModulationParameterVolume", ClampMin = "-96.0", ClampMax = "0.0", UIMin = "-96.0", UIMax = "0.0"))
	//FAtomSoundModulationSettings WetLevelModulation;

	/** The dry level of the submix in Decibels. Applied before submix effects and analysis are performed. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RackLevel, meta = (DisplayName = "Dry Level (dB)", AtomParam = "Volume", AtomParamClass = "AtomModulationParameterVolume", ClampMin = "-96.0", ClampMax = "0.0", UIMin = "-96.0", UIMax = "0.0"))
	//FAtomSoundModulationSettings DryLevelModulation;

	// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.
	//UFUNCTION(BlueprintCallable, Category = "Atom|EnvelopeFollowing", meta = (WorldContext = "WorldContextObject"))
	//void StartEnvelopeFollowing(const UObject* WorldContextObject);

	//void StartEnvelopeFollowing(FAtomRuntime* InRuntime);

	// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.
	//UFUNCTION(BlueprintCallable, Category = "Atom|EnvelopeFollowing", meta = (WorldContext = "WorldContextObject"))
	//void StopEnvelopeFollowing(const UObject* WorldContextObject);

	//void StopEnvelopeFollowing(FAtomRuntime* InRuntime);

	/**
	 *	Adds an envelope follower delegate to the submix when envelope following is enabled on this submix.
	 *	@param	OnSubmixEnvelopeBP	Event to fire when new envelope data is available.
	 */
	//UFUNCTION(BlueprintCallable, Category = "Atom|EnvelopeFollowing", meta = (WorldContext = "WorldContextObject"))
	//void AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnRackEnvelopeBP& OnRackEnvelopeBP);


	/**
	 *	Adds a spectral analysis delegate to receive notifications when this submix has spectrum analysis enabled.
	 *	@param	InBandsettings					The frequency bands to analyze and their envelope-following settings.
	 *  @param  OnSubmixSpectralAnalysisBP		Event to fire when new spectral data is available.
	 *	@param	UpdateRate						How often to retrieve the data from the spectral analyzer and broadcast the event. Max is 30 times per second.
	 *	@param  InterpMethod                    Method to used for band peak calculation.
	 *	@param  SpectrumType                    Metric to use when returning spectrum values.
	 *	@param  DecibelNoiseFloor               Decibel Noise Floor to consider as silence when using a Decibel Spectrum Type.
	 *	@param  bDoNormalize                    If true, output band values will be normalized between zero and one.
	 *	@param  bDoAutoRange                    If true, output band values will have their ranges automatically adjusted to the minimum and maximum values in the audio. Output band values will be normalized between zero and one.
	 *	@param  AutoRangeAttackTime             The time (in seconds) it takes for the range to expand to 90% of a larger range.
	 *	@param  AutoRangeReleaseTime            The time (in seconds) it takes for the range to shrink to 90% of a smaller range.
	 */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Spectrum", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = 3))
	//void AddSpectralAnalysisDelegate(const UObject* WorldContextObject, const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP, float UpdateRate = 10.f, float DecibelNoiseFloor = -40.f, bool bDoNormalize = true, bool bDoAutoRange = false, float AutoRangeAttackTime = 0.1f, float AutoRangeReleaseTime = 60.f);

	/**
	 *	Remove a spectral analysis delegate.
	 *  @param  OnSubmixSpectralAnalysisBP		The event delegate to remove.
	 */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Spectrum", meta = (WorldContext = "WorldContextObject"))
	//void RemoveSpectralAnalysisDelegate(const UObject* WorldContextObject, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP);

	/** Start spectrum analysis of the audio output. */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Analysis", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = 1))
	//void StartSpectralAnalysis(const UObject* WorldContextObject, EFFTSize FFTSize = EFFTSize::DefaultSize, EFFTPeakInterpolationMethod InterpolationMethod = EFFTPeakInterpolationMethod::Linear, EFFTWindowType WindowType = EFFTWindowType::Hann, float HopSize = 0, EAudioSpectrumType SpectrumType = EAudioSpectrumType::MagnitudeSpectrum);

	//void StartSpectralAnalysis(FAtomRuntime* InDevice, EFFTSize FFTSize = EFFTSize::DefaultSize, EFFTPeakInterpolationMethod InterpolationMethod = EFFTPeakInterpolationMethod::Linear, EFFTWindowType WindowType = EFFTWindowType::Hann, float HopSize = 0, EAudioSpectrumType SpectrumType = EAudioSpectrumType::MagnitudeSpectrum);

	/** Stop spectrum analysis of the audio output. */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Analysis", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = 1))
	//void StopSpectralAnalysis(const UObject* WorldContextObject);

	//void StopSpectralAnalysis(FAtomRuntime* InDevice);

	// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.
	//UFUNCTION(BlueprintCallable, Category = "Audio|EnvelopeFollowing", meta = (WorldContext = "WorldContextObject"))
	//void StartEnvelopeFollowing(const UObject* WorldContextObject);

	//void StartEnvelopeFollowing(FAudioDevice* InDevice);

	// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.
	//UFUNCTION(BlueprintCallable, Category = "Audio|EnvelopeFollowing", meta = (WorldContext = "WorldContextObject"))
	//void StopEnvelopeFollowing(const UObject* WorldContextObject);

	//void StopEnvelopeFollowing(FAudioDevice* InDevice);

	/**
	 *	Adds an envelope follower delegate to the submix when envelope following is enabled on this submix.
	 *	@param	OnSubmixEnvelopeBP	Event to fire when new envelope data is available.
	 */
	//UFUNCTION(BlueprintCallable, Category = "Audio|EnvelopeFollowing", meta = (WorldContext = "WorldContextObject"))
	//	void AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP);

	/**
	 *	Adds a spectral analysis delegate to receive notifications when this submix has spectrum analysis enabled.
	 *	@param	InBandsettings					The frequency bands to analyze and their envelope-following settings.
	 *  @param  OnSubmixSpectralAnalysisBP		Event to fire when new spectral data is available.
	 *	@param	UpdateRate						How often to retrieve the data from the spectral analyzer and broadcast the event. Max is 30 times per second.
	 *	@param  InterpMethod                    Method to used for band peak calculation.
	 *	@param  SpectrumType                    Metric to use when returning spectrum values.
	 *	@param  DecibelNoiseFloor               Decibel Noise Floor to consider as silence silence when using a Decibel Spectrum Type.
	 *	@param  bDoNormalize                    If true, output band values will be normalized between zero and one.
	 *	@param  bDoAutoRange                    If true, output band values will have their ranges automatically adjusted to the minimum and maximum values in the audio. Output band values will be normalized between zero and one.
	 *	@param  AutoRangeAttackTime             The time (in seconds) it takes for the range to expand to 90% of a larger range.
	 *	@param  AutoRangeReleaseTime            The time (in seconds) it takes for the range to shrink to 90% of a smaller range.
	 */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Spectrum", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = 3))
	//void AddSpectralAnalysisDelegate(const UObject* WorldContextObject, const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP, float UpdateRate = 10.f, float DecibelNoiseFloor = -40.f, bool bDoNormalize = true, bool bDoAutoRange = false, float AutoRangeAttackTime = 0.1f, float AutoRangeReleaseTime = 60.f);

	/**
	 *	Remove a spectral analysis delegate.
	 *  @param  OnSubmixSpectralAnalysisBP		The event delegate to remove.
	 */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Spectrum", meta = (WorldContext = "WorldContextObject"))
	//void RemoveSpectralAnalysisDelegate(const UObject* WorldContextObject, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP);

	/** Start spectrum analysis of the audio output. */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Analysis", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = 1))
	//void StartSpectralAnalysis(const UObject* WorldContextObject, EFFTSize FFTSize = EFFTSize::DefaultSize, EFFTPeakInterpolationMethod InterpolationMethod = EFFTPeakInterpolationMethod::Linear, EFFTWindowType WindowType = EFFTWindowType::Hann, float HopSize = 0, EAudioSpectrumType SpectrumType = EAudioSpectrumType::MagnitudeSpectrum);

	//void StartSpectralAnalysis(FAudioDevice* InDevice, EFFTSize FFTSize = EFFTSize::DefaultSize, EFFTPeakInterpolationMethod InterpolationMethod = EFFTPeakInterpolationMethod::Linear, EFFTWindowType WindowType = EFFTWindowType::Hann, float HopSize = 0, EAudioSpectrumType SpectrumType = EAudioSpectrumType::MagnitudeSpectrum);

	/** Start spectrum analysis of the audio output. */
	//UFUNCTION(BlueprintCallable, Category = "Audio|Analysis", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = 1))
	//void StopSpectralAnalysis(const UObject* WorldContextObject);

	//void StopSpectralAnalysis(FAudioDevice* InDevice);

	/** Sets the output volume of the submix in linear gain. This dynamic volume acts as a multiplier on the OutputVolume property of this submix. */
	//UFUNCTION(BlueprintCallable, Category = "Atom", meta = (WorldContext = "WorldContextObject", DisplayName = "SetSubmixOutputVolume (linear gain)"))
	//void SetRackOutputVolume(const UObject* WorldContextObject, float InOutputVolume);

	/** Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the WetLevel property of this submix.  */
	//UFUNCTION(BlueprintCallable, Category = "Audio", meta = (WorldContext = "WorldContextObject", DisplayName = "SetSubmixWetLevel (linear gain)"))
	//void SetSubmixWetLevel(const UObject* WorldContextObject, float InWetLevel);

	/** Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the DryLevel property of this submix.  */
	//UFUNCTION(BlueprintCallable, Category = "Audio", meta = (WorldContext = "WorldContextObject", DisplayName = "SetSubmixDryLevel (linear gain)"))
	//void SetSubmixDryLevel(const UObject* WorldContextObject, float InDryLevel);

	/** Change the Atom config to use with this rack. */
	UFUNCTION(BlueprintCallable, BlueprintSetter, Category = "Buses")
	void SetAtomConfig(const UAtomConfig* InAtomConfig);
	/** Change the currently applied DspBusSetting by the name. */
	UFUNCTION(BlueprintCallable, BlueprintSetter, Category = "Buses")
	void SetDspBusSettingName(const FName& InDspBusSettingName);
	/** Get the name of currently applied DspBusSetting. */
	UFUNCTION(BlueprintCallable, BlueprintGetter, Category = "Buses")
	FName GetDspBusSettingName() const;

	/** Setup a DSP bus settings and udpate buses. Buses with name that does not exist anymore in settings are wiped out. */
	UFUNCTION(BlueprintCallable, BlueprintSetter, Category = "Buses")
	void SetDspBusSetting(const UAtomDspBusSetting* InDspBusSetting) { SetDspBusSetting(InDspBusSetting, false); }
	
	/** Setup a DSP bus settings. If bResetBuses is true, buse are wiped out and reset otherwise buses with name that does not exist anymore in settings are wiped out. */
	void SetDspBusSetting(const UAtomDspBusSetting* InDspBusSetting, bool bResetBuses);

	/** Setup a snapshot to this rack and apply it without fading. */
	UFUNCTION(BlueprintCallable, BlueprintSetter, Category = "Snapshot")
	void SetSnapshot(const FName& InSnapshot) { SetSnapshot(InSnapshot, 0.0f); }
	
	/** Setup a snapshot to this rack and apply it with fade time in seconds. */
	void SetSnapshot(const FName& InSnapshot, float FadeTime);

	/** Setup a snapshot to this rack and apply it with fade time in seconds. */
	UFUNCTION(BlueprintCallable, Category = "Snapshot", meta = (DisplayName = "SetSnapshot"))
	void BP_SetSnapshot(const FName& InSnapshot, float FadeTime) { SetSnapshot(InSnapshot, FadeTime); }
	
	/** Get the currently applied snapshot to this rack. */
	UFUNCTION(BlueprintCallable, BlueprintGetter, Category = "Snapshot")
	FName GetSnapshot() const;

	//static FSoundSpectrumAnalyzerSettings GetSpectrumAnalyzerSettings(EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);

	//static FSoundSpectrumAnalyzerDelegateSettings GetSpectrumAnalysisDelegateSettings(const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime);
protected:

	// Apply DspSetting to runtime
	bool ApplyDspBusSetting();
	// Sync buses from DspSetting
	void ResetBuses(bool bApplyToAtom = true);
	// Updates buses from DspSetting (don't change values of existing buses)
	void UpdateBuses();
	// Sync buses values from runtime values
	void SyncBusesFromRuntime();   // -> GetBusSettings()
	// Sync runtime buses from rack buses values
	void SyncBusesToRuntime() const;  // -> ApplyBusesSettings()
	// Apply Snapshot to runtime
	bool ApplySnapshot(float FadeSeconds);

	void ProcessAudio(FAtomRuntime* AtomRuntime);
	void StartSendToUnrealSubmix(FAtomRuntime* AtomRuntime);
	void StopSendToUnrealSubmix();
	TPimplPtr<FAtomRackSubmixListener> SubmixListener;

	virtual void PostLoad() override;
	virtual void PostInitProperties() override;
#if WITH_EDITOR
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

#if WITH_EDITOR
	TWeakObjectPtr<const UAtomConfig> CachedAtomConfig;
	FName CachedDspBusSettingName;
#endif // WITH_EDITOR

	friend class FAtomRuntime;
};

/**
 * Sound Rack class meant for use with soundfield formats, such as Ambisonics.
 */
UCLASS(Config = CriWare, HideCategories = Object, EditInlineNew, BlueprintType, Meta = (DisplayName = "Sound Rack Soundfield"))
class CRIWARECORE_API UAtomSoundfieldRack
	: public UAtomRackWithParentBase
{
	GENERATED_BODY()

public:

	//IAtomSoundfieldFactory* GetSoundfieldFactoryForRack() const;
	//const UAtomSoundfieldEncodingSettingsBase* GetSoundfieldEncodingSettings() const;
	//TArray<UAtomSoundfieldEffectBase*> GetSoundfieldProcessors() const;

public:

	/** Currently used format. */
	//UPROPERTY(EditAnywhere, AssetRegistrySearchable, Category = Soundfield)
	//FName SoundfieldEncodingFormat;

	/** Type of the soundrenderer endpoint to apply to child racks. */
	UPROPERTY(EditAnywhere, AssetRegistrySearchable, Category = "Sound Renderer", Meta = (Tooltip = ""))
	EAtomSoundfieldRendererType SoundfieldRendererType;

	/** Which encoding settings to use the sound field. */
	//UPROPERTY(EditAnywhere, Category = Soundfield)
	//TObjectPtr<UAtomSoundfieldEncodingSettingsBase> EncodingSettings;

	/** Soundfield effect chain to use for the sound field. */
	//UPROPERTY(EditAnywhere, Category = Soundfield)
	//TArray<TObjectPtr<UAtomSoundfieldEffectBase>> SoundfieldEffectChain;

	// Traverses parent submixes until we find a submix that doesn't inherit its soundfield format.
	EAtomSoundfieldRendererType GetRackType() const;

	//UPROPERTY()
	//TSubclassOf<UAtomSoundfieldEncodingSettingsBase> EncodingSettingsClass;

	// Traverses parent submixes until we find a submix that specifies encoding settings.
	//const UAtomSoundfieldEncodingSettingsBase* GetEncodingSettings() const;

	// This function goes through every child submix and the parent submix to ensure that they have a compatible format with this submix's format.
	void SanitizeLinks();

protected:

	virtual void PostInitProperties() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

};

/**
 * AtomEndpointRack class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device.
 */
UCLASS(Config = CriWare, HideCategories = Object, EditInlineNew, BlueprintType, Meta = (DisplayName = "Atom Rack Endpoint"))
class CRIWARECORE_API UAtomEndpointRack
	: public UAtomRackBase
{
	GENERATED_BODY()

public:

	UAtomEndpointRack(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITORONLY_DATA
	void Serialize(FArchive& Ar);
#endif

	const UAtomEndpointSettingsBase* GetEndpointSettings(const TSubclassOf<UAtomEndpointSettingsBase>& EndpointSettingsClass) const;

	/** Type of the soundrenderer endpoint to apply to child racks. */
	UPROPERTY(EditAnywhere, AssetRegistrySearchable, Category = "Sound Renderer", Meta = (Tooltip = ""))
	EAtomSoundRendererType SoundRendererType;

#if WITH_EDITORONLY_DATA
	/** This will select the port number of the sound renderer type to use. */
	UPROPERTY()
	int32 OutputPort_DEPRECATED = 0;
#endif // WITH_EDITORONLY_DATA

	/** Settings for the endpoint. Only one endpoint is used at time but you can set multiple settings for each platforms. */
	UPROPERTY(EditAnywhere, Category = "Sound Renderer")
	TArray<TObjectPtr<UAtomEndpointSettingsBase>> EndpointSettings;
};

/**    
 * Sound Rack class meant for sending soundfield-encoded audio to an                            external endpoint, such as a hardware binaural renderer that supports ambisonics.
 */
UCLASS(Config = CriWare, HideCategories = Object, EditInlineNew, BlueprintType, Meta = (DisplayName = "Sound Rack Soundfield Endpoint"))
class CRIWARECORE_API UAtomSoundfieldEndpointRack
	: public UAtomRackBase
{
	GENERATED_BODY()

public:
	//IAtomSoundfieldEndpointFactory* GetSoundfieldEndpointForSubmix() const;
	//const UAtomSoundfieldEndpointSettingsBase* GetEndpointSettings() const;
	//const UAtomSoundfieldEncodingSettingsBase* GetEncodingSettings() const;
	//TArray<USAtomoundfieldEffectBase*> GetSoundfieldProcessors() const;
public:
	/** Currently used format. */
	//UPROPERTY(EditAnywhere, Category = Endpoint, AssetRegistrySearchable)
	//FName SoundfieldEndpointType;

	/** Type of the soundrenderer endpoint to apply to child racks. */
	UPROPERTY(EditAnywhere, AssetRegistrySearchable, Category = "Sound Renderer", Meta = (Tooltip = ""))
	EAtomSoundfieldRendererType SoundfieldRendererType;

	//UPROPERTY()
	//TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;

	// This function goes through every child submix and the parent submix to ensure that they have a compatible format.
	void SanitizeLinks();

	//UPROPERTY(EditAnywhere, Category = Endpoint)
	//TObjectPtr<UAtomSoundfieldEndpointSettingsBase> EndpointSettings;

	//UPROPERTY()
	//TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;

	//UPROPERTY(EditAnywhere, Category = Soundfield)
	//TObjectPtr<USoundfieldEncodingSettingsBase> EncodingSettings;

	//UPROPERTY(EditAnywhere, Category = Soundfield)
	//TArray<TObjectPtr<USoundfieldEffectBase>> SoundfieldEffectChain;

protected:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};

namespace AtomRackUtils
{
	CRIWARECORE_API bool AreRackSoundTypeCompatible(const UAtomRackBase* ChildRack, const UAtomRackBase* ParentRack);

#if WITH_EDITOR
	CRIWARECORE_API void RefreshEditorForRack(const UAtomRackBase* InRack);
#endif
}
