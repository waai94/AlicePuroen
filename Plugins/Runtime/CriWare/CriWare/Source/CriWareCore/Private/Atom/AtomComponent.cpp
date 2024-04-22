﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomComponent.cpp
 *
 ****************************************************************************/

#include "Atom/AtomComponent.h"

#include "Misc/App.h"
#include "Async/Async.h"
#if WITH_EDITORONLY_DATA
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"
#endif

#include "CriWareCorePrivate.h"
#include "CriWareCore.h"
#include "CriWare.h"
#include "Atom/Atom.h"
#include "Atom/AtomGameplayStatics.h"
#include "Atom/AtomRuntimeManager.h"
#include "Atom/AtomRuntime.h"
#include "Atom/AtomActiveSound.h"
#include "Atom/AtomSoundCue.h"

// WIP
#include "Atom/Components/AtomExternalComponent.h"
#include "Atom/Mixer/AtomMixerSource.h"

#define LOCTEXT_NAMESPACE "AtomComponent"

DECLARE_CYCLE_STAT(TEXT("AtomComponent Play"), STAT_AtomComp_Play, STATGROUP_Atom);

static float AtomBakedAnalysisTimeShiftCVar = 0.0f;
FAutoConsoleVariableRef CVarAtomBackedAnalysisTimeShift(
	TEXT("atom.AnalysisTimeShift"),
	AtomBakedAnalysisTimeShiftCVar,
	TEXT("Shifts the timeline for baked analysis playback.\n")
	TEXT("Value: The time in seconds to shift the timeline."),
	ECVF_Default);

static int32 AtomPrimeSoundOnAtomComponentSpawnCVar = 0;
FAutoConsoleVariableRef CVarAtomPrimeSoundOnAtomComponentSpawn(
	TEXT("atom.streamcaching.PrimeSoundOnAtomComponents"),
	AtomPrimeSoundOnAtomComponentSpawnCVar,
	TEXT("When set to 1, automatically primes a USoundBase when a UAudioComponent is spawned with that sound, or when UAtomComponent::SetSound is called.\n"),
	ECVF_Default);

 /*
  * UAtomComponent Implementation
  *****************************************************************************/

uint64 UAtomComponent::AtomComponentIDCounter = 0;
TMap<uint64, UAtomComponent*> UAtomComponent::AtomIDToComponentMap;
FCriticalSection UAtomComponent::AtomIDToComponentMapLock;

UAtomComponent::UAtomComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Sound(nullptr)
	, bAutoDestroy(false)
	, bStopWhenOwnerDestroyed(true)
	, bAllowSpatialization(true)
	, bOverrideAttenuation(false)
	, bIsUISound(false)
	, bEnableLowPassFilter(false)
	, bEnableAmplitudeEnvelope(false)
	, bCanPlayMultipleInstances(false)
	, bPreviewComponent(false)
	, bIsPreviewSound(false)
	, bIsPaused(false)
	, bIsFadingOut(false)
	, bAutoManageAttachment(false)
	, AtomRuntimeID(INDEX_NONE)
	, PitchModulationMin(1.0f)
	, PitchModulationMax(1.0f)
	, VolumeModulationMin(1.0f)
	, VolumeModulationMax(1.0f)
	, VolumeMultiplier(1.0f)
	, PitchMultiplier(1.0f)
	, LowPassFilterFrequency(ATOM_MAX_FILTER_FREQUENCY)
	, ActiveCount(0)
	, OcclusionCheckInterval(0.0f)
	, CueBlockIndex(INDEX_NONE)
	, CueFirstBlockIndex(0)
{
	bUseAttachParentBound = true; // Avoid CalcBounds() when transform changes.
	bAutoActivate = true;
	bAllowAnyoneToDestroyMe = true;
	bNeverNeedsRenderUpdate = true;
	bWantsOnUpdateTransform = true;
#if WITH_EDITORONLY_DATA
	bVisualizeComponent = true;
#endif

	AtomComponentID = FPlatformAtomics::InterlockedIncrement(reinterpret_cast<volatile int64*>(&AtomComponentIDCounter));

	{
		// TODO: Consider only putting played/active components in to the map
		FScopeLock Lock(&AtomIDToComponentMapLock);
		AtomIDToComponentMap.Add(AtomComponentID, this);
	}

	RandomStream.Initialize(FApp::bUseFixedSeed ? GetFName() : NAME_None);

#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCCLASS(GetClass());
#endif
}

UAtomComponent* UAtomComponent::GetAtomComponentFromID(uint64 AtomComponentID)
{
	// although we should be in the game thread when calling this function, async loading makes it possible/common for these
	// components to be constructed outside of the game thread. this means we need a lock around anything that deals with the
	// AtomIDToComponentMap.
	FScopeLock Lock(&AtomIDToComponentMapLock);
	return AtomIDToComponentMap.FindRef(AtomComponentID);
}

void UAtomComponent::BeginDestroy()
{
	if (IsActive() && Sound && Sound->IsLooping())
	{
		UE_LOG(LogCriWareAtom, Verbose, TEXT("Atom Component is being destroyed prior to stopping looping sound '%s' directly."), *Sound->GetFullName());
		Stop();
	}

	ResetParameters();

	{
		FScopeLock Lock(&AtomIDToComponentMapLock);
		AtomIDToComponentMap.Remove(AtomComponentID);
	}

	Super::BeginDestroy();
}

FString UAtomComponent::GetDetailedInfoInternal() const
{
	FString Result;

	if (Sound != nullptr)
	{
		Result = Sound->GetPathName(nullptr);
	}
	else
	{
		Result = TEXT("No_Sound");
	}

	return Result;
}

FName UAtomComponent::GetFNameForStatID() const
{
	const UAtomSoundBase* SoundObject = Sound.Get();
	return SoundObject ? SoundObject->GetFNameForStatID() : Super::GetFNameForStatID();
}

void UAtomComponent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	//Ar.UsingCustomVersion(FFrameworkObjectVersion::GUID);

	/*if (Ar.IsLoading() && Ar.CustomVer(FFrameworkObjectVersion::GUID) < FFrameworkObjectVersion::ChangeAudioComponentOverrideSubtitlePriorityDefault)
	{

	}*/
}

void UAtomComponent::PostLoad()
{
	if (AtomPrimeSoundOnAtomComponentSpawnCVar && Sound)
	{
		UAtomGameplayStatics::PrimeSound(Sound);
	}

	Super::PostLoad();
}

void UAtomComponent::OnRegister()
{
	if (bAutoManageAttachment && !IsActive())
	{
		// Detach from current parent, we are supposed to wait for activation.
		if (GetAttachParent())
		{
			// If no auto attach parent override, use the current parent when we activate
			if (!AutoAttachParent.IsValid())
			{
				AutoAttachParent = GetAttachParent();
			}
			// If no auto attach socket override, use current socket when we activate
			if (AutoAttachSocketName == NAME_None)
			{
				AutoAttachSocketName = GetAttachSocketName();
			}

			// If in a game world, detach now if necessary. Activation will cause auto-attachment.
			const UWorld* World = GetWorld();
			if (World->IsGameWorld())
			{
				// Prevent attachment before Super::OnRegister() tries to attach us, since we only attach when activated.
				if (GetAttachParent()->GetAttachChildren().Contains(this))
				{
					// Only detach if we are not about to auto attach to the same target, that would be wasteful.
					if (!bAutoActivate || (AutoAttachLocationRule != EAttachmentRule::KeepRelative && AutoAttachRotationRule != EAttachmentRule::KeepRelative && AutoAttachScaleRule != EAttachmentRule::KeepRelative) || (AutoAttachSocketName != GetAttachSocketName()) || (AutoAttachParent != GetAttachParent()))
					{
						DetachFromComponent(FDetachmentTransformRules(EDetachmentRule::KeepRelative, /*bCallModify=*/ false));
					}
				}
				else
				{
					SetupAttachment(nullptr, NAME_None);
				}
			}
		}

		SavedAutoAttachRelativeLocation = GetRelativeLocation();
		SavedAutoAttachRelativeRotation = GetRelativeRotation();
		SavedAutoAttachRelativeScale3D = GetRelativeScale3D();
	}

	Super::OnRegister();

#if WITH_EDITORONLY_DATA
	UpdateSpriteTexture();
#endif
}

void UAtomComponent::OnUnregister()
{
	// Route OnUnregister event.
	Super::OnUnregister();

	// Don't stop audio and clean up component if owner has been destroyed (default behaviour). This function gets
	// called from AActor::ClearComponents when an actor gets destroyed which is not usually what we want for one-
	// shot sounds.
	AActor* Owner = GetOwner();
	if (!Owner || bStopWhenOwnerDestroyed)
	{
		Stop();
	}
	//FAtomSonicSyncTickable::Shutdown();
}

void UAtomComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	//FAtomSonicSyncTickable::Shutdown();
}

const UObject* UAtomComponent::AdditionalStatObject() const
{
	return Sound;
}

bool UAtomComponent::IsReadyForOwnerToAutoDestroy() const
{
	return !IsPlaying();
}

void UAtomComponent::SetSound(UAtomSoundBase* NewSound)
{
	const bool bPlay = IsPlaying();

	// If this is an auto destroy component we need to prevent it from being auto-destroyed since we're really just restarting it
	const bool bWasAutoDestroy = bAutoDestroy;
	bAutoDestroy = false;
	//Only stop the existing sound if we are limited to one sound per component
	if (!bCanPlayMultipleInstances)
	{
		Stop();
	}
	bAutoDestroy = bWasAutoDestroy;

	Sound = NewSound;

	if (AtomPrimeSoundOnAtomComponentSpawnCVar && Sound)
	{
		UAtomGameplayStatics::PrimeSound(Sound);
	}

	if (bPlay && !bCanPlayMultipleInstances)
	{
		Play();
	}
}

void UAtomComponent::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	Super::OnUpdateTransform(UpdateTransformFlags, Teleport);

	if (bPreviewComponent)
	{
		return;
	}

	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		if (IsActive())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.UpdateAudioComponentTransform"), STAT_AtomUpdateComponentTransform, STATGROUP_AtomCommands);

			AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [NewTransform = GetComponentTransform()](FAtomActiveSound& ActiveSound)
			{
				ActiveSound.Transform = NewTransform;
			});
		}
	}
};

void UAtomComponent::BroadcastPlayState()
{
	if (OnAtomSoundPlayStateChanged.IsBound())
	{
		OnAtomSoundPlayStateChanged.Broadcast(GetPlayState());
	}

	if (OnAtomSoundPlayStateChangedNative.IsBound())
	{
		OnAtomSoundPlayStateChangedNative.Broadcast(this, GetPlayState());
	}
}

FBoxSphereBounds UAtomComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	const USceneComponent* UseAutoParent = (bAutoManageAttachment && GetAttachParent() == nullptr) ? AutoAttachParent.Get() : nullptr;
	if (UseAutoParent)
	{
		// We use auto attachment but have detached, don't use our own bogus bounds (we're off near 0,0,0), use the usual parent's bounds.
		return UseAutoParent->Bounds;
	}

	return Super::CalcBounds(LocalToWorld);
}

void UAtomComponent::CancelAutoAttachment(bool bDetachFromParent, const UWorld* MyWorld)
{
	if (bAutoManageAttachment && MyWorld && MyWorld->IsGameWorld())
	{
		if (bDidAutoAttach)
		{
			// Restore relative transform from before attachment. Actual transform will be updated as part of DetachFromParent().
			SetRelativeLocation_Direct(SavedAutoAttachRelativeLocation);
			SetRelativeRotation_Direct(SavedAutoAttachRelativeRotation);
			SetRelativeScale3D_Direct(SavedAutoAttachRelativeScale3D);
			bDidAutoAttach = false;
		}

		if (bDetachFromParent)
		{
			DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
		}
	}
}

bool UAtomComponent::IsInAudibleRange(float* OutMaxDistance) const
{
	FAtomRuntime* AtomRuntime = GetAtomRuntime();
	if (!AtomRuntime)
	{
		return false;
	}

	float MaxDistance = 0.0f;
	float FocusFactor = 0.0f;
	const FVector Location = GetComponentTransform().GetLocation();
	const FAtomAttenuationSettings* AttenuationSettingsToApply = bAllowSpatialization ? GetAttenuationSettingsToApply() : nullptr;
	AtomRuntime->GetMaxDistanceAndFocusFactor(Sound, GetWorld(), Location, AttenuationSettingsToApply, MaxDistance, FocusFactor);

	if (OutMaxDistance)
	{
		*OutMaxDistance = MaxDistance;
	}

	return AtomRuntime->SoundIsAudible(Sound, GetWorld(), Location, AttenuationSettingsToApply, MaxDistance, FocusFactor);
}

void UAtomComponent::Play(float StartTime)
{
	PlayInternalRequestData InternalRequestData;
	InternalRequestData.StartTime = StartTime;
	PlayInternal(InternalRequestData);
}

/*
void UAtomComponent::ProcessCommand(const Audio::FQuartzQuantizedCommandDelegateData& Data)
{
}

void UAtomComponent::ProcessCommand(const Audio::FQuartzQueueCommandData& InQueueCommandData)
{
	if (UQuartzSubsystem* QuartzSubsystem = GetQuartzSubsystem())
	{
		QuartzSubsystem->PushLatencyTrackerResult(InQueueCommandData.RequestRecieved());

		//Queue the sound
		PlayQueuedQuantizedInternal(GetWorld(), InQueueCommandData.AudioComponentCommandInfo);
	}
}

void UAudioComponent::PlayQuantized(
	  const UObject* WorldContextObject
	, UPARAM(ref) UQuartzClockHandle*& InClockHandle
	, UPARAM(ref) FQuartzQuantizationBoundary& InQuantizationBoundary
	, const FOnQuartzCommandEventBP& InDelegate
	, float InStartTime
	, float InFadeInDuration
	, float InFadeVolumeLevel
	, EAudioFaderCurve InFadeCurve)
{
	//Initialize the tickable object portion of the Audio Component, if it hasn't been initialized already
	if (!FQuartzTickableObject::IsInitialized())
	{
		Init(GetWorld());
	}
	check(FQuartzTickableObject::IsInitialized() && CommandQueuePtr.IsValid());

	int32 TimeCVarVal = FMath::Clamp(CVarTimeToTakeUpVoiceSlot->GetInt(), 0, (int32)EQuartzCommandQuantization::Count - 1);
	EQuartzCommandQuantization MinimumQuantization = EQuartzCommandQuantization(TimeCVarVal);

	// Make an anticapatory quantization boundary to try to avoid taking up a whole voice slot while waiting for a queued event
	FQuartzQuantizationBoundary AnticipationQuantizationBoundary = FQuartzQuantizationBoundary(MinimumQuantization, 1.0f, EQuarztQuantizationReference::CurrentTimeRelative, true);

	FAudioComponentCommandInfo NewComponentCommandInfo(CommandQueuePtr, AnticipationQuantizationBoundary);

	// And a new pending quartz command data
	FAudioComponentPendingQuartzCommandData AudioComponentQuartzCommandData
	{
		AnticipationQuantizationBoundary,
		InDelegate,
		InStartTime,
		InFadeInDuration,
		InFadeVolumeLevel,
		InFadeCurve,
		NewComponentCommandInfo.CommandID,
		InClockHandle
	};

	// Guard against a null clock handle
	if (InClockHandle == nullptr)
	{
		return;
	}

	// Decide if we need to queue up the command to play at a later date (and not take up a voice slot) or if we can execute the command immediately

	// Make new audio component command info struct
	Audio::FQuartzClockTickRate OutTickRate;
	InClockHandle->GetCurrentTickRate(WorldContextObject, OutTickRate);

	int32 NumFramesBeforeMinTime = OutTickRate.GetFramesPerDuration(MinimumQuantization);
	int32 NumFramesForDesiredTime = OutTickRate.GetFramesPerDuration(InQuantizationBoundary.Quantization) * InQuantizationBoundary.Multiplier;

	// If the desired quantization time is less than our min time, just execute immediately
	const bool bStealVoiceSlot = NumFramesForDesiredTime <= NumFramesBeforeMinTime;
	const bool bClockIsNotRunning = !InClockHandle->IsClockRunning(WorldContextObject);
	const bool bCommandResetsClock = InQuantizationBoundary.bResetClockOnQueued;
	if (bStealVoiceSlot || bClockIsNotRunning || bCommandResetsClock)
	{
		AudioComponentQuartzCommandData.AnticapatoryBoundary = NewComponentCommandInfo.AnticapatoryBoundary = InQuantizationBoundary; // use the desired target boundary

		// Add to the list of pending data
		// todo: avoid this copy for OUR call to PlayQueuedQuantizedInternal()
		//		 (usually called by a Quartz command, so we follow the same data-caching pattern here)
		PendingQuartzCommandData.Add(AudioComponentQuartzCommandData);
		PlayQueuedQuantizedInternal(WorldContextObject, NewComponentCommandInfo);
	}
	else
	{
		// We need to make an "anticipatory" quantization boundary
		PendingQuartzCommandData.Add(AudioComponentQuartzCommandData);
		InClockHandle->QueueQuantizedSound(WorldContextObject, InClockHandle, NewComponentCommandInfo, InDelegate, InQuantizationBoundary);
	}
}

void UAudioComponent::PlayQueuedQuantizedInternal(const UObject* WorldContextObject, FAudioComponentCommandInfo InCommandInfo)
{
	//Initialize the tickable object portion of the Audio Component, if it hasn't been initialized already
	if (!FQuartzTickableObject::IsInitialized())
	{
		Init(GetWorld());
	}
	check(FQuartzTickableObject::IsInitialized() && CommandQueuePtr.IsValid());

	bool bFoundQuantizedCommand = false;
	bool bIsValidCommand = true;
	UQuartzClockHandle* Handle = nullptr; // will be retrieved from PendingQuartzCommandData

	// Retrieve the stored data
	for (int32 i = PendingQuartzCommandData.Num() - 1; i >= 0; --i)
	{
		const FAudioComponentPendingQuartzCommandData& PendingData = PendingQuartzCommandData[i];

		// Find the pending command ID
		if (PendingData.CommandID == InCommandInfo.CommandID)
		{
			Handle = PendingData.ClockHandle.Get();

			// Retrieve the pending data and queue up the quartz command
			PlayInternalRequestData InternalRequestData;

			InternalRequestData.StartTime = PendingData.StartTime;
			InternalRequestData.FadeInDuration = PendingData.FadeDuration;
			InternalRequestData.FadeVolumeLevel = PendingData.FadeVolume;
			InternalRequestData.FadeCurve = PendingData.FadeCurve;

			if (Handle != nullptr)
			{
				InternalRequestData.QuantizedRequestData = Handle->GetQuartzSubsystem()->CreateDataDataForSchedulePlaySound(Handle, PendingData.Delegate, PendingData.AnticapatoryBoundary);
				UAtomGameplayStatics::PrimeSound(Sound);
			}

			// validate clock existence
			if (!Handle)
			{
				UE_LOG(LogAudioQuartz, Warning, TEXT("Attempting to play Quantized Sound without supplying a Clock Handle"));
				bIsValidCommand = false;
			}
			else if (!Handle->DoesClockExist(WorldContextObject))
			{
				UE_LOG(LogAudioQuartz, Warning, TEXT("Clock: '%s' Does not exist! Cannot play quantized sound: '%s'"), *InternalRequestData.QuantizedRequestData.ClockName.ToString(), *this->Sound->GetName());
				bIsValidCommand = false;
			}

			if (bIsValidCommand)
			{
				InternalRequestData.QuantizedRequestData.GameThreadSubscribers.Add(CommandQueuePtr);

				// Now play the quartz command
				PlayInternal(InternalRequestData);
			}

			// remove the pending quartz command data from the audio component
			bFoundQuantizedCommand = true;
			PendingQuartzCommandData.RemoveAtSwap(i, 1, false);
			break;
		}
	}

	if (!bFoundQuantizedCommand)
	{
		UE_LOG(LogAudioQuartz, Warning, TEXT("Failed to find command ID '%d' for sound '%s'."),
			InCommandInfo.CommandID,
			*this->Sound->GetName());
	}
}
*/

void UAtomComponent::PlayInternal(const PlayInternalRequestData& InPlayRequestData, UAtomSoundBase* InSoundOverride)
{
	SCOPE_CYCLE_COUNTER(STAT_AtomComp_Play);

	UWorld* World = GetWorld();
	UAtomSoundBase* SoundToPlay = InSoundOverride ? InSoundOverride : Sound.Get();
	if (SoundToPlay)
	{
		UE_LOG(LogCriWareAtom, Verbose, TEXT("%g: Playing AtomComponent : '%s' with Sound: '%s'"), World ? World->GetAudioTimeSeconds() : 0.0f, *GetFullName(), *SoundToPlay->GetName());
	}

	// Reset fading out flag in case this is a reused audio component and replaying after previously fading out.
	bIsFadingOut = false;

	// Stop sound if active & not set to play multiple instances, irrespective of whether or not a valid sound is set to play.
	const bool bIsSoundLooping = SoundToPlay && SoundToPlay->IsLooping();
	if (IsActive())
	{
		// Stop if this component is limited to one active sound that is not looping.
		if (!bCanPlayMultipleInstances || bIsSoundLooping)
		{
			// Prevent sound from being auto-destroyed since its just being restarted.
			bool bCurrentAutoDestroy = bAutoDestroy;
			bAutoDestroy = false;
			Stop();
			bAutoDestroy = bCurrentAutoDestroy;
		}
	}

	if (!SoundToPlay)
	{
		UE_LOG(LogCriWareAtom, Verbose, TEXT("%g: AtomComponent '%s' failed to play sound: No sound to play specified.'"), World ? World->GetAudioTimeSeconds() : 0.0f, *GetFullName());
		return;
	}

	if (World && !World->bAllowAudioPlayback)
	{
		return;
	}

	FAtomRuntime* AtomRuntime = GetAtomRuntime();
	if (!AtomRuntime)
	{
		return;
	}

	// Store the time that this Atom component played
	if (World)
	{
		TimeAtomComponentPlayed = World->GetAudioTimeSeconds();
	}
	else
	{
		TimeAtomComponentPlayed = 0.0f;
	}
	FadeInTimeDuration = InPlayRequestData.FadeInDuration;

	// Auto attach if requested
	const bool bWasAutoAttached = bDidAutoAttach;
	bDidAutoAttach = false;
	if (bAutoManageAttachment && World && World->IsGameWorld())
	{
		USceneComponent* NewParent = AutoAttachParent.Get();
		if (NewParent)
		{
			const bool bAlreadyAttached = GetAttachParent() && (GetAttachParent() == NewParent) && (GetAttachSocketName() == AutoAttachSocketName) && GetAttachParent()->GetAttachChildren().Contains(this);
			if (!bAlreadyAttached)
			{
				bDidAutoAttach = bWasAutoAttached;
				CancelAutoAttachment(true, World);
				SavedAutoAttachRelativeLocation = GetRelativeLocation();
				SavedAutoAttachRelativeRotation = GetRelativeRotation();
				SavedAutoAttachRelativeScale3D = GetRelativeScale3D();
				AttachToComponent(NewParent, FAttachmentTransformRules(AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule, false), AutoAttachSocketName);
			}

			bDidAutoAttach = true;
		}
		else
		{
			CancelAutoAttachment(true, World);
		}
	}

	// Create / configure new ActiveSound
	const FAtomAttenuationSettings* AttenuationSettingsToApply = bAllowSpatialization ? GetAttenuationSettingsToApply() : nullptr;

	float MaxDistance = 0.0f;
	float FocusFactor = 1.0f;
	FVector Location = GetComponentTransform().GetLocation();

	AtomRuntime->GetMaxDistanceAndFocusFactor(SoundToPlay, World, Location, AttenuationSettingsToApply, MaxDistance, FocusFactor);

	FAtomActiveSound NewActiveSound;
	NewActiveSound.SetAtomComponent(*this);
	NewActiveSound.SetWorld(GetWorld());
	NewActiveSound.SetSound(SoundToPlay);
	NewActiveSound.SetSoundClass(SoundClassOverride);
	NewActiveSound.ConcurrencySet = ConcurrencySet;

	// The priority used for the active sound is the audio component's priority scaled with the sound's priority
	if (bOverridePriority)
	{
		NewActiveSound.Priority = Priority;
	}
	else
	{
		NewActiveSound.Priority = SoundToPlay->Priority;
	}

	const float Volume = (VolumeModulationMax + ((VolumeModulationMin - VolumeModulationMax) * RandomStream.FRand())) * VolumeMultiplier;
	NewActiveSound.SetVolume(Volume);

	const float Pitch = (PitchModulationMax + ((PitchModulationMin - PitchModulationMax) * RandomStream.FRand())) * PitchMultiplier;
	NewActiveSound.SetPitch(Pitch);

	NewActiveSound.bEnableLowPassFilter = bEnableLowPassFilter;
	NewActiveSound.LowPassFilterFrequency = LowPassFilterFrequency;
	NewActiveSound.bEnableAmplitudeEnvelope = bEnableAmplitudeEnvelope;
	NewActiveSound.AmplitudeEnvelope = AmplitudeEnvelope;
	NewActiveSound.RequestedStartTime = FMath::Max(0.f, InPlayRequestData.StartTime);

	// TODO
	// NewActiveSound.bShouldRemainActiveIfDropped = bShouldRemainActiveIfDropped; // todo
	//NewActiveSound.bHandleSubtitles = (!bSuppressSubtitles || OnQueueSubtitles.IsBound());
	NewActiveSound.bIgnoreForFlushing = bIgnoreForFlushing;

	NewActiveSound.bIsUISound = bIsUISound;
	//NewActiveSound.bIsMusic = bIsMusic;
	NewActiveSound.bAlwaysPlay = bAlwaysPlay;
	//NewActiveSound.bReverb = bReverb;
	//NewActiveSound.bCenterChannelOnly = bCenterChannelOnly;
	NewActiveSound.bIsPreviewSound = bIsPreviewSound;
	NewActiveSound.bLocationDefined = !bPreviewComponent;
	NewActiveSound.bIsPaused = bIsPaused;

	if (NewActiveSound.bLocationDefined)
	{
		NewActiveSound.Transform = GetComponentTransform();
	}

	NewActiveSound.bAllowSpatialization = bAllowSpatialization;
	NewActiveSound.bHasAttenuationSettings = (AttenuationSettingsToApply != nullptr);
	if (NewActiveSound.bHasAttenuationSettings)
	{
		NewActiveSound.AttenuationSettings = *AttenuationSettingsToApply;
		NewActiveSound.FocusData.PriorityScale = AttenuationSettingsToApply->GetFocusPriorityScale(AtomRuntime->GetGlobalFocusSettings(), FocusFactor);
	}

	//NewActiveSound.EnvelopeFollowerAttackTime = FMath::Max(EnvelopeFollowerAttackTime, 0);
	//NewActiveSound.EnvelopeFollowerReleaseTime = FMath::Max(EnvelopeFollowerReleaseTime, 0);

	NewActiveSound.bUpdatePlayPercentage = OnAtomSoundPlaybackPercentNative.IsBound() || OnAtomSoundPlaybackPercent.IsBound();
	//NewActiveSound.bUpdateSingleEnvelopeValue = OnAudioSingleEnvelopeValue.IsBound() || OnAudioSingleEnvelopeValueNative.IsBound();
	//NewActiveSound.bUpdateMultiEnvelopeValue = OnAudioMultiEnvelopeValue.IsBound() || OnAudioMultiEnvelopeValueNative.IsBound();

	NewActiveSound.ModulationRouting = ModulationRouting;
	for (auto AisacPatch : ModulationRouting.AisacModulations.AdditionalAisacPatches)
	{
		if (AisacPatch)
		{
			NewActiveSound.AdditionalAisacPatchNames.Add(AisacPatch->Name);
		}
	}

	// default Control are now separated to modualtions routing
	// When using SetAsiacControlValue or some override settings, those value will be modulated by Atom runtime modulation system.
	//NewActiveSound.AisacControlModulations = ModulationRouting.AisacModulations.AisacControlModulations;

	if (Cast<UAtomSoundCue>(Sound))
	{
		NewActiveSound.CueSelectorParams = CueSelectors;
		NewActiveSound.CueFirstBlockIndex = CueFirstBlockIndex;
	}
	// Pass quantization data to the active sound
	//NewActiveSound.QuantizedRequestData = InPlayRequestData.QuantizedRequestData;

	NewActiveSound.MaxDistance = MaxDistance;

	FAtomVolumeFader& Fader = NewActiveSound.ComponentVolumeFader;
	Fader.SetVolume(0.0f); // Init to 0.0f to fade as default is 1.0f
	Fader.StartFade(InPlayRequestData.FadeVolumeLevel, InPlayRequestData.FadeInDuration, InPlayRequestData.FadeCurve);

	// WIP - external explayer 
	if (Cast<UAtomExternalSound>(Sound))
	{
		NewActiveSound.OnCreateSource = [](FAtomRuntime* Runtime, FAtomPlaybackInstance* PlaybackInstance)
		{
			check(PlaybackInstance);
			UAtomExternalSound* ExternalSound = Cast<UAtomExternalSound>(PlaybackInstance->ActiveSound->GetSound());

			return new Atom::FAtomExternalExPlayer(Runtime, ExternalSound->GetExternalPlayer());
		};
	}

	// Bump ActiveCount... this is used to determine if an Atom component is still active after a sound reports back as completed
	++ActiveCount;

	// Pass along whether or not component is setup to support multiple active sounds.
	// This is to ensure virtualization will function accordingly. Disable the feature
	// if the sound is looping as a safety mechanism to avoid stuck loops.
	if (bIsSoundLooping)
	{
		if (bCanPlayMultipleInstances)
		{
			UE_LOG(LogCriWareAtom, Warning, TEXT("'Can Play Multiple Instances' disabled: Sound '%s' set to looping"), *SoundToPlay->GetName());
		}

		AtomRuntime->SetCanHaveMultipleActiveSounds(AtomComponentID, false);
	}
	else
	{
		AtomRuntime->SetCanHaveMultipleActiveSounds(AtomComponentID, bCanPlayMultipleInstances);
	}

	TArray<FAtomParameter> SoundParams = DefaultParameters;

	/*if (AActor* Owner = GetOwner())
	{
		TArray<FAtomParameter> ActorParams;
		UActorAtomSoundParameterInterface::Fill(Owner, ActorParams);
		FAtomParameter::Merge(MoveTemp(ActorParams), SoundParams);
	}*/

	TArray<FAtomParameter> InstanceParamsCopy = InstanceParameters;
	FAtomParameter::Merge(MoveTemp(InstanceParamsCopy), SoundParams);

	AtomRuntime->AddNewActiveSound(NewActiveSound);//, MoveTemp(SoundParams));

	//LastSoundPlayOrder = NewActiveSound.GetPlayOrder();

	// In editor, the audio thread is not run separate from the game thread, and can result in calling PlaybackComplete prior
	// to bIsActive being set. Therefore, we assign to the current state of ActiveCount as opposed to just setting to true.
	SetActiveFlag(ActiveCount > 0);

	BroadcastPlayState();
}

FAtomRuntime* UAtomComponent::GetAtomRuntime() const
{
	FAtomRuntime* AtomRuntime = nullptr;

	if (GCriWare)
	{
		if (AtomRuntimeID != INDEX_NONE)
		{
			FAtomRuntimeManager* RuntimeManager = GCriWare->GetCriWareCore()->GetAtomRuntimeManager();
			AtomRuntime = (RuntimeManager ? RuntimeManager->GetAtomRuntimeRaw(AtomRuntimeID) : nullptr);
		}
		else if (UWorld* World = GetWorld())
		{
			AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeFromWorldContext(this);
			//AtomRuntime = World->GetAudioDeviceRaw();
			if (!AtomRuntime)
			{
				//GEngine->GetMainAudioDeviceRaw();
				AtomRuntime = GCriWare->GetCriWareCore()->GetMainAtomRuntimeRaw();
			}
		}
		else
		{
			AtomRuntime = GCriWare->GetCriWareCore()->GetMainAtomRuntimeRaw();
		}
	}
	return AtomRuntime;
}

void UAtomComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAtomFaderCurve FadeCurve)
{
	PlayInternalRequestData Data;
	Data.StartTime = StartTime;
	Data.FadeInDuration = FadeInDuration;
	Data.FadeVolumeLevel = FadeVolumeLevel;
	Data.FadeCurve = FadeCurve;

	PlayInternal(Data);
}

void UAtomComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAtomFaderCurve FadeCurve)
{
	const bool bIsFadeOut = true;
	AdjustVolumeInternal(FadeOutDuration, FadeVolumeLevel, bIsFadeOut, FadeCurve);
}

void UAtomComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAtomFaderCurve FadeCurve)
{
	const bool bIsFadeOut = false;
	AdjustVolumeInternal(AdjustVolumeDuration, AdjustVolumeLevel, bIsFadeOut, FadeCurve);
}

void UAtomComponent::AdjustVolumeInternal(float AdjustVolumeDuration, float AdjustVolumeLevel, bool bInIsFadeOut, const EAtomFaderCurve FadeCurve)
{
	if (!IsActive())
	{
		return;
	}

	FAtomRuntime* AtomRuntime = GetAtomRuntime();
	if (!AtomRuntime)
	{
		return;
	}

	AdjustVolumeDuration = FMath::Max(0.0f, AdjustVolumeDuration);
	AdjustVolumeLevel = FMath::Max(0.0f, AdjustVolumeLevel);
	if (FMath::IsNearlyZero(AdjustVolumeDuration) && FMath::IsNearlyZero(AdjustVolumeLevel))
	{
		Stop();
		return;
	}

	const bool bWasFadingOut = bIsFadingOut;
	bIsFadingOut = bInIsFadeOut || FMath::IsNearlyZero(AdjustVolumeLevel);

	if (bWasFadingOut != bIsFadingOut)
	{
		BroadcastPlayState();
	}

	DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AdjustVolume"), STAT_AtomAdjustVolume, STATGROUP_AtomThreadCommands);
	AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [bInIsFadeOut, AdjustVolumeLevel, AdjustVolumeDuration, FadeCurve](FAtomActiveSound& ActiveSound)
	{
		FAtomVolumeFader& Fader = ActiveSound.ComponentVolumeFader;
		const float InitialTargetVolume = Fader.GetTargetVolume();

		// Ignore fade out request if requested volume is higher than current target.
		if (bInIsFadeOut && AdjustVolumeLevel >= InitialTargetVolume)
		{
			return;
		}

		const bool ToZeroVolume = FMath::IsNearlyZero(AdjustVolumeLevel);
		if (ActiveSound.FadeOut == FAtomActiveSound::EFadeOut::Concurrency) // fade by concurrency (Atom will fade also fade sound when virtualized but theire no settings)
		{
			// Ignore adjust volume request if non-zero and currently voice stealing.
			if (!FMath::IsNearlyZero(AdjustVolumeLevel))
			{
				return;
			}

			// Ignore request of longer fade out than active target if active is concurrency (voice stealing) fade.
			if (AdjustVolumeDuration > Fader.GetFadeDuration())
			{
				return;
			}
		}
		else
		{
			ActiveSound.FadeOut = bInIsFadeOut || ToZeroVolume ? FAtomActiveSound::EFadeOut::User : FAtomActiveSound::EFadeOut::None;
		}

		if (bInIsFadeOut || ToZeroVolume)
		{
			// If negative, active indefinitely, so always make sure set to minimum positive value for active fade.
			const float OldActiveDuration = Fader.GetActiveDuration();
			const float NewActiveDuration = OldActiveDuration < 0.0f
				? AdjustVolumeDuration
				: FMath::Min(OldActiveDuration, AdjustVolumeDuration);
			Fader.SetActiveDuration(NewActiveDuration);
		}

		Fader.StartFade(AdjustVolumeLevel, AdjustVolumeDuration, static_cast<EAtomFaderCurve>(FadeCurve));
	}, GET_STATID(STAT_AtomAdjustVolume));
}

void UAtomComponent::ResetParameters()
{
	InstanceParameters.Reset();
	//ISoundParameterControllerInterface::ResetParameters();
}

void UAtomComponent::Stop()
{
	if (!IsActive())
	{
		return;
	}

	FAtomRuntime* AtomRuntime = GetAtomRuntime();
	if (!AtomRuntime)
	{
		return;
	}

	if (bIsPreviewSound)
	{
		ResetParameters();
	}

	// Set this to immediately be inactive
	SetActiveFlag(false);

	UE_LOG(LogCriWareAtom, Verbose, TEXT("%g: Stopping AtomComponent : '%s' with Sound: '%s'"),
		GetWorld() ? GetWorld()->GetAudioTimeSeconds() : 0.0f, *GetFullName(),
		Sound ? *Sound->GetName() : TEXT("nullptr"));

	AtomRuntime->StopActiveSound(AtomComponentID);

	BroadcastPlayState();
}

void UAtomComponent::StopDelayed(float DelayTime)
{
	// 1. Stop immediately if no delay time
	if (DelayTime < 0.0f || FMath::IsNearlyZero(DelayTime))
	{
		Stop();
		return;
	}

	if (!IsActive())
	{
		return;
	}

	FAtomRuntime* AtomRuntime = GetAtomRuntime();
	if (!AtomRuntime)
	{
		return;
	}

	// 2. Performs delayed stop with no fade
	DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.StopDelayed"), STAT_AtomStopDelayed, STATGROUP_AtomThreadCommands);
	AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [DelayTime](FAtomActiveSound& ActiveSound)
	{
		if (const UAtomSoundBase* StoppingSound = ActiveSound.GetSound())
		{
			UE_LOG(LogCriWareAtom, Verbose, TEXT("%g: Delayed Stop requested for sound '%s'"),
				ActiveSound.GetWorld() ? ActiveSound.GetWorld()->GetAudioTimeSeconds() : 0.0f,
				*StoppingSound->GetName());
		}

		FAtomVolumeFader& Fader = ActiveSound.ComponentVolumeFader;
		switch (ActiveSound.FadeOut)
		{
		case FAtomActiveSound::EFadeOut::Concurrency:
		{
			// Ignore request of longer fade out than active target if active is concurrency (voice stealing) fade.
			if (DelayTime < Fader.GetFadeDuration())
			{
				Fader.SetActiveDuration(DelayTime);
			}
		}
		break;

		case FAtomActiveSound::EFadeOut::User:
		case FAtomActiveSound::EFadeOut::None:
		default:
		{
			ActiveSound.FadeOut = FAtomActiveSound::EFadeOut::User;
			Fader.SetActiveDuration(DelayTime);
		}
		break;
		}
	}, GET_STATID(STAT_AtomStopDelayed));
}

void UAtomComponent::SetPaused(bool bPause)
{
	if (bIsPaused != bPause)
	{
		bIsPaused = bPause;

		if (IsActive())
		{
			UE_LOG(LogCriWareAtom, Verbose, TEXT("%g: Pausing AtomComponent : '%s' with Sound: '%s'"), GetWorld() ? GetWorld()->GetAudioTimeSeconds() : 0.0f, *GetFullName(), Sound ? *Sound->GetName() : TEXT("nullptr"));
			
			if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
			{
				DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.PauseActiveSound"), STAT_AtomPauseActiveSound, STATGROUP_AtomThreadCommands);

				const uint64 MyAtomComponentID = AtomComponentID;
				FAtomThread::RunCommandOnAtomThread([AtomRuntime, MyAtomComponentID, bPause]()
				{
					AtomRuntime->PauseActiveSound(MyAtomComponentID, bPause);
				}, GET_STATID(STAT_AtomPauseActiveSound));
			}
		}

		BroadcastPlayState();
	}
}

void UAtomComponent::PlaybackCompleted(uint64 AtomComponentID, bool bFailedToStart)
{
	check(IsInAtomThread());

	DECLARE_CYCLE_STAT(TEXT("FGameThreadAtomTask.PlaybackCompleted"), STAT_AtomPlaybackCompleted, STATGROUP_TaskGraphTasks);

	FAtomThread::RunCommandOnGameThread([AtomComponentID, bFailedToStart]()
	{
		if (UAtomComponent* AtomComponent = GetAtomComponentFromID(AtomComponentID))
		{
			AtomComponent->PlaybackCompleted(bFailedToStart);
		}
	}, GET_STATID(STAT_AtomPlaybackCompleted));
}

void UAtomComponent::PlaybackCompleted(bool bFailedToStart)
{
	check(ActiveCount > 0);
	--ActiveCount;

	if (ActiveCount > 0)
	{
		return;
	}

	// Mark inactive before calling destroy to avoid recursion
	SetActiveFlag(false);

	const UWorld* MyWorld = GetWorld();
	if (!bFailedToStart && MyWorld != nullptr && (OnAtomSoundFinished.IsBound() || OnAtomSoundFinishedNative.IsBound()))
	{
		INC_DWORD_STAT(STAT_AtomSoundFinishedDelegatesCalled);
		SCOPE_CYCLE_COUNTER(STAT_AtomSoundFinishedDelegates);

		OnAtomSoundFinished.Broadcast();
		OnAtomSoundFinishedNative.Broadcast(this);
	}

	// Auto destruction is handled via marking object for deletion.
	if (bAutoDestroy)
	{
		DestroyComponent();
	}
	// Otherwise see if we should detach ourself and wait until we're needed again
	else if (bAutoManageAttachment)
	{
		CancelAutoAttachment(true, MyWorld);
	}

	if (bIsPreviewSound)
	{
		ResetParameters();
	}

	BroadcastPlayState();
}

bool UAtomComponent::IsPlaying() const
{
	return IsActive();
}

bool UAtomComponent::IsVirtualized() const
{
	return bIsVirtualized;
}

EAtomComponentPlayState UAtomComponent::GetPlayState() const
{
	UWorld* World = GetWorld();
	if (!IsActive() || !World)
	{
		return EAtomComponentPlayState::Stopped;
	}

	if (bIsPaused)
	{
		return EAtomComponentPlayState::Paused;
	}

	if (bIsFadingOut)
	{
		return EAtomComponentPlayState::FadingOut;
	}

	// Get the current audio time seconds and compare when it started and the fade in duration 
	float CurrentAudioTimeSeconds = World->GetAudioTimeSeconds();
	if (CurrentAudioTimeSeconds - TimeAtomComponentPlayed < FadeInTimeDuration)
	{
		return EAtomComponentPlayState::FadingIn;
	}

	// If we are not in any of the above states we are "playing"
	return EAtomComponentPlayState::Playing;
}

#if WITH_EDITORONLY_DATA
void UAtomComponent::UpdateSpriteTexture()
{
	if (SpriteComponent)
	{
		SpriteComponent->SpriteInfo.Category = TEXT("Sounds");
		SpriteComponent->SpriteInfo.DisplayName = NSLOCTEXT("SpriteCategory", "Sounds", "Sounds");

		if (bAutoActivate)
		{
			SpriteComponent->SetSprite(LoadObject<UTexture2D>(nullptr, TEXT("/Engine/EditorResources/AudioIcons/S_AudioComponent_AutoActivate.S_AudioComponent_AutoActivate")));
		}
		else
		{
			SpriteComponent->SetSprite(LoadObject<UTexture2D>(nullptr, TEXT("/Engine/EditorResources/AudioIcons/S_AudioComponent.S_AudioComponent")));
		}
	}
}
#endif

#if WITH_EDITOR
void UAtomComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (IsActive())
	{
		// If this is an auto destroy component we need to prevent it from being auto-destroyed since we're really just restarting it
		const bool bWasAutoDestroy = bAutoDestroy;
		bAutoDestroy = false;
		Stop();
		bAutoDestroy = bWasAutoDestroy;
		Play();
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UAtomComponent, bCanPlayMultipleInstances))
	{
		GetAtomRuntime()->SetCanHaveMultipleActiveSounds(AtomComponentID, bCanPlayMultipleInstances);
	}

#if WITH_EDITORONLY_DATA
	UpdateSpriteTexture();
#endif

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif // WITH_EDITOR

const FAtomAttenuationSettings* UAtomComponent::GetAttenuationSettingsToApply() const
{
	if (bOverrideAttenuation)
	{
		return &AttenuationOverrides;
	}
	else if (AttenuationSettings)
	{
		return &AttenuationSettings->Attenuation;
	}
	else if (Sound)
	{
		return Sound->GetAttenuationSettingsToApply();
	}
	return nullptr;
}

bool UAtomComponent::BP_GetAttenuationSettingsToApply(FAtomAttenuationSettings& OutAttenuationSettings)
{
	if (const FAtomAttenuationSettings* Settings = GetAttenuationSettingsToApply())
	{
		OutAttenuationSettings = *Settings;
		return true;
	}
	return false;
}

void UAtomComponent::CollectAttenuationShapesForVisualization(TMultiMap<EAtomAttenuationShape, FAtomAttenuationSettings::AttenuationShapeDetails>& ShapeDetailsMap) const
{
	const FAtomAttenuationSettings* AttenuationSettingsToApply = GetAttenuationSettingsToApply();

	if (AttenuationSettingsToApply)
	{
		AttenuationSettingsToApply->CollectAttenuationShapesForVisualization(ShapeDetailsMap);
	}

	// For sound cues we'll dig in and see if we can find any attenuation sound nodes that will affect the settings
	/*USoundCue* SoundCue = Cast<USoundCue>(Sound);
	if (SoundCue)
	{
		TArray<USoundNodeAttenuation*> AttenuationNodes;
		SoundCue->RecursiveFindAttenuation(SoundCue->FirstNode, AttenuationNodes);
		for (int32 NodeIndex = 0; NodeIndex < AttenuationNodes.Num(); ++NodeIndex)
		{
			AttenuationSettingsToApply = AttenuationNodes[NodeIndex]->GetAttenuationSettingsToApply();
			if (AttenuationSettingsToApply)
			{
				AttenuationSettingsToApply->CollectAttenuationShapesForVisualization(ShapeDetailsMap);
			}
		}
	}*/

	/*if (UAtomWaveBank* WaveBank = Cast<UAtomWaveBank>(Sound))
	{
		
	}*/
}

void UAtomComponent::Activate(bool bReset)
{
	if (bReset || ShouldActivate() == true)
	{
		Play();

		if (IsActive())
		{
			OnComponentActivated.Broadcast(this, bReset);
		}
	}
}

void UAtomComponent::Deactivate()
{
	if (ShouldActivate() == false)
	{
		Stop();

		if (!IsActive())
		{
			OnComponentDeactivated.Broadcast(this);
		}
	}
}

void UAtomComponent::SetFadeInComplete()
{
	EAtomComponentPlayState PlayState = GetPlayState();
	if (PlayState != EAtomComponentPlayState::FadingIn)
	{
		BroadcastPlayState();
	}
}

void UAtomComponent::SetIsVirtualized(bool bInIsVirtualized)
{
	if (bIsVirtualized != bInIsVirtualized)
	{
		if (OnAtomSoundVirtualizationChanged.IsBound())
		{
			OnAtomSoundVirtualizationChanged.Broadcast(bInIsVirtualized);
		}

		if (OnAtomSoundVirtualizationChangedNative.IsBound())
		{
			OnAtomSoundVirtualizationChangedNative.Broadcast(this, bInIsVirtualized);
		}
	}

	bIsVirtualized = bInIsVirtualized ? 1 : 0;
}

void UAtomComponent::SetCueBlockIndex(int32 BlockIndex)
{
	if (OnAtomSoundCueBlockIndexChanged.IsBound())
	{
		OnAtomSoundCueBlockIndexChanged.Broadcast(BlockIndex);
	}

	if (OnAtomSoundCueBlockIndexChangedNative.IsBound())
	{
		OnAtomSoundCueBlockIndexChangedNative.Broadcast(this, BlockIndex);
	}

	CueBlockIndex = BlockIndex;
}

void UAtomComponent::SetCueBeatSyncInfo(const FAtomBeatSyncInfo& BeatSyncInfo)
{
	CueBeatSyncInfo = BeatSyncInfo;
}

void UAtomComponent::OnCueBeatSync(const FAtomBeatSyncInfo& BeatSyncInfo)
{
	if (OnAtomSoundCueBeatSync.IsBound())
	{
		OnAtomSoundCueBeatSync.Broadcast(BeatSyncInfo);
	}

	if (OnAtomSoundCueBeatSyncNative.IsBound())
	{
		OnAtomSoundCueBeatSyncNative.Broadcast(this, BeatSyncInfo);
	}
}

void UAtomComponent::OnCueSequencerEvent(const FAtomSequencerEventInfo& EventInfo)
{
	if (OnAtomSoundCueSequencerEvent.IsBound())
	{
		OnAtomSoundCueSequencerEvent.Broadcast(EventInfo);
	}

	if (OnAtomSoundCueSequencerEventNative.IsBound())
	{
		OnAtomSoundCueSequencerEventNative.Broadcast(this, EventInfo);
	}
}

// TODO: try to setup some effect parameter to the ExPlayer
//void UAtomComponent::SetPlaybackParameter(FName InName, USoundWave* InWave)
//{
//	SetObjectParameter(InName, Cast<UObject>(InWave));
//}

void UAtomComponent::SetVolumeMultiplier(const float NewVolumeMultiplier)
{
	VolumeMultiplier = NewVolumeMultiplier;
	VolumeModulationMin = VolumeModulationMax = 1.f;

	if (IsActive())
	{
		if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetVolumeMultiplier"), STAT_AtomSetVolumeMultiplier, STATGROUP_AtomThreadCommands);
			AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [NewVolumeMultiplier](FAtomActiveSound& ActiveSound)
			{
				ActiveSound.SetVolume(NewVolumeMultiplier);
			}, GET_STATID(STAT_AtomSetVolumeMultiplier));
		}
	}
}

void UAtomComponent::SetPitchMultiplier(const float NewPitchMultiplier)
{
	PitchMultiplier = NewPitchMultiplier;
	PitchModulationMin = PitchModulationMax = 1.f;

	if (IsActive())
	{
		if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetPitchMultiplier"), STAT_AtomSetPitchMultiplier, STATGROUP_AtomThreadCommands);
			AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [NewPitchMultiplier](FAtomActiveSound& ActiveSound)
			{
				ActiveSound.SetPitch(NewPitchMultiplier);
			}, GET_STATID(STAT_AtomSetPitchMultiplier));
		}
	}
}

void UAtomComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetLowPassFilterFrequency"), STAT_AtomSetLowPassFilterEnabled, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [InLowPassFilterEnabled](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.bEnableLowPassFilter = InLowPassFilterEnabled;
		}, GET_STATID(STAT_AtomSetLowPassFilterEnabled));
	}
}

void UAtomComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetLowPassFilterFrequency"), STAT_AtomSetLowPassFilterFrequency, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [InLowPassFilterFrequency](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.LowPassFilterFrequency = InLowPassFilterFrequency;
		}, GET_STATID(STAT_AtomSetLowPassFilterFrequency));
	}
}

void UAtomComponent::SetUISound(const bool bInIsUISound)
{
	bIsUISound = bInIsUISound;

	if (IsActive())
	{
		if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetIsUISound"), STAT_AtomSetIsUISound, STATGROUP_AtomThreadCommands);
			AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [bInIsUISound](FAtomActiveSound& ActiveSound)
			{
				ActiveSound.bIsUISound = bInIsUISound;
			}, GET_STATID(STAT_AtomSetIsUISound));
		}
	}
}

void UAtomComponent::AdjustAttenuation(const FAtomAttenuationSettings& InAttenuationSettings)
{
	bOverrideAttenuation = true;
	AttenuationOverrides = InAttenuationSettings;

	if (IsActive())
	{
		if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AdjustAttenuation"), STAT_AtomAdjustAttenuation, STATGROUP_AtomThreadCommands);
			AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [InAttenuationSettings](FAtomActiveSound& ActiveSound)
			{
				ActiveSound.AttenuationSettings = InAttenuationSettings;
			}, GET_STATID(STAT_AtomAdjustAttenuation));
		}
	}
}

void UAtomComponent::SetRackSend(UAtomRackBase* Rack/*, float SendLevel*/)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		FAtomSoundToRackSend AtomRackSendInfo;
		AtomRackSendInfo.Rack = Rack;
		AtomRackSendInfo.SendLevel = 1.0f;// SendLevel; not yet available

		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomSetRackSend"), STAT_SetRackSend, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [AtomRackSendInfo](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.SetAtomRackSend(AtomRackSendInfo);
		}, GET_STATID(STAT_SetRackSend));
	}
}

void UAtomComponent::SetBusSendEffectInternal(UAtomBus* InAtomBus, float SendLevel)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		FAtomSoundToBusSend AtomBusSendInfo;
		AtomBusSendInfo.Bus = InAtomBus;
		AtomBusSendInfo.SendLevel = SendLevel;

		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomSetBusSend"), STAT_AtomSetBusSend, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [AtomBusSendInfo](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.SetAtomBusSend(AtomBusSendInfo);
		}, GET_STATID(STAT_AtomSetBusSend));
	}
}

void UAtomComponent::SetAtomBusSendPreEffect(UAtomBus* AtomBus, float AtomBusSendLevel)
{
	SetBusSendEffectInternal(AtomBus, AtomBusSendLevel);
}

//void UAtomComponent::SetAtomBusSendPostEffect(UAtomBus* AtomBus, float AtomBusSendLevel)
//{
//	// atom seems not able to pass the effect chain of a bus
//	//SetBusSendEffectInternal(nullptr, AudioBus, AudioBusSendLevel);
//}

void UAtomComponent::SetModulationRouting(const TSet<UAtomModulatorBase*>& Modulators, const EAtomModulationDestination Destination, const EAtomModulationRouting RoutingMethod)
{
	FAtomRuntime* AtomRuntime = GetAtomRuntime();
	if (!AtomRuntime)
	{
		return;
	}

	switch (Destination)
	{
	case EAtomModulationDestination::Volume:
		ModulationRouting.VolumeRouting = RoutingMethod;
		ModulationRouting.VolumeModulation.Modulators = Modulators;
		break;
	case EAtomModulationDestination::Pitch:
		ModulationRouting.PitchRouting = RoutingMethod;
		ModulationRouting.PitchModulation.Modulators = Modulators;
		break;
	case EAtomModulationDestination::Lowpass:
		ModulationRouting.LowpassRouting = RoutingMethod;
		ModulationRouting.LowpassModulation.Modulators = Modulators;
		break;
	case EAtomModulationDestination::Highpass:
		ModulationRouting.HighpassRouting = RoutingMethod;
		ModulationRouting.HighpassModulation.Modulators = Modulators;
		break;
	default:
	{
		static_assert(static_cast<int32>(EAtomModulationDestination::Count) == 4, "Possible missing ELiteralType case coverage.");
		ensureMsgf(false, TEXT("Failed to set input node default: Literal type not supported"));
		return;
	}
	}

	// Tell the active sounds on the component to use the new Modulation Routing
	AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [NewRouting = ModulationRouting](FAtomActiveSound& ActiveSound)
	{
		ActiveSound.SetNewModulationRouting(NewRouting);
	});
}

TSet<UAtomModulatorBase*> UAtomComponent::GetModulators(const EAtomModulationDestination Destination)
{
	FAtomRuntime* AtomRuntime = GetAtomRuntime();
	if (!AtomRuntime)
	{
		return TSet<UAtomModulatorBase*>();
	}

	const TSet<TObjectPtr<UAtomModulatorBase>>* ModulatorSet = nullptr;

	switch (Destination)
	{
	case EAtomModulationDestination::Volume:
		ModulatorSet = &ModulationRouting.VolumeModulation.Modulators;
		break;
	case EAtomModulationDestination::Pitch:
		ModulatorSet = &ModulationRouting.PitchModulation.Modulators;
		break;
	case EAtomModulationDestination::Lowpass:
		ModulatorSet = &ModulationRouting.LowpassModulation.Modulators;
		break;
	case EAtomModulationDestination::Highpass:
		ModulatorSet = &ModulationRouting.HighpassModulation.Modulators;
		break;
	default:
	{
		static_assert(static_cast<int32>(EAtomModulationDestination::Count) == 4, "Possible missing ELiteralType case coverage.");
		ensureMsgf(false, TEXT("Failed to set input node default: Literal type not supported"));
		return TSet<UAtomModulatorBase*>();
	}
	}

	check(ModulatorSet);

	TSet<UAtomModulatorBase*> Modulators;
	for (const TObjectPtr<UAtomModulatorBase>& Modulator : *ModulatorSet)
	{
		Modulators.Add(Modulator.Get());
	}

	return Modulators;
}

void UAtomComponent::SetMultiplePositions(TArray<FTransform> Positions, EAtomMultiPositionType MultiPositionType)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomSetMultiplePositions"), STAT_AtomSetMultiplePositions, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [Positions, MultiPositionType](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.SetMultiplePositions(Positions, MultiPositionType);
		}, GET_STATID(STAT_AtomSetMultiplePositions));
	}
}

void UAtomComponent::SetAisacControlValue(FAtomAisacControl AisacControl, float Value)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		FAtomAisacControlParameterInfo ParamInfo;
		ParamInfo.Control = AisacControl;
		ParamInfo.Value = Value;

		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomSetAisacControlValue"), STAT_AtomSetAisacControlValue, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [ParamInfo](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.SetAisacControl(ParamInfo);
		}, GET_STATID(STAT_AtomSetAisacControlValue));
	}
}

void UAtomComponent::SetCueSelectorLabel(FName SelectorName, FName SelectorLabel)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		FAtomSelectorParam SelectorParam;
		SelectorParam.Name = SelectorName;
		SelectorParam.Label = SelectorLabel;

		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomSetCueSelectorLabel"), STAT_AtomSetCueSelectorLabel, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [SelectorParam](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.SetCueSelectorLabel(SelectorParam);
		}, GET_STATID(STAT_AtomSetCueSelectorLabel));
	}
}

void UAtomComponent::RemoveCueSelectorLabel(FName SelectorName)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		FAtomSelectorParam SelectorParam;
		SelectorParam.Name = SelectorName;
		SelectorParam.Label = NAME_None;

		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomRemoveCueSelectorLabel"), STAT_AtomRemoveCueSelectorLabel, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [SelectorParam](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.RemoveCueSelectorLabel(SelectorParam);
		}, GET_STATID(STAT_AtomRemoveCueSelectorLabel));
	}
}

void UAtomComponent::ClearAllCueSelectorLabels()
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomClearAllCueSelectorLabels"), STAT_AtomClearAllCueSelectorLabels, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.ClearAllCueSelectorLabels();
		}, GET_STATID(STAT_AtomClearAllCueSelectorLabels));
	}
}

void UAtomComponent::SetCueNextBlockIndex(int32 BlockIndex)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomSetCueNextBlockIndex"), STAT_AtomSetCueNextBlockIndex, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [BlockIndex](FAtomActiveSound& ActiveSound)
		{
			ActiveSound.SetCueNextBlockIndex(BlockIndex);
		}, GET_STATID(STAT_AtomSetCueNextBlockIndex));
	}
}

int32 UAtomComponent::GetCueBlockIndex() const
{
	return CueBlockIndex;
}

const FAtomBeatSyncInfo& UAtomComponent::GetCueBeatSyncInfo() const
{
	return CueBeatSyncInfo;
}

void UAtomComponent::SetCueBeatSyncOffset(int32 TimeOffset)
{
	if (FAtomRuntime* AtomRuntime = GetAtomRuntime())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AtomSetCueBeatSyncOffset"), STAT_AtomSetCueBeatSyncOffset, STATGROUP_AtomThreadCommands);
		AtomRuntime->SendCommandToActiveSounds(AtomComponentID, [TimeOffset](FAtomActiveSound& ActiveSound)
			{
				ActiveSound.SetCueBeatSyncOffset(TimeOffset);
			}, GET_STATID(STAT_AtomSetCueBeatSyncOffset));
	}
}

void UAtomComponent::SetPlaybackTimes(const TMap<uint32, float>& InSoundPlaybackTimes)
{
	// Reset the playback times for everything in case the playback instance stops and is not updated
	for (auto& Elem : SoundPlaybackTimes)
	{
		Elem.Value.PlaybackTime = 0.0f;
	}

	for (auto& Elem : InSoundPlaybackTimes)
	{
		uint32 ObjectId = Elem.Key;
		FAtomSoundPlaybackTimeData* PlaybackTimeData = SoundPlaybackTimes.Find(ObjectId);
		if (PlaybackTimeData)
		{
			PlaybackTimeData->PlaybackTime = FMath::Max(Elem.Value - AtomBakedAnalysisTimeShiftCVar, 0.0f);
		}
	}
}

#undef LOCTEXT_NAMESPACE
