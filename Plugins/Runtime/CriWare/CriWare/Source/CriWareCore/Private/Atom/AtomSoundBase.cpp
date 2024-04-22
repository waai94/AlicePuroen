﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomSoundBase.cpp
 *
 ****************************************************************************/

#include "Atom/AtomSoundBase.h"

#include "EngineUtils.h"
#include "Engine/AssetUserData.h"

#include "CriWare.h"
#include "Atom/Atom.h"
#include "Atom/AtomRack.h"
#include "Atom/AtomAttenuation.h"
#include "Atom/AtomSoundBank.h"
#include "Atom/AtomSoundClass.h"
#include "Atom/AtomActiveSound.h"
#include "Atom/AtomRuntime.h"

#if WITH_EDITOR
#include "CriWareCoreModule.h"
#include "Atom/AtomSoundBaseRendererInterface.h"
#endif

#define LOCTEXT_NAMESPACE "AtomSoundBase"

UAtomSoundBase::UAtomSoundBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, VirtualizationMode(EAtomVirtualizationMode::Normal)
	, bEnableBaseRack(true)
	, bEnableBusSends(true)
	, Duration(-1.0f)
	, MaxDistance(WORLD_MAX)
	, bProcedural(false)
#if WITH_EDITOR
	, RawPCMData(nullptr)
	, RawPCMDataNumChannels(0)
	, RawPCMDataSampleRate(0)
	, RawPCMDataNumFrames(0)
	, bNeedsThumbnailGeneration(false)
#endif
{
#if WITH_EDITORONLY_DATA
	SoundColor = FColor(255, 127, 39); // Atom::DefaultSoundColor
#endif
}

#if WITH_EDITORONLY_DATA
void UAtomSoundBase::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	OutTags.Add(FAssetRegistryTag(TEXT("IsOneShot"), IsOneShot() ? TEXT("true") : TEXT("false"), FAssetRegistryTag::TT_Alphabetical));
	OutTags.Add(FAssetRegistryTag(TEXT("NumChannels"), FString::FromInt(WaveInfo.NumChannels), FAssetRegistryTag::TT_Numerical));
	OutTags.Add(FAssetRegistryTag(TEXT("SampleRate"), FString::FromInt(WaveInfo.SampleRate), FAssetRegistryTag::TT_Numerical));

	Super::GetAssetRegistryTags(OutTags);
}

void UAtomSoundBase::PostLoad()
{
#if WITH_EDITOR
	bNeedsThumbnailGeneration = true;
#endif // WITH_EDITOR

	Super::PostLoad();
}
#endif // WITH_EDITORONLY_DATA

void UAtomSoundBase::PostInitProperties()
{
	Super::PostInitProperties();

#if !UE_BUILD_SHIPPING
	ConcurrencyOverrides.SetDebugName(GetFName());
#endif
}

bool UAtomSoundBase::CanBeClusterRoot() const
{
	return false;
}

bool UAtomSoundBase::CanBeInCluster() const
{
	return false;
}

void UAtomSoundBase::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

#if WITH_EDITORONLY_DATA
	if (Ar.IsLoading() || Ar.IsSaving())
	{

	}
#endif // WITH_EDITORONLY_DATA

	FStripDataFlags StripFlags(Ar);
#if WITH_EDITORONLY_DATA
	if (!StripFlags.IsEditorDataStripped())
	{
		// thumbnail snapshot (fixed to 512 frames)
		RawSnapshot.Serialize(Ar, this, INDEX_NONE, false);
		Ar << RawSnapshotNumChannels;
	}
#endif
}

void UAtomSoundBase::BeginDestroy()
{
#if WITH_EDITOR
	// remove temporary pcm data
	if (RawPCMData)
	{
		FMemory::Free(RawPCMData);
		RawPCMData = nullptr;
	}
#endif

	Super::BeginDestroy();
}

void UAtomSoundBase::AddAssetUserData(UAssetUserData* InUserData)
{
	if (InUserData != nullptr)
	{
		UAssetUserData* ExistingData = GetAssetUserDataOfClass(InUserData->GetClass());
		if (ExistingData != nullptr)
		{
			AssetUserData.Remove(ExistingData);
		}
		AssetUserData.Add(InUserData);
	}
}

UAssetUserData* UAtomSoundBase::GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass)
{
	for (int32 DataIdx = 0; DataIdx < AssetUserData.Num(); DataIdx++)
	{
		UAssetUserData* Datum = AssetUserData[DataIdx];
		if (Datum != nullptr && Datum->IsA(InUserDataClass))
		{
			return Datum;
		}
	}
	return nullptr;
}

void UAtomSoundBase::RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass)
{
	for (int32 DataIdx = 0; DataIdx < AssetUserData.Num(); DataIdx++)
	{
		UAssetUserData* Datum = AssetUserData[DataIdx];
		if (Datum != nullptr && Datum->IsA(InUserDataClass))
		{
			AssetUserData.RemoveAt(DataIdx);
			return;
		}
	}
}

const TArray<UAssetUserData*>* UAtomSoundBase::GetAssetUserDataArray() const
{
	return &ToRawPtrTArrayUnsafe(AssetUserData);
}

bool UAtomSoundBase::IsPlayable() const
{
	return false;
}

const FAtomAttenuationSettings* UAtomSoundBase::GetAttenuationSettingsToApply() const
{
	if (AttenuationSettings)
	{
		return &AttenuationSettings->Attenuation;
	}
	return nullptr;
}

float UAtomSoundBase::GetMaxDistance() const
{
	if (AttenuationSettings)
	{
		FAtomAttenuationSettings& Settings = AttenuationSettings->Attenuation;
		if (Settings.bAttenuate)
		{
			return Settings.GetMaxDimension();
		}
	}

	return WORLD_MAX;
}

float UAtomSoundBase::GetDuration() const
{
	return Duration;
}

bool UAtomSoundBase::IsPlayWhenSilent() const
{
	// sound playback and virtualization is controlled by Atom in thoses modes
	return VirtualizationMode == EAtomVirtualizationMode::Normal
		|| VirtualizationMode == EAtomVirtualizationMode::StopWhenSilent
		|| VirtualizationMode == EAtomVirtualizationMode::PlayWhenSilent
		|| VirtualizationMode == EAtomVirtualizationMode::Retrigger;
}

float UAtomSoundBase::GetVolumeMultiplier()
{
	return 1.0f;
}

float UAtomSoundBase::GetPitchMultiplier()
{
	return 1.0f;
}

bool UAtomSoundBase::ShouldApplyInteriorVolumes()
{
	UAtomSoundClass* SoundClass = GetSoundClass();
	return SoundClass && SoundClass->Properties.bApplyAmbientVolumes;
}

bool UAtomSoundBase::IsLooping() const
{
	return (GetDuration() >= INDEFINITELY_LOOPING_DURATION);
}

bool UAtomSoundBase::IsOneShot() const
{
	return !(GetDuration() >= INDEFINITELY_LOOPING_DURATION);
}

void UAtomSoundBase::Parse(FAtomRuntime* AtomRuntime, const UPTRINT PlaybackInstanceHash, FAtomActiveSound& ActiveSound, const FAtomSoundParseParameters& ParseParams, TArray<FAtomPlaybackInstance*>& PlaybackInstances)
{
	check(AtomRuntime);

	FAtomPlaybackInstance* PlaybackInstance = ActiveSound.FindPlaybackInstance(PlaybackInstanceHash);
	
	const bool bIsNewPlayback = PlaybackInstance == nullptr;

	// Create a new PlaybackInstance if this sound doesn't already have one associated with it.
	if (!PlaybackInstance)
	{
		/*if (!ActiveSound.bRadioFilterSelected)
		{
			ActiveSound.ApplyRadioFilter(ParseParams);
		}*/

		// Create a new wave instance and associate with the ActiveSound
		PlaybackInstance = &ActiveSound.AddPlaybackInstance(PlaybackInstanceHash);
		//PlaybackInstance = &HandleStart(ActiveSound, PlaybackInstanceHash); // no need subtile support
	}
	else
	{
		// If PlaybackInstance is finished & sound is procedurally generated and has
		// virtualization disabled, early out to stop playback at the ActiveSound level.
		const bool bVirtualizationDisabled = (VirtualizationMode == EAtomVirtualizationMode::Normal || VirtualizationMode == EAtomVirtualizationMode::StopWhenSilent);
		const bool bInstanceIsFinished = PlaybackInstance->bIsFinished;
		const bool bFinishedNotify = bInstanceIsFinished && PlaybackInstance->bAlreadyNotifiedHook;
		if (bFinishedNotify && bProcedural && bVirtualizationDisabled)
		{
#ifdef ATOM_SOUND_DEV_DEBUG
			UE_LOG(LogCriWareAtomDebug, Warning, TEXT("Sound Parse -> Sound finished"));
#endif
			return;
		}
	}

	if (ActiveSound.PcmFilterFunction == nullptr) // actually pcmfunction force oneshot.
	{
		// Looping sounds are never actually finished
		if (!IsOneShot() || ParseParams.bLooping)
		{
			PlaybackInstance->bIsFinished = false;

			const UAtomSoundBase* Sound = ActiveSound.GetSound();

			if (!Sound->IsOneShot())
			{
#if !(NO_LOGGING || UE_BUILD_SHIPPING || UE_BUILD_TEST)
				if (!ActiveSound.bWarnedAboutOrphanedLooping && ActiveSound.GetAtomComponentID() == 0 && ActiveSound.FadeOut == FAtomActiveSound::EFadeOut::None)
				{
					UE_LOG(LogCriWareAtom, Warning, TEXT("Detected orphaned sound which is not a one-shot '%s'. Sounds which are not one-shots need to have Atom components or they risk being orphaned."), *ActiveSound.GetSound()->GetName());
					ActiveSound.bWarnedAboutOrphanedLooping = true;
				}
#endif
			}
		}
	}

	// Early out if finished.
	if (PlaybackInstance->bIsFinished)
	{
#ifdef ATOM_SOUND_DEV_DEBUG
		UE_LOG(LogCriWareAtomDebug, Warning, TEXT("Sound Parse -> instance finished"));
#endif
		return;
	}

	// Propagate properties and add PlaybackInstance to outgoing array of FPlaybackInstances.
	PlaybackInstance->SetVolume(ParseParams.Volume * GetVolumeMultiplier());
	PlaybackInstance->SetVolumeMultiplier(ParseParams.VolumeMultiplier);
	//PlaybackInstance->SetDistanceAttenuation(ParseParams.DistanceAttenuation); actually set by atom at previous frame
	PlaybackInstance->SetOcclusionAttenuation(ParseParams.OcclusionAttenuation);
	PlaybackInstance->SetPitch(ParseParams.Pitch * GetPitchMultiplier());
	PlaybackInstance->bEnableAmplitudeEnvelope = ParseParams.bEnableAmplitudeEnvelope;
	PlaybackInstance->bEnableLowPassFilter = ParseParams.bEnableLowPassFilter;
	PlaybackInstance->bIsOccluded = ParseParams.bIsOccluded;
	PlaybackInstance->AmplitudeEnvelope = ParseParams.AmplitudeEnvelope;
	PlaybackInstance->LowPassFilterFrequency = ParseParams.LowPassFilterFrequency;
	PlaybackInstance->OcclusionFilterFrequency = ParseParams.OcclusionFilterFrequency;
	PlaybackInstance->AttenuationLowpassFilterFrequency = ParseParams.AttenuationLowpassFilterFrequency;
	PlaybackInstance->AttenuationHighpassFilterFrequency = ParseParams.AttenuationHighpassFilterFrequency;
	PlaybackInstance->AmbientZoneFilterFrequency = ParseParams.AmbientZoneFilterFrequency;
	//PlaybackInstance->bApplyRadioFilter = ActiveSound.bApplyRadioFilter;
	PlaybackInstance->StartTime = ParseParams.StartTime;
	PlaybackInstance->UserIndex = ActiveSound.UserIndex;
	PlaybackInstance->NonSpatializedRadiusStart = ParseParams.NonSpatializedRadiusStart;
	PlaybackInstance->NonSpatializedRadiusEnd = ParseParams.NonSpatializedRadiusEnd;
	PlaybackInstance->NonSpatializedRadiusMode = ParseParams.NonSpatializedRadiusMode;
	PlaybackInstance->StereoSpread = ParseParams.StereoSpread;
	PlaybackInstance->AttenuationDistance = ParseParams.AttenuationDistance;
	PlaybackInstance->ListenerToSoundDistance = ParseParams.ListenerToSoundDistance;
	PlaybackInstance->ListenerToSoundDistanceForPanning = ParseParams.ListenerToSoundDistanceForPanning;
	PlaybackInstance->AbsoluteAzimuth = ParseParams.AbsoluteAzimuth;

	/*if (NumChannels <= 2)
	{
		PlaybackInstance->SourceEffectChain = ParseParams.SourceEffectChain;
	}*/

	bool bAlwaysPlay = false;

	// Properties from the sound class
	PlaybackInstance->SoundClass = ParseParams.SoundClass;
	bool bFoundSoundClass = false;
	if (ParseParams.SoundClass)
	{
		const FAtomSoundClassProperties* SoundClassProperties = AtomRuntime->GetSoundClassCurrentProperties(ParseParams.SoundClass);
		if (!SoundClassProperties)
		{
			UE_LOG(LogCriWareAtom, Warning, TEXT("Unable to find sound class properties for sound class %s"), *ParseParams.SoundClass->GetName());
		}
		else
		{
			bFoundSoundClass = true;

			// Use values from "parsed/ propagated" sound class properties
			float VolumeMultiplier = PlaybackInstance->GetVolumeMultiplier();
			PlaybackInstance->SetVolumeMultiplier(ParseParams.VolumeMultiplier * SoundClassProperties->Volume);
			PlaybackInstance->SetPitch(ParseParams.Pitch * SoundClassProperties->Pitch);

			PlaybackInstance->SoundClassFilterFrequency = SoundClassProperties->LowPassFilterFrequency;
			PlaybackInstance->SoundClassHighPassFilterFrequency = SoundClassProperties->HighPassFilterFrequency;
			//PlaybackInstance->VoiceCenterChannelVolume = SoundClassProperties->VoiceCenterChannelVolume;
			//PlaybackInstance->LFEBleed = SoundClassProperties->LFEBleed;
			PlaybackInstance->bIsUISound = ActiveSound.bIsUISound; //|| SoundClassProperties->bIsUISound;
			//PlaybackInstance->bCenterChannelOnly = ActiveSound.bCenterChannelOnly || SoundClassProperties->bCenterChannelOnly;
			//PlaybackInstance->bReverb = ActiveSound.bReverb || SoundClassProperties->bReverb;

			/*if (SoundClassProperties->bApplyEffects)
			{
				UAudioSettings* Settings = GetMutableDefault<UAudioSettings>();
				WaveInstance->SoundSubmix = Cast<USoundSubmix>(FSoftObjectPtr(Settings->EQSubmix).Get());
			}
			else */if (SoundClassProperties->DefaultRack)
			{
				PlaybackInstance->SoundRack = SoundClassProperties->DefaultRack;
			}

			if (SoundClassProperties->bApplyAmbientVolumes)
			{
				VolumeMultiplier = PlaybackInstance->GetVolumeMultiplier();
				PlaybackInstance->SetVolumeMultiplier(VolumeMultiplier * ParseParams.InteriorVolumeMultiplier);
				//PlaybackInstance->RadioFilterVolume *= ParseParams.InteriorVolumeMultiplier;
				//PlaybackInstance->RadioFilterVolumeThreshold *= ParseParams.InteriorVolumeMultiplier;
			}

			//bAlwaysPlay = ActiveSound.bAlwaysPlay || SoundClassProperties->bAlwaysPlay;
		}
	}

	if (!bFoundSoundClass)
	{
		//PlaybackInstance->VoiceCenterChannelVolume = 0.0f;
		//PlaybackInstance->RadioFilterVolume = 0.0f;
		//PlaybackInstance->RadioFilterVolumeThreshold = 0.0f;
		//PlaybackInstance->LFEBleed = 0.0f;
		PlaybackInstance->bIsUISound = ActiveSound.bIsUISound;
		//PlaybackInstance->bIsMusic = ActiveSound.bIsMusic;
		//PlaybackInstance->bReverb = ActiveSound.bReverb;
		//PlaybackInstance->bCenterChannelOnly = ActiveSound.bCenterChannelOnly;

		//bAlwaysPlay = ActiveSound.bAlwaysPlay;
	}

	//PlaybackInstance->bIsAmbisonics = bIsAmbisonics;

	if (ParseParams.SoundRack)
	{
		PlaybackInstance->SoundRack = ParseParams.SoundRack;
	}
	else if (UAtomRackBase* SoundRack = GetAtomRack())
	{
		PlaybackInstance->SoundRack = SoundRack;
	}

	// If set to bAlwaysPlay, increase the current sound's priority scale by 10x. This will still result in a possible 0-priority output if the sound has 0 actual volume
	if (bAlwaysPlay)
	{
		static constexpr float VolumeWeightedMaxPriority = TNumericLimits<float>::Max() / ATOM_MAX_VOLUME;
		PlaybackInstance->Priority = VolumeWeightedMaxPriority;
	}
	else
	{
		PlaybackInstance->Priority = FMath::Clamp(ParseParams.Priority, -100.0f, 100.0f);
	}

	PlaybackInstance->Transform = ParseParams.Transform;
	PlaybackInstance->Transform.SetScale3D(ParseParams.Velocity); // set velocity to unused scale3d component
	PlaybackInstance->bIsStarted = true;
	PlaybackInstance->bAlreadyNotifiedHook = false;

	PlaybackInstance->SoundData = this;
	PlaybackInstance->NotifyPlaybackFinishedHooks = ParseParams.NotifyPlaybackFinishedHooks;
	PlaybackInstance->LoopingMode = (!IsOneShot() || ParseParams.bLooping) ? EAtomLoopingMode::LoopForever : EAtomLoopingMode::LoopNever;
	
	PlaybackInstance->bIsPaused = ParseParams.bIsPaused;

	// If we're normalizing 3d stereo spatialized sounds, we need to scale by -6 dB
	PlaybackInstance->SetUseSpatialization(ParseParams.bUseSpatialization);

	// Setup the spat method if we're actually spatializing (note a cvar can turn this off so we use the getter here)
	if (PlaybackInstance->GetUseSpatialization())
	{
		PlaybackInstance->SpatializationMethod = ParseParams.SpatializationMethod;

		// Check for possible HRTF-enforcement if this is a spatialized sound
		if (AtomRuntime->IsHRTFEnabledForAll() && ParseParams.SpatializationMethod == EAtomSpatializationAlgorithm::Default)
		{
			PlaybackInstance->SpatializationMethod = EAtomSpatializationAlgorithm::Binaural;
		}
		else
		{
			PlaybackInstance->SpatializationMethod = ParseParams.SpatializationMethod;
		}

		// If this is using binaural audio, update whether its an external send
		if (PlaybackInstance->SpatializationMethod == EAtomSpatializationAlgorithm::Binaural)
		{
			PlaybackInstance->SetSpatializationIsExternalSend(ParseParams.bSpatializationIsExternalSend);
		}

		// Apply stereo normalization to wave instances if enabled
		if (ParseParams.bApplyNormalizationToStereoSounds && WaveInfo.NumChannels == 2)
		{
			float PlaybackInstanceVolume = PlaybackInstance->GetVolume();
			PlaybackInstance->SetVolume(PlaybackInstanceVolume * 0.5f);
		}
	}

	// Update reverb send levels. 
	/*WaveInstance->bReverb = WaveInstance->bReverb && !WaveInstance->bIsMusic && (AllowReverbForMultichannelSources || WaveInstance->WaveData->NumChannels <= 2);
	if (WaveInstance->bReverb)
	{
		if (ParseParams.ReverbSendMethod == EReverbSendMethod::Manual)
		{
			WaveInstance->ReverbSendLevel = FMath::Clamp(ParseParams.ManualReverbSendLevel, 0.0f, 1.0f);
		}
		else
		{
			// The alpha value is determined identically between manual and custom curve methods
			const FVector2D& ReverbSendRadialRange = ParseParams.ReverbSendLevelDistanceRange;
			const float Denom = FMath::Max(ReverbSendRadialRange.Y - ReverbSendRadialRange.X, 1.0f);
			const float Alpha = FMath::Clamp((WaveInstance->ListenerToSoundDistance - ReverbSendRadialRange.X) / Denom, 0.0f, 1.0f);

			if (ParseParams.ReverbSendMethod == EReverbSendMethod::Linear)
			{
				WaveInstance->ReverbSendLevel = FMath::Clamp(FMath::Lerp(ParseParams.ReverbSendLevelRange.X, ParseParams.ReverbSendLevelRange.Y, Alpha), 0.0f, 1.0f);
			}
			else
			{
				WaveInstance->ReverbSendLevel = FMath::Clamp(ParseParams.CustomReverbSendCurve.GetRichCurveConst()->Eval(Alpha), 0.0f, 1.0f);
			}
		}
	}*/

	// category names
	PlaybackInstance->CategoryNames = ParseParams.CategoryNames;

	// Aisacs
	PlaybackInstance->AdditionalAisacPatchNames = ParseParams.AdditionalAisacPatchNames;
	PlaybackInstance->AisacControlParams = ParseParams.AisacControlParams;

	// Cue parameters
	PlaybackInstance->CueSelectorParams = ParseParams.CueSelectorParams;
	PlaybackInstance->CueNextBlockIndex = ParseParams.CueNextBlockIndex;
	PlaybackInstance->CueBeatSyncOffset = ParseParams.CueBeatSyncOffset;

	// Copy the submix send settings
	PlaybackInstance->BusSendSettings = ParseParams.BusSendSettings;

	// Get the envelope follower settings
	//PlaybackInstance->EnvelopeFollowerAttackTime = ParseParams.EnvelopeFollowerAttackTime;
	//PlaybackInstance->EnvelopeFollowerReleaseTime = ParseParams.EnvelopeFollowerReleaseTime;

	// Copy over the submix sends.
	PlaybackInstance->SoundBusSends = ParseParams.SoundBusSends;

	// Copy over the source bus send and data
	if (!PlaybackInstance->ActiveSound->bIsPreviewSound)
	{
		//Parse the parameters of the wave instance
		PlaybackInstance->bEnableBusSends = ParseParams.bEnableBusSends;

		// HRTF rendering doesn't render their output on the base submix
		if (!((PlaybackInstance->SpatializationMethod == EAtomSpatializationAlgorithm::Binaural) && (PlaybackInstance->bSpatializationIsExternalSend)))
		{
			if (ActiveSound.bHasActiveMainRackOutputOverride)
			{
				PlaybackInstance->bEnableSoundRack = ActiveSound.bEnableMainRackOutputOverride;
			}
			else
			{
				PlaybackInstance->bEnableSoundRack = ParseParams.bEnableSoundRack;
			}
		}
		else
		{
			PlaybackInstance->bEnableSoundRack = false;
		}
		PlaybackInstance->bEnableSoundBusSends = ParseParams.bEnableSoundBusSends;

		// Active sounds can override their enablement behavior via audio components
		/*if (ActiveSound.bHasActiveBusSendRoutingOverride)
		{
			WaveInstance->bEnableBusSends = ActiveSound.bEnableBusSendRoutingOverride;
		}

		if (ActiveSound.bHasActiveSubmixSendRoutingOverride)
		{
			WaveInstance->bEnableSubmixSends = ActiveSound.bEnableSubmixSendRoutingOverride;
		}*/
	}
	else //if this is a preview sound, ignore Submix sends
	{
		// Only allow submix sends if this is a metasound preview
		//if (EnableBusSendsOnPreview())
		//{
		//	PlaybackInstance->bEnableBusSends = ParseParams.bEnableBusSends;
		//}
		PlaybackInstance->bEnableBusSends = ParseParams.bEnableBusSends;
		PlaybackInstance->bEnableSoundRack = true;
		PlaybackInstance->bEnableSoundBusSends = ParseParams.bEnableSoundBusSends;
	}

	/*for (int32 BusSendType = 0; BusSendType < (int32)EBusSendType::Count; ++BusSendType)
	{
		WaveInstance->BusSends[BusSendType] = ParseParams.BusSends[BusSendType];
	}*/

	// Pass along plugin settings to the wave instance
	//WaveInstance->SpatializationPluginSettings = ParseParams.SpatializationPluginSettings;
	//WaveInstance->OcclusionPluginSettings = ParseParams.OcclusionPluginSettings;
	//WaveInstance->ReverbPluginSettings = ParseParams.ReverbPluginSettings;
	PlaybackInstance->SourceDataOverridePluginSettings = ParseParams.SourceDataOverridePluginSettings;
	PlaybackInstance->bEnableSourceDataOverride = ParseParams.bEnableSourceDataOverride;
	PlaybackInstance->AtomRuntimePluginSettingsArray = ParseParams.RuntimePluginSettingsArray;

	if (PlaybackInstance->IsPlaying())
	{
		//UE_LOG(LogCriWareAtomDebug, Warning, TEXT("add PlaybackInstance"));
		PlaybackInstances.Add(PlaybackInstance);
		ActiveSound.bFinished = false;
	}
	else if (PlaybackInstance->LoopingMode == EAtomLoopingMode::LoopForever)
	{
		ActiveSound.bFinished = false;
#ifdef ATOM_SOUND_DEV_DEBUG
		UE_LOG(LogCriWareAtomDebug, Warning, TEXT("Sound Parse -> never finished LOOP"));
#endif
	}
	// Not looping, silent, and not set to play when silent
	else
	{
		//UE_LOG(LogCriWareAtomDebug, Error, TEXT("FISNISH HIM"));
		// If no playback instance added to transient array not looping, and just created, immediately delete
		// to avoid initializing on a later tick (achieved by adding to active sound's playback instance map
		// but not the passed transient PlaybackInstance array)
		if (bIsNewPlayback)
		{
			ActiveSound.RemovePlaybackInstance(PlaybackInstanceHash);
			return;
		}
	}

#if !NO_LOGGING
	// Sanity check
	/*if (NumChannels > 2 && !PlaybackInstance->bIsAmbisonics && PlaybackInstance->GetUseSpatialization() && !PlaybackInstance->bReportedSpatializationWarning)
	{
		static TSet<USoundBase*> ReportedSounds;
		if (!ReportedSounds.Contains(this))
		{
			FString SoundWarningInfo = FString::Printf(TEXT("Spatialization on sounds with channels greater than 2 is not supported. SoundBase: %s"), *GetName());
			if (ActiveSound.GetSound() != this)
			{
				SoundWarningInfo += FString::Printf(TEXT(" Sound: %s"), *ActiveSound.GetSound()->GetName());
			}

			const uint64 AtomComponentID = ActiveSound.GetAtomComponentID();
			if (AtomComponentID > 0)
			{
				FAtomThread::RunCommandOnGameThread([AtomComponentID, SoundWarningInfo]()
					{
						if (UAtomComponent* AtomComponent = UAtomComponent::GetAtomComponentFromID(AudioComponentID))
						{
							AActor* SoundOwner = AtomComponent->GetOwner();
							UE_LOG(LogCriWareAtom, Verbose, TEXT("%s Actor: %s AtomComponent: %s"), *SoundWarningInfo, (SoundOwner ? *SoundOwner->GetName() : TEXT("None")), *AtomComponent->GetName());
						}
						else
						{
							UE_LOG(LogCriWareAtom, Verbose, TEXT("%s"), *SoundWarningInfo);
						}
					});
			}
			else
			{
				UE_LOG(LogCriWareAtom, Verbose, TEXT("%s"), *SoundWarningInfo);
			}

			ReportedSounds.Add(this);
		}
		PlaybackInstance->bReportedSpatializationWarning = true;
	}*/
#endif // !NO_LOGGING
}

UAtomSoundClass* UAtomSoundBase::GetSoundClass() const
{
	if (SoundClassObject)
	{
		return SoundClassObject;
	}

	// get from settings if some default Class object is set
	const UCriWareCoreSettings* AtomSettings = GetDefault<UCriWareCoreSettings>();
	if (ensure(AtomSettings))
	{
		if (UAtomSoundClass* DefaultSoundClass = AtomSettings->GetDefaultSoundClass())
		{
			return DefaultSoundClass;
		}
	}

	return nullptr;
}

UAtomRackBase* UAtomSoundBase::GetAtomRack() const
{
	return AtomRack;
}

void UAtomSoundBase::GetAtomBusSends(TArray<FAtomSoundToBusSend>& OutSends) const
{
	OutSends = AtomBusSends;
}

void UAtomSoundBase::GetConcurrencyHandles(TArray<FAtomConcurrencyHandle>& OutConcurrencyHandles) const
{
	const UCriWareCoreSettings* AtomSettings = GetDefault<UCriWareCoreSettings>();

	OutConcurrencyHandles.Reset();
	if (bOverrideConcurrency)
	{
		OutConcurrencyHandles.Add(ConcurrencyOverrides);
	}
	else if (!ConcurrencySet.IsEmpty())
	{
		for (const UAtomConcurrency* Concurrency : ConcurrencySet)
		{
			if (Concurrency)
			{
				OutConcurrencyHandles.Emplace(*Concurrency);
			}
		}
	}
	else if (ensure(AtomSettings))
	{
		if (const UAtomConcurrency* DefaultConcurrency = AtomSettings->GetDefaultSoundConcurrency())
		{
			OutConcurrencyHandles.Emplace(*DefaultConcurrency);
		}
	}
}

float UAtomSoundBase::GetPriority() const
{
	return FMath::Clamp(Priority, ATOM_MIN_SOUND_PRIORITY, ATOM_MAX_SOUND_PRIORITY);
}

void UAtomSoundBase::AddPlayingSource(const FAtomSoundClientPtr& Source)
{
	check(Source);
	check(IsInAtomThread() || IsInGameThread());   // Don't allow incrementing on other threads as it's not safe (for GCing of this soundwave).
	if (Source)
	{
		FScopeLock Lock(&SourcesPlayingCs);
		check(!SourcesPlaying.Contains(Source));
		SourcesPlaying.Add(Source);
	}
}

void UAtomSoundBase::RemovePlayingSource(const FAtomSoundClientPtr& Source)
{
	if (Source)
	{
		FScopeLock Lock(&SourcesPlayingCs);
		check(SourcesPlaying.Contains(Source));
		SourcesPlaying.RemoveSwap(Source);
	}
}

IAtomSoundResource* UAtomSoundBase::GetSoundResource()
{
	return Cast<IAtomSoundResource>(this);
}

void UAtomSoundBase::GetAllSoundResources(TArray<IAtomSoundResource*>& Resources)
{
	Resources.Add(GetSoundResource());
}

#if WITH_EDITOR
bool UAtomSoundBase::GetRedrawThumbnail() const
{
	return bNeedsThumbnailGeneration != 0;
}

void UAtomSoundBase::SetRedrawThumbnail(bool bInRedraw)
{
	bNeedsThumbnailGeneration = static_cast<uint32>(bInRedraw);
}

bool UAtomSoundBase::CanVisualizeAsset() const
{
	return true;
}
#endif // WITH_EDITOR

//~ Snapshot Generation

#if WITH_EDITOR
void UAtomSoundBase::GenerateWaveSnapshot(uint32 NumFrames /* = NumSnapShotFrames */)
{
	if (AtomSoundBaseRenderer == nullptr)
	{
		ICriWareCoreModule* CoreModule = FModuleManager::LoadModulePtr<ICriWareCoreModule>("CriWareCore");
		if (CoreModule != nullptr)
		{
			AtomSoundBaseRenderer = CoreModule->CreateAtomSoundBaseRenderer();
		}
	}

	if (AtomSoundBaseRenderer != nullptr)
	{
		IAtomSoundBaseRendererInterface* Interface = Cast<IAtomSoundBaseRendererInterface>(AtomSoundBaseRenderer);
		if (Interface != nullptr)
		{
			Interface->Open(this, NumFrames); // actually write to RawSnapshot
		}
	}
}

void UAtomSoundBase::GenerateWaveRawData()
{
	if (AtomSoundBaseRenderer == nullptr)
	{
		ICriWareCoreModule* CoreModule = FModuleManager::LoadModulePtr<ICriWareCoreModule>("CriWareCore");
		if (CoreModule != nullptr)
		{
			AtomSoundBaseRenderer = CoreModule->CreateAtomSoundBaseRenderer();
		}
	}

	if (AtomSoundBaseRenderer != nullptr)
	{
		IAtomSoundBaseRendererInterface* Interface = Cast<IAtomSoundBaseRendererInterface>(AtomSoundBaseRenderer);
		if (Interface != nullptr)
		{
			Interface->Open(this); // actually write to RawPCMData
		}
	}
}

bool UAtomSoundBase::GetImportedSoundWaveData(TArray<uint8>& OutRawPCMData, uint32& OutSampleRate, uint16& OutNumChannels) const
{
	TArray<EAtomSpeaker> ChannelOrder;

	bool bResult = GetImportedSoundWaveData(OutRawPCMData, OutSampleRate, ChannelOrder);

	if (bResult)
	{
		OutNumChannels = ChannelOrder.Num();
	}
	else
	{
		OutNumChannels = 0;
	}

	return bResult;
}

bool UAtomSoundBase::GetImportedSoundWaveData(TArray<uint8>& OutRawPCMData, uint32& OutSampleRate, TArray<EAtomSpeaker>& OutChannelOrder) const
{
	OutRawPCMData.Reset();
	OutSampleRate = 0;
	OutChannelOrder.Reset();

#if WITH_EDITORONLY_DATA
	FScopeLock ScopeLock(&RawPCMDataCriticalSection);
#endif

	// Can only get sound wave data if there is bulk data 
	if (RawPCMData != nullptr)
	{
		if (WaveInfo.NumChannels <= 0)
		{
			// ask for a resource handle and read wave info
			//requestresource();
			//GetWaveInfo();
		}

		// Determine which channels we have.
		for (int32 ChannelIndex = 0; ChannelIndex < WaveInfo.NumChannels; ChannelIndex++)
		{
			OutChannelOrder.Add((EAtomSpeaker)ChannelIndex);
		}

		OutSampleRate = (uint32)WaveInfo.SampleRate;

		const int SampleDataSize = WaveInfo.NumFrames * WaveInfo.NumChannels * sizeof(int16);
		// Copy the raw PCM data and the header info
		OutRawPCMData.AddUninitialized(SampleDataSize);
		FMemory::Memcpy(OutRawPCMData.GetData(), RawPCMData, SampleDataSize);

		return true;
	}

	UE_LOG(LogCriWareAtom, Warning, TEXT("Failed to get imported raw data for sound '%s'"), *GetFullName());
	return false;
}

#endif // WITH_EDITOR

#undef LOCTEXT_NAMESPACE
