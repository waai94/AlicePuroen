﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomSoundBase.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Interfaces/Interface_AssetUserData.h"

#include "Atom.h"
#include "AtomResourceManager.h"
#include "AtomConcurrency.h"
#include "Modulation/AtomModulationDestination.h"

#include "AtomSoundBase.generated.h"

// Forward declarations
class IAtomSoundResource;
class UAtomSoundClass;
class UAtomAttenuation;
class UAtomRackWithParentBase;
struct FAtomAttenuationSettings;
class FAtomRuntime;
struct FAtomActiveSound;
struct FAtomSoundParseParameters;
struct FAtomPlaybackInstance;

/**
 * Method of virtualization when an Atom sound is stopped due to playback constraints
 * (i.e. by concurrency, priority, and/or MaxChannelCount)
 * for a given sound.
 */
UENUM(BlueprintType)
enum class EAtomVirtualizationMode : uint8
{
	/** Virtualization is disabled and sound continue to use a voice when silent. */
	Normal UMETA(DisplayName = "Normal - [Normal]"), // This is same as "AlwaysPlay" checkbox in UE but only for silence (UE always play mode makes sound to higest priority too).

	/** Virtualization is disabled and sound is stopped when silent. */
	StopWhenSilent UMETA(DisplayName = "Stop When Silent - [Stop]"), // This is same as Disabled in UE.

	/** Sound continues to play when silent, using an Atom virtual voice. */
	PlayWhenSilent UMETA(DisplayName = "Play When Silent - [Virtual]"), // This is pure virtualization of the sound playback. (no UE equivalent)

	/** Sound will restarts from beginning upon realization from being virtual, using an Atom virtual voice. */
	Retrigger UMETA(DisplayName = "Retrigger - [Virtual Retrigger]")//, // This is pure virtualization of the sound playback. (no UE equivalent)

	/** If sound is looping, sound restarts from beginning upon realization from being virtual.
	 * This mode does not keep any Atom resources while virtualized.
	 */
	//Restart UMETA(DisplayName = "Restart") // Same as UE "Restart". This will stops the sound and restart it from Unreal, not from Atom, and free an ExPlayer handle while virtualized.
};

struct IAtomSoundClient
{
	IAtomSoundClient() {}
	virtual ~IAtomSoundClient() {}

	// OnBeginDestroy() returns true to unsubscribe as an ISoundWaveClient
	virtual bool OnBeginDestroy(class UAtomSoundBase* Wave) = 0;
	virtual bool OnIsReadyForFinishDestroy(class UAtomSoundBase* Wave) const = 0;
	virtual void OnFinishDestroy(class UAtomSoundBase* Wave) = 0;
};

 /**
  * The base class for a playable sound object
  */
UCLASS(HideCategories = Object, abstract, editinlinenew, BlueprintType)
class CRIWARECORE_API UAtomSoundBase
	: public UObject
	, public IAtomSoundAsset
	, public IInterface_AssetUserData
{
	GENERATED_BODY()

public:

	UAtomSoundBase(const FObjectInitializer& ObjectInitializer);

	//uint32 GetUniqueID() { return 0; }

public:

	/** Sound class this sound belongs to */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sound, meta = (DisplayName = "Class"), AssetRegistrySearchable)
	TObjectPtr<UAtomSoundClass> SoundClassObject;

	/** When "atom.3dVisualize.Attenuation" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purpose only. */
	UPROPERTY(EditAnywhere, Category = Developer)
	uint8 bDebug : 1;

	/** Whether or not to override the sound virtualization behavior with local settings. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Management")
	uint8 bOverrideVirtualizationMode : 1;

	/** Whether or not to override the sound concurrency object with local concurrency settings. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Management|Concurrency")
	uint8 bOverrideConcurrency : 1;

	/** Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Management", meta = (EditCondition = "bOverrideVirtualizationMode"))
	EAtomVirtualizationMode VirtualizationMode;

	/** Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Management|Concurrency", meta = (EditCondition = "!bOverrideConcurrency"))
	TSet<TObjectPtr<UAtomConcurrency>> ConcurrencySet;

	/** If Override Concurrency is true, concurrency settings to use. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Management|Concurrency", meta = (EditCondition = "bOverrideConcurrency"))
	FAtomConcurrencySettings ConcurrencyOverrides;

	/** Whether or not to enable sending this audio's output to buses.  */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects|Source")
	//uint8 bEnableBusSends : 1;

	/** If enabled, sound will route to the Master Rack by default or to the Base Rack if defined. If disabled, sound will route ONLY to the Bus Sends of Master Rack. */
	UPROPERTY(EditAnywhere, Category = "Effects|Rack")
	uint8 bEnableBaseRack : 1;

	/** Whether or not to enable Bus Sends other than the Base Rack Master Bus. */
	UPROPERTY(EditAnywhere, Category = "Effects|Rack", meta = (DisplayAfter = "AtomRack"))
	uint8 bEnableBusSends : 1;

	/** Whether or not this sound has a delay node */
	//UPROPERTY()
	//uint8 bHasDelayNode : 1;

	/** Map of device handle to number of times this sound is currently being played using that device(counted if sound is virtualized). */
	TMap<FAtomRuntimeId, int32> CurrentPlayCount;

	/** Duration of sound in seconds. */
	UPROPERTY(Category = Developer, AssetRegistrySearchable, VisibleAnywhere, BlueprintReadOnly)
	float Duration;

	/** The max distance of the asset, as determined by attenuation settings. */
	UPROPERTY(Category = Developer, AssetRegistrySearchable, VisibleAnywhere, BlueprintReadOnly)
	float MaxDistance;

	/** Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority
	  * (see platform's Atom Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the
	  * sound to produce final runtime priority value.
	  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Management|Priority", meta = (ClampMin = "-100.0", UIMin = "-100.0", ClampMax = "100.0", UIMax = "100.0"))
	float Priority;

	/** Attenuation settings package for the sound */
	UPROPERTY(EditAnywhere, Category = Attenuation)
	TObjectPtr<UAtomAttenuation> AttenuationSettings;

	/** Submix to route sound output to. If unset, falls back to referenced SoundClass submix.
	  * If SoundClass rack is unset, sends to the 'Master Rack' as set in the 'Atom' category of Project Settings'. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects|Rack", meta = (DisplayName = "Rack", EditCondition = "bEnableBaseRack"))
	TObjectPtr<UAtomRackWithParentBase> AtomRack;

	/** Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects|Rack", meta = (DisplayName = "Bus Sends", EditCondition = "bEnableBusSends"))
	TArray<FAtomSoundToBusSend> AtomBusSends;

	/** The source effect chain to use for this sound. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects|Source")
	//TObjectPtr<USoundEffectSourcePresetChain> SourceEffectChain;

	/** This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects|Source", meta = (DisplayName = "Post-Effect Bus Sends", EditCondition = "bEnableBusSends"))
	//TArray<FSoundSourceBusSendInfo> BusSends;

	/** This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects|Source", meta = (DisplayName = "Pre-Effect Bus Sends", EditCondition = "bEnableBusSends"))
	//TArray<FSoundSourceBusSendInfo> PreEffectBusSends;

	/** Modulation Settings for sound parameters and AISAC. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Modulation")
	FAtomSoundModulationRoutingSettings ModulationSettings;

	/** */
	UPROPERTY(VisibleAnyWhere, AssetRegistrySearchable, Category = Info)
	FAtomWaveInfo WaveInfo;

	/** Set to true for programmatically generated audio. */
	uint8 bProcedural : 1;

	/** Set to true if fade is required when sound is abruptly stopped. */
	//uint8 bRequiresStopFade : 1;

	/** Whether or not this source uses ambisonics format. If set, sound always uses the
	  * 'Master Ambisonics Submix' as set in the 'Audio' category of Project Settings'
	  * and ignores submix if provided locally or in the referenced SoundClass. */
	//UPROPERTY(EditAnywhere, Category = Format)
	//uint8 bIsAmbisonics : 1;

	/** Array of user data stored with the asset */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Instanced, Category = Advanced)
	TArray<TObjectPtr<UAssetUserData>> AssetUserData;

	using FAtomSoundClientPtr = IAtomSoundClient*;

private:

	/** the number of sounds currently playing this sound. (for procedural sound) */
	mutable FCriticalSection SourcesPlayingCs;

	TArray<FAtomSoundClientPtr> SourcesPlaying;

public:

	//~ Begin UObject Interface.
#if WITH_EDITORONLY_DATA
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	virtual void PostLoad() override;
#endif
	virtual void PostInitProperties() override;
	virtual bool CanBeClusterRoot() const override;
	virtual bool CanBeInCluster() const override;
	virtual void Serialize(FArchive& Ar) override;
	virtual void BeginDestroy() override;
	//~ End UObject interface.

	//~ Begin IInterface_AssetUserData Interface
	virtual void AddAssetUserData(UAssetUserData* InUserData) override;
	virtual void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override;
	virtual UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) override;
	virtual const TArray<UAssetUserData*>* GetAssetUserDataArray() const override;
	//~ End IInterface_AssetUserData Interface

	/** Returns whether the sound base is set up in a playable manner */
	virtual bool IsPlayable() const;

	/** */
	virtual bool IsStreaming(const TCHAR* PlatformName = nullptr) const { return false; }

	/** Returns whether the sound is seekable. */
	virtual bool IsSeekable() const { return true; };

	/** Returns a pointer to the attenuation settings that are to be applied for this node */
	virtual const FAtomAttenuationSettings* GetAttenuationSettingsToApply() const;

	/**
	 * Returns the farthest distance at which the sound could be heard
	 */
	virtual float GetMaxDistance() const;

	/**
	 * Returns the length of the sound
	 */
	virtual float GetDuration() const;

	/** Returns true if any of the sounds in the sound have "play when silent" or "normal" enabled. */
	virtual bool IsPlayWhenSilent() const;

	virtual float GetVolumeMultiplier();
	virtual float GetPitchMultiplier();

	/** Returns whether or not any part of this sound wants interior volumes applied to it. */
	virtual bool ShouldApplyInteriorVolumes();

	/** Returns the parent AtomSoundResource object or null if it doesn't use any resource. */
	virtual IAtomSoundResource* GetSoundResource();

	/** Gets all AtomSoundResource objects that this sound rely to. */
	virtual void GetAllSoundResources(TArray<IAtomSoundResource*>& Resources);

	/** Returns whether or not this sound is looping. - Seems pre-deprecated by Unreal MetaSound - Use IsOneShot(). */
	virtual bool IsLooping() const;

	/** Query if it's one shot. One shot is defined as a sound which is intended to have a fixed duration. */
	virtual bool IsOneShot() const;

	/** Parses the Sound to generate and setup the PlaybackInstances to play. */
	virtual void Parse(FAtomRuntime* AtomRuntime, const UPTRINT PlaybackInstanceHash, FAtomActiveSound& ActiveSound, const FAtomSoundParseParameters& ParseParams, TArray<FAtomPlaybackInstance*>& PlaybackInstances);

	/** Returns the AtomSoundClass used for this sound. */
	virtual UAtomSoundClass* GetSoundClass() const;

	/** Returns the AtomRack used for this sound. */
	virtual UAtomRackBase* GetAtomRack() const;

	/** Returns the name to identify this sound with is parent bank name if exist. */
	virtual FString GetSoundName() const { return GetName(); }

	/** Returns the sound submix sends for this sound. */
	void GetAtomBusSends(TArray<FAtomSoundToBusSend>& OutSends) const;

	/** Returns an array of FSoundConcurrencySettings handles. */
	void GetConcurrencyHandles(TArray<FAtomConcurrencyHandle>& OutConcurrencyHandles) const;

	/** Returns the priority to use when evaluating concurrency. */
	float GetPriority() const;

	/** For procedural sounds that doesn't have sound resource. */
	void AddPlayingSource(const FAtomSoundClientPtr& Source);
	void RemovePlayingSource(const FAtomSoundClientPtr& Source);
	bool IsGeneratingAudio() const
	{
		bool bIsGeneratingAudio = false;
		FScopeLock Lock(&SourcesPlayingCs);
		bIsGeneratingAudio = SourcesPlaying.Num() > 0;

		return bIsGeneratingAudio;
	}

#if WITH_EDITORONLY_DATA
	/** A color to identify this sound in editor. */
	UPROPERTY(EditDefaultsOnly, Category = Developer, meta = (ToolTip = "A color to identify this sound in editor."))
	FColor SoundColor;

public:

	// used to sound preview or analysis

	/** Size of RawPCMData, or what RawPCMData would be if the sound was fully decompressed */
	int32 RawPCMDataSize; // new

	/** Pointer to 16 bit PCM data - used to decompress data to and preview sounds */
	uint8* RawPCMData;

	mutable FCriticalSection RawPCMDataCriticalSection;

	int32 RawPCMDataNumChannels;
	int32 RawPCMDataSampleRate;
	int32 RawPCMDataNumFrames;

	// for thumbnail
	FByteBulkData RawSnapshot;
	int32 RawSnapshotNumChannels;

	/** Renders thumnbnails for us. */
	UPROPERTY(Transient)
	TObjectPtr<UObject> AtomSoundBaseRenderer = nullptr;

#if WITH_EDITOR
	/** Read Wave information from Atom resource if accessible. */
	virtual bool GetWaveInfo(FAtomResourceHandle& InHandle, FAtomWaveInfo& OutWaveInfo) const { return false; }
	
	/** Generate a snapshot of pcm data for thumbnail. */
	void GenerateWaveSnapshot(uint32 NumFrames = NumSnapshotFrames);
	
	virtual bool GetRedrawThumbnail() const;
	virtual void SetRedrawThumbnail(bool bInRedraw);
	virtual bool CanVisualizeAsset() const;

	/** Generate and Store the full raw PCM data of this sound. */
	void GenerateWaveRawData();

	/** Utility which returns imported PCM data and the parsed header. Returns true if there was data, false if there wasn't. */
	bool GetImportedSoundWaveData(TArray<uint8>& OutRawPCMData, uint32& OutSampleRate, uint16& OutNumChannels) const;

	/** Utility which returns imported PCM data and the parsed header. Returns true if there was data, false if there wasn't. */
	bool GetImportedSoundWaveData(TArray<uint8>& OutRawPCMData, uint32& OutSampleRate, TArray<EAtomSpeaker>& OutChannelOrder) const;

private:

	/** True when a new thumbnail need to be generated and then inform thumbnail renderer. */
	uint32 bNeedsThumbnailGeneration : 1;

	/** True if awaiting to generated a snapshot of PCM data. */
	uint32 bIsRequestingSnapshot : 1;

	/** True if awaiting to load the full raw PCM data of this sound. */
	uint32 bIsRequestingPCMData : 1;

	// Settings for snapshot generation
	static const uint32 NumSnapshotFrames = 512;

#endif // WITH_EDITOR

#endif // WITH_EDITORONLY_DATA
};
