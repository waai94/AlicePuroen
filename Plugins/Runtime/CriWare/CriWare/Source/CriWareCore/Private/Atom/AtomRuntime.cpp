﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomRuntime.cpp
 *
 ****************************************************************************/

#include "Atom/AtomRuntime.h"

#include "Engine/World.h"
#include "Engine/Engine.h"
#include "EngineGlobals.h"
#include "GameFramework/WorldSettings.h"
#include "Misc/App.h"
#include "Misc/OutputDeviceArchiveWrapper.h"
#include "Misc/Paths.h"

#include "CriWareCorePrivate.h"
#include "CriWareCoreSettings.h"
#include "CriWareCoreModule.h"
#include "CriWareUtils.h"
#include "CriWareLLM.h"
#include "CriWareTrace.h"
#include "CriWareFileIo.h"
#include "CriWareMemory.h"
#include "Atom/AtomThread.h"
#include "Atom/AtomConfig.h"
#include "Atom/AtomRack.h"
#include "Atom/AtomBus.h"
#include "Atom/AtomBusEffectPreset.h"
#include "Atom/AtomActiveSound.h"
#include "Atom/AtomComponent.h"
#include "Atom/AtomWaveBank.h"
#include "Atom/AtomWaveBankResource.h"
#include "Atom/AtomSoundWave.h"
#include "Atom/AtomCueSheet.h"
#include "Atom/AtomCueSheetResource.h"
#include "Atom/AtomSoundCue.h"
#include "Atom/AtomAttenuation.h"
#include "Atom/AtomConcurrency.h"
#include "Atom/AtomPluginUtilities.h"
#include "Atom/Interfaces/IAtomActiveSoundUpdate.h"
#include "Atom/Mixer/AtomMixerSourceManager.h"
#include "Atom/Mixer/AtomMixerSourceVoice.h"
#include "Atom/Mixer/AtomMixerSource.h" // remove?  -should be controlled by manager now
#include "Atom/Modulation/AtomModulationSystem.h"
#include "Atom/AtomDebug.h"
#include "Atom/Profiling/AtomMonitor.h"

#if WITH_EDITOR
#include "CriWareCoreEditorModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"
#endif

#define ATOM_TRACE_ACTIVESOUND 0

 // Defines the "Atom" category in the CSV profiler.
 // This should only be defined here. Modules who wish to use this category should contain the line
 // 		CSV_DECLARE_CATEGORY_MODULE_EXTERN(CRIWARECORE_API, Atom);
 //
CSV_DEFINE_CATEGORY_MODULE(CRIWARECORE_API, Atom, false);

// dev debug defines for output log
 //#define ATOM_SOUND_DEV_DEBUG
//#define ATOM_SOUND_STATUS_DEBUG
//#define ATOM_SOUND_INIT_DEBUG

// Console Variables
/*static int32 AudioChannelCountCVar = 0;
FAutoConsoleVariableRef CVarSetAudioChannelCount(
	TEXT("au.SetAudioChannelCount"),
	AudioChannelCountCVar,
	TEXT("Changes the audio channel count. Max value is clamped to the MaxChannelCount the audio engine was initialize with.\n")
	TEXT("0: Disable, >0: Enable"),
	ECVF_Default);*/

/*static float AudioChannelCountScaleCVar = 1.0f;
FAutoConsoleVariableRef CVarSetAudioChannelScaleCount(
	TEXT("au.SetAudioChannelScaleCount"),
	AudioChannelCountScaleCVar,
	TEXT("Changes the audio channel count by percentage.\n"),
	ECVF_Default);*/

/*static int32 DisableStoppingVoicesCvar = 0;
FAutoConsoleVariableRef CVarDisableStoppingVoices(
	TEXT("au.DisableStoppingVoices"),
	DisableStoppingVoicesCvar,
	TEXT("Disables stopping voices feature.\n")
	TEXT("0: Not Disabled, 1: Disabled"),
	ECVF_Default);*/

/*static int32 ForceRealtimeDecompressionCvar = 0;
FAutoConsoleVariableRef CVarForceRealtimeDecompression(
	TEXT("au.ForceRealtimeDecompression"),
	ForceRealtimeDecompressionCvar,
	TEXT("When set to 1, this deliberately ensures that all audio assets are decompressed as they play, rather than fully on load.\n")
	TEXT("0: Allow full decompression on load, 1: force realtime decompression."),
	ECVF_Default);*/

/*static int32 DisableAppVolumeCvar = 0;
FAutoConsoleVariableRef CVarDisableAppVolume(
	TEXT("au.DisableAppVolume"),
	DisableAppVolumeCvar,
	TEXT("Disables application volume when set to 1.\n")
	TEXT("0: App volume enabled, 1: App volume disabled"),
	ECVF_Default);*/

/*static int32 DisableAutomaticPrecacheCvar = 0;
FAutoConsoleVariableRef CVarDisableAutomaticPrecache(
	TEXT("au.DisableAutomaticPrecache"),
	DisableAutomaticPrecacheCvar,
	TEXT("When set to 1, this disables precaching on load or startup, it will only precache synchronously when playing.\n")
	TEXT("0: Use normal precaching logic, 1: disables all precaching except for synchronous calls."),
	ECVF_Default);*/

/*static float DecompressionThresholdCvar = 0.0f;
FAutoConsoleVariableRef CVarDecompressionThreshold(
	TEXT("au.DecompressionThreshold"),
	DecompressionThresholdCvar,
	TEXT("If non-zero, overrides the decompression threshold set in either the sound group or the platform's runtime settings.\n")
	TEXT("Value: Maximum duration we should fully decompress, in seconds."),
	ECVF_Default);*/

/*static int32 RealtimeDecompressZeroDurationSoundsCvar = 0;
FAutoConsoleVariableRef CVarForceRealtimeDecompressOnZeroDuration(
	TEXT("au.RealtimeDecompressZeroDurationSounds"),
	RealtimeDecompressZeroDurationSoundsCvar,
	TEXT("When set to 1, we will fallback to realtime decoding any sound waves with an invalid duration..\n")
	TEXT("0: Fully decompress sounds with a duration of 0, 1: realtime decompress sounds with a duration of 0."),
	ECVF_Default);*/

/*static int32 WaitForSoundWaveToLoadCvar = 1;
FAutoConsoleVariableRef CVarWaitForSoundWaveToLoad(
	TEXT("au.WaitForSoundWaveToLoad"),
	WaitForSoundWaveToLoadCvar,
	TEXT("When set to 1, we will refuse to play any sound unless the USoundWave has been loaded.\n")
	TEXT("0: Attempt to play back, 1: Wait for load."),
	ECVF_Default);*/

/*static int32 BakedAnalysisEnabledCVar = 1;
FAutoConsoleVariableRef CVarBakedAnalysisEnabledCVar(
	TEXT("au.BakedAnalysisEnabled"),
	BakedAnalysisEnabledCVar,
	TEXT("Enables or disables queries to baked analysis from audio component.\n"),
	ECVF_Default);*/

/*static int32 NumPrecacheFramesCvar = 0;
FAutoConsoleVariableRef CVarNumPrecacheFrames(
	TEXT("au.NumPrecacheFrames"),
	NumPrecacheFramesCvar,
	TEXT("When set to > 0, will use that value as the number of frames to precache audio buffers with.\n")
	TEXT("0: Use default value for precache frames, >0: Number of frames to precache."),
	ECVF_Default);*/

static float AtomSoundDistanceOptimizationLengthCVar = 1.0f;
FAutoConsoleVariableRef CVarAtomSoundDistanceOptimizationLength(
	TEXT("atom.AtomSoundDistanceOptimizationLength"),
	AtomSoundDistanceOptimizationLengthCVar,
	TEXT("The maximum duration a sound must be in order to be a candidate to be culled due to one-shot distance optimization.\n"),
	ECVF_Default);

static int32 EnableAtomBinauralAudioForAllSpatialSoundsCVar = 0;
FAutoConsoleVariableRef CVarEnableAtomBinauralAudioForAllSpatialSounds(
	TEXT("atom.EnableBinauralAudioForAllSpatialSounds"),
	EnableAtomBinauralAudioForAllSpatialSoundsCVar,
	TEXT("Toggles binaural audio rendering for all spatial sounds if binaural rendering is available.\n"),
	ECVF_Default);

static int32 DisableAtomBinauralSpatializationCVar = 0;
FAutoConsoleVariableRef CVarDisableAtomBinauralSpatialization(
	TEXT("atom.DisableBinauralSpatialization"),
	DisableAtomBinauralSpatializationCVar,
	TEXT("Disables binaural spatialization.\n"),
	ECVF_Default);

static int32 FlushAtomRenderThreadOnGCCVar = 0;
FAutoConsoleVariableRef CVarFlushAtomRenderThreadOnGC(
	TEXT("atom.FlushAtomRenderThreadOnGC"),
	FlushAtomRenderThreadOnGCCVar,
	TEXT("When set to 1, every time the GC runs, we flush all pending Atom render thread commands.\n"),
	ECVF_Default);

static float AtomMaxWorldDistanceCVar = UE_OLD_WORLD_MAX;
FAutoConsoleVariableRef CVarSetAtomMaxDistance(
	TEXT("atom.MaxWorldDistance"),
	AtomMaxWorldDistanceCVar,
	TEXT("Maximum world distance used in audio-related calculations (eg. attenuation).\n"),
	ECVF_Default);

// mixing

static int32 AtomMixerPatchBufferBlocks = 3;
FAutoConsoleVariableRef CVarAtomMixerPatchBufferBlocks(
	TEXT("atom.PatchBufferBlocks"),
	AtomMixerPatchBufferBlocks,
	TEXT("Determines the number of blocks that fit in a patch buffer."),
	ECVF_Default);

namespace AtomRuntimeUtils
{
	using FVirtualLoopPair = TPair<FAtomActiveSound*, FAtomVirtualLoop>;
}

namespace FAtomRuntime_SDK
{
	extern "C" CriSint32 CRIAPI OnAtomExBeatSync(void* Obj, const CriAtomExBeatSyncInfo* BeatSyncInfo)
	{
		if (FAtomRuntime* Self = static_cast<FAtomRuntime*>(Obj))
		{
			Self->HandleSDKOnAtomExBeatSync(BeatSyncInfo);
		}
		return 0; // unused
	}

	extern "C" CriSint32 CRIAPI OnAtomExSequencerEvent(void* Obj, const CriAtomExSequenceEventInfo* EventInfo)
	{
		if (FAtomRuntime* Self = static_cast<FAtomRuntime*>(Obj))
		{
			Self->HandleSDKOnAtomExSequencerEvent(EventInfo);
		}
		return 0; // unused
	}
}

FAtomRuntime::FAtomRuntime(ICriWarePlatformAtom* InPlatformAtom)
	: AtomConfig(nullptr)
	, PlatformAtom(InPlatformAtom)
	, DbasMaxBPS(0)
	, DbasMaxStreams(0)
	// mixer
	, GameOrAtomThreadID(INDEX_NONE)
	, ASRThreadID(INDEX_NONE)
	//~
	, ConcurrencyManager(this)
	, MasterRack(nullptr)
	, SpatializationRack(nullptr)
	, RuntimeID(static_cast<FAtomRuntimeId>(INDEX_NONE))
	, bIsRuntimeMuted(false)
	, bIsInitialized(false)
	, bIsAtomLibraryInitialized(false)
	, bIsMasterRackInitialized(false)
	, bHRTFEnabledForAll(false)
	, bHRTFDisabled(false)
	, bGameWasTicking(true)
	, bUseMixerVoiceManagement(true)
	, bUseUnrealSoundRenderer(false)
	, bUseAttenuationForNonGameWorlds(false)
	, bSourceDataOverrideInterfaceEnabled(false)
	, bManaRuntimeInterfaceEnabled(false)
	, CurrentTick(0)
	, AtomClock(0.0)
	, RuntimeDeltaTime(0.0f)
	, LastUpdateTime(FPlatformTime::Seconds())
	, OneShotCount(0)
	, TransientPrimaryVolume(1.0f)
	, PrimaryVolume(1.0f)
	, GlobalPitchScale(1.0f)
	, GlobalMinPitch(0.4f)
	, GlobalMaxPitch(2.0f)
#if !UE_BUILD_SHIPPING
	, TestAtomComponent(nullptr)
#endif
{
	SourceManager = MakeUnique<Atom::FAtomSourceManager>(this);

	ModulationSystem = MakeShared<FAtomModulationSystem>();
}

FAtomRuntime::~FAtomRuntime()
{

}

bool FAtomRuntime::Init(FAtomRuntimeId InRuntimeID)
{
	SCOPED_BOOT_TIMING("FAtomRuntime::Init");

	LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMisc);

	if (bIsInitialized)
	{
		return true;
	}

	if (InRuntimeID == INDEX_NONE)
	{
		return false;
	}

	RuntimeID = InRuntimeID;

	if (ModulationSystem.IsValid())
	{
		ModulationSystem->Initialize(InRuntimeID);
	}

	// Parses sound categories.
	InitSoundClasses();

	bIsInitialized = true;

	RuntimeCreatedHandle = FAtomRuntimeManagerDelegates::OnAtomRuntimeCreated.AddRaw(this, &FAtomRuntime::OnRuntimeCreated);
	RuntimeDestroyedHandle = FAtomRuntimeManagerDelegates::OnAtomRuntimeDestroyed.AddRaw(this, &FAtomRuntime::OnRuntimeDestroyed);

	//FCoreUObjectDelegates::GetPreGarbageCollectDelegate().AddRaw(this, &FAtomRuntime::OnPreGarbageCollect);
	//FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy.AddRaw(this, &FAtomRuntime::OnPreGarbageCollect);

	// Plugins

	// Get the requested SourceData plugin and set it up.
	IAtomSourceDataOverrideFactory* SourceDataOverridePluginFactory = AtomPluginUtilities::GetDesiredSourceDataOverridePlugin();
	if (SourceDataOverridePluginFactory)
	{
		SourceDataOverridePluginInterface = SourceDataOverridePluginFactory->CreateNewSourceDataOverridePlugin(this);
		bSourceDataOverrideInterfaceEnabled = true;
		UE_LOG(LogCriWareAtom, Display, TEXT("Atom Source Data Override Plugin: %s"), *(SourceDataOverridePluginFactory->GetDisplayName()));
	}

	// Get the requested Mana plugin and set it up.
	IManaRuntimeFactory* ManaRuntimePluginFactory = AtomPluginUtilities::GetDesiredManaRuntimePlugin();
	if (ManaRuntimePluginFactory)
	{
		ManaRuntimeInterface = ManaRuntimePluginFactory->CreateNewManaRuntimePlugin(this);
		bManaRuntimeInterfaceEnabled = true;
		UE_LOG(LogCriWareAtom, Display, TEXT("Mana Runtime Plugin: %s"), *(ManaRuntimePluginFactory->GetDisplayName().ToString()));
	}

	// Get all 3rd party plugin and set it up.
	TArray<IAtomRuntimePluginFactory*> RuntimePluginFactories = AtomPluginUtilities::GetAllDesiredAtomRuntimePlugins();
	for (IAtomRuntimePluginFactory* RuntimePluginFactory : RuntimePluginFactories)
	{
		RuntimePluginInterfaces.Add(RuntimePluginFactory->CreateNewRuntimePlugin(this));
		UE_LOG(LogCriWareAtom, Display, TEXT("Atom Runtime Plugin: %s"), *(RuntimePluginFactory->GetDisplayName()));
	}

	UE_LOG(LogCriWareAtom, Log, TEXT("FAtomRuntime initialized."));

	return true;
}

void FAtomRuntime::OnRuntimeCreated(FAtomRuntimeId InRuntimeID)
{
	if (InRuntimeID == RuntimeID)
	{
		InitializeSubsystemCollection();
		FAtomRuntimeManagerDelegates::OnAtomRuntimeCreated.Remove(RuntimeCreatedHandle);
	}
}

void FAtomRuntime::OnRuntimeDestroyed(FAtomRuntimeId InRuntimeID)
{
	if (InRuntimeID == RuntimeID)
	{
		Deinitialize();
		FAtomRuntimeManagerDelegates::OnAtomRuntimeDestroyed.Remove(RuntimeDestroyedHandle);
	}
}

/*void FAtomRuntime::OnPreGarbageCollect()
{
	if (FlushAtomRenderThreadOnGCCVar)
	{
		FlushAtomRenderingCommands();
	}
}*/

void FAtomRuntime::Deinitialize()
{
	SubsystemCollection.Deinitialize();
	SubsystemCollectionRoot.Reset();
}

void FAtomRuntime::Teardown()
{
	if (bIsInitialized)
	{
		Flush(nullptr);

		Deactivate();

		// Plugins

		// (Source Data Override)
		if (SourceDataOverridePluginInterface.IsValid())
		{
			SourceDataOverridePluginInterface.Reset();
			bSourceDataOverrideInterfaceEnabled = false;
		}

		// (Mana)
		if (ManaRuntimeInterface.IsValid())
		{
			ManaRuntimeInterface.Reset();
			bManaRuntimeInterfaceEnabled = false;
		}

		// (Runtime Plugins)
		RuntimePluginInterfaces.Empty();

		bIsInitialized = false;
	}
}

void FAtomRuntime::Activate(bool /*bFadeIn*/ /* = false */)
{
	if (!bIsAtomLibraryInitialized)
	{
		FAtomRuntimeManagerDelegates::OnAtomRuntimeWillActivate.Broadcast(RuntimeID);

		InitializeAtomLibrary();

		FAtomRuntimeManagerDelegates::OnAtomRuntimeActivated.Broadcast(RuntimeID);
	}
}

void FAtomRuntime::Deactivate(bool /*bFadeOut*/ /* = false */)
{
	if (bIsAtomLibraryInitialized)
	{
		FAtomRuntimeManagerDelegates::OnAtomRuntimeWillDeactivate.Broadcast(RuntimeID);

		// unload used resource

		FinalizeAtomLibrary();

		FAtomRuntimeManagerDelegates::OnAtomRuntimeDeactivated.Broadcast(RuntimeID);
	}
}

bool FAtomRuntime::IsActive() const
{
	return bIsAtomLibraryInitialized;
}

void FAtomRuntime::UpdateReferencedSounds()
{
	{
		FScopeLock ReferencedSoundLock(&ReferencedSoundCriticalSection);

		for (UAtomSoundBase* Sound : ReferencedSounds_AtomThread)
		{
			ReferencedSounds.AddUnique(Sound);
		}

		ReferencedSounds_AtomThread.Reset();
	}

	// new 
	// this will help to know if a sound used or not and let unload acb/wave bank when all inner sounds are not used.

	// On game thread, look through registered sounds and remove if we finished precaching (and audio decompressor is cleaned up)
	// ReferencedSoundWaves is used to make sure GC doesn't run on any sound waves that are actively pre-caching within an async task.
	// Sounds may be loaded, kick off an async task to decompress, but never actually try to play, so GC can reclaim these while precaches are in-flight.
	// We are also tracking when a sound wave is actively being used to generate audio in the audio render to prevent GC from happening to sounds till being used in the audio renderer.
	for (int32 Index = ReferencedSounds.Num() - 1; Index >= 0; --Index)
	{
		UAtomSoundBase* Sound = ReferencedSounds[Index];
		bool bRemove = true;
		// If this is null that means it was nulled out in AddReferencedObjects via mark pending kill
		if (Sound)
		{
			//const bool bIsPrecacheDone = (Wave->GetPrecacheState() == ESoundWavePrecacheState::Done);
			//const bool bIsGeneratingAudio = Sound->IsGeneratingAudio();

			//if (/*!bIsPrecacheDone ||*/ bIsGeneratingAudio)
			//{
			//	bRemove = false;
			//}
		}

		if (bRemove)
		{
			ReferencedSounds.RemoveAtSwap(Index, 1, false);
		}
	}
}

void FAtomRuntime::Update(bool bGameTicking)
{
	LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMisc)

	if (IsInGameThread())
	{
		UpdateGameThread();

		// Make sure our referenced sounds are up-to-date
		UpdateReferencedSounds();
	}

	if (!IsInAtomThread())
	{
		check(IsInGameThread());

		FAtomRuntime* AtomRuntime = this;
		FAtomThread::RunCommandOnAtomThread([AtomRuntime, bGameTicking]()
		{
			AtomRuntime->Update(bGameTicking);
		});

		// We process all enqueued commands on the atom device update
		FAtomThread::ProcessAllCommands();

		return;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_Update);

	DECLARE_CYCLE_STAT(TEXT("FAtomRuntime.UpdateTime"), STAT_AtomUpdateTime, STATGROUP_AtomThreadCommands);
	FScopeCycleCounter AtomUpdateTimeCounter(GET_STATID(STAT_AtomUpdateTime));

	// Start a new frame
	CurrentTick++;

	if (bIsAtomLibraryInitialized)
	{
		// Update timer
		UpdateRuntimeDeltaTime();

		// Update virtualized sounds
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_UpdateVirtualLoops);
			// Update which loops should re-trigger due to coming back into proximity
			// or allowed by concurrency re-evaluating in context of other sounds stopping (signedl by )
			const bool bForceUpdate = false;
			UpdateVirtualLoops(bForceUpdate);
		}

		// Update bus effect parameters
		UpdateBusEffectParameters();

		// TODO: more precise and upated by native atom render loop
		// Notify modulation interface that we are beginning to update
		if (ModulationSystem.IsValid())
		{
			ModulationSystem->ProcessModulators(GetRuntimeDeltaTime());
		}

		// Handle Pause
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_HandlePause);

			// Handle pause/unpause for the game and editor.
			HandlePause(bGameTicking);
		}

		// Update Audio Volume
		//UpdateAudioVolumeEffects();
		for (FAtomListener& Listener : Listeners)
		{
			Listener.Update();
		}

		// Update subsystems
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_UpdateAtomEngineSubsystems);

			// Updates our Atom engine subsystems 
			UpdateAtomEngineSubsystems();
		}

		// show a debug system
#if ENABLE_ATOM_DEBUG
		if (GCriWare)
		{
			if (FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager())
			{
				TArray<UWorld*> Worlds = RuntimeManager->GetWorldsUsingAtomRuntime(RuntimeID);
				for (UWorld* World : Worlds)
				{
					if (World)
					{
						Atom::FAtomDebugger::DrawDebugInfo(*World, Listeners);
					}
				}
			}
		}
#endif // ENABLE_ATOM_DEBUG

		// Gets the current state of the sound categories
		UpdateSoundClassProperties(GetRuntimeDeltaTime());

		// Set looping ActiveSounds that are out-of-range to virtual and add to stop
		VirtualizeInactiveLoops();

		// Update sounds to stop or stopping
		ProcessingPendingActiveSoundStops();

		// Update listener transform
		if (Listeners.Num() != InverseListenerTransforms.Num())
		{
			InverseListenerTransforms.SetNum(Listeners.Num());
		}

		for (int32 ListenerIndex = 0; ListenerIndex < Listeners.Num(); ++ListenerIndex)
		{
			// Caches the matrix used to transform a sounds position into local space so we can just look
			// at the Y component after normalization to determine spatialization.
			const FAtomListener& Listener = Listeners[ListenerIndex];
			FMatrix& InverseTransform = InverseListenerTransforms[ListenerIndex];
			
			const FVector Up = Listener.GetUp();
			const FVector Right = Listener.GetFront();
			InverseTransform = FMatrix(Up, Right, Up ^ Right, Listener.Transform.GetTranslation()).Inverse();
			ensure(!InverseTransform.ContainsNaN());
		}

		int32 FirstActiveIndex = INDEX_NONE;

		// Update active sounds 
		if (Sources.Num())
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_UpdateSources);

			// Kill any sources that have finished
			for (int32 SourceIndex = 0; SourceIndex < Sources.Num(); SourceIndex++)
			{
				// Source has finished playing (it's one shot)
				if (Sources[SourceIndex]->IsFinished())
				{
					Sources[SourceIndex]->Stop();
				}
			}

			// Poll Atom components for active playback instances
			ActivePlaybackInstances.Reset();
			FirstActiveIndex = GetSortedActivePlaybackInstances(ActivePlaybackInstances, (bGameTicking ? ESortedActivePlaybackGetType::FullUpdate : ESortedActivePlaybackGetType::PausedUpdate));

			// Stop sources that need to be stopped, and touch the ones that need to be kept alive
			StopSources(ActivePlaybackInstances, FirstActiveIndex);

			// Start and/or update any sources that need to play or are playing
			StartSources(ActivePlaybackInstances, FirstActiveIndex, bGameTicking);

			// clean up removed unpooled sources (like external sources)
			if (RemovedSources.Num())
			{
				for (int32 SourceIndex = 0; SourceIndex < RemovedSources.Num(); SourceIndex++)
				{
					delete RemovedSources[SourceIndex];
				}
				RemovedSources.Reset();
			}

			// Check which sounds are active from these wave instances and update passive SoundMixes
			//UpdatePassiveSoundMixModifiers(ActiveWaveInstances, FirstActiveIndex);  // -> relace with Modulation system

			// If not paused, update the playback time of the active sounds after we've processed passive mix modifiers
			// Note that for sounds which play while paused, this will result in longer active sound playback times, which will be ok. If we update the
			// active sound is updated while paused (for a long time), most sounds will be stopped when unpaused.
			UpdateActiveSoundPlaybackTime(bGameTicking);

			//const int32 Channels = GetMaxChannels();
			SET_DWORD_STAT(STAT_AtomPlaybackInstances, ActivePlaybackInstances.Num());
			SET_DWORD_STAT(STAT_AtomSources, Sources.Num() - FreeSources.Num());
			//SET_DWORD_STAT(STAT_WavesDroppedDueToPriority, FMath::Max(ActivePlaybackInstances.Num() - Sources.Num(), 0));
			SET_DWORD_STAT(STAT_AtomActiveSounds, ActiveSounds.Num());
			SET_DWORD_STAT(STAT_AtomVirtualLoops, VirtualLoops.Num());
			//SET_DWORD_STAT(STAT_AtomMaxChannels, Channels);
			//SET_DWORD_STAT(STAT_AtomMaxStoppingSources, NumStoppingSources);
		}

		// update ASR
		{
			UpdateAtomSoundRender();
		}

		// now let the atom lib platform perform anything it needs to handle
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_UpdateAtomLibrary)
			UpdateAtomLibrary();
		}

		// Update mana plugin
		if (ManaRuntimeInterface.IsValid())
		{
			ManaRuntimeInterface->ProcessPlugin(RuntimeDeltaTime);
		}

		// Update runtime plugins
		for (auto& RuntimePluginInterface : RuntimePluginInterfaces)
		{
			if (RuntimePluginInterface.IsValid())
			{
				RuntimePluginInterface->ProcessPlugin(RuntimeDeltaTime);
			}
		}

		// send any needed information back to the game thread
		SendUpdateResultsToGameThread(FirstActiveIndex);

		// update any profiling tools
		UpdateProfilers();
	}
}

void FAtomRuntime::UpdateGameThread()
{
	LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer)

	// Pump our command queue sending commands to the game thread
	PumpGameThreadCommandQueue();
}

void FAtomRuntime::UpdateAtomLibrary()
{
	// Execute Atom main
	FCriWareApi::criAtomEx_ExecuteMain();
}

void FAtomRuntime::Suspend(bool bGameTicking)
{
	HandlePause(bGameTicking, true);
}

void FAtomRuntime::Flush(UWorld* WorldToFlush/*, bool bClearActivatedReverb*/)
{
	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.Flush"), STAT_AtomFlush, STATGROUP_AtomThreadCommands);

		FAtomRuntime* AtomRuntime = this;
		FAtomThread::RunCommandOnAtomThread([AtomRuntime, WorldToFlush]()
		{
			AtomRuntime->Flush(WorldToFlush);
		}, GET_STATID(STAT_AtomFlush));

		FAtomCommandFence AtomFence;
		AtomFence.BeginFence();
		AtomFence.Wait();

		// Clear the GameThread cache of the listener
		ListenerProxies.Reset();
		ListenerProxies.AddDefaulted();

		return;
	}

	/*for (int32 i = PrecachingSoundWaves.Num() - 1; i >= 0; --i)
	{
		USoundWave* Wave = PrecachingSoundWaves[i];
		if (Wave->CleanupDecompressor(true))
		{
			PrecachingSoundWaves.RemoveAtSwap(i, 1, false);
		}
	}*/

	// Do fadeout when flushing the runtime.
	if (WorldToFlush == nullptr)
	{
		FadeOut();
	}

	// Stop all Atom components attached to the scene
	bool bFoundIgnoredComponent = false;
	for (int32 Index = ActiveSounds.Num() - 1; Index >= 0; --Index)
	{
		FAtomActiveSound* ActiveSound = ActiveSounds[Index];
		// if we are in the editor we want to always flush the ActiveSounds
		if (WorldToFlush && ActiveSound->bIgnoreForFlushing)
		{
			bFoundIgnoredComponent = true;
		}
		else
		{
			if (WorldToFlush == nullptr)
			{
				AddSoundToStop(ActiveSound);
			}
			else
			{
				UWorld* ActiveSoundWorld = ActiveSound->World.Get();
				if (ActiveSoundWorld == nullptr || ActiveSoundWorld == WorldToFlush)
				{
					AddSoundToStop(ActiveSound);
				}
			}
		}
	}

	// We use a copy as some operations may modify VirtualLoops
	{
		TMap<FAtomActiveSound*, FAtomVirtualLoop> VirtualLoopsCopy = VirtualLoops;
		for (AtomRuntimeUtils::FVirtualLoopPair& Pair : VirtualLoopsCopy)
		{
			AddSoundToStop(Pair.Key);
		}
	}

	// Immediately stop all pending active sounds
	ProcessingPendingActiveSoundStops(WorldToFlush == nullptr || WorldToFlush->bIsTearingDown);
	// Debug: force stopnow() and destroy all activesound
	//ProcessingPendingActiveSoundStops(true);

	// Anytime we flush, make sure to clear all the listeners.  We'll get the right ones soon enough.
	Listeners.Reset();
	Listeners.Add(FAtomListener(this));

	// Clear all the activated reverb effects
	/*if (bClearActivatedReverb)
	{
		ActivatedReverbs.Reset();
		bHasActivatedReverb = false;
	}*/

	if (WorldToFlush == nullptr)
	{
		// Make sure sounds are fully stopped.
		if (bFoundIgnoredComponent)
		{
			// We encountered an ignored component, so address the sounds individually.
			// There's no need to individually clear WaveInstanceSourceMap elements,
			// because FSoundSource::Stop(...) takes care of this.
			for (int32 SourceIndex = 0; SourceIndex < Sources.Num(); SourceIndex++)
			{
				const FAtomPlaybackInstance* PlaybackInstance = Sources[SourceIndex]->GetPlaybackInstance();
				if (PlaybackInstance == nullptr || !PlaybackInstance->ActiveSound->bIgnoreForFlushing)
				{
					Sources[SourceIndex]->Stop();
				}
			}
		}
		else
		{
			// No components were ignored, so stop all sounds.
			for (int32 SourceIndex = 0; SourceIndex < Sources.Num(); SourceIndex++)
			{
				Sources[SourceIndex]->Stop();
			}

			PlaybackInstanceSourceMap.Reset();
		}
	}

	if (WorldToFlush == nullptr)
	{
		ReferencedSounds.Reset();
	}

	// Make sure we update any hardware changes that need to happen after flushing
	/*if (IsAudioMixerEnabled()) // always in atom 
	{
		UpdateHardware();

		// Make sure any in-flight Atom rendering commands get executed.
		FlushAtomRenderingCommands();
	}*/

	FlushExtended(WorldToFlush/*, bClearActivatedReverb*/);
}

void FAtomRuntime::FlushExtended(UWorld* WorldToFlush/*, bool bClearActivatedReverb*/)
{
}

void FAtomRuntime::InitializeAtomLibrary()
{
	// global settings
	auto AtomSettings = GetDefault<UCriWareCoreSettings>();
	GlobalMinPitch = FMath::Max(0.4f, 0.0001f);
	GlobalMaxPitch = FMath::Max(Atom::GetFrequencyMultiplier(AtomSettings->MaxPitch * 0.01f), 0.0001f);

	// voice management
	bUseMixerVoiceManagement = AtomSettings->bUseAutomaticVoiceManagement;

	// global audio routing
	bUseUnrealSoundRenderer = AtomSettings->bUseUnrealSoundRenderer;

	// allocators
	auto& FsAllocator = PlatformAtom->GetMemoryAllocator(ECriWareMemoryType::FileSystemMemory);
	FCriWareApi::criFs_SetUserMallocFunction(static_cast<CriFsMallocFunc>(FCriWareAllocator_Native::AllocateMemory), &FsAllocator);
	FCriWareApi::criFs_SetUserFreeFunction(static_cast<CriFsFreeFunc>(FCriWareAllocator_Native::FreeMemory), &FsAllocator);

	FCriWareApi::criFs_ControlFileIoMode(CRIFS_FILE_IO_MODE_OPEN_EVERY_TIME);
	//FCriWareApi::criFs_SetFileAccessThreadStackSize(1024 * 1024);

	// Redirection of FileSystem I/O to UE4 I/O.
	FCriWareApi::criFs_SetSelectIoCallback(CriWareFileIo::SelectIo);

	auto& AtomAllocator = PlatformAtom->GetMemoryAllocator(ECriWareMemoryType::AtomMemory);
	FCriWareApi::criAtom_SetUserMallocFunction(static_cast<CriAtomMallocFunc>(FCriWareAllocator_Native::AllocateMemory), &AtomAllocator);
	FCriWareApi::criAtom_SetUserFreeFunction(static_cast<CriAtomFreeFunc>(FCriWareAllocator_Native::FreeMemory), &AtomAllocator);

	// temp: ensure no master rack and let platforms use master default settings.
	if (MasterRack)
	{
		MasterRack->RemoveFromRoot();
		MasterRack = nullptr;
	}

	InitializePlatformAtomLibrary();

	if (FCriWareApi::criAtomEx_IsInitialized() != CRI_TRUE)
	{
		UE_LOG(LogCriWareAtom, Error, TEXT("Failed to initialize AtomEx SDK."));
		return;
	}

	// --- new Mixer
	// setup defaults voices
	Atom::FSourceManagerInitParams InitParams;
	InitParams.NumSources = GetMaxSources();
	InitParams.NumSourceWorkers = 1;
	SourceManager->Init(InitParams);

	// D-bas
	//SetupAtomDBAS();
	// ----

	// Some Atom global callbacks
	FCriWareApi::criAtomExBeatSync_SetCallback(FAtomRuntime_SDK::OnAtomExBeatSync, this);
	FCriWareApi::criAtomExSequencer_SetEventCallback(FAtomRuntime_SDK::OnAtomExSequencerEvent, this);

	bIsAtomLibraryInitialized = true;

	// Atom Configuration setup
	if (!AtomConfig)
	{
		AtomConfig = Cast<UAtomConfig>(AtomSettings->AtomConfig.TryLoad());
	}
	SetAtomConfiguration(AtomConfig);

	// Initialize the master rack without creating asr rack
	InitMasterRack();

	// Initialize the spatialization rack if set
	InitSpatializationRack();

	// Setup output port mapping if exist
	InitOuputPortMappings();

	// Initialiaze all rack settings
	InitRacks();

	// initialize a pool of reusable AtomExPlayers for playbacks
	InitSoundSources();

	// Make sure the Listeners array has at least one entry, so we don't have to check for Listeners.Num() == 0 all the time
	Listeners.Add(FAtomListener(this));
	ListenerProxies.AddDefaulted();
	FMatrix Transform;
	Transform.SetIdentity();
	InverseListenerTransforms.Reset();
	InverseListenerTransforms.Add(Transform);

	// init plugins
	PluginInitializationParams.NumSources = GetMaxSources();
	PluginInitializationParams.SampleRate = MasterRack->SamplingRate;
	PluginInitializationParams.BufferLength = 0; // not yet
	PluginInitializationParams.NumOutputChannels = MasterRack->NumChannels;

	if (SourceDataOverridePluginInterface.IsValid())
	{
		SourceDataOverridePluginInterface->Initialize(PluginInitializationParams);
	}
	if (ManaRuntimeInterface.IsValid())
	{
		ManaRuntimeInterface->Initialize(PluginInitializationParams);
	}
	for (auto& RuntimePluginInterface : RuntimePluginInterfaces)
	{
		if (RuntimePluginInterface.IsValid())
		{
			RuntimePluginInterface->Initialize(PluginInitializationParams);
		}
	}

	// auto Reload resources used by this runtime
	/*if (auto RuntimeManager = FAtomRuntimeManager::Get())
	{
		auto Resources = RuntimeManager->GetAtomResourceManager().GetAtomResources(RuntimeID);
		for (auto Resource : Resources)
		{
			Resource->AsyncLoad();
		}
	}*/

#if ENABLE_ATOM_MONITOR
	// auto starts the monitor if bUseInGamePreview is checked
	auto Settings = GetDefault<UCriWareCoreSettings>();
	if (Settings->bUseInGamePreview)
	{
		if (auto Manager = FAtomRuntime::GetAtomRuntimeManager())
		{
			Manager->GetAtomMonitor().Start(RuntimeID);
		}
	}
#endif
}

void FAtomRuntime::FinalizeAtomLibrary()
{
	bIsAtomLibraryInitialized = false;

#if ENABLE_ATOM_MONITOR
	if (auto Manager = FAtomRuntime::GetAtomRuntimeManager())
	{
		Manager->GetAtomMonitor().Stop();
	}
#endif

	// Plugins
	if (ManaRuntimeInterface.IsValid())
	{
		ManaRuntimeInterface->Finalize();
	}

	for (auto& RuntimePluginInterface : RuntimePluginInterfaces)
	{
		if (RuntimePluginInterface.IsValid())
		{
			RuntimePluginInterface->Finalize();
		}
	}

	// Delete all atom players
	for (int32 Index = 0; Index < Sources.Num(); Index++)
	{
		// Make the sound stop instantly
		Sources[Index]->StopNow();
		PlaybackInstanceSourceMap.Remove(Sources[Index]->PlaybackInstance);
		delete Sources[Index];
	}

	for (int32 Index = 0; Index < RemovedSources.Num(); Index++)
	{
		delete RemovedSources[Index];
	}

	Sources.Reset();
	FreeSources.Reset();
	RemovedSources.Reset();
	Listeners.Reset();

	// Unload any atom resource used by this runtime (do not destroy them only unload, will be loaded back when runtime is re-initialized)
	if (auto RuntimeManager = FAtomRuntimeManager::Get())
	{
		// Iterator evaluates if resource is valid before calling the lambda, 
		// thus if a resource dependency happen (ACB->AWB) with handle destruction, it will not call here.
		RuntimeManager->GetAtomResourceManager().IterateOverAllResources([](FAtomResourceId, FAtomResource* Resource)
		{
			check(Resource);
			Resource->Unload();
		});
	}

	// Ensure other resources released before finalization
	VoicesPools.Reset();
	AsrRacks.Reset();
	OutputPortRackMap.Reset();
	DbasID.Reset();
	DbasMaxBPS = 0;
	DbasMaxStreams = 0;

	// clean up some SDK global callbacks
	FCriWareApi::criAtomExBeatSync_SetCallback(nullptr, nullptr);
	FCriWareApi::criAtomExSequencer_SetEventCallback(nullptr, nullptr);

	FinalizePlatformAtomLibrary();
}

Atom::FMixerSourceVoice* FAtomRuntime::GetMixerSourceVoice()
{
	// todo: -> put fixed pools in mixer too (mixer will return requested pool id by the resource)
	// todo: -> reuse existing voice pools ?

	LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer)

	Atom::FMixerSourceVoice* Voice = nullptr;
	if (!SourceVoices.Dequeue(Voice))
	{
		Voice = new Atom::FMixerSourceVoice();
	}

	Voice->Reset(this);
	return Voice;
}

void FAtomRuntime::ReleaseMixerSourceVoice(Atom::FMixerSourceVoice* InSourceVoice)
{
	SourceVoices.Enqueue(InSourceVoice);
}

Atom::FAtomSourceManager* FAtomRuntime::GetSourceManager()
{
	return SourceManager.Get();
}

const Atom::FAtomSourceManager* FAtomRuntime::GetSourceManager() const
{
	return SourceManager.Get();
}

Audio::FPatchOutputStrongPtr FAtomRuntime::MakePatch(int32 InFrames, int32 InChannels, float InGain) const
{
	int32 MaxSizeFrames = FMath::Max(InFrames, SourceManager->GetNumOutputFrames()), MinSizeFrames = FMath::Min(InFrames, SourceManager->GetNumOutputFrames());
	return MakeShared<Audio::FPatchOutput, ESPMode::ThreadSafe>(AtomMixerPatchBufferBlocks * MinSizeFrames * FMath::DivideAndRoundUp(MaxSizeFrames, MinSizeFrames) * InChannels, InGain);
}

Audio::FPatchOutputStrongPtr FAtomRuntime::AddPatchForRack(uint32 InObjectId, float InPatchGain)
{
	//if (!ensure(IsAudioRenderingThread()))
	//{
	//	return nullptr;
	//}

	//FMixerSubmixPtr SubmixPtr = FindDSPBusInstanceByObjectId(InObjectId);
	//if (SubmixPtr.IsValid())
	//{
	//	return SubmixPtr->AddPatch(InPatchGain);
	//}

	return nullptr;
}

bool FAtomRuntime::AddAtomVoicePool(FCriAtomVoicePoolPtr&& VoicePool, EAtomVoicePoolType VoiceType)
{
	if (!VoicesPools.Contains(VoiceType))
	{
		VoicesPools.Add(VoiceType, Forward<FCriAtomVoicePoolPtr>(VoicePool));
		return true;
	}
	return false;
}

void FAtomRuntime::CreateAtomStandardVoicePools(const FCriWareStandardVoicesSettings& VoiceSettings)
{
	if (VoiceSettings.NumStandardMemoryVoices > 0)
	{
		CriAtomExStandardVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForStandardVoicePool(&pool_config);
		pool_config.identifier = (uint8)EAtomVoicePoolType::StandardMemory + 1000;
		pool_config.num_voices = FMath::Clamp(VoiceSettings.NumStandardMemoryVoices, CRIATOMEX_MIN_VOICES_PER_POOL, CRIATOMEX_MAX_VOICES_PER_POOL);
		if (VoiceSettings.StandardMemoryVoiceNumChannels > 0)
		{
			pool_config.player_config.max_channels = FMath::Clamp(VoiceSettings.StandardMemoryVoiceNumChannels, ATOM_MIN_DSP_CHANNELS, ATOM_MAX_DSP_CHANNELS);
		}
		if (VoiceSettings.StandardMemoryVoiceSamplingRate > 0)
		{
			pool_config.player_config.max_sampling_rate = FMath::Clamp(VoiceSettings.StandardMemoryVoiceSamplingRate, ATOM_MIN_DSP_SAMPLING_RATE, ATOM_MAX_DSP_SAMPLING_RATE);
		}
		AddAtomVoicePool(MakeCriHandle(FCriWareApi::criAtomExVoicePool_AllocateStandardVoicePool(&pool_config, nullptr, 0)), EAtomVoicePoolType::StandardMemory);
	}

	if (VoiceSettings.NumStandardStreamingVoices > 0)
	{
		CriAtomExStandardVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForStandardVoicePool(&pool_config);
		pool_config.identifier = (uint8)EAtomVoicePoolType::StandardStreaming + 1000;
		pool_config.num_voices = FMath::Clamp(VoiceSettings.NumStandardStreamingVoices, CRIATOMEX_MIN_VOICES_PER_POOL, CRIATOMEX_MAX_VOICES_PER_POOL);
		if (VoiceSettings.StandardStreamingVoiceNumChannels > 0)
		{
			pool_config.player_config.max_channels = FMath::Clamp(VoiceSettings.StandardStreamingVoiceNumChannels, ATOM_MIN_DSP_CHANNELS, ATOM_MAX_DSP_CHANNELS);
		}
		if (VoiceSettings.StandardStreamingVoiceSamplingRate > 0)
		{
			pool_config.player_config.max_sampling_rate = FMath::Clamp(VoiceSettings.StandardStreamingVoiceSamplingRate, ATOM_MIN_DSP_SAMPLING_RATE, ATOM_MAX_DSP_SAMPLING_RATE);

		}
		pool_config.player_config.streaming_flag = CRI_TRUE;
		AddAtomVoicePool(MakeCriHandle(FCriWareApi::criAtomExVoicePool_AllocateStandardVoicePool(&pool_config, nullptr, 0)), EAtomVoicePoolType::StandardStreaming);

		// D-bas
		DbasMaxBPS += FCriWareApi::criAtom_CalculateAdxBitrate(
			VoiceSettings.StandardStreamingVoiceNumChannels,
			VoiceSettings.StandardStreamingVoiceSamplingRate) * VoiceSettings.NumStandardStreamingVoices;
		DbasMaxStreams += VoiceSettings.NumStandardStreamingVoices;
	}
}

void FAtomRuntime::CreateAtomHcaMxVoicePools(const FCriWareHcaMxVoicesSettings& VoiceSettings)
{
	if (VoiceSettings.NumHcaMxMemoryVoices > 0)
	{
		CriAtomExHcaMxVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool(&pool_config);
		pool_config.identifier = (uint8)EAtomVoicePoolType::HcaMxMemory + 1000;
		pool_config.num_voices = FMath::Clamp(VoiceSettings.NumHcaMxMemoryVoices, CRIATOMEX_MIN_VOICES_PER_POOL, CRIATOMEX_MAX_VOICES_PER_POOL);
		if (VoiceSettings.HcaMxMemoryVoiceNumChannels > 0)
		{
			pool_config.player_config.max_channels = FMath::Clamp(VoiceSettings.HcaMxMemoryVoiceNumChannels, ATOM_MIN_DSP_CHANNELS, ATOM_MAX_DSP_CHANNELS);
		}
		if (VoiceSettings.HcaMxVoiceSamplingRate > 0)
		{
			pool_config.player_config.max_sampling_rate = FMath::Clamp(VoiceSettings.HcaMxVoiceSamplingRate, ATOM_MIN_DSP_SAMPLING_RATE, ATOM_MAX_DSP_SAMPLING_RATE);
		}
		AddAtomVoicePool(MakeCriHandle(FCriWareApi::criAtomExVoicePool_AllocateHcaMxVoicePool(&pool_config, nullptr, 0)), EAtomVoicePoolType::HcaMxMemory);
	}

	if (VoiceSettings.NumHcaMxStreamingVoices > 0)
	{
		CriAtomExHcaMxVoicePoolConfig pool_config;
		criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool(&pool_config);
		pool_config.identifier = (uint8)EAtomVoicePoolType::HcaMxStreaming + 1000;
		pool_config.num_voices = FMath::Clamp(VoiceSettings.NumHcaMxStreamingVoices, CRIATOMEX_MIN_VOICES_PER_POOL, CRIATOMEX_MAX_VOICES_PER_POOL);
		if (VoiceSettings.HcaMxStreamingVoiceNumChannels > 0)
		{
			pool_config.player_config.max_channels = FMath::Clamp(VoiceSettings.HcaMxStreamingVoiceNumChannels, ATOM_MIN_DSP_CHANNELS, ATOM_MAX_DSP_CHANNELS);
		}
		if (VoiceSettings.HcaMxVoiceSamplingRate > 0)
		{
			pool_config.player_config.max_sampling_rate = FMath::Clamp(VoiceSettings.HcaMxVoiceSamplingRate, ATOM_MIN_DSP_SAMPLING_RATE, ATOM_MAX_DSP_SAMPLING_RATE);
		}
		pool_config.player_config.streaming_flag = CRI_TRUE;
		AddAtomVoicePool(MakeCriHandle(FCriWareApi::criAtomExVoicePool_AllocateHcaMxVoicePool(&pool_config, nullptr, 0)), EAtomVoicePoolType::HcaMxStreaming);

		// D-bas
		DbasMaxBPS += FCriWareApi::criAtom_CalculateAdxBitrate(
			VoiceSettings.HcaMxStreamingVoiceNumChannels,
			VoiceSettings.HcaMxVoiceSamplingRate) * VoiceSettings.NumHcaMxStreamingVoices;
		DbasMaxStreams += VoiceSettings.NumHcaMxStreamingVoices;
	}
}

void FAtomRuntime::IterateOverVoicePools(TFunctionRef<void(EAtomVoicePoolType Type, int32 ID, int32 NumUsedVoices, int32 MaxVoices)> Func) const
{
	for (auto& VoicePool : VoicesPools)
	{
		CriSint32 CurrentNum = 0;
		CriSint32 Limit = 0;
		FCriWareApi::criAtomExVoicePool_GetNumUsedVoices(VoicePool.Value, &CurrentNum, &Limit);
		Func(VoicePool.Key, (uint8)VoicePool.Key + 1000, (int32)CurrentNum, (int32)Limit);
	}

	if (SourceManager.IsValid())
	{
		SourceManager->IterateOverVoicePools(Func);
	}
}

bool FAtomRuntime::AddAtomAsrRack(FCriAtomExAsrRackId&& AsrRack, const UAtomRackBase& AtomRack)
{
	if (AsrRack.GetId() > 0)
	{
		AsrRacks.Add(&AtomRack, Forward<FCriAtomExAsrRackId>(AsrRack));
		return true;
	}

	// todo: add check for rack creation validity ?

	return false;
}

bool FAtomRuntime::LoadAtomRack(const UAtomRackBase& InAtomRack)
{
	// if rack is an endpoint: nothing to do.
	if (InAtomRack.IsA(UAtomEndpointRack::StaticClass()))
	{
		return true;
	}

	FAtomRackInitParams InitParams = {};
	TUniquePtr<IAtomEndpointSettingsProxy> SettingsProxy;

	// obtain the default max channel out of the platform.
	InitParams.NumChannels = GetPlatformSoundRendererNumChannels(EAtomSoundRendererType::Default);

	if (InAtomRack.IsA(UAtomRackWithParentBase::StaticClass()))
	{
		const UAtomRackWithParentBase* RackWithParent = Cast<const UAtomRackWithParentBase>(&InAtomRack);
		if (RackWithParent->ParentRack)
		{
			auto ParentRack = RackWithParent->ParentRack;

			// if rack is connected to an endpoint : set up soundrender output type settings
			if (ParentRack->IsA(UAtomEndpointRack::StaticClass()))
			{
				auto EndpointRack = Cast<UAtomEndpointRack>(ParentRack);
				InitParams.SoundRendererType = EndpointRack->SoundRendererType;
				InitParams.RendererType = GetPlatformAtomExSoundRendererType(EndpointRack->SoundRendererType);
				InitParams.NumChannels = FMath::Min(InitParams.NumChannels, GetPlatformSoundRendererNumChannels(EndpointRack->SoundRendererType));
			
				if (auto EndpointSettings = EndpointRack->GetEndpointSettings(GetPlatformEndpointSettingsClass()))
				{
					SettingsProxy = EndpointSettings->GetProxy();
					if (SettingsProxy)
					{
						InitParams.EndpointSettings = SettingsProxy.Get();
					}
				}
			}
			// if rack is connected to another rack: keep output to ASR type but setup out rack id 
			else
			{
				CriAtomExAsrRackId ParentRackId = GetAsrRackId(ParentRack);
				if (ParentRackId >= 0)
				{
					InitParams.OutputRackId = ParentRackId;
				}
				else
				{
					UE_LOG(LogCriWareAtomDebug, Warning, TEXT("Cannot find ASR rack id for AtomRack %s Connected to %s."), *ParentRack->GetFullName(), *InAtomRack.GetFullName());
					return false;
				}
			}
		}
	}

	// load & register rack
	if (const UAtomRack* Rack = Cast<const UAtomRack>(&InAtomRack))
	{
		InitParams.NumChannels = FMath::Min(Rack->NumChannels, InitParams.NumChannels);
		InitParams.ServerFrequency = Rack->ServerFrequency;

		if (AddAtomAsrRack(LoadPlatformAtomRack(InitParams), InAtomRack))
		{
			// setup other settings
			LoadAtomRackBusSettings(Rack);

			return true;
		}

		return false;
	}

	// load & register soundfield
	FAtomSoundfieldRackInitParams SoundfieldInitParams = {};
	SoundfieldInitParams.EndpointSettings = InitParams.EndpointSettings;

	if (const UAtomSoundfieldRack* Rack = Cast<const UAtomSoundfieldRack>(&InAtomRack))
	{
		const auto SoundfieldRendererType = Rack->GetRackType();

		SoundfieldInitParams.SoundfieldRendererType = SoundfieldRendererType;
		SoundfieldInitParams.RendererType = GetPlatformSoundfieldAtomExSoundRendererType(SoundfieldRendererType);
		SoundfieldInitParams.SamplingRate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
		SoundfieldInitParams.NumChannels = GetPlatformSoundfieldRendererNumChannels(SoundfieldRendererType);
		SoundfieldInitParams.SpeakerMapping = GetPlatformSoundfieldRendererSpeakerMapping(SoundfieldRendererType);

		// if inherit number of channels from master rack if needed.
		if (SoundfieldInitParams.NumChannels < 0)
		{
			SoundfieldInitParams.NumChannels = MasterRack ? MasterRack->NumChannels : SoundfieldInitParams.NumChannels;
		}

		if (AddAtomAsrRack(LoadPlatformAtomSoundfieldRack(SoundfieldInitParams), InAtomRack))
		{
			return true;
		}

		return false;
	}

	return false;
}

FCriAtomExAsrRackId FAtomRuntime::LoadGenericAtomRack(const FAtomRackInitParams& InitParams)
{
	// setup generic rack
	CriAtomExAsrRackConfig asr_rack_config;
	criAtomExAsrRack_SetDefaultConfig(&asr_rack_config);
	asr_rack_config.sound_renderer_type = InitParams.RendererType;
	asr_rack_config.server_frequency = InitParams.ServerFrequency;
	asr_rack_config.num_buses = CRIATOMEXASR_MAX_BUSES;
	asr_rack_config.speaker_mapping = InitParams.SpeakerMapping;
	asr_rack_config.output_channels = InitParams.NumChannels;
	asr_rack_config.output_sampling_rate = InitParams.SamplingRate;
	asr_rack_config.output_rack_id = InitParams.OutputRackId;

	return MakeCriId<FCriAtomExAsrRackId>(FCriWareApi::criAtomExAsrRack_Create(&asr_rack_config, nullptr, 0));
}

FCriAtomExAsrRackId FAtomRuntime::LoadGenericAtomSoundfieldRack(const FAtomSoundfieldRackInitParams& InitParams)
{
	// setup generic spatial rack 
	// Limitations: On generic platforms, Atom cannot use endpoint since it overwrites the renderer type.
	// Also, actually you cannot attach a spatial rack (Soundfield in Unreal) to an asr/standard rack.
	// As result, you cannot use another output device than the default assigned (aka HW1 on PC) for Soundfields except for supported platforms.
	CriAtomExAsrRackConfig asr_rack_config;
	criAtomExAsrRack_SetDefaultConfig(&asr_rack_config);
	asr_rack_config.sound_renderer_type = InitParams.RendererType;
	//asr_rack_config.server_frequency = N/A;
	asr_rack_config.num_buses = 1; // No DSP Bus settings.
	asr_rack_config.speaker_mapping = InitParams.SpeakerMapping;
	asr_rack_config.output_channels = InitParams.NumChannels;
	asr_rack_config.output_sampling_rate = InitParams.SamplingRate;
	//asr_rack_config.output_rack_id = N/A;
	
	// (experimental) since we are limited to 16ch, we always redirect to master rack sounds that cannot use the Object audio rack.
	const int MasterRackID = 0;
	if (InitParams.RendererType == CRIATOM_SOUND_RENDERER_OBJECT)
	{
		asr_rack_config.context = (void*)&MasterRackID; // actually API doesnt use any structure.
	}

	return MakeCriId<FCriAtomExAsrRackId>(FCriWareApi::criAtomExAsrRack_Create(&asr_rack_config, nullptr, 0));
}

bool FAtomRuntime::LoadAtomRackBusSettings(const UAtomRack* Rack)
{
	if (IsMasterRack(Rack))
	{
		// Atom library attachs the 'default DSP bus setting' from ACF data automatically to master rack.
		// We have to apply the user choosen dsp settings if different. 
		// If 'none' is set in master rack, DSP bus setting is detached.
		if (Rack)
		{
			const auto CurrentSettingInRuntime = AtomConfig ? AtomConfig->GetDefaultDspBusSetting() : nullptr;
			const auto CurrentSettingInMasterRack = MasterRack->DspBusSetting;

			const auto SettingToApply = CurrentSettingInMasterRack; // use Master rack as master

			/*if (SettingToApply != CurrentSettingInMasterRack)
			{
				if (SettingToApply != CurrentSettingInRuntime)
				{
					// update rack and runtime
					MasterRack->SetDspBusSetting(SettingToApply);
				}
				else
				{
					// update rack with current runtime values
					MasterRack->DspBusSetting = SettingToApply;
					MasterRack->ResetBuses();
				}
			}
			else*/
			{
				// update buses if something have changed in DSP bus settings. 
				MasterRack->UpdateBuses();

				if (SettingToApply != CurrentSettingInRuntime)
				{
					// apply current setting from master rack
					bool bResult = SetRackDspBusSetting(MasterRack);
					if (!bResult)
					{
						// WIP: if DSP is not present in current acf ... a warning/notification should be issued
					}
				}

				// apply user buses value from master rack to runtime
				MasterRack->SyncBusesToRuntime();
			}
		}
	}
	else
	{
		// apply bus setting to runtime
		SetRackDspBusSetting(Rack);
		// apply user values to runtime
		Rack->SyncBusesToRuntime();
	}

	return true;
}

CriAtomExAsrRackId FAtomRuntime::GetAsrRackId(const UAtomRackBase* InRack) const
{
	if (IsMasterRack(InRack))
	{
		return 0; // Master rack is always id 0
	}

	const FCriAtomExAsrRackId* RackId = AsrRacks.Find(InRack);
	if (RackId)
	{
		return RackId->GetId();
	}
	
	return INDEX_NONE; // Invalid rack id
}

bool FAtomRuntime::IsMasterRack(const UAtomRackBase* InRack) const
{
	return InRack == MasterRack;
}

bool FAtomRuntime::IsSpatializationRack(const UAtomRackBase* InRack) const
{
	return InRack == SpatializationRack;
}

bool FAtomRuntime::RegisterAtomRack(const UAtomRackBase* InAtomRack)
{
	//if (InAtomRack && //bSubmixRegistrationDisabled)
	//{
	//	UE_LOG(LogCriWareAtom, Warning, TEXT("Attempted register AtomRack %s before the rack graph was initialized."), *InAtomRack->GetFullName());
	//	return false;
	//}

	// In case PostLoad of a Rack is called before library initialization, we cannot create rack or register master rack.
	// But after the library and master rack initialization, any AtomRack present in project are loaded and registered (created by library).
	if (!bIsAtomLibraryInitialized || !bIsMasterRackInitialized || !InAtomRack)
	{
		return false;
	}

	UE_LOG(LogCriWareAtom, Display, TEXT("Registering rack %s."), *InAtomRack->GetFullName());

	const bool bIsMasterRack = IsMasterRack(InAtomRack);

	if (!bIsMasterRack)
	{
		// Ensure parent structure is registered prior to current rack if missing
		const UAtomRackWithParentBase* RackWithParent = Cast<const UAtomRackWithParentBase>(InAtomRack);
		if (RackWithParent && RackWithParent->ParentRack && RackWithParent->ParentRack->IsA<UAtomRackWithParentBase>())
		{
			if (GetAsrRackId(RackWithParent->ParentRack) < 0)
			{
				RegisterAtomRack(RackWithParent->ParentRack);
			}
		}
	}
	else
	{
		UE_LOG(LogCriWareAtom, Display, TEXT("AtomRack %s was already registered as the master rack."), *InAtomRack->GetFullName());
	}

	if (AsrRacks.Contains(InAtomRack))
	{
		// already registered
		return true;
	}

	bool bResult = LoadAtomRack(*InAtomRack);

	return bResult;
}

bool FAtomRuntime::UnregisterAtomRack(const UAtomRackBase* InAtomRack)
{
	if (!bIsInitialized)
	{
		return false;
	}

	bool bResult = false;

	// Find and remove native rack associated with this AtomRack
	if (AsrRacks.Find(InAtomRack))
	{
		AsrRacks.Remove(InAtomRack);
		bResult = true;
	}

	return bResult;
}

void FAtomRuntime::IterateOverRacks(TFunctionRef<void(const UAtomRackBase* Rack)> Func) const
{
	Func(MasterRack);

	for (auto& Pair : AsrRacks)
	{ 
		Func(Pair.Key);
	}
}

void FAtomRuntime::InitMasterRack()
{
	if (!bIsAtomLibraryInitialized)
	{
		UE_LOG(LogCriWareAtomDebug, Warning, TEXT("Cannot load master rack before Atom library initialization."));
		return;
	}

	bIsMasterRackInitialized = false;

	auto Settings = GetMutableDefault<UCriWareCoreSettings>();
	check(Settings);

	auto Config = GetAtomConfiguration();

	if (MasterRack)
	{
		UE_LOG(LogCriWareAtom, Display, TEXT("Re-initializing Atom Racks..."));
	}
	else
	{
		UE_LOG(LogCriWareAtom, Display, TEXT("Initializing Atom Racks..."));
	}

	if (Config && Config->RackConfig.bOverrideMasterRack)
	{
		// Load or re-load master rack from config
		LoadMasterRack(Config->RackConfig.MasterRack.ToSoftObjectPath());
	}
	else
	{
		// Load or re-load master rack from settings
		LoadMasterRack(Settings->MasterRack);
	}

	bIsMasterRackInitialized = true;
}

void FAtomRuntime::InitRacks()
{
	if (!bIsAtomLibraryInitialized)
	{
		return;
	}

	// Setup master rack settings to atom that can only be set after library initialization
	if (MasterRack)
	{
		LoadAtomRackBusSettings(MasterRack);
	}

	// any plugin rack
	for (TObjectIterator<UAtomRackWithParentBase> It; It; ++It)
	{
		UAtomRackBase* RackToLoad = *It;
		check(RackToLoad);

		if (!IsMasterRack(RackToLoad) && !IsSpatializationRack(RackToLoad))
		{
			//LoadAtomRack(RackToLoad);
			RegisterAtomRack(RackToLoad); // cannot load only -> need to recreate and register to list
			//InitSoundfieldAndEndpointDataForSubmix(*SubmixToLoad, GetSubmixInstance(SubmixToLoad).Pin(), false);
		}
	}
}

void FAtomRuntime::InitSpatializationRack()
{
	if (!bIsAtomLibraryInitialized)
	{
		return;
	}

	if (SpatializationRack)
	{
		SpatializationRack->RemoveFromRoot();
		SpatializationRack = nullptr;
	}

	auto Settings = GetMutableDefault<UCriWareCoreSettings>();
	check(Settings);

	auto Config = GetAtomConfiguration();

	UAtomRackBase* NewRack = nullptr;
	if (Config && Config->RackConfig.bOverrideSpatializationRack)
	{
		UE_LOG(LogCriWareAtom, Display, TEXT("Load Rack': Using asset '%s' from configuration '%s'."), *Config->RackConfig.SpatializationRack.ToString(), *Config->GetFName().ToString());
		NewRack = Config->RackConfig.SpatializationRack.LoadSynchronous();
	}
	else
	{
		UE_LOG(LogCriWareAtom, Display, TEXT("Load Rack': Using asset '%s'."), *Settings->SpatializationRack.GetAssetPathString());
		NewRack = Cast<UAtomRackBase>(Settings->SpatializationRack.TryLoad());
	}

	if (NewRack)
	{
		NewRack->AddToRoot();

		UE_LOG(LogCriWareAtom, Display, TEXT("Initializing the spatialization rack '%s'..."), *NewRack->GetFName().ToString());

		if (RegisterAtomRack(NewRack))
		{
			SpatializationRack = NewRack;
		}
		else
		{
			UE_LOG(LogCriWareAtom, Warning, TEXT("Failed to initialize the spatialization rack '%s'."), *NewRack->GetFName().ToString());

			if (SpatializationRack)
			{
				SpatializationRack->RemoveFromRoot();
				SpatializationRack = nullptr;
			}
		}
	}

	SetHRTFDisabled(!Settings->bEnableBinauralSpatialization);
}

void FAtomRuntime::LoadMasterRack(const FSoftObjectPath& InObjectPath)
{
	static const FString DefaultName = TEXT("MasterRack");

	if (MasterRack)
	{
		// Don't bother swapping if new path is invalid...
		if (!InObjectPath.IsValid())
		{
			return;
		}

		// or is same object already initialized.
		if (InObjectPath.GetAssetPathString() == MasterRack->GetPathName())
		{
			return;
		}

		MasterRack->RemoveFromRoot();
	}

	// 1. Try loading from Developer Atom Settings
	UE_LOG(LogCriWareAtom, Display, TEXT("Load Rack': Using asset '%s'"), *InObjectPath.GetAssetPathString());
	UAtomRack* NewRack = Cast<UAtomRack>(InObjectPath.TryLoad());

	// 2. If Unset or not found, fallback to engine asset
	if (!NewRack)
	{
		static const FString CriWareRackDir = TEXT("/CriWare/Atom/Racks");

		FSoftObjectPath ObjectPath = FString::Printf(TEXT("%s/%s.%s"), *CriWareRackDir, *DefaultName, *DefaultName);
		NewRack = Cast<UAtomRack>(ObjectPath.TryLoad());
		UE_LOG(LogCriWareAtom, Display, TEXT("Rack unset or invalid in 'CriWare Settings': Using plugin asset '%s'"),
			*DefaultName,
			*ObjectPath.GetAssetPathString());
	}

	// 3. If engine version not found, dynamically spawn and post error
	if (!NewRack)
	{
		UE_LOG(LogCriWareAtom, Error, TEXT("Failed to load rack from plugin asset path '%s'. Creating '%s' as a stub."),
			*InObjectPath.GetAssetPathString(),
			*DefaultName);

		NewRack = NewObject<UAtomRack>(UAtomRack::StaticClass(), *DefaultName);
	}

	check(NewRack);
	NewRack->AddToRoot();

	MasterRack = NewRack;
}

void FAtomRuntime::InitOuputPortMappings()
{
	auto Config = GetAtomConfiguration();
	if (Config)
	{
		const auto RackConfig = Config->RackConfig;

		for (const FAtomOutputPort& Port : RackConfig.OutputPorts)
		{
			if (!RackConfig.bOverrideDefaultOutputPorts 
				&& Port.Name.ToString().StartsWith(TEXT("_"))) // IsInternal
			{
				// by pass internal racks
				continue;
			}
			else
			{
				// load and map other rack if set
				MapOutputPortToRack(Port.Name, Port.TargetRack.LoadSynchronous());
			}
		}

		// register internal racks if requested by config
		if (!RackConfig.bOverrideDefaultOutputPorts)
		{
			auto TryRegisterExternalRack = [this](CriAtomExAsrRackId AsrRackID, EAtomSoundfieldRendererType RendererType, FName RackName)
			{
				if (AsrRackID != CRIATOMEXASR_RACK_ILLEGAL_ID) // invalid id check
				{
					UAtomSoundfieldRack* ExternalRack = NewObject<UAtomSoundfieldRack>(UAtomSoundfieldRack::StaticClass(), RackName);
					ExternalRack->SoundfieldRendererType = RendererType;

					if (const UAtomRackBase* Rack = Cast<const UAtomRackBase>(ExternalRack))
					{
						AddAtomAsrRack(MakeExternalCriId<FCriAtomExAsrRackId>(AsrRackID, MakeShared<bool>(true)), *Rack);
						OutputPortRackMap.Add(RackName, TStrongObjectPtr<const UAtomRackBase>(Rack));

						return true;
					}
				}

				return false;
			};

			TryRegisterExternalRack(FCriWareApi::criAtomExAsrRack_GetAmbisonicRackId(), EAtomSoundfieldRendererType::Ambisonics, TEXT("_ambisonics"));
			TryRegisterExternalRack(FCriWareApi::criAtomExAsrRack_GetChannelBasedAudioRackId(), EAtomSoundfieldRendererType::Spatializer, TEXT("_7_1_4"));
			TryRegisterExternalRack(FCriWareApi::criAtomExAsrRack_GetObjectBasedAudioRackId(), EAtomSoundfieldRendererType::SoundObject, TEXT("_object_based_audio"));

			// apply changes to racks from ACF
			for (TObjectIterator<UAtomRack> It; It; ++It)
			{
				UAtomRack* RackToReload = *It;
				check(RackToReload);

				LoadAtomRackBusSettings(RackToReload);
			}
		}
	}
}

TArray<FName> FAtomRuntime::GetMappedOutputPortNames(const UAtomRackBase* AtomRack) const
{
	TArray<FName> Names;
	
	for (auto& Pair : OutputPortRackMap)
	{
		if (AtomRack == Pair.Value.Get())
		{
			Names.Add(Pair.Key);
		}
	}

	return Names;
}

bool FAtomRuntime::MapOutputPortToRack(FName OutputPortName, const UAtomRackBase* AtomRack)
{
	if (OutputPortName.IsNone())
	{
		UE_LOG(LogCriWareAtom, Warning, TEXT("OutputPort name for mapping to rack is invalid."));
		return false;
	}

	CriAtomExAsrRackId AsrRackID = GetAsrRackId(AtomRack);
	if (AsrRackID == INDEX_NONE)
	{
		UE_LOG(LogCriWareAtom, Warning, TEXT("Rack to map with output port %s is invalid."), *OutputPortName.ToString());
		return false;
	}

	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.MapOutputPortToRack"), STAT_AtomMapOutputPortToRack, STATGROUP_AtomThreadCommands);

		FAtomThread::RunCommandOnAtomThread([this, AsrRackID, OutputPortName]()
		{
			if (auto RackPtr = AsrRacks.FindKey(AsrRackID))
			{
				MapOutputPortToRack(OutputPortName, *RackPtr);
			}
			
		}, GET_STATID(STAT_AtomMapOutputPortToRack));

		return true;
	}

	CriAtomExOutputPortHn ExOutputPort = FCriWareApi::criAtomExAcf_GetOutputPortHnByName(TCHAR_TO_UTF8(*OutputPortName.ToString()));
	if (ExOutputPort)
	{
		// keep rack away from GC
		OutputPortRackMap.Add(OutputPortName, TStrongObjectPtr<const UAtomRackBase>(AtomRack));

		FCriWareApi::criAtomExOutputPort_SetAsrRackId(ExOutputPort, AsrRackID);
		UE_LOG(LogCriWareAtom, Display, TEXT("Map output port %s to rack %s."), *OutputPortName.ToString(), *AtomRack->GetFName().ToString());
		return true;
	}
	else
	{
		UE_LOG(LogCriWareAtom, Warning, TEXT("Cannot found output port %s in Atom configuration."), *OutputPortName.ToString());
	}

	return false;
}

void FAtomRuntime::SetupAtomDBAS()
{
	if (!IsUsingFixedVoicePools())
	{
		DbasMaxStreams = GetMaxSources();
		DbasMaxBPS += FCriWareApi::criAtom_CalculateHcaBitrate(
			GetPlatformSoundRendererNumChannels(EAtomSoundRendererType::Default), 
			48000 * GlobalMaxPitch, 
			CriAtomEncodeQuality::CRIATOM_ENCODE_QUALITY_HIGHEST) * DbasMaxStreams;
	}

	if (DbasMaxStreams > 0)
	{
		auto Settings = GetDefault<UCriWareCoreSettings>();

		CriAtomExDbasConfig DbasConfig;
		criAtomExDbas_SetDefaultConfig(&DbasConfig);
		DbasConfig.max_bps = DbasMaxBPS;
		DbasConfig.max_streams = DbasMaxStreams + Settings->MaxSoundPlaybackHandles; // todo: maxsource

		if (ManaRuntimeInterface.IsValid())
		{
			int DbasMaxManaBPS = 0, DbasMaxManaStreams = 1;

			if (ManaRuntimeInterface->GetAtomDbasSettings(DbasMaxManaBPS, DbasMaxManaStreams))
			{
				DbasConfig.max_mana_bps = FMath::Max(0, DbasMaxManaBPS);
				DbasConfig.max_mana_streams = FMath::Max(1, DbasMaxManaStreams);
			
				DbasConfig.max_bps += DbasConfig.max_mana_bps;
				DbasConfig.max_streams += DbasConfig.max_mana_streams;
			}
		}

		DbasID = MakeCriId<FCriAtomDbasId>(FCriWareApi::criAtomDbas_Create(&DbasConfig, nullptr, 0));
	}
}

bool FAtomRuntime::SetAtomConfiguration(const UAtomConfig* InAtomConfig)
{
	if (!bIsAtomLibraryInitialized)
	{
		AtomConfig = InAtomConfig;
		return true;
	}

	bool Result = true;

	// check if a current ACF is registered.
	CriAtomExAcfInfo AcfInfo;
	if (FCriWareApi::criAtomExAcf_GetAcfInfo(&AcfInfo) == CRI_TRUE)
	{
		FCriWareApi::criAtomEx_UnregisterAcf();
		AtomConfig = nullptr;
		OutputPortRackMap.Reset();
	}

	if (InAtomConfig)
	{
		int32 AcfDataSize = InAtomConfig->RawData.GetBulkDataSize();
		const int8* AcfData = (const int8*)InAtomConfig->RawData.LockReadOnly();

		if (AcfDataSize <= 0 || AcfData == nullptr)
		{
			Result = false;
		}
		else
		{
			const bool bDoCreateSpatialAsrRack = !InAtomConfig->RackConfig.bOverrideDefaultOutputPorts;
			FCriWareApi::criAtomExAcf_DoCreateSpatialAsrRack(bDoCreateSpatialAsrRack);

			UE_LOG(LogCriWareAtom, Display, TEXT("Register ACF data from AtomConfig '%s'"), *InAtomConfig->GetFName().ToString());
			Result = (FCriWareApi::criAtomEx_RegisterAcfData(const_cast<int8*>(AcfData), AcfDataSize, nullptr, 0) == CRI_TRUE);
		}

		InAtomConfig->RawData.Unlock();

		if (!Result)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to register ACF data from AtomConfig '%s'."), *InAtomConfig->GetFName().ToString());
		}
		else
		{
			AtomConfig = InAtomConfig;
		}
	}

	return Result;
}

bool FAtomRuntime::SetRackDspBusSetting(const UAtomRack* InRack)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InRack)
	{
		// Get Atom rack id
		int RackId = GetAsrRackId(InRack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set DSP bus setting to rack '%s' that is not registered to Atom."), *InRack->GetFullName());
			return false;
		}

		// Get bus name
		FName SettingName;
		if (InRack->DspBusSetting)
		{
			SettingName = InRack->DspBusSetting->GetSettingName();
		}

		FCriWareApi::criAtomExAsrRack_DetachDspBusSetting(RackId);

		if (!SettingName.IsNone())
		{
			// Check if name is a valid setting
			if (!AtomConfig || !AtomConfig->IsValidDspBusSetting(SettingName))
			{
				return false; // not a warning - this setting are simply not available
			}

			FCriWareApi::criAtomExAsrRack_AttachDspBusSetting(RackId, TCHAR_TO_UTF8(*SettingName.ToString()), nullptr, 0);
		}

		return true;
	}

	return false;
}

bool FAtomRuntime::SetRackSnapshot(const UAtomRack* InRack, float FadeSeconds)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InRack)
	{
		// Get snapshot name
		FName SnapshotName = InRack->Snapshot;
#if WITH_EDITOR
		if (!SnapshotName.IsNone() && (!InRack->DspBusSetting || !InRack->DspBusSetting->IsValidSnapshotName(SnapshotName)))
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set spnashot to rack '%s' because it is not vaild."), *InRack->GetFullName());
			return false;
		}
#endif

		// Get Atom rack id
		int RackId = GetAsrRackId(InRack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set spnashot '%s' to rack '%s' that is not registered to Atom."), *SnapshotName.ToString(), *InRack->GetFullName());
			return false;
		}

		const CriSint32 TimeMs = static_cast<CriSint32>(FMath::Min(FadeSeconds, 0.f) * 1000.f);
		if (!SnapshotName.IsNone())
		{
			FCriWareApi::criAtomExAsrRack_ApplyDspBusSnapshot(RackId, TCHAR_TO_UTF8(*SnapshotName.ToString()), TimeMs);
		}
		else
		{
			FCriWareApi::criAtomExAsrRack_ApplyDspBusSnapshot(RackId, nullptr, TimeMs);
		}

		return true;
	}

	return false;
}

FName FAtomRuntime::GetRackSnapshot(const UAtomRack* InRack) const
{
	if (!bIsAtomLibraryInitialized)
	{
		return NAME_None;
	}

	if (InRack)
	{
		// Get Atom rack id
		int RackId = GetAsrRackId(InRack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to get spnashot from rack '%s' that is not registered to Atom."), *InRack->GetFullName());
			return NAME_None;
		}

		return FName(UTF8_TO_TCHAR(FCriWareApi::criAtomExAsrRack_GetAppliedDspBusSnapshotName(RackId)), FNAME_Find);
	}

	return NAME_None;
}

bool FAtomRuntime::SetBusVolume(const UAtomBus* InBus, float InBusVolume)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set volume to bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set volume to bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set volume to bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());
	
		// Setup bus volume to Atom
		const float Volume = FMath::Max(InBusVolume, 0.f);
		FCriWareApi::criAtomExAsrRack_SetBusVolumeByName(RackId, TCHAR_TO_UTF8(*BusName.ToString()), Volume);
	
		return true;
	}

	return false;
}

float FAtomRuntime::GetBusVolume(const UAtomBus* InBus) const
{
	if (!bIsAtomLibraryInitialized)
	{
		return 0.0f;
	}

	if (InBus)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to get volume from bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return 0.0f;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to get volume from bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return 0.0f;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to get volume from bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return 0.0f;
		}
#endif
		check(!BusName.IsNone());

		// Get bus volume from Atom
		float Volume = 0.0f;
		FCriWareApi::criAtomExAsrRack_GetBusVolumeByName(RackId, TCHAR_TO_UTF8(*BusName.ToString()), &Volume);

		return Volume;
	}

	return 0.0f;
}

bool FAtomRuntime::SetBusPanning(const UAtomBus* InBus)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set panning to bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set panning to bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set panning to bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Setup bus panning to Atom
		CriAtomExAsrBusPanInfo PanInfo;
		PanInfo.volume = FMath::Clamp(InBus->GetPanning().Volume, 0.f, 1.f);
		PanInfo.angle = FMath::Clamp(InBus->GetPanning().Angle, -180.f, 180.f);
		PanInfo.distance = FMath::Clamp(InBus->GetPanning().Distance, 0.f, 1.f);
		PanInfo.wideness = FMath::Clamp(InBus->GetPanning().Wideness, 0.f, 1.f);
		PanInfo.spread = FMath::Clamp(InBus->GetPanning().Spread, 0.f, 1.f);
		FCriWareApi::criAtomExAsrRack_SetBusPanInfoByName(RackId, TCHAR_TO_UTF8(*BusName.ToString()), &PanInfo);

		return true;
	}

	return false;
}

/** Get spatialization panning settings from Atom runtime bus. */
bool FAtomRuntime::GetBusPanning(const UAtomBus* InBus, FAtomPanning& OutPanning) const
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to get panning from bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to get panning from bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to get panning from bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Get bus panning from Atom
		CriAtomExAsrBusPanInfo PanInfo = {};
		FCriWareApi::criAtomExAsrRack_GetBusPanInfoByName(RackId, TCHAR_TO_UTF8(*BusName.ToString()), &PanInfo);

		OutPanning = { PanInfo.volume, PanInfo.angle, PanInfo.distance, PanInfo.wideness, PanInfo.spread };

		return true;
	}

	return false;
}

bool FAtomRuntime::SetBusChannelLevelMatrix(const UAtomBus* InBus)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set channel level matrix to bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set channel level matrix to bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set channel level matrix to bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Setup bus level matrix to Atom
		const int InputChannels = InBus->ChannelLevelMatrix.GetNumInputChannels();
		const int OutputChannels = InBus->ChannelLevelMatrix.GetNumOutputChannels();
		const float* RawMatrixData = InBus->ChannelLevelMatrix.GetLevelMatixData();
		FCriWareApi::criAtomExAsrRack_SetBusMatrixByName(RackId, TCHAR_TO_UTF8(*BusName.ToString()), InputChannels, OutputChannels, RawMatrixData);

		return true;
	}

	return false;
}

bool FAtomRuntime::SetBusSendLevel(const UAtomBus* InBus, const FAtomBusSend& InSend)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set send level to bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set send level to bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set send level to bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Check if destination bus is a valid bus (same rack, not null) 
		if (!InSend.DestinationBus || (Cast<UAtomRack>(Rack) ? !((UAtomRack*)Rack)->Buses.Contains(InSend.DestinationBus) : Rack->MasterBus == InSend.DestinationBus))
		{
			FString DestBusName = InSend.DestinationBus ? InSend.DestinationBus->GetFullName() : TEXT("none");
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set send level to bus '%s' from AtomRack '%s' because destination bus '%s' is invalid or not in same rack."), *InBus->GetFullName(), *Rack->GetFullName(), *DestBusName);
			return false;
		}

		// Get destination bus name
		FName SendToBusName = InSend.DestinationBus->GetBusName();
#if WITH_EDITOR
		if (SendToBusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set send level to bus '%s' from AtomRack '%s' because destination bus is not initialized with AtomRack."), *InBus->GetFullName(), *Rack->GetFullName(), *InSend.DestinationBus->GetFullName());
			return false;
		}
#endif
		check(!SendToBusName.IsNone());

		// Setup bus send level to Atom
		const float Level = FMath::Clamp(InSend.Level, 0.f, 1.f);
		FCriWareApi::criAtomExAsrRack_SetBusSendLevelByName(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*SendToBusName.ToString()), Level);

		return true;
	}

	return false;
}

float FAtomRuntime::GetBusEffectParameter(const UAtomBus* InBus, const UAtomBusEffectPreset* InEffectPreset, int InParameterIndex) const
{
	if (!bIsAtomLibraryInitialized)
	{
		return 0.0f;
	}

	if (InBus && InEffectPreset)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to get effect parameter value of bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return 0.0f;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to get effect parameter value of bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return 0.0f;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to get effect parameter value of bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return 0.0f;
		}
#endif
		check(!BusName.IsNone());

		// Get destination bus name
		FName EffectName = InEffectPreset->GetEffectName();
#if WITH_EDITOR
		if (EffectName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to get effect parameter of bus '%s' from AtomRack '%s' because destination effect does not exist."), *InBus->GetFullName(), *Rack->GetFullName());
			return 0.0f;
		}
#endif
		check(!EffectName.IsNone());

		// check parameter index
		if (InParameterIndex >= InEffectPreset->GetNumParameters())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to get effect '%s' parameter of bus '%s' from AtomRack '%s' because parameter index is invalid."), *EffectName.ToString(), *InBus->GetFullName(), *Rack->GetFullName());
			return 0.0f;
		}

		const uint32 ParamIndex = FMath::Max(0, InParameterIndex);
		return FCriWareApi::criAtomExAsrRack_GetEffectParameter(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*EffectName.ToString()), ParamIndex);
	}

	return 0.0f;
}

bool FAtomRuntime::SetBusEffectParameter(const UAtomBus* InBus, const UAtomBusEffectPreset* InEffectPreset, int InParameterIndex)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus && InEffectPreset)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect parameter of bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect parameter of bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect parameter of bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Get destination bus name
		FName EffectName = InEffectPreset->GetEffectName();
#if WITH_EDITOR
		if (EffectName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect parameter of bus '%s' from AtomRack '%s' because destination effect does not exist."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!EffectName.IsNone());

		// check parameter index
		if (InParameterIndex >= InEffectPreset->GetNumParameters())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect '%s' parameter value of bus '%s' from AtomRack '%s' because parameter index is invalid."), *EffectName.ToString(), *InBus->GetFullName(), *Rack->GetFullName());
			return 0.0f;
		}

		const uint32 ParamIndex = FMath::Max(0, InParameterIndex);
		const float ParamValue = InEffectPreset->GetParameterValue(InParameterIndex);
		FCriWareApi::criAtomExAsrRack_SetEffectParameter(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*EffectName.ToString()), ParamIndex, ParamValue);
		
		BusEffectsToUpdate.Add({ Rack, BusName, EffectName });

		return true;
	}

	return false;
}

bool FAtomRuntime::GetBusEffectBypass(const UAtomBus* InBus, const UAtomBusEffectPreset* InEffectPreset) const
{
	// I don't know how to get this value from AtomRuntime.
	checkf(false, TEXT("Not Implemented!"));
	return false;
}

bool FAtomRuntime::SetBusEffectBypass(const UAtomBus* InBus, const UAtomBusEffectPreset* InEffectPreset)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus && InEffectPreset)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect bypass of bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect bypass of bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect bypass of bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Get destination bus name
		FName EffectName = InEffectPreset->GetEffectName();
#if WITH_EDITOR
		if (EffectName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect bypass of bus '%s' from AtomRack '%s' because destination effect does not exist."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!EffectName.IsNone());

		const bool bBypass = InEffectPreset->IsBypassed();
		FCriWareApi::criAtomExAsrRack_SetEffectBypass(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*EffectName.ToString()), bBypass);

		return true;
	}

	return false;
}

bool FAtomRuntime::GetBusEffectPreset(const UAtomBus* InBus, UAtomBusEffectPreset* InEffectPreset)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus && InEffectPreset)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect preset of bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect preset of bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect preset of bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Get destination bus name
		FName EffectName = InEffectPreset->GetEffectName();
#if WITH_EDITOR
		if (EffectName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect bypass of bus '%s' from AtomRack '%s' because destination effect does not exist."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!EffectName.IsNone());

		for (int32 ParamIndex = 0; ParamIndex < InEffectPreset->GetNumParameters(); ++ParamIndex)
		{
			const float ParamValue = FCriWareApi::criAtomExAsrRack_GetEffectParameter(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*EffectName.ToString()), ParamIndex);
			InEffectPreset->SetParameterValue(ParamIndex, ParamValue);
			
		}

		// how to get this ?
		//const bool bBypass = FCriWareApi::criAtomExAsrRack_GetEffectBypass(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*EffectName.ToString()));
		//InEffectPreset->SetBypass(bBypass);
		
		return true;
	}

	return false;
}

bool FAtomRuntime::SetBusEffectPreset(const UAtomBus* InBus, const UAtomBusEffectPreset* InEffectPreset)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (InBus && InEffectPreset)
	{
		UAtomRackBase* Rack = InBus->GetRack();
		if (!Rack)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect preset of bus '%s' that is not child of an AtomRack."), *InBus->GetFullName());
			return false;
		}

		// Get Atom rack id
		int RackId = GetAsrRackId(Rack);
		if (RackId == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Failed to set effect preset of bus '%s' where parent AtomRack '%s' is not registered to Atom."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}

		// Get bus name
		FName BusName = InBus->GetBusName();
#if WITH_EDITOR
		if (BusName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect preset of bus '%s' because it is not initialized with AtomRack '%s'."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!BusName.IsNone());

		// Get destination bus name
		FName EffectName = InEffectPreset->GetEffectName();
#if WITH_EDITOR
		if (EffectName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to set effect bypass of bus '%s' from AtomRack '%s' because destination effect does not exist."), *InBus->GetFullName(), *Rack->GetFullName());
			return false;
		}
#endif
		check(!EffectName.IsNone());

		for (int32 ParamIndex = 0; ParamIndex < InEffectPreset->GetNumParameters(); ++ParamIndex)
		{
			const float ParamValue = InEffectPreset->GetParameterValue(ParamIndex);
			FCriWareApi::criAtomExAsrRack_SetEffectParameter(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*EffectName.ToString()), ParamIndex, ParamValue);
		}

		BusEffectsToUpdate.Add({ Rack, BusName, EffectName });

		const bool bBypass = InEffectPreset->IsBypassed();
		FCriWareApi::criAtomExAsrRack_SetEffectBypass(RackId, TCHAR_TO_UTF8(*BusName.ToString()), TCHAR_TO_UTF8(*EffectName.ToString()), bBypass);

		return true;
	}

	return false;
}

bool FAtomRuntime::AttachAisacPatchToCategory(const FAtomCategory& Category, const UAtomAisacPatch* AisacPatch)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (AisacPatch)
	{
		// Get category name
#if WITH_EDITOR
		if (Category.Name.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to attach AISAC patch '%s' to category because category is invalid."), *AisacPatch->GetFullName());
			return false;
		}
#endif
		check(!Category.Name.IsNone());

		// Get AISAC patch name
		FName PatchName = AisacPatch->Name;
#if WITH_EDITOR
		if (PatchName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to attach AISAC patch '%s' to category '%s' because AISAC patch is invalid."), *AisacPatch->GetFullName(), *Category.Name.ToString());
			return false;
		}
#endif
		check(!PatchName.IsNone());

		FCriWareApi::criAtomExCategory_AttachAisacByName(TCHAR_TO_UTF8(*Category.Name.ToString()), TCHAR_TO_UTF8(*PatchName.ToString()));
	
		return true;
	}
	
	return false;
}

bool FAtomRuntime::DetachAisacPatchFromCategory(const FAtomCategory& Category, const UAtomAisacPatch* AisacPatch)
{
	if (!bIsAtomLibraryInitialized)
	{
		return false;
	}

	if (AisacPatch)
	{
		// Get category name
#if WITH_EDITOR
		if (Category.Name.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to detach AISAC patch '%s' from category because category is invalid."), *AisacPatch->GetFullName());
			return false;
		}
#endif
		check(!Category.Name.IsNone());

		// Get AISAC patch name
		FName PatchName = AisacPatch->Name;
#if WITH_EDITOR
		if (PatchName.IsNone())
		{
			UE_LOG(LogCriWareAtomDebug, Error, TEXT("Failed to detach AISAC patch '%s' from category '%s' because AISAC patch is invalid."), *AisacPatch->GetFullName(), *Category.Name.ToString());
			return false;
		}
#endif
		check(!PatchName.IsNone());

		FCriWareApi::criAtomExCategory_DetachAisacByName(TCHAR_TO_UTF8(*Category.Name.ToString()), TCHAR_TO_UTF8(*PatchName.ToString()));

		return true;
	}

	return false;
}

void FAtomRuntime::UpdateBusModulationSettings(UAtomBus* InAtomBus, const TSet<TObjectPtr<UAtomModulatorBase>>& InOutputModulation)
{
	if (!IsInAtomThread())
	{
		FAtomThread::RunCommandOnAtomThread([this, InAtomBus, OutMod = InOutputModulation]()
		{
			UpdateBusModulationSettings(InAtomBus, OutMod);
		});
		return;
	}

	if (ModulationSystem.IsValid())
	{
		InAtomBus->VolumeMod.UpdateModulators(InOutputModulation);
	}
}

void FAtomRuntime::SetBusModulationBaseLevels(UAtomBus* InAtomBus, float InVolumeModBase)
{
	if (!IsInAtomThread())
	{
		FAtomThread::RunCommandOnAtomThread([this, InAtomBus, InVolumeModBase]()
		{
			SetBusModulationBaseLevels(InAtomBus, InVolumeModBase);
		});
		return;
	}

	if (ModulationSystem.IsValid())
	{
		InAtomBus->VolumeModBaseDb = InVolumeModBase;
	}
}

void FAtomRuntime::SetListener(UWorld* World, const int32 InViewportIndex, const FTransform& ListenerTransform, const float InDeltaSeconds)
{
	check(IsInGameThread());

	uint32 WorldID = INDEX_NONE;

	if (World != nullptr)
	{
		WorldID = World->GetUniqueID();
	}

	// Initialize the plugin listeners if we haven't already. This needs to be done here since this is when we're
	// guaranteed to have a world ptr and we've already initialized the audio device.
	if (World)
	{
		// World change event triggered on change in world of existing listener.
		if (InViewportIndex < Listeners.Num())
		{
			if (Listeners[InViewportIndex].WorldID != WorldID)
			{
				NotifyPluginListenersWorldChanged(World);
			}
		}
	}

	// The copy is done because FTransform doesn't work to pass by value on Win32
	FTransform ListenerTransformCopy = ListenerTransform;

	if (!ensureMsgf(ListenerTransformCopy.IsValid(), TEXT("Invalid listener transform provided to Atom runtime")))
	{
		// If we have a bad transform give it something functional if totally wrong
		ListenerTransformCopy = FTransform::Identity;
	}

	if (InViewportIndex >= ListenerProxies.Num())
	{
		ListenerProxies.AddDefaulted(InViewportIndex - ListenerProxies.Num() + 1);
	}

	ListenerProxies[InViewportIndex].Transform = ListenerTransformCopy;
	ListenerProxies[InViewportIndex].WorldID = WorldID;

	DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetListener"), STAT_AtomSetListener, STATGROUP_AtomThreadCommands);
	FAtomThread::RunCommandOnAtomThread([this, WorldID, InViewportIndex, ListenerTransformCopy, InDeltaSeconds]()
	{
		const int32 StartingListenerCount = Listeners.Num();

		TArray<FAtomListener>& AtomThreadListeners = Listeners;
		if (InViewportIndex >= AtomThreadListeners.Num())
		{
			const int32 NumListenersToAdd = InViewportIndex - AtomThreadListeners.Num() + 1;
			for (int32 i = 0; i < NumListenersToAdd; ++i)
			{
				AtomThreadListeners.Add(FAtomListener(this));

				// While we're going through the process of moving from raw listener access to access by index, 
				// we're going to store our current index inside the listener to help in deprecation and backwards compat.
				const int32 CurrentIndex = i + StartingListenerCount;
				if (ensure(AtomThreadListeners.IsValidIndex(CurrentIndex)))
				{
					AtomThreadListeners[CurrentIndex].ListenerIndex = CurrentIndex;
				}
			}
		}

		FAtomListener& Listener = AtomThreadListeners[InViewportIndex];
		Listener.Velocity = InDeltaSeconds > 0.f ?
			(ListenerTransformCopy.GetTranslation() - Listener.Transform.GetTranslation()) / InDeltaSeconds
			: FVector::ZeroVector;

#if ENABLE_NAN_DIAGNOSTIC
		if (Listener.Velocity.ContainsNaN())
		{
			logOrEnsureNanError(TEXT("FAtomRuntime::SetListener has detected a NaN in Listener Velocity"));
		}
#endif
		const bool bShouldListenerForceUpdate = FAtomVirtualLoop::ShouldListenerMoveForceUpdate(Listener.Transform, ListenerTransformCopy);

		Listener.WorldID = WorldID;
		Listener.Transform = ListenerTransformCopy;

		if (bShouldListenerForceUpdate)
		{
			const bool bForceUpdate = true;
			UpdateVirtualLoops(bForceUpdate);
		}

		OnListenerUpdated(AtomThreadListeners);

	}, GET_STATID(STAT_AtomSetListener));
}

void FAtomRuntime::SetListenerAttenuationOverride(int32 ListenerIndex, const FVector AttenuationPosition)
{
	if (ListenerIndex == INDEX_NONE)
	{
		return;
	}

	if (!IsInAtomThread())
	{
		if (ListenerIndex >= ListenerProxies.Num())
		{
			return;
		}

		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetListenerAttenuationOverride"), STAT_AtomSetListenerAttenuationOverride, STATGROUP_AtomThreadCommands);

		ListenerProxies[ListenerIndex].AttenuationOverride = AttenuationPosition;
		ListenerProxies[ListenerIndex].bUseAttenuationOverride = true;

		FAtomRuntime* Runtime = this;
		FAtomThread::RunCommandOnAtomThread([Runtime, ListenerIndex, AttenuationPosition]()
			{
				Runtime->SetListenerAttenuationOverride(ListenerIndex, AttenuationPosition);
			}, GET_STATID(STAT_AtomSetListenerAttenuationOverride));
	}
	else
	{
		if (ensureMsgf(ListenerIndex < Listeners.Num(), TEXT("Listener Index %u out of range of available Listeners!"), ListenerIndex))
		{
			FAtomListener& Listener = Listeners[ListenerIndex];
			const bool bPrevAttenuationOverride = Listener.bUseAttenuationOverride;

			Listener.bUseAttenuationOverride = true;
			Listener.AttenuationOverride = AttenuationPosition;

			if (!bPrevAttenuationOverride)
			{
				UpdateVirtualLoops(true);
			}
		}
	}
}

void FAtomRuntime::ClearListenerAttenuationOverride(int32 ListenerIndex)
{
	if (ListenerIndex == INDEX_NONE)
	{
		return;
	}

	if (!IsInAtomThread())
	{
		if (ListenerIndex >= ListenerProxies.Num())
		{
			return;
		}

		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.ClearListenerAttenuationOverride"), STAT_AtomClearListenerAttenuationOverride, STATGROUP_AtomThreadCommands);

		ListenerProxies[ListenerIndex].AttenuationOverride = FVector::ZeroVector;
		ListenerProxies[ListenerIndex].bUseAttenuationOverride = false;

		FAtomRuntime* Runtime = this;
		FAtomThread::RunCommandOnAtomThread([Runtime, ListenerIndex]()
		{
			Runtime->ClearListenerAttenuationOverride(ListenerIndex);
		}, GET_STATID(STAT_AtomClearListenerAttenuationOverride));
	}
	else
	{
		if (ensureMsgf(ListenerIndex < Listeners.Num(), TEXT("Listener Index %u out of range of available Listeners!"), ListenerIndex))
		{
			FAtomListener& Listener = Listeners[ListenerIndex];
			if (Listener.bUseAttenuationOverride)
			{
				Listener.bUseAttenuationOverride = false;
				UpdateVirtualLoops(true);
			}
		}
	}
}

void FAtomRuntime::OnListenerUpdated(const TArray<FAtomListener>& InListeners)
{}

float FAtomRuntime::GetRuntimeDeltaTime() const
{
	// Clamp the delta time to a reasonable max delta time.
	return FMath::Min(RuntimeDeltaTime, 0.5f);
}

float FAtomRuntime::GetGameDeltaTime() const
{
	float DeltaTime = FApp::GetDeltaTime();

	// Clamp the delta time to a reasonable max delta time.
	return FMath::Min(DeltaTime, 0.5f);
}

int32 FAtomRuntime::GetMaxChannels() const
{
	/*// Get thread-context version of channel scalar & scale by cvar scalar
	float MaxChannelScalarToApply = IsInAtomThread() ? MaxChannelsScale : MaxChannelsScale_GameThread;
	MaxChannelScalarToApply *= AtomChannelCountScaleCVar;

	// Get thread-context version of channel max.  Override by cvar if cvar is valid.
	int32 OutMaxChannels = IsInAtomThread() ? MaxChannels : MaxChannels_GameThread;
	if (AudioChannelCountCVar > 0)
	{
		OutMaxChannels = AudioChannelCountCVar;
	}

	// Find product of max channels and final scalar, and clamp between 1 and MaxSources.
	check(MaxSources > 0);
	return FMath::Clamp(static_cast<int32>(OutMaxChannels * MaxChannelScalarToApply), 1, MaxSources);*/

	return 128; // == GetAttomvirtualvoices; 
}

int32 FAtomRuntime::GetMaxSources() const
{
	// Get from settings
	auto Settings = GetDefault<UCriWareCoreSettings>();

	return Settings->MaxSoundPlaybackHandles;
}

TRange<float> FAtomRuntime::GetGlobalPitchRange() const
{
	return TRange<float>(GlobalMinPitch, GlobalMaxPitch);
}

void FAtomRuntime::SetTransientPrimaryVolume(const float InTransientPrimaryVolume)
{
	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetTransientPrimaryVolume"), STAT_AtomSetTransientPrimaryVolume, STATGROUP_AtomThreadCommands);

		FAtomThread::RunCommandOnAtomThread([this, InTransientPrimaryVolume]()
		{
			SetTransientPrimaryVolume(InTransientPrimaryVolume);
		}, GET_STATID(STAT_AtomSetTransientPrimaryVolume));

		return;
	}

	TransientPrimaryVolume = InTransientPrimaryVolume;
}

const FAtomGlobalFocusSettings& FAtomRuntime::GetGlobalFocusSettings() const
{
	if (IsInAtomThread())
	{
		return GlobalFocusSettings;
	}

	check(IsInGameThread());
	return GlobalFocusSettings_GameThread;
}

void FAtomRuntime::SetGlobalFocusSettings(const FAtomGlobalFocusSettings& NewFocusSettings)
{
	check(IsInGameThread());

	GlobalFocusSettings_GameThread = NewFocusSettings;

	DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetGlobalFocusSettings"), STAT_AtomSetGlobalFocusSettings, STATGROUP_AtomThreadCommands);
	FAtomThread::RunCommandOnAtomThread([this, NewFocusSettings]()
	{
		GlobalFocusSettings = NewFocusSettings;
	}, GET_STATID(STAT_AtomSetGlobalFocusSettings));
}

void FAtomRuntime::SetGlobalPitchModulation(float PitchModulation, float TimeSec)
{
	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetGlobalPitchModulation"), STAT_AtomSetGlobalPitchModulation, STATGROUP_AtomThreadCommands);

		FAtomThread::RunCommandOnAtomThread([this, PitchModulation, TimeSec]()
		{
			SetGlobalPitchModulation(PitchModulation, TimeSec);
		}, GET_STATID(STAT_AtomSetGlobalPitchModulation));

		return;
	}

	GlobalPitchScale.Set(PitchModulation, TimeSec);
}

float FAtomRuntime::ClampPitch(float InPitchScale) const
{
	return FMath::Clamp(InPitchScale, GlobalMinPitch, GlobalMaxPitch);
}

bool FAtomRuntime::IsAtomRuntimeMuted() const
{
	check(IsInAtomThread());

	FAtomRuntimeManager* RuntimeManager = GCriWare->GetCriWareCore()->GetAtomRuntimeManager();
	if (RuntimeManager)
	{
		// Check to see if the device manager has "bPlayAllPIEAudio" enabled
		//const bool bIsPlayAllAudio = AtomManager->IsPlayAllAudio();

		// Check if always playing NonRealtime devices, and this is a NonRealtime device
		//const bool bIsAlwaysPlayNonRealtime = AtomManager->IsAlwaysPlayNonRealtimeDeviceAudio() && IsNonRealtime();

		//if (bIsPlayAllDeviceAudio || bIsAlwaysPlayNonRealtime)
		//{
		//	return false;
		//}

		// If we have one active device, ignore device muting
		if (RuntimeManager->GetNumAtomRuntimes() == 1)
		{
			return false;
		}
	}

	return bIsRuntimeMuted;
}

void FAtomRuntime::SetRuntimeMuted(const bool bMuted)
{
	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetRuntimeMuted"), STAT_SetAtomRuntimeMuted, STATGROUP_AtomThreadCommands);

		FAtomRuntime* AtomRuntime = this;
		FAtomThread::RunCommandOnAtomThread([AtomRuntime, bMuted]()
		{
			AtomRuntime->SetRuntimeMuted(bMuted);

		}, GET_STATID(STAT_SetAtomRuntimeMuted));

		return;
	}

	bIsRuntimeMuted = bMuted;
}

void FAtomRuntime::GetAzimuth(const FAtomAttenuationListenerData& ListenerData, float& OutAzimuth, float& OutAbsoluteAzimuth) const
{
	const FVector& ListenerForwardDir = ListenerData.ListenerTransform.GetUnitAxis(EAxis::X);

	const float SoundToListenerForwardDotProduct = FVector::DotProduct(ListenerForwardDir, ListenerData.ListenerToSoundDir);
	const float SoundListenerAngleRadians = FMath::Acos(SoundToListenerForwardDotProduct);

	// Normal azimuth only goes to 180 (0 is in front, 180 is behind).
	OutAzimuth = FMath::RadiansToDegrees(SoundListenerAngleRadians);

	const FVector& ListenerRightDir = ListenerData.ListenerTransform.GetUnitAxis(EAxis::Y);
	const float SoundToListenerRightDotProduct = FVector::DotProduct(ListenerRightDir, ListenerData.ListenerToSoundDir);

	FVector AbsAzimuthVector2D = FVector(SoundToListenerForwardDotProduct, SoundToListenerRightDotProduct, 0.0f);
	AbsAzimuthVector2D.Normalize();

	OutAbsoluteAzimuth = FMath::IsNearlyZero(AbsAzimuthVector2D.X) ? HALF_PI : FMath::Atan(AbsAzimuthVector2D.Y / AbsAzimuthVector2D.X);
	OutAbsoluteAzimuth = FMath::RadiansToDegrees(OutAbsoluteAzimuth);
	OutAbsoluteAzimuth = FMath::Abs(OutAbsoluteAzimuth);

	if (AbsAzimuthVector2D.X > 0.0f && AbsAzimuthVector2D.Y < 0.0f)
	{
		OutAbsoluteAzimuth = 360.0f - OutAbsoluteAzimuth;
	}
	else if (AbsAzimuthVector2D.X < 0.0f && AbsAzimuthVector2D.Y < 0.0f)
	{
		OutAbsoluteAzimuth += 180.0f;
	}
	else if (AbsAzimuthVector2D.X < 0.0f && AbsAzimuthVector2D.Y > 0.0f)
	{
		OutAbsoluteAzimuth = 180.0f - OutAbsoluteAzimuth;
	}
}

float FAtomRuntime::GetFocusFactor(const float Azimuth, const FAtomAttenuationSettings& AttenuationSettings) const
{
	// 0.0f means we are in focus, 1.0f means we are out of focus
	float FocusFactor = 0.0f;

	const float FocusAzimuth = FMath::Clamp(GlobalFocusSettings.FocusAzimuthScale * AttenuationSettings.FocusAzimuth, 0.0f, 180.0f);
	const float NonFocusAzimuth = FMath::Clamp(GlobalFocusSettings.NonFocusAzimuthScale * AttenuationSettings.NonFocusAzimuth, 0.0f, 180.0f);

	if (FocusAzimuth != NonFocusAzimuth)
	{
		FocusFactor = (Azimuth - FocusAzimuth) / (NonFocusAzimuth - FocusAzimuth);
		FocusFactor = FMath::Clamp(FocusFactor, 0.0f, 1.0f);
	}
	else if (Azimuth >= FocusAzimuth)
	{
		FocusFactor = 1.0f;
	}

	return FocusFactor;
}

void FAtomRuntime::GetMaxDistanceAndFocusFactor(UAtomSoundBase* Sound, const UWorld* World, const FVector& Location, const FAtomAttenuationSettings* AttenuationSettingsToApply, float& OutMaxDistance, float& OutFocusFactor)
{
	check(IsInGameThread());
	check(Sound);

	const bool bHasAttenuationSettings = ShouldUseAttenuation(World) && AttenuationSettingsToApply;

	OutFocusFactor = 1.0f;

	if (bHasAttenuationSettings)
	{
		FTransform SoundTransform;
		SoundTransform.SetTranslation(Location);

		OutMaxDistance = AttenuationSettingsToApply->GetMaxDimension();
		/*if (AttenuationSettingsToApply->AttenuationShape == EAttenuationShape::Box)
		{
			static const float Sqrt2 = 1.4142135f;
			OutMaxDistance *= Sqrt2;
		}*/

		if (AttenuationSettingsToApply->bSpatialize && AttenuationSettingsToApply->bEnableListenerFocus)
		{
			const int32 ClosestListenerIndex = FindClosestListenerIndex(SoundTransform);
			if (ClosestListenerIndex == INDEX_NONE)
			{
				UE_LOG(LogCriWareAtom, Warning, TEXT("Invalid ClosestListenerIndex. AtomSound max distance and focus factor calculation failed."));
				return;
			}

			// Now scale the max distance based on the focus settings in the attenuation settings
			FAtomAttenuationListenerData ListenerData = FAtomAttenuationListenerData::Create(*this, ClosestListenerIndex, SoundTransform, *AttenuationSettingsToApply);

			float Azimuth = 0.0f;
			float AbsoluteAzimuth = 0.0f;
			GetAzimuth(ListenerData, Azimuth, AbsoluteAzimuth);
			OutFocusFactor = GetFocusFactor(Azimuth, *AttenuationSettingsToApply);
		}
	}
	else
	{
		// No need to scale the distance by focus factor since we're not using any attenuation settings
		OutMaxDistance = Sound->GetMaxDistance();
	}
}

bool FAtomRuntime::SoundIsAudible(UAtomSoundBase* Sound, const UWorld* World, const FVector& Location, const FAtomAttenuationSettings* AttenuationSettingsToApply, float MaxDistance, float FocusFactor) const
{
	check(IsInGameThread());

	const bool bHasAttenuationSettings = ShouldUseAttenuation(World) && AttenuationSettingsToApply;
	float DistanceScale = 1.0f;
	if (bHasAttenuationSettings)
	{
		// If we are not using distance-based attenuation, this sound will be audible regardless of distance.
		if (!AttenuationSettingsToApply->bAttenuate)
		{
			return true;
		}

		DistanceScale = AttenuationSettingsToApply->GetFocusDistanceScale(GetGlobalFocusSettings(), FocusFactor);
	}

	DistanceScale = FMath::Max(DistanceScale, 0.0001f);
	return LocationIsAudible(Location, MaxDistance / DistanceScale);
}

bool FAtomRuntime::SoundIsAudible(const FAtomActiveSound& NewActiveSound)
{
	check(NewActiveSound.Sound);

	// If we have an attenuation node, we can't know until we evaluate
	// the sound cue if it's audio output going to be audible via a
	// distance check. TODO: Check if this is still the case.
	//if (NewActiveSound.Sound->HasAttenuationNode())
	//{
	//	return true;
	//}

	/*if (PlayWhenSilentEnabled() && (NewActiveSound.Sound->SupportsSubtitles() || (NewActiveSound.bHandleSubtitles && NewActiveSound.bHasExternalSubtitles)) * / )
	{
		return true;
	}*/

	if (NewActiveSound.Sound->IsPlayWhenSilent())
	{
		return true;
	}

	// TODO: bAllowSpatialization is used in other audibility checks but not here.
	const FAtomAttenuationSettings& Attenuation = NewActiveSound.AttenuationSettings;
	const bool bHasFocusScaling = Attenuation.FocusDistanceScale != 1.0f || Attenuation.NonFocusDistanceScale != 1.0f;
	if (!NewActiveSound.bHasAttenuationSettings ||
		(NewActiveSound.bHasAttenuationSettings && (!Attenuation.bAttenuate || bHasFocusScaling)))
	{
		return true;
	}

	// TODO: Check if this is necessary. GetMaxDistanceAndFocusFactor should've solved this and would make this
	// flavor of SoundIsAudible more accurate.
	const FAtomGlobalFocusSettings& FocusSettings = GetGlobalFocusSettings();
	if (FocusSettings.FocusDistanceScale != 1.0f || FocusSettings.NonFocusDistanceScale != 1.0f)
	{
		return true;
	}

	const float ApparentMaxDistance = NewActiveSound.MaxDistance * NewActiveSound.FocusData.DistanceScale;
	if (LocationIsAudible(NewActiveSound.Transform.GetLocation(), ApparentMaxDistance))
	{
		return true;
	}

	return false;
}

int32 FAtomRuntime::FindClosestListenerIndex(const FTransform& SoundTransform, const TArray<FAtomListener>& InListeners)
{
	check(IsInAtomThread());

	int32 ClosestListenerIndex = 0;
	const bool bAllowAttenuationOverride = true;
	if (InListeners.Num() > 0)
	{
		float ClosestDistSq = FVector::DistSquared(SoundTransform.GetTranslation(), InListeners[0].GetPosition(bAllowAttenuationOverride));

		for (int32 i = 1; i < InListeners.Num(); i++)
		{
			const float DistSq = FVector::DistSquared(SoundTransform.GetTranslation(), InListeners[i].GetPosition(bAllowAttenuationOverride));
			if (DistSq < ClosestDistSq)
			{
				ClosestListenerIndex = i;
				ClosestDistSq = DistSq;
			}
		}
	}

	return ClosestListenerIndex;
}

int32 FAtomRuntime::FindClosestListenerIndex(const FTransform& SoundTransform) const
{
	float UnusedDistSq;
	const bool bAllowOverrides = true;
	return FindClosestListenerIndex(SoundTransform.GetTranslation(), UnusedDistSq, bAllowOverrides);
}

int32 FAtomRuntime::FindClosestListenerIndex(const FVector& Position, float& OutDistanceSq, bool bAllowAttenuationOverrides) const
{
	int32 ClosestListenerIndex = 0;
	OutDistanceSq = 0.f;
	FVector ListenerPosition;

	if (!GetListenerPosition(0, ListenerPosition, bAllowAttenuationOverrides))
	{
		return INDEX_NONE;
	}

	OutDistanceSq = FVector::DistSquared(Position, ListenerPosition);

	const int32 ListenerCount = IsInAtomThread() ? Listeners.Num() : ListenerProxies.Num();
	for (int32 i = 1; i < ListenerCount; ++i)
	{
		if (!GetListenerPosition(i, ListenerPosition, bAllowAttenuationOverrides))
		{
			continue;
		}

		const float DistSq = FVector::DistSquared(Position, ListenerPosition);
		if (DistSq < OutDistanceSq)
		{
			OutDistanceSq = DistSq;
			ClosestListenerIndex = i;
		}
	}

	return ClosestListenerIndex;
}

void FAtomRuntime::AddReferencedObjects(FReferenceCollector& Collector)
{
	//Collector.AddReferencedObject(DefaultBaseSoundMix);
	//Collector.AddReferencedObjects(PrevPassiveSoundMixModifiers);
	//Collector.AddReferencedObjects(SoundMixModifiers);

	//for (TPair<FName, FActivatedReverb>& ActivatedReverbPair : ActivatedReverbs)
	//{
	//	Collector.AddReferencedObject(ActivatedReverbPair.Value.ReverbSettings.ReverbEffect);
	//}

	//if (Effects)
	//{
	//	Effects->AddReferencedObjects(Collector);
	//}

	for (FAtomActiveSound* ActiveSound : ActiveSounds)
	{
		ActiveSound->AddReferencedObjects(Collector);
	}

	for (FAtomActiveSound* ActiveSound : PendingSoundsToDelete)
	{
		ActiveSound->AddReferencedObjects(Collector);
	}

	for (AtomRuntimeUtils::FVirtualLoopPair& Pair : VirtualLoops)
	{
		Pair.Key->AddReferencedObjects(Collector);
	}

	// Make sure our referenced sound waves are up-to-date
	UpdateReferencedSounds();

	// Make sure we don't try to delete any sound waves which may have in-flight decodes
	//Collector.AddReferencedObjects(ReferencedSoundWaves);

	// Loop through the cached plugin settings objects and add to the collector
	//Collector.AddReferencedObjects(PluginSettingsObjects);
}

void FAtomRuntime::CheckAtomThread() const
{
#if ATOM_MIXER_ENABLE_DEBUG_MODE
	// "Atom Thread" is the game/audio thread ID used above ASR rendering thread that is kept by library.
	ATOM_MIXER_CHECK(IsInAtomThread());
#endif
}

void FAtomRuntime::ResetAudioRenderingThreadID()
{
	ASRThreadID = INDEX_NONE;
	CheckAudioRenderingThread();
}

void FAtomRuntime::CheckAudioRenderingThread() const
{
	if (ASRThreadID == INDEX_NONE)
	{
		ASRThreadID = FPlatformTLS::GetCurrentThreadId();
	}
	int32 CurrentThreadID = FPlatformTLS::GetCurrentThreadId();
	AUDIO_MIXER_CHECK(CurrentThreadID == ASRThreadID);
}

bool FAtomRuntime::IsAudioRenderingThread() const
{
	int32 CurrentThreadID = FPlatformTLS::GetCurrentThreadId();
	return CurrentThreadID == ASRThreadID;
}

void FAtomRuntime::ResetInterpolation()
{
	check(IsInAtomThread());

	/*for (FAtomListener& Listener : Listeners)
	{
		Listener.InteriorStartTime = 0.f;
		Listener.InteriorEndTime = 0.f;
		Listener.ExteriorEndTime = 0.f;
		Listener.InteriorLPFEndTime = 0.f;
		Listener.ExteriorLPFEndTime = 0.f;

		Listener.InteriorVolumeInterp = 0.0f;
		Listener.InteriorLPFInterp = 0.0f;
		Listener.ExteriorVolumeInterp = 0.0f;
		Listener.ExteriorLPFInterp = 0.0f;
	}*/

	//SoundMixModifiers.Reset();
	//PrevPassiveSoundMixModifiers.Reset();
	//BaseSoundMix = nullptr;

	// reset audio effects
	//if (Effects)
	//{
	//	Effects->ResetInterpolation();
	//}
}

bool FAtomRuntime::LocationIsAudible(const FVector& Location, const float MaxDistance) const
{
	if (MaxDistance >= AtomMaxWorldDistanceCVar)
	{
		return true;
	}

	const bool bInAtomThread = IsInAtomThread();
	const bool bInGameThread = IsInGameThread();

	check(bInAtomThread || bInGameThread);

	const int32 ListenerCount = bInAtomThread ? Listeners.Num() : ListenerProxies.Num();
	for (int32 i = 0; i < ListenerCount; ++i)
	{
		if (LocationIsAudible(Location, i, MaxDistance))
		{
			return true;
		}
	}

	return false;
}

bool FAtomRuntime::LocationIsAudible(const FVector& Location, int32 ListenerIndex, float MaxDistance) const
{
	if (MaxDistance >= AtomMaxWorldDistanceCVar)
	{
		return true;
	}

	FVector ListenerTranslation;
	const bool bAllowOverride = true;
	if (ListenerIndex == INDEX_NONE || !GetListenerPosition(ListenerIndex, ListenerTranslation, bAllowOverride))
	{
		return false;
	}

	const float MaxDistanceSquared = MaxDistance * MaxDistance;
	return (ListenerTranslation - Location).SizeSquared() < MaxDistanceSquared;
}

float FAtomRuntime::GetDistanceToNearestListener(const FVector& Location) const
{
	float DistSquared = 0.0f;
	if (GetDistanceSquaredToNearestListener(Location, DistSquared))
	{
		return FMath::Sqrt(DistSquared);
	}

	return AtomMaxWorldDistanceCVar;
}

bool FAtomRuntime::GetDistanceSquaredToListener(const FVector& Location, int32 ListenerIndex, float& OutSqDistance) const
{
	OutSqDistance = TNumericLimits<float>::Max();
	const int32 ListenerCount = IsInAtomThread() ? Listeners.Num() : ListenerProxies.Num();

	if (ListenerIndex >= ListenerCount)
	{
		return false;
	}

	FVector ListenerTranslation;
	const bool bAllowOverride = true;
	if (!GetListenerPosition(ListenerIndex, ListenerTranslation, bAllowOverride))
	{
		return false;
	}

	OutSqDistance = (ListenerTranslation - Location).SizeSquared();
	return true;
}

bool FAtomRuntime::GetDistanceSquaredToNearestListener(const FVector& Location, float& OutSqDistance) const
{
	OutSqDistance = TNumericLimits<float>::Max();
	const bool bInAtomThread = IsInAtomThread();
	const bool bInGameThread = IsInGameThread();

	check(bInAtomThread || bInGameThread);

	float DistSquared;
	const bool bAllowAttenuationOverrides = true;
	if (FindClosestListenerIndex(Location, DistSquared, bAllowAttenuationOverrides) == INDEX_NONE)
	{
		OutSqDistance = AtomMaxWorldDistanceCVar;
		return false;
	}

	OutSqDistance = DistSquared;
	return true;
}

FVector FAtomRuntime::GetListenerTransformedDirection(const FVector& Position, float* OutDistance)
{
	float DistSquared;
	const bool bAllowAttenuationOverrides = true;

	int32 ClosestListenerIndex = FindClosestListenerIndex(Position, DistSquared, bAllowAttenuationOverrides);
	if (ClosestListenerIndex == INDEX_NONE || ClosestListenerIndex >= InverseListenerTransforms.Num())
	{
		UE_LOG(LogCriWareAtom, Display, TEXT("Invalid listener index (%d) when trying to find listener-transformed direction"), ClosestListenerIndex);
		return FVector::ForwardVector;
	}

	check(IsInAtomThread());
	FVector UnnormalizedDirection = InverseListenerTransforms[ClosestListenerIndex].TransformPosition(Position);
	if (OutDistance)
	{
		*OutDistance = UnnormalizedDirection.Size();
	}
	return UnnormalizedDirection.GetSafeNormal();
}

bool FAtomRuntime::GetListenerPosition(int32 ListenerIndex, FVector& OutPosition, bool bAllowOverride) const
{
	OutPosition = FVector::ZeroVector;
	if (ListenerIndex == INDEX_NONE)
	{
		return false;
	}

	if (IsInAtomThread())
	{
		checkf(ListenerIndex < Listeners.Num(), TEXT("Listener Index %u out of range of available Listeners!"), ListenerIndex);
		const FAtomListener& Listener = Listeners[ListenerIndex];
		OutPosition = Listener.GetPosition(bAllowOverride);
		return true;
	}
	else // IsInGameThread()
	{
		checkf(ListenerIndex < ListenerProxies.Num(), TEXT("Listener Index %u out of range of available Listeners!"), ListenerIndex);
		const FAtomListenerProxy& Proxy = ListenerProxies[ListenerIndex];
		OutPosition = Proxy.GetPosition(bAllowOverride);
		return true;
	}

	return false;
}

bool FAtomRuntime::GetListenerTransform(int32 ListenerIndex, FTransform& OutTransform) const
{
	OutTransform.SetIdentity();
	if (ListenerIndex == INDEX_NONE)
	{
		return false;
	}

	if (IsInAtomThread())
	{
		if (ListenerIndex < Listeners.Num())
		{
			OutTransform = Listeners[ListenerIndex].Transform;
			return true;
		}
	}
	else // IsInGameThread()
	{
		if (ListenerIndex < ListenerProxies.Num())
		{
			OutTransform = ListenerProxies[ListenerIndex].Transform;
			return true;
		}
	}

	return false;
}

bool FAtomRuntime::GetListenerWorldID(int32 ListenerIndex, uint32& OutWorldID) const
{
	OutWorldID = INDEX_NONE;
	if (ListenerIndex == INDEX_NONE)
	{
		return false;
	}

	if (IsInAtomThread())
	{
		if (ListenerIndex < Listeners.Num())
		{
			OutWorldID = Listeners[ListenerIndex].WorldID;
			return true;
		}
	}
	else // IsInGameThread()
	{
		if (ListenerIndex < ListenerProxies.Num())
		{
			OutWorldID = ListenerProxies[ListenerIndex].WorldID;
			return true;
		}
	}

	return false;
}

void FAtomRuntime::NotifyPluginListenersWorldChanged(UWorld* World)
{

}

void FAtomRuntime::RegisterSoundClass(UAtomSoundClass* InSoundClass)
{
	if (InSoundClass)
	{
		if (!IsInAtomThread())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.RegisterSoundClass"), STAT_AtomRegisterSoundClass, STATGROUP_AtomThreadCommands);

			FAtomRuntime* AtomRuntime = this;
			FAtomThread::RunCommandOnAtomThread([AtomRuntime, InSoundClass]()
			{
				AtomRuntime->RegisterSoundClass(InSoundClass);
			}, GET_STATID(STAT_AtomRegisterSoundClass));

			return;
		}

		// If the sound class wasn't already registered get it in to the system.
		if (!SoundClasses.Contains(InSoundClass))
		{
			SoundClasses.Add(InSoundClass, FAtomSoundClassProperties());

			FAtomSoundClassDynamicProperties NewDynamicProperties;
			NewDynamicProperties.AttenuationScaleParam.Set(InSoundClass->Properties.AttenuationDistanceScale, 0.0f);
			DynamicSoundClassProperties.Add(InSoundClass, NewDynamicProperties);

			/*if (!InSoundClass->CategoryToOverride.Name.IsNone())
			{
				for (auto AisacPatch : InSoundClass->Properties.ModulationSettings.AisacModulations.AdditionalAisacPatches)
				{
					AttachAisacPatchToCategory(InSoundClass->CategoryToOverride, AisacPatch);
				}
			}*/
		}
	}
}

void FAtomRuntime::UnregisterSoundClass(UAtomSoundClass* InSoundClass)
{
	if (InSoundClass)
	{
		if (!IsInAtomThread())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.UnregisterSoundClass"), STAT_AtomUnregisterSoundClass, STATGROUP_AtomThreadCommands);

			FAtomRuntime* AtomRuntime = this;
			FAtomThread::RunCommandOnAtomThread([AtomRuntime, InSoundClass]()
			{
				AtomRuntime->UnregisterSoundClass(InSoundClass);
			}, GET_STATID(STAT_AtomUnregisterSoundClass));

			return;
		}

		SoundClasses.Remove(InSoundClass);
		DynamicSoundClassProperties.Remove(InSoundClass);

		/*if (!InSoundClass->CategoryToOverride.Name.IsNone())
		{
			for (auto AisacPatch : InSoundClass->Properties.ModulationSettings.AisacModulations.AdditionalAisacPatches)
			{
				DetachAisacPatchFromCategory(InSoundClass->CategoryToOverride, AisacPatch);
			}
		}*/
	}
}

FAtomSoundClassProperties* FAtomRuntime::GetSoundClassCurrentProperties(UAtomSoundClass* InSoundClass)
{
	if (InSoundClass)
	{
		check(IsInAtomThread());

		FAtomSoundClassProperties* Properties = SoundClasses.Find(InSoundClass);
		return Properties;
	}
	return nullptr;
}

FAtomSoundClassDynamicProperties* FAtomRuntime::GetSoundClassDynamicProperties(UAtomSoundClass* InSoundClass)
{
	if (InSoundClass)
	{
		check(IsInAtomThread());

		FAtomSoundClassDynamicProperties* Properties = DynamicSoundClassProperties.Find(InSoundClass);
		return Properties;
	}
	return nullptr;
}

void FAtomRuntime::InitSoundClasses()
{
	// Reset the maps of sound class properties
	for (TObjectIterator<UAtomSoundClass> It; It; ++It)
	{
		UAtomSoundClass* SoundClass = *It;
		SoundClasses.Add(SoundClass, SoundClass->Properties);

		// Set the dynamic properties
		FAtomSoundClassDynamicProperties DynamicProperty;
		DynamicProperty.AttenuationScaleParam.Set(SoundClass->Properties.AttenuationDistanceScale, 0.0f);

		DynamicSoundClassProperties.Add(SoundClass, DynamicProperty);
	}

	// Propagate the properties down the hierarchy
	ParseSoundClasses(0.0f);
}

void FAtomRuntime::ParseSoundClasses(float InDeltaTime)
{
	TArray<UAtomSoundClass*> RootSoundClasses;

	// Reset to known state - preadjusted by set class volume calls
	for (auto& It : SoundClasses)
	{
		if (UAtomSoundClass* SoundClass = It.Key)
		{
			if (FAtomSoundClassDynamicProperties* DynamicProperties = DynamicSoundClassProperties.Find(SoundClass))
			{
				DynamicProperties->AttenuationScaleParam.Update(InDeltaTime);
			}

			// Reset the property values
			It.Value = SoundClass->Properties;
			if (SoundClass->ParentClass == nullptr)
			{
				RootSoundClasses.Add(SoundClass);
			}
		}
	}

	for (UAtomSoundClass* RootSoundClass : RootSoundClasses)
	{
		FAtomSoundClassProperties* RootSoundClassProperties = SoundClasses.Find(RootSoundClass);
		if (RootSoundClass && RootSoundClassProperties)
		{
			// Follow the tree.
			RecurseIntoSoundClasses(RootSoundClass, *RootSoundClassProperties);
		}
	}
}

void FAtomRuntime::UpdateSoundClassProperties(float DeltaTime)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_UpdateSoundClasses);

	// Propagate the properties down the hierarchy
	ParseSoundClasses(DeltaTime);
}

void FAtomRuntime::RecurseIntoSoundClasses(UAtomSoundClass* CurrentClass, FAtomSoundClassProperties& ParentProperties)
{
	// Iterate over all child nodes and recurse.
	for (UAtomSoundClass* ChildClass : CurrentClass->ChildClasses)
	{
		// Look up class and propagated properties.
		FAtomSoundClassProperties* Properties = SoundClasses.Find(ChildClass);

		// Should never be null for a properly set up tree.
		if (ChildClass)
		{
			if (Properties)
			{
				Properties->Volume *= ParentProperties.Volume;
				Properties->Pitch *= ParentProperties.Pitch;

				// Not all values propagate equally...
				// VoiceCenterChannelVolume, RadioFilterVolume, RadioFilterVolumeThreshold, bApplyEffects, BleedStereo, bReverb, and bCenterChannelOnly do not propagate (sub-classes can be non-zero even if parent class is zero)

				// ... and recurse into child nodes.
				RecurseIntoSoundClasses(ChildClass, *Properties);
			}
			else
			{
				UE_LOG(LogCriWareAtom, Warning, TEXT("Couldn't find child class properties - sound class functionality will not work correctly! CurrentClass: %s ChildClass: %s"), *CurrentClass->GetFullName(), *ChildClass->GetFullName());
			}
		}
	}

	// If it have an Atom category to override, setup values to atom runtime.
	/*if (CurrentClass->CategoryToOverride.Name != NAME_None)
	{
		// Apply volume to category. This will invalidate VolumeFromClass in FAtomSource using this AtomSoundClass to avoid double setup.
		FCriWareApi::criAtomExCategory_SetVolumeByName(TCHAR_TO_UTF8(*CurrentClass->CategoryToOverride.Name.ToString()), ParentProperties.Volume);
	}*/
}

void FAtomRuntime::UpdateConcurrency(TArray<FAtomPlaybackInstance*>& PlaybackInstances, TArray<FAtomActiveSound*>& ActiveSoundsCopy)
{
	// Now stop any sounds that are active that are in concurrency resolution groups that resolve by stopping quietest
	{
		SCOPE_CYCLE_COUNTER(STAT_AtomEvaluateConcurrency);
		ConcurrencyManager.UpdateSoundsToCull();
		ConcurrencyManager.UpdateVolumeScaleGenerations();
	}

	for (int32 i = ActiveSoundsCopy.Num() - 1; i >= 0; --i)
	{
		if (FAtomActiveSound* ActiveSound = ActiveSoundsCopy[i])
		{
			if (!ActiveSound->bShouldStopDueToMaxConcurrency &&
				!ActiveSound->bVirtualizedDueToMaxConcurrency)
			{
				continue;
			}

			if (ActiveSound->FadeOut == FAtomActiveSound::EFadeOut::Concurrency)
			{
				continue;
			}

			if (IsPendingStop(ActiveSound))
			{
				continue;
			}

			ConcurrencyManager.StopDueToVoiceStealing(*ActiveSound);
		}
	}

	// Remove all wave instances from the wave instance list that are stopping due to max concurrency.
	// Must be after checking if sound must fade out due to concurrency to avoid pre-maturally removing
	// wave instances prior to concurrency system marking as fading out.
	for (int32 Index = PlaybackInstances.Num() - 1; Index >= 0; --Index)
	{
		if (PlaybackInstances[Index]->ShouldStopDueToMaxConcurrency())
		{
			PlaybackInstances.RemoveAtSwap(Index, 1, false);
		}
	}

	// Must be completed after removing wave instances as it avoids an issue
	// where quiet loops can wrongfully scale concurrency ducking improperly if they continue
	// to attempt to be evaluated while being periodically realized to check volumes from virtualized.
	for (int32 i = 0; i < ActiveSoundsCopy.Num(); ++i)
	{
		if (FAtomActiveSound* ActiveSound = ActiveSoundsCopy[i])
		{
			ActiveSound->UpdateConcurrencyVolumeScalars(GetGameDeltaTime());
		}
	}
}

void FAtomRuntime::VirtualizeInactiveLoops()
{
	// Check if virtual loop system is enabled and don't push to virtual if disabled.
	// DISABLED todo -> virtaul resart mode by Engine
	if (false) // !FAtomVirtualLoop::IsEnabled())
	{
		return;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(FAtomDevice_VirtualizeLoops);

	const bool bDoRangeCheck = true;
	for (FAtomActiveSound* ActiveSound : ActiveSounds)
	{
		// Don't virtualize if set to fade out
		if (ActiveSound->FadeOut != FAtomActiveSound::EFadeOut::None)
		{
			continue;
		}

		// If already pending stop, don't attempt to virtualize
		if (IsPendingStop(ActiveSound))
		{
			continue;
		}

		FAtomVirtualLoop VirtualLoop;
		if (FAtomVirtualLoop::Virtualize(*ActiveSound, bDoRangeCheck, VirtualLoop))
		{
			AddSoundToStop(ActiveSound);

			// Clear must be called after AddSoundToStop to ensure AtomComponent is properly removed from AtomComponentIDToActiveSoundMap
			ActiveSound->ClearAtomComponent();
			if (UAtomSoundBase* Sound = ActiveSound->GetSound())
			{
				UE_LOG(LogCriWareAtom, Verbose, TEXT("Playing ActiveSound %s Virtualizing: Out of audible range."), *Sound->GetName());
			}
			AddVirtualLoop(VirtualLoop);
		}
	}
}

bool FAtomRuntime::GetDefaultAtomSettings(uint32 WorldID, FAtomReverbSettings& OutReverbSettings, FAtomInteriorSettings& OutInteriorSettings) const
{
	check(IsInAtomThread());

	const TPair<FAtomReverbSettings, FAtomInteriorSettings>* DefaultAtomSettings = WorldIDToDefaultAtomVolumeSettingsMap.Find(WorldID);
	if (DefaultAtomSettings)
	{
		OutReverbSettings = DefaultAtomSettings->Key;
		OutInteriorSettings = DefaultAtomSettings->Value;
		return true;
	}

	return false;
}

void FAtomRuntime::SetDefaultAtomSettings(UWorld* World, const FAtomReverbSettings& DefaultReverbSettings, const FAtomInteriorSettings& DefaultInteriorSettings)
{
	check(IsInGameThread());

	DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetDefaultAtomSettings"), STAT_AtomSetDefaultAudioSettings, STATGROUP_AtomThreadCommands);

	FAtomRuntime* AtomRuntime = this;
	const uint32 WorldID = World->GetUniqueID();
	FAtomThread::RunCommandOnAtomThread([AtomRuntime, WorldID, DefaultReverbSettings, DefaultInteriorSettings]()
	{
		AtomRuntime->WorldIDToDefaultAtomVolumeSettingsMap.Add(WorldID, TPair<FAtomReverbSettings, FAtomInteriorSettings>(DefaultReverbSettings, DefaultInteriorSettings));
	}, GET_STATID(STAT_AtomSetDefaultAudioSettings));
}

/*
 * struct FAtomRuntime::FCreateComponentParams
 *********************************************************************************/

FAtomRuntime::FCreateComponentParams::FCreateComponentParams()
	: World(nullptr)
	, Actor(nullptr)
{
	AtomRuntime = (GCriWare ? GCriWare->GetCriWareCore()->GetMainAtomRuntimeRaw() : nullptr);
	CommonInit();
}

FAtomRuntime::FCreateComponentParams::FCreateComponentParams(UWorld* InWorld, AActor* InActor)
	: World(InWorld)
{
	if (InActor)
	{
		check(InActor->GetWorld() == InWorld);
		Actor = InActor;
	}
	else
	{
		Actor = (World ? World->GetWorldSettings() : nullptr);
	}

	AtomRuntime = (World ? FAtomRuntimeManager::GetAtomRuntimeFromWorldContext(World) : nullptr);

	// If the world doesn't own an audio device, fall back to the main audio device.
	if (!AtomRuntime)
	{
		AtomRuntime = (GCriWare ? GCriWare->GetCriWareCore()->GetMainAtomRuntimeRaw() : nullptr);
	}

	CommonInit();
}

FAtomRuntime::FCreateComponentParams::FCreateComponentParams(AActor* InActor)
	: Actor(InActor)
{
	World = (Actor ? Actor->GetWorld() : nullptr);
	AtomRuntime = (World ? FAtomRuntimeManager::GetAtomRuntimeFromWorldContext(World) : nullptr);

	// If the world doesn't own an audio device, fall back to the main audio device.
	if (!AtomRuntime)
	{
		AtomRuntime = (GCriWare ? GCriWare->GetCriWareCore()->GetMainAtomRuntimeRaw() : nullptr);
	}

	CommonInit();
}

FAtomRuntime::FCreateComponentParams::FCreateComponentParams(FAtomRuntime* InAtomRuntime)
	: World(nullptr)
	, Actor(nullptr)
	, AtomRuntime(InAtomRuntime)
{
	CommonInit();
}

void FAtomRuntime::FCreateComponentParams::CommonInit()
{
	bAutoDestroy = true;
	bPlay = false;
	bStopWhenOwnerDestroyed = true;
	bLocationSet = false;
	AttenuationSettings = nullptr;
	ConcurrencySet.Reset();
	Location = FVector::ZeroVector;
}

void FAtomRuntime::FCreateComponentParams::SetLocation(const FVector InLocation)
{
	if (World)
	{
		bLocationSet = true;
		Location = InLocation;
	}
	else
	{
		UE_LOG(LogCriWareAtom, Warning, TEXT("AtomComponents created without a World cannot have a location."));
	}
}

bool FAtomRuntime::FCreateComponentParams::ShouldUseAttenuation() const
{
	if (AtomRuntime)
	{
		return AtomRuntime->ShouldUseAttenuation(World);
	}

	return true;
}

UAtomComponent* FAtomRuntime::CreateComponent(UAtomSoundBase* Sound, const FCreateComponentParams& Params)
{
	check(IsInGameThread());

	UAtomComponent* AtomComponent = nullptr;

	if (Sound && Params.AtomRuntime && GCriWare && GCriWare->GetAtomRuntimeManager())
	{
		// Avoid creating component if we're trying to play a sound on an already destroyed actor.
		if (Params.Actor == nullptr || IsValid(Params.Actor))
		{
			// Listener position could change before long sounds finish
			const FAtomAttenuationSettings* AttenuationSettingsToApply = (Params.AttenuationSettings ? &Params.AttenuationSettings->Attenuation : Sound->GetAttenuationSettingsToApply());

			bool bIsAudible = true;
			// If a sound is a long duration, the position might change before sound finishes so assume it's audible
			if (Params.bLocationSet && Sound->GetDuration() <= FMath::Max(0.0f, AtomSoundDistanceOptimizationLengthCVar))
			{
				float MaxDistance = 0.0f;
				float FocusFactor = 0.0f;
				Params.AtomRuntime->GetMaxDistanceAndFocusFactor(Sound, Params.World, Params.Location, AttenuationSettingsToApply, MaxDistance, FocusFactor);
				bIsAudible = Params.AtomRuntime->SoundIsAudible(Sound, Params.World, Params.Location, AttenuationSettingsToApply, MaxDistance, FocusFactor);
			}

			if (bIsAudible)
			{
				// Use actor as outer if we have one.
				if (Params.Actor)
				{
					AtomComponent = NewObject<UAtomComponent>(Params.Actor, (Params.AtomComponentClass != nullptr) ? (UClass*)Params.AtomComponentClass : UAtomComponent::StaticClass());
				}
				// Let engine pick the outer (transient package).
				else
				{
					AtomComponent = NewObject<UAtomComponent>((UObject*)GetTransientPackage(), (Params.AtomComponentClass != nullptr) ? (UClass*)Params.AtomComponentClass : UAtomComponent::StaticClass());
				}

				check(AtomComponent);

				AtomComponent->Sound = Sound;
				AtomComponent->bAutoActivate = false;
				AtomComponent->bIsUISound = false;
				AtomComponent->bAutoDestroy = Params.bPlay && Params.bAutoDestroy;
				AtomComponent->bStopWhenOwnerDestroyed = Params.bStopWhenOwnerDestroyed;
#if WITH_EDITORONLY_DATA
				AtomComponent->bVisualizeComponent = false;
#endif
				AtomComponent->AttenuationSettings = Params.AttenuationSettings;
				AtomComponent->ConcurrencySet = Params.ConcurrencySet;

				if (Params.bLocationSet)
				{
					AtomComponent->SetWorldLocation(Params.Location);
				}

				// AudioComponent used in PlayEditorSound sets World to nullptr to avoid situations where the world becomes invalid
				// and the component is left with invalid pointer.
				if (Params.World)
				{
					AtomComponent->RegisterComponentWithWorld(Params.World);
				}
				else
				{
					AtomComponent->AtomRuntimeID = Params.AtomRuntime->RuntimeID;
				}

				if (Params.bPlay)
				{
					AtomComponent->Play();
				}
			}
			else
			{
				// Don't create a sound component for short sounds that start out of range of any listener
				UE_LOG(LogCriWareAtom, Log, TEXT("AtomComponent not created for out of range Sound %s"), *Sound->GetName());
			}
		}
	}

	return AtomComponent;
}

void FAtomRuntime::PlaySoundAtLocation(UAtomSoundBase* Sound, UWorld* World, float VolumeMultiplier, float PitchMultiplier, float StartTime, const FVector& Location, const FRotator& Rotation, UAtomAttenuation* AttenuationSettings, UAtomConcurrency* Concurrency, const TArray<FAtomParameter>* Params, const AActor* OwningActor)
{
	check(IsInGameThread());

	if (!Sound || !World)
	{
		return;
	}

	// Not audible if the ticking level collection is not visible
	if (World && World->GetActiveLevelCollection() && !World->GetActiveLevelCollection()->IsVisible())
	{
		return;
	}

	const FAtomAttenuationSettings* AttenuationSettingsToApply = (AttenuationSettings ? &AttenuationSettings->Attenuation : Sound->GetAttenuationSettingsToApply());
	float MaxDistance = 0.0f;
	float FocusFactor = 1.0f;

	GetMaxDistanceAndFocusFactor(Sound, World, Location, AttenuationSettingsToApply, MaxDistance, FocusFactor);

	if (Sound->IsLooping() || Sound->IsPlayWhenSilent() || SoundIsAudible(Sound, World, Location, AttenuationSettingsToApply, MaxDistance, FocusFactor))
	{
		const bool bIsInGameWorld = World->IsGameWorld();

		FAtomActiveSound NewActiveSound;
		NewActiveSound.SetWorld(World);
		NewActiveSound.SetSound(Sound);
		NewActiveSound.SetVolume(VolumeMultiplier);
		NewActiveSound.SetPitch(PitchMultiplier);
		NewActiveSound.RequestedStartTime = FMath::Max(0.0f, StartTime);
		NewActiveSound.bLocationDefined = true;
		NewActiveSound.Transform.SetTranslation(Location);
		NewActiveSound.Transform.SetRotation(FQuat(Rotation));
		NewActiveSound.bIsUISound = !bIsInGameWorld;
		//NewActiveSound.SubtitlePriority = Sound->GetSubtitlePriority();

		NewActiveSound.bHasAttenuationSettings = (ShouldUseAttenuation(World) && AttenuationSettingsToApply);
		if (NewActiveSound.bHasAttenuationSettings)
		{
			const FAtomGlobalFocusSettings& FocusSettings = GetGlobalFocusSettings();

			NewActiveSound.AttenuationSettings = *AttenuationSettingsToApply;
			NewActiveSound.FocusData.PriorityScale = AttenuationSettingsToApply->GetFocusPriorityScale(FocusSettings, FocusFactor);
			NewActiveSound.FocusData.DistanceScale = AttenuationSettingsToApply->GetFocusDistanceScale(FocusSettings, FocusFactor);
		}

		NewActiveSound.MaxDistance = MaxDistance;

		if (Concurrency)
		{
			NewActiveSound.ConcurrencySet.Add(Concurrency);
		}

		NewActiveSound.Priority = Sound->Priority;

		NewActiveSound.SetOwner(OwningActor);

		AddNewActiveSound(NewActiveSound/*, Params*/);
	}
	else
	{
		// Don't play a sound for short sounds that start out of range of any listener
		UE_LOG(LogCriWareAtom, Log, TEXT("Sound not played for out of range AtomSound %s"), *Sound->GetName());
	}
}

FAtomSource* FAtomRuntime::GetSoundSource(const FAtomPlaybackInstance* InPlaybackInstance) const
{
	check(IsInAtomThread());
	return PlaybackInstanceSourceMap.FindRef(InPlaybackInstance);
}

void FAtomRuntime::SetSoundClassDistanceScale(UAtomSoundClass* InSoundClass, float DistanceScale, float TimeSec)
{
	check(InSoundClass);

	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetSoundClassDistanceScale"), STAT_AtomSetSoundClassDistanceScale, STATGROUP_TaskGraphTasks);

		FAtomThread::RunCommandOnAtomThread([this, InSoundClass, DistanceScale, TimeSec]()
		{
			SetSoundClassDistanceScale(InSoundClass, DistanceScale, TimeSec);
		}, GET_STATID(STAT_AtomSetSoundClassDistanceScale));

		return;
	}

	if (FAtomSoundClassDynamicProperties* DynamicProperties = DynamicSoundClassProperties.Find(InSoundClass))
	{
		DynamicProperties->AttenuationScaleParam.Set(DistanceScale, TimeSec);
	}
}

CriAtomPlayerHn FAtomRuntime::GetPlayerHandle(const FAtomPlaybackInstance* InPlaybackInstance) const
{
	auto AtomSourcePtr = PlaybackInstanceSourceMap.Find(InPlaybackInstance);
	if (AtomSourcePtr)
	{
		return static_cast<CriAtomPlayerHn>((*AtomSourcePtr)->GetNativeHandle());
	}

	return nullptr; // Invalid handle
}

CriAtomExPlayerHn FAtomRuntime::GetExPlayerHandle(const FAtomPlaybackInstance* InPlaybackInstance) const
{
	auto AtomSourcePtr = PlaybackInstanceSourceMap.Find(InPlaybackInstance);
	if (AtomSourcePtr)
	{
		return static_cast<CriAtomExPlayerHn>((*AtomSourcePtr)->GetNativeHandle());
	}

	return nullptr; // Invalid handle
}

void FAtomRuntime::AddNewActiveSound(const FAtomActiveSound& ActiveSound)
{
#if ATOM_TRACE_ACTIVESOUND
	UE_LOG(LogCriWareAtomDebug, Display, TEXT("AddNewActiveSound"));
#endif

	if (UAtomSoundBase* Sound = ActiveSound.GetSound())
	{
		//Sound->InitResources();
		//Sound->InitParameters(InDefaultParams, "NewSoundRequest");
	}

	AddNewActiveSoundInternal(ActiveSound);
}

void FAtomRuntime::RetriggerVirtualLoop(FAtomVirtualLoop& VirtualLoopToRetrigger)
{
	check(IsInAtomThread());

	AddNewActiveSoundInternal(VirtualLoopToRetrigger.GetActiveSound(), &VirtualLoopToRetrigger);
}

void FAtomRuntime::RealizeVirtualLoop(FAtomVirtualLoop& VirtualLoopToRealize)
{
	check(IsInAtomThread());
	check(VirtualLoopToRealize.IsVirtualizedDueToMaxConcurrency());

	auto& ActiveSound = VirtualLoopToRealize.GetActiveSound();

	// let atom handle the realization.
	ActiveSound.bVirtualizedDueToMaxConcurrency = false;
}

// todo: rename this "Removevirtualloop"
void FAtomRuntime::RealizeVirtualLoop(FAtomActiveSound& ActiveSound)
{
	check(IsInAtomThread());

	if (RemoveVirtualLoop(ActiveSound))
	{
		// check if avlaible in concurency manager
		if (ConcurrencyManager.AddActiveSound(ActiveSound) == false)
		{
			// revirtualize due to concurency
			ActiveSound.bVirtualizedDueToMaxConcurrency = true;
		}
	}
}

void FAtomRuntime::AddVirtualLoop(const FAtomVirtualLoop& InVirtualLoop)
{
	FAtomVirtualLoop VirtualLoop = InVirtualLoop;

	FAtomActiveSound& ActiveSound = VirtualLoop.GetActiveSound();
	check(!VirtualLoops.Contains(&ActiveSound));

	// If associated with an AtomComponent, add the virtualizing ActiveSound pointer to the VirtualLoop system, 
	// and ensure it is in the AtomComponentIDToActiveSoundMap so updates from the AtomComponent are still tracked.
	const int64 ComponentID = ActiveSound.GetAtomComponentID();
	if (ComponentID > 0)
	{
		if (TArray<FAtomActiveSound*>* ExistingSounds = AtomComponentIDToActiveSoundMap.Find(ComponentID))
		{
			if (VirtualLoop.IsUsingVirtualVoice())
			{
				// Atom SDK control virtualization, the active sound keep the source alive.
				check(ExistingSounds->Num() >= 1);
				// but if in a concurrency group sound must be removed.
				ConcurrencyManager.RemoveActiveSound(ActiveSound);
			}
			else // restart mode
			{
				// Only components playing a single looped sound at a time can virtualize.
				for (int32 Index = ExistingSounds->Num() - 1; Index >= 0; --Index)
				{
					const FAtomActiveSound* ExistingSound = (*ExistingSounds)[Index];
					if (ensure(ExistingSound))
					{
						UE_LOG(LogCriWareAtom, Warning, TEXT("Attempting to add Sound '%s' to ComponentID when map already contains ID for Sound '%s'. "
							"Associated AtomComponent can only play a single sound instance at one time. This may indicate a leak of FAtomActiveSounds."),
							ActiveSound.Sound ? *ActiveSound.Sound->GetName() : TEXT("N/A"),
							ExistingSound->Sound ? *ExistingSound->Sound->GetName() : TEXT("N/A")
						);
						ExistingSounds->RemoveAtSwap(Index, 1, false /* bAllowShrinking */);
					}
				}
				ExistingSounds->AddUnique(&ActiveSound);
			}
		}
		else
		{
			TArray<FAtomActiveSound*>& NewActiveSoundArray = AtomComponentIDToActiveSoundMap.Add(ComponentID);
			NewActiveSoundArray.Add(&ActiveSound);
		}
	}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	if (ActiveSound.Sound)
	{
		const FVector Location = ActiveSound.Transform.GetLocation();
		UE_LOG(LogCriWareAtom, Verbose, TEXT("Adding virtual looping sound '%s' at location %s."), *ActiveSound.Sound->GetName(), *Location.ToCompactString());
	}
#endif // !(UE_BUILD_SHIPPING || UE_BUILD_TEST)

	VirtualLoops.Add(&ActiveSound, MoveTemp(VirtualLoop));
}

bool FAtomRuntime::RemoveVirtualLoop(FAtomActiveSound& InActiveSound)
{
	check(IsInAtomThread());

	if (FAtomVirtualLoop* VirtualLoop = VirtualLoops.Find(&InActiveSound))
	{
		if (!VirtualLoop->IsUsingVirtualVoice())
		{
			check(InActiveSound.bIsStopping);

			const uint64 ComponentID = InActiveSound.GetAtomComponentID();
			UAtomComponent::PlaybackCompleted(ComponentID, false);
		}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
		if (InActiveSound.Sound)
		{
			const FVector Location = InActiveSound.Transform.GetLocation();
			UE_LOG(LogCriWareAtom, Verbose, TEXT("Removing virtual looping sound '%s' at location %s."), *InActiveSound.Sound->GetName(), *Location.ToCompactString());
		}
#endif // !(UE_BUILD_SHIPPING || UE_BUILD_TEST)

		VirtualLoops.Remove(&InActiveSound);
		return true;
	}

	return false;
}

void FAtomRuntime::AddNewActiveSoundInternal(const FAtomActiveSound& InNewActiveSound, FAtomVirtualLoop* InVirtualLoopToRetrigger)
{
	LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.AddNewActiveSound"), STAT_AtomAddNewActiveSound, STATGROUP_AtomThreadCommands);

		FAtomThread::RunCommandOnAtomThread([AtomRuntime = this, InNewActiveSound /*, DefaultParams = MoveTemp(InDefaultParams)*/]() mutable
		{
				AtomRuntime->AddNewActiveSoundInternal(InNewActiveSound/*, MoveTemp(DefaultParams)*/);
		}, GET_STATID(STAT_AtomAddNewActiveSound));

		return;
	}

	UAtomSoundBase* Sound = InNewActiveSound.GetSound();
	if (Sound == nullptr || !Sound->IsPlayable())
	{
		ReportSoundFailedToStart(InNewActiveSound.AtomComponentID, InVirtualLoopToRetrigger);
		return;
	}

	// TODO: IMPORTANT: unfortunaly, i want to check if i can play the sound early...  but interal atom will evaluate virtualization when sound is played 
	if (!InNewActiveSound.bForceUseAtomPlayer) // Atom Player have own extra player/voice
	{
		int NumSourcesInFlight = 0;
		for (FAtomActiveSound* ActiveSound : ActiveSounds)
		{
			if (!ActiveSound->bForceUseAtomPlayer)
			{
				NumSourcesInFlight++;
			}
		}

		// check if any source is available
		if (NumSourcesInFlight >= GetMaxSources())
		{
			ReportSoundFailedToStart(InNewActiveSound.AtomComponentID, InVirtualLoopToRetrigger);
			return;
		}
	}


	/// DEBUG THIS !!!!

	// Evaluate concurrency. This will create an ActiveSound ptr which is a copy of InNewActiveSound if the sound can play.
	FAtomActiveSound* NewActiveSound = nullptr;
	{
		SCOPE_CYCLE_COUNTER(STAT_AtomEvaluateConcurrency);

		// Try to create a new active sound. This returns nullptr if too many sounds are playing with this sound's concurrency setting
		NewActiveSound = ConcurrencyManager.CreateNewActiveSound(InNewActiveSound, InVirtualLoopToRetrigger != nullptr);
	}

	//FAtomActiveSound* NewActiveSound = new FAtomActiveSound(InNewActiveSound); // create new active sound
	if (!NewActiveSound)
	{
		ReportSoundFailedToStart(InNewActiveSound.AtomComponentID, InVirtualLoopToRetrigger);
		return;
	}
	NewActiveSound->SetAtomRuntime(this);

	check(NewActiveSound->Sound == Sound);

	if (GIsEditor)
	{
		// If the sound played on an editor preview world, treat it as a preview sound (unpausable and ignoring the realtime volume slider)
		if (const UWorld* World = InNewActiveSound.GetWorld())
		{
			NewActiveSound->bIsPreviewSound |= (World->WorldType == EWorldType::EditorPreview);
		}
	}

	int32* PlayCount = Sound->CurrentPlayCount.Find(RuntimeID);
	if (!PlayCount)
	{
		PlayCount = &Sound->CurrentPlayCount.Add(RuntimeID);
	}
	(*PlayCount)++;

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	UE_LOG(LogCriWareAtom, VeryVerbose, TEXT("New AtomActiveSound %s Comp: %s Loc: %s"), *Sound->GetName(), *InNewActiveSound.GetAtomComponentName(), *InNewActiveSound.Transform.GetTranslation().ToString());
#endif

	// Cull one-shot active sounds if we've reached our max limit of one shot active sounds before we attempt to evaluate concurrency
	if (NewActiveSound->IsOneShot())
	{
		OneShotCount++;
	}

	// Set the active sound to be playing audio so it gets parsed at least once.
	NewActiveSound->bIsPlayingAudio = true;

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	if (!ensureMsgf(NewActiveSound->Sound->GetFName() != NAME_None, TEXT("AddNewActiveSound with DESTROYED sound %s. AtomComponent=%s. IsValid=%d. BeginDestroy=%d"),
		*NewActiveSound->Sound->GetPathName(),
		*NewActiveSound->GetAtomComponentName(),
		(int32)IsValid(NewActiveSound->Sound),
		(int32)NewActiveSound->Sound->HasAnyFlags(RF_BeginDestroyed)))
	{
		static FName InvalidSoundName(TEXT("DESTROYED_Sound"));
	}
#endif // !(UE_BUILD_SHIPPING || UE_BUILD_TEST)

	// Loop has been successfully created, so add to stop before adding 'live' ActiveSound.
	// Mark to not report playback complete on destruction as responsibility therein has been
	// passed to newly created ActiveSound added below.  Add as stopping sound prior to adding
	// new sound to ensure AtomComponentIDToActiveSoundMap is registered with the correct ActiveSound.
	if (InVirtualLoopToRetrigger)
	{
		FAtomActiveSound& VirtualActiveSound = InVirtualLoopToRetrigger->GetActiveSound();
		AddSoundToStop(&VirtualActiveSound);

		// Clear must be called after AddSoundToStop to ensure AtomComponent is properly removed from AudioComponentIDToActiveSoundMap
		VirtualActiveSound.ClearAtomComponent();
	}

	// add to main list of active sounds
	ActiveSounds.Add(NewActiveSound);

#if ATOM_TRACE_ACTIVESOUND
	UE_LOG(LogCriWareAtomDebug, Display, TEXT("AddNewActiveSound - added"));
#endif

	// add to component dictionary of active sounds
	if (NewActiveSound->GetAtomComponentID() > 0)
	{
		TArray<FAtomActiveSound*>& ActiveSoundArray = AtomComponentIDToActiveSoundMap.FindOrAdd(NewActiveSound->GetAtomComponentID());
		ActiveSoundArray.AddUnique(NewActiveSound);
	}
}

void FAtomRuntime::ReportSoundFailedToStart(const uint64 AtomComponentID, FAtomVirtualLoop* VirtualLoop)
{
	check(IsInAtomThread());

	if (VirtualLoop)
	{
		FAtomActiveSound& VirtualActiveSound = VirtualLoop->GetActiveSound();
		AddSoundToStop(&VirtualActiveSound);
	}
	else
	{
		const bool bFailedToStart = true;
		UAtomComponent::PlaybackCompleted(AtomComponentID, bFailedToStart);
	}
}

void FAtomRuntime::SendUpdateResultsToGameThread(const int32 FirstActiveIndex)
{
	DECLARE_CYCLE_STAT(TEXT("FGameThreadAtomTask.AtomSendResults"), STAT_AtomSendResults, STATGROUP_TaskGraphTasks);

	/*const FAtomRuntimeId RuntimeID = AtomRuntimeID;
	UReverbEffect* ReverbEffect = Effects ? Effects->GetCurrentReverbEffect() : nullptr;
	FAudioThread::RunCommandOnGameThread([AudioDeviceID, ReverbEffect]()
	{
		// At shutdown, GEngine may already be null
		if (GEngine)
		{
			if (FAudioDeviceManager* AudioDeviceManager = GEngine->GetAudioDeviceManager())
			{
				if (FAudioDeviceHandle AudioDevice = AudioDeviceManager->GetAudioDevice(AudioDeviceID))
				{
					AudioDevice->CurrentReverbEffect = ReverbEffect;
				}
			}
		}
	}, GET_STATID(STAT_AudioSendResults));*/

#if ENABLE_ATOM_DEBUG
	Atom::FAtomDebugger::SendUpdateResultsToGameThread(*this, FirstActiveIndex);
#endif // ENABLE_ATOM_DEBUG
}

void FAtomRuntime::UpdateProfilers()
{
#if ENABLE_ATOM_MONITOR
	if (auto Manager = FAtomRuntime::GetAtomRuntimeManager())
	{
		Manager->GetAtomMonitor().UpdateConnectionStatus();
	}
#endif
}

void FAtomRuntime::GameThreadMPSCCommand(TFunction<void()> InCommand)
{
	GameThreadCommandQueue.Enqueue(MoveTemp(InCommand));
}

void FAtomRuntime::PumpGameThreadCommandQueue()
{
	TOptional Opt{ GameThreadCommandQueue.Dequeue() };
	while (Opt.IsSet())
	{
		TFunction<void()> Command = MoveTemp(Opt.GetValue());
		Command();

		Opt = GameThreadCommandQueue.Dequeue();
	}
}

void FAtomRuntime::StopActiveSound(uint64 AtomComponentID)
{
	const FAtomRuntimeId AtomRuntimeID = RuntimeID;

	SendCommandToActiveSounds(AtomComponentID, [AtomRuntimeID](FAtomActiveSound& ActiveSound)
	{
		FAtomRuntimeManager* RuntimeManager = GCriWare->GetCriWareCore()->GetAtomRuntimeManager();

		if (RuntimeManager)
		{
			FAtomRuntimeHandle AtomRuntime = RuntimeManager->GetAtomRuntime(AtomRuntimeID);
			if (AtomRuntime.IsValid())
			{
				AtomRuntime->AddSoundToStop(&ActiveSound);
			}
		}
	});
}

void FAtomRuntime::PauseActiveSound(uint64 AtomComponentID, const bool bInIsPaused)
{
	SendCommandToActiveSounds(AtomComponentID, [bInIsPaused](FAtomActiveSound& ActiveSound)
	{
		ActiveSound.bIsPaused = bInIsPaused;
	});
}

void FAtomRuntime::NotifyActiveSoundOcclusionTraceDone(FAtomActiveSound* InActiveSound, bool bIsOccluded)
{
	// Find the active sound in these lists and only set these flags if they are in any of them
	if (ActiveSounds.Contains(InActiveSound) || PendingSoundsToStop.Contains(InActiveSound) || PendingSoundsToDelete.Contains(InActiveSound))
	{
		InActiveSound->bIsOccluded = bIsOccluded;
		InActiveSound->bAsyncOcclusionPending = false;
	}
}

bool FAtomRuntime::CanHaveMultipleActiveSounds(uint64 AtomComponentID) const
{
	ensure(IsInAtomThread());

	if (const bool* bCanHaveMultipleActiveSounds = AtomComponentIDToCanHaveMultipleActiveSoundsMap.Find(AtomComponentID))
	{
		return *bCanHaveMultipleActiveSounds;
	}

	return false;
}

void FAtomRuntime::SetCanHaveMultipleActiveSounds(uint64 InAtomComponentID, bool InCanHaveMultipleActiveSounds)
{
	if (!IsInAtomThread())
	{
		FAtomThread::RunCommandOnAtomThread([this, ComponentID = InAtomComponentID, bNewValue = InCanHaveMultipleActiveSounds]()
		{
			SetCanHaveMultipleActiveSounds(ComponentID, bNewValue);
		});

		return;
	}

	bool& bCanHaveMultipleActiveSounds = AtomComponentIDToCanHaveMultipleActiveSoundsMap.FindOrAdd(InAtomComponentID, InCanHaveMultipleActiveSounds);

	// This must be or'ed with existing value as disabling multiple active sounds while playing can potentially cause ActiveSound
	// instances to get lost while virtualizing.
	bCanHaveMultipleActiveSounds |= InCanHaveMultipleActiveSounds;
}

void FAtomRuntime::RemoveActiveSound(FAtomActiveSound* ActiveSound)
{
	check(IsInAtomThread());

	// Perform the notification if not sound not set to re-trigger
	const uint64 ComponentID = ActiveSound->GetAtomComponentID();
	UAtomComponent::PlaybackCompleted(ComponentID, false);

#ifdef ATOM_SOUND_INIT_DEBUG
	UE_LOG(LogCriWareAtomDebug, Display, TEXT("RemoveActiveSound"));
#endif

	const int32 NumRemoved = ActiveSounds.RemoveSwap(ActiveSound);
	if (!ensureMsgf(NumRemoved > 0, TEXT("Attempting to remove an already removed AtomActiveSound '%s'"), ActiveSound->Sound ? *ActiveSound->Sound->GetName() : TEXT("N/A")))
	{
		return;
	}

	check(NumRemoved == 1);
}

void FAtomRuntime::AddSoundToStop(FAtomActiveSound* SoundToStop)
{
	check(IsInAtomThread());
	check(SoundToStop);

	bool bAlreadyPending = false;
 	PendingSoundsToStop.Add(SoundToStop, &bAlreadyPending);
	if (!bAlreadyPending)
	{
		const bool bIsVirtual = VirtualLoops.Contains(SoundToStop);
		if (bIsVirtual)
		{
			FAtomThread::RunCommandOnGameThread([AtomComponentID = SoundToStop->GetAtomComponentID()]()
			{
				if (UAtomComponent* AtomComponent = UAtomComponent::GetAtomComponentFromID(AtomComponentID))
				{
					AtomComponent->SetIsVirtualized(false);
				}
			});
		}
		UnlinkActiveSoundFromComponent(*SoundToStop);

		// active sound can be virtualized by atom sdk (and continue to play without consuming voice)
		// in this case a virtualloop copy AND original active sound exist
		// those virtualized active sound continue to consume an explayer handle.
		if (bIsVirtual && !SoundToStop->IsPlayWhenSilent())
		{
			SoundToStop->bIsStopping = true;
		}
		else if (!bIsVirtual)
		{
			ConcurrencyManager.RemoveActiveSound(*SoundToStop);
		}
	}
}

bool FAtomRuntime::IsPendingStop(FAtomActiveSound* ActiveSound)
{
	check(IsInAtomThread());
	check(ActiveSound);

	return PendingSoundsToStop.Contains(ActiveSound) || PendingSoundsToDelete.Contains(ActiveSound);
}

void FAtomRuntime::StopAllSounds(bool bShouldStopUISounds)
{
	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.StopAllSounds"), STAT_AtomStopAllSounds, STATGROUP_AtomThreadCommands);

		FAtomThread::RunCommandOnAtomThread([this, bShouldStopUISounds]()
		{
			StopAllSounds(bShouldStopUISounds);
		}, GET_STATID(STAT_AtomStopAllSounds));

		return;
	}

	for (int32 SoundIndex = ActiveSounds.Num() - 1; SoundIndex >= 0; --SoundIndex)
	{
		FAtomActiveSound* ActiveSound = ActiveSounds[SoundIndex];

		if (bShouldStopUISounds)
		{
			AddSoundToStop(ActiveSound);
		}
		// If we're allowing UI sounds to continue then first filter on the active sounds state
		else if (!ActiveSound->bIsUISound)
		{
			// Then iterate across the playback instances.  If any of the playback instances is not a UI sound
			// then we will stop the entire active sound because it makes less sense to leave it half
			// executing
			for (auto PlaybackInstanceIt(ActiveSound->PlaybackInstances.CreateConstIterator()); PlaybackInstanceIt; ++PlaybackInstanceIt)
			{
				FAtomPlaybackInstance* PlaybackInstance = PlaybackInstanceIt.Value();
				if (PlaybackInstance && !PlaybackInstance->bIsUISound)
				{
					AddSoundToStop(ActiveSound);
					break;
				}
			}
		}
	}

	for (AtomRuntimeUtils::FVirtualLoopPair& Pair : VirtualLoops)
	{
		AddSoundToStop(Pair.Key);
	}

	// Immediately process stopping sounds
	ProcessingPendingActiveSoundStops();
}

void FAtomRuntime::SendCommandToActiveSounds(uint64 InAtomComponentID, TUniqueFunction<void(FAtomActiveSound&)> InFunc, const TStatId InStatId)
{
	if (!IsInAtomThread())
	{
		FAtomThread::RunCommandOnAtomThread([this, InAtomComponentID, Func = MoveTemp(InFunc)]() mutable
		{
			SendCommandToActiveSounds(InAtomComponentID, MoveTemp(Func));
		}, InStatId);
		return;
	}

	// Must cache active sounds as the AtomComponentIDToActiveSoundMap can potentially be modified by the command function provided
	// (ex. when stopping a sound or array of sounds).
	const TArray<FAtomActiveSound*> CachedActiveSounds = AtomComponentIDToActiveSoundMap.FindRef(InAtomComponentID);
	for (FAtomActiveSound* ActiveSound : CachedActiveSounds)
	{
		// This should never be null
		if (ensure(ActiveSound))
		{
			InFunc(*ActiveSound);
		}
	}
}

void FAtomRuntime::UnlinkActiveSoundFromComponent(const FAtomActiveSound& InActiveSound)
{
	const uint64 AtomComponentID = InActiveSound.GetAtomComponentID();
	if (AtomComponentID > 0)
	{
		if (TArray<FAtomActiveSound*>* ActiveSoundsInComponent = AtomComponentIDToActiveSoundMap.Find(AtomComponentID))
		{
			for (int32 i = ActiveSoundsInComponent->Num() - 1; i >= 0; --i)
			{
				const FAtomActiveSound* ActiveSound = (*ActiveSoundsInComponent)[i];
				if (ensure(ActiveSound))
				{
					if (ActiveSound->GetInstanceID() == InActiveSound.GetInstanceID())
					{
						ActiveSoundsInComponent->RemoveAtSwap(i, 1, false);
						break;
					}
				}
			}

			if (ActiveSoundsInComponent->IsEmpty())
			{
				AtomComponentIDToActiveSoundMap.Remove(AtomComponentID);
				AtomComponentIDToCanHaveMultipleActiveSoundsMap.Remove(AtomComponentID);
			}
		}
	}
}

void FAtomRuntime::InitSoundSources()
{
	if (Sources.Num() == 0)
	{
		// now create platform specific sources
		const int32 SourceMax = GetMaxSources();
		for (int32 SourceIndex = 0; SourceIndex < SourceMax; SourceIndex++)
		{
			FAtomSource* Source = CreateSoundSource();
			//Source->InitializeSourceEffects(SourceIndex);

			Sources.Add(Source);
			FreeSources.Add(Source);
		}
	}
}

FAtomSource* FAtomRuntime::CreateSoundSource()
{
	return new Atom::FAtomExPlayer(this);
}

FAtomSource* FAtomRuntime::CreateVoiceSource()
{
	return new Atom::FAtomPlayer(this);
}

void FAtomRuntime::StopOldestStoppingSource()
{
	check(!FreeSources.Num());

	FAtomSource* LowestPriStoppingSource = nullptr;
	FAtomSource* LowestPriSource = nullptr;
	FAtomSource* LowestPriNonLoopingSource = nullptr;

	for (FAtomSource* Source : Sources)
	{
		// Find oldest stopping voice first
		if (Source->IsStopping())
		{
			if (!LowestPriStoppingSource)
			{
				LowestPriStoppingSource = Source;
			}
			else
			{
				if (Source->PlaybackInstance->GetVolumeWeightedPriority() < LowestPriStoppingSource->PlaybackInstance->GetVolumeWeightedPriority())
				{
					LowestPriStoppingSource = Source;
				}
			}
		}
		else if (Source->PlaybackInstance)
		{
			// Find lowest volume/priority non-looping source as fallback
			if (Source->PlaybackInstance->LoopingMode != EAtomLoopingMode::LoopForever && !Source->PlaybackInstance->bIsUISound)
			{
				if (!LowestPriNonLoopingSource)
				{
					LowestPriNonLoopingSource = Source;
				}
				else
				{
					if (Source->PlaybackInstance->GetVolumeWeightedPriority() < LowestPriNonLoopingSource->PlaybackInstance->GetVolumeWeightedPriority())
					{
						LowestPriNonLoopingSource = Source;
					}
				}
			}


			// Find lowest volume/priority source as final fallback
			if (!LowestPriSource)
			{
				LowestPriSource = Source;
			}
			else
			{
				if (Source->PlaybackInstance->GetVolumeWeightedPriority() < LowestPriSource->PlaybackInstance->GetVolumeWeightedPriority())
				{
					LowestPriSource = Source;
				}
			}
		}
	}

	// Stop oldest stopping source
	if (LowestPriStoppingSource)
	{
		LowestPriStoppingSource->StopNow();
	}
	// If no oldest stopping source, stop oldest one-shot
	else if (LowestPriNonLoopingSource)
	{
		LowestPriNonLoopingSource->StopNow();
	}
	// Otherwise stop oldest source.
	else
	{
		check(LowestPriSource);
		LowestPriSource->StopNow();
	}
	check(FreeSources.Num() > 0);
}

void FAtomRuntime::StopSources(TArray<FAtomPlaybackInstance*>& InPlaybackInstances, int32 FirstActiveIndex)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FAtomRuntime_StopSources);

	for (int32 InstanceIndex = FirstActiveIndex; InstanceIndex < InPlaybackInstances.Num(); InstanceIndex++)
	{
		FAtomPlaybackInstance& PlaybackInstance = *InPlaybackInstances[InstanceIndex];

		// Flag active sounds that generated playback instances that they are trying to actively play audio now
		// This will avoid stopping one-shot active sounds that failed to generate audio this Atom thread frame tick
		PlaybackInstance.ActiveSound->bIsPlayingAudio = true;

		// Touch sources that are high enough priority to play
		if (FAtomSource* Source = PlaybackInstanceSourceMap.FindRef(&PlaybackInstance))
		{
			Source->LastUpdate = CurrentTick;

			// If they are still audible, mark them as such
			float VolumeWeightedPriority = PlaybackInstance.GetVolumeWithDistanceAndOcclusionAttenuation() * PlaybackInstance.GetDynamicVolume();
			if (VolumeWeightedPriority > 0.0f)
			{
				Source->LastHeardUpdate = CurrentTick;
			}
		}
	}

	// Stop inactive sources, sources that no longer have a PlaybackInstance associated
	// or sources that need to be reset because Stop & Play were called in the same frame.
	for (int32 SourceIndex = 0; SourceIndex < Sources.Num(); SourceIndex++)
	{
		FAtomSource* Source = Sources[SourceIndex];

		if (FAtomPlaybackInstance* PlaybackInstance = Source->PlaybackInstance)
		{
			// If we need to stop this sound due to max concurrency (i.e. it was quietest in a concurrency group)
			if (PlaybackInstance->ShouldStopDueToMaxConcurrency() || Source->LastUpdate != CurrentTick)
			{
				if (!Source->IsStopping())
				{
					Source->Stop();
				}
				else
				{
					// Still do update even if stopping
					Source->Update();
				}
			}
			else
			{
				// Update the pause state of the source.
				Source->SetPauseManually(PlaybackInstance->bIsPaused);

				// Have to check it again here, because:
				// - Source->NotifyPlaybackData() does not handle it if it is nullptr
				// - SetPauseManually might set it to nullptr if the sound is unpaused and is stopping
				if (Source->PlaybackInstance != nullptr)
				{
					// Need to update the source still so that it gets any volume settings applied to
					// otherwise the source may play at a very quiet volume and not actually set to 0.0
					Source->NotifyPlaybackData();
					Source->Update();
				}
			}

#if ENABLE_ATOM_DEBUG
			Atom::FAtomDebugger::DrawDebugInfo(*Source);
#endif // ENABLE_ATOM_DEBUG
		}
	}

	// Stop wave instances that are no longer playing due to priority reasons. This needs to happen AFTER
	// stopping sources as calling Stop on a sound source in turn notifies the wave instance of a buffer
	// being finished which might reset it being finished.
	for (int32 InstanceIndex = 0; InstanceIndex < FirstActiveIndex; InstanceIndex++)
	{
		if (FAtomPlaybackInstance* PlaybackInstance = InPlaybackInstances[InstanceIndex])
		{
			PlaybackInstance->StopWithoutNotification();
		}
	}

#if ENABLE_ATOM_DEBUG
	Atom::FAtomDebugger::UpdateAudibleInactiveSounds(FirstActiveIndex, InPlaybackInstances);
#endif // ENABLE_ATOM_DEBUG
}

void FAtomRuntime::StartSources(TArray<FAtomPlaybackInstance*>& InPlaybackInstances, int32 FirstActiveIndex, bool bGameTicking)
{
	check(IsInAtomThread());

	SCOPE_CYCLE_COUNTER(STAT_AtomStartSources);
	TRACE_CPUPROFILER_EVENT_SCOPE(FAtomDevice_StartSources);

	TArray<UAtomSoundBase*> StartingSounds;

	// Start sources as needed.
	for (int32 InstanceIndex = FirstActiveIndex; InstanceIndex < InPlaybackInstances.Num(); InstanceIndex++)
	{
		FAtomPlaybackInstance* PlaybackInstance = InPlaybackInstances[InstanceIndex];

		UAtomSoundBase* Sound = PlaybackInstance->SoundData;
		if (!Sound)
		{
			continue;
		}

		// Make sure we've finished precaching the wave instance's wave data before trying to create a source for it
		/*ESoundWavePrecacheState PrecacheState = WaveData->GetPrecacheState();
		const bool bIsSoundWaveStillLoading = WaveData->HasAnyFlags(RF_NeedLoad);
		if (PrecacheState == ESoundWavePrecacheState::InProgress || (WaitForSoundWaveToLoadCvar && bIsSoundWaveStillLoading))
		{
			continue;
		}*/

		// Editor uses bIsUISound for sounds played in the browser.
		if (!PlaybackInstance->ShouldStopDueToMaxConcurrency() && (bGameTicking || PlaybackInstance->bIsUISound))
		{
			bool bIsPoolableSource = !PlaybackInstance->ActiveSound->bForceUseAtomPlayer && PlaybackInstance->ActiveSound->OnCreateSource == nullptr; // new

			FAtomSource* Source = PlaybackInstanceSourceMap.FindRef(PlaybackInstance);
			if (!Source /* &&
				(!PlaybackInstance->IsStreaming() ||
				IStreamingManager::Get().GetAudioStreamingManager().CanCreateSoundSource(WaveInstance))*/
			)
			{
				if (bIsPoolableSource) // new
				{
					// Check for full sources and stop the oldest stopping source
					if (!FreeSources.Num())
					{
						StopOldestStoppingSource();
					}

					check(FreeSources.Num());
					Source = FreeSources.Pop();
					check(Source);
				}
				else // new
				{
					if (PlaybackInstance->ActiveSound->OnCreateSource)
					{
						// Create unpooled source from ActiveSound function
						Source = PlaybackInstance->ActiveSound->OnCreateSource(this, PlaybackInstance); // new
						if (Source)
						{
							Sources.Add(Source);
						}
						else
						{
							UE_LOG(LogCriWareAtom, Error, TEXT("Cannot create unpooled mixer source for sound %s."), *PlaybackInstance->GetName());
							continue;
						}
					}
					else
					{
						Source = CreateVoiceSource(); // new
						check(Source); // new
						Sources.Add(Source); // new
					}
				}

				StartingSounds.AddUnique(Sound);

				// Prepare for initialization...
				bool bSuccess = false;
				if (Source->PrepareForInitialization(PlaybackInstance))
				{
					// We successfully prepared for initialization (though we may not be prepared to actually init yet)
					bSuccess = true;

					// If we are now prepared to init (because the file handle and header synchronously loaded), then init right away
					if (Source->IsPreparedToInit())
					{
						// Init the source, this may result in failure
						bSuccess = Source->Init(PlaybackInstance);

						// If we succeeded then play and update the source
						if (bSuccess)
						{
							// Set the pause before updating it
							Source->SetPauseManually(Source->PlaybackInstance->bIsPaused);

							check(Source->IsInitialized());
							Source->Update();

							// If the source didn't get paused while initializing, then play it
							if (!Source->IsPaused())
							{
								Source->Play();
							}
						}
					}
				}

				// If we succeeded above then we need to map the wave instance to the source
				if (bSuccess)
				{
					//IStreamingManager::Get().GetAudioStreamingManager().AddStreamingSoundSource(Source);
					// Associate wave instance with it which is used earlier in this function.
					PlaybackInstanceSourceMap.Add(PlaybackInstance, Source);
				}
				else
				{
					// If we failed, then we need to stop the playback instance and add the source back to the free list
					// This can happen if e.g. the USoundBase pointed to by the PlaybackInstance is not a valid sound file.
					// If we don't stop the wave/cue resource access, it will continue to try initializing the resource every frame, which is a perf hit.
					UE_LOG(LogCriWareAtom, Log, TEXT("Failed to start Atom source for %s"), (PlaybackInstance->ActiveSound && PlaybackInstance->ActiveSound->Sound) ? *PlaybackInstance->ActiveSound->Sound->GetName() : TEXT("UNKNOWN"));
					PlaybackInstance->StopWithoutNotification();
					Source->PlaybackInstance = nullptr;
					
					if (bIsPoolableSource) // new
					{
						FreeSources.Add(Source);
					}
					else  // new
					{
						Sources.Remove(Source);  // new
						RemovedSources.AddUnique(Source);  // new
					}

					PlaybackInstanceSourceMap.Remove(PlaybackInstance);
				}
			}
			else if (Source)
			{
				if (!Source->IsInitialized() && Source->IsPreparedToInit())
				{
					// Try to initialize the source. This may fail if something is wrong with the source.
					if (Source->Init(PlaybackInstance))
					{
						Source->Update();

						// Note: if we succeeded in starting to prepare to init, we already added the wave instance map to the source so don't need to add here.
						check(Source->IsInitialized());

						// If the source didn't get paused while initializing, then play it
						if (!Source->IsPaused())
						{
							Source->Play();
						}
					}
					else
					{
						// Make sure init cleaned up the buffer when it failed
						//check(Source->Buffer == nullptr);
						UE_LOG(LogCriWareAtom, Log, TEXT("Failed to start Atom source for %s"), (PlaybackInstance->ActiveSound && PlaybackInstance->ActiveSound->Sound) ? *PlaybackInstance->ActiveSound->Sound->GetName() : TEXT("UNKNOWN"));

						// If were ready to call init but failed, then we need to add the source and stop with notification
						PlaybackInstance->StopWithoutNotification();
						Source->PlaybackInstance = nullptr;
						
						if (bIsPoolableSource) // new
						{
							FreeSources.Add(Source);
						}
						else  // new
						{
							Sources.Remove(Source);  // new
							RemovedSources.AddUnique(Source);  // new

							PlaybackInstanceSourceMap.Remove(PlaybackInstance);
						}
					}
				}
			}
			else
			{
				// This can happen if the streaming manager determines that this sound should not be started.
				// We stop the wave instance to prevent it from attempting to initialize every frame
				PlaybackInstance->StopWithoutNotification();
			}
		}
	}

	DECLARE_CYCLE_STAT(TEXT("FGameThreadAudioTask.AddReferencedSoundWaves"), STAT_AudioAddReferencedSoundWaves, STATGROUP_TaskGraphTasks);
	
	// Run a command to make sure we add the starting sounds to the referenced sound waves list
	if (StartingSounds.Num() > 0)
	{
		FScopeLock ReferencedSoundLock(&ReferencedSoundCriticalSection);

		for (UAtomSoundBase* Sound: StartingSounds)
		{
			ReferencedSounds_AtomThread.AddUnique(Sound);
		}
	}
}

void FAtomRuntime::HandlePause(bool bGameTicking, bool bGlobalPause)
{
	DECLARE_CYCLE_STAT(TEXT("FAtomRuntime.HandlePause"), STAT_AtomHandlePause, STATGROUP_AtomCommands);

	// Handles the global pause/unpause feature

	// Pause all sounds if transitioning to pause mode.
	if (!bGameTicking && (bGameWasTicking || bGlobalPause))
	{
		for (int32 Index = 0; Index < Sources.Num(); Index++)
		{
			FAtomSource* Source = Sources[Index];
			if (!Source->IsPausedByGame() && (bGlobalPause || Source->IsGameOnly()))
			{
				Source->SetPauseByGame(true);
			}
		}
	}
	// Unpause all sounds if transitioning back to game.
	else if (bGameTicking && (!bGameWasTicking || bGlobalPause))
	{
		for (int32 Index = 0; Index < Sources.Num(); Index++)
		{
			FAtomSource* Source = Sources[Index];
			if (Source->IsPausedByGame() && (bGlobalPause || Source->IsGameOnly()))
			{
				Source->SetPauseByGame(false);
			}
		}
	}

	bGameWasTicking = bGameTicking;
}

int32 FAtomRuntime::GetSortedActivePlaybackInstances(TArray<FAtomPlaybackInstance*>& InOutPlaybackInstances, const ESortedActivePlaybackGetType GetType)
{
	check(IsInAtomThread());

	SCOPE_CYCLE_COUNTER(STAT_AtomGatherPlaybackInstances);

	// Tick all the active Atom components.  Use a copy as some operations may remove elements from the list, 
	// but we want to evaluate in the order they were added.
	TArray<FAtomActiveSound*> ActiveSoundsCopy = ActiveSounds;
	for (int32 Index = 0; Index < ActiveSoundsCopy.Num(); ++Index)
	{
		FAtomActiveSound* ActiveSound = ActiveSoundsCopy[Index];

		if (!ActiveSound)
		{
			UE_LOG(LogCriWareAtom, Error, TEXT("Null sound at index %d in ActiveSounds Array!"), Index);
			continue;
		}

		if (!ActiveSound->Sound)
		{
			// No sound - cleanup and remove
			AddSoundToStop(ActiveSound);
		}
		// If the world scene allows audio - tick wave instances.
		else
		{
			UWorld* ActiveSoundWorldPtr = ActiveSound->World.Get();
			if (ActiveSoundWorldPtr == nullptr || ActiveSoundWorldPtr->AllowAudioPlayback())
			{
				bool bStopped = false;

				if (ActiveSound->IsOneShot() && !ActiveSound->bIsPreviewSound)
				{
					// Don't stop a sound if it's playing effect chain tails or has effects playing, active sound will stop on its own in this case (in audio mixer).
					//USoundEffectSourcePresetChain* ActiveSourceEffectChain = ActiveSound->GetSourceEffectChain();
					//if (!ActiveSourceEffectChain || !ActiveSourceEffectChain->bPlayEffectChainTails || ActiveSourceEffectChain->Chain.Num() == 0)
					//{
						const float Duration = ActiveSound->Sound->GetDuration();
						/*if ((ActiveSound->Sound->HasDelayNode() || ActiveSound->Sound->HasConcatenatorNode()))
						{
							static const float TimeFudgeFactor = 1.0f;
							if (Duration > TimeFudgeFactor && ActiveSound->PlaybackTime > Duration + TimeFudgeFactor)
							{
								bStopped = true;
							}
						}
						else*/
						if (!ActiveSound->bIsPlayingAudio && ActiveSound->bFinished)
						{
							bStopped = true;
						}

						if (bStopped)
						{
							UE_LOG(LogCriWareAtom, Log, TEXT("One-shot Atom active sound stopped due to duration or because it didn't generate any audio: %g > %g : %s %s"),
								ActiveSound->PlaybackTime,
								Duration,
								*ActiveSound->Sound->GetName(),
								*ActiveSound->GetAtomComponentName());

							AddSoundToStop(ActiveSound);
						}
					//}
				}

				if (!bStopped)
				{
					// If not in game, do not advance sounds unless they are UI sounds.
					float UsedDeltaTime = GetGameDeltaTime();
					if (GetType == ESortedActivePlaybackGetType::QueryOnly || (GetType == ESortedActivePlaybackGetType::PausedUpdate && !ActiveSound->bIsUISound))
					{
						UsedDeltaTime = 0.0f;
					}

					//UE_LOG(LogCriWareAtomDebug, Warning, TEXT("UpdatePlaybackInstances"));
					//ActiveSound->UpdateInterfaceParameters(Listeners);
					ActiveSound->UpdatePlaybackInstances(InOutPlaybackInstances, UsedDeltaTime);
				}
			}
		}
	}

	if (GetType != ESortedActivePlaybackGetType::QueryOnly)
	{
		UpdateConcurrency(InOutPlaybackInstances, ActiveSoundsCopy);
	}

	int32 FirstActiveIndex = 0;
	// Only need to do the playback instance sort if we have any sounds and if our playback instances are greater than our max channels.
	if (InOutPlaybackInstances.Num() >= 0)
	{
		// Helper function for "Sort" (higher priority sorts last).
		struct FCompareFPlaybackInstanceByPlayPriority
		{
			FORCEINLINE bool operator()(const FAtomPlaybackInstance& A, const FAtomPlaybackInstance& B) const
			{
				return A.GetVolumeWeightedPriority() < B.GetVolumeWeightedPriority();
			}
		};

		// Sort by priority (lowest priority first).
		InOutPlaybackInstances.Sort(FCompareFPlaybackInstanceByPlayPriority());

		// Get the first index that will result in a active source voice
		int32 CurrentMaxChannels = GetMaxChannels();
		FirstActiveIndex = FMath::Max(InOutPlaybackInstances.Num() - CurrentMaxChannels, 0);
	}

	//UE_LOG(LogCriWareAtomDebug, Warning, TEXT("NumInstance %d"), InOutPlaybackInstances.Num());

	return FirstActiveIndex;
}

void FAtomRuntime::ProcessingPendingActiveSoundStops(bool bForceDelete)
{
	SCOPED_NAMED_EVENT(FAtom_PendingActiveSoundStops, FColor::Blue);

	// Process the PendingSoundsToDelete. These may have
	// had their deletion deferred due to an async operation
	for (int32 Index = PendingSoundsToDelete.Num() - 1; Index >= 0; --Index)
	{
		FAtomActiveSound* ActiveSound = PendingSoundsToDelete[Index];
		if (ActiveSound)
		{
			uint32 NumSourcesStopped = 0;

			bool bDeleteActiveSound = false;
			if (bForceDelete)
			{
				bDeleteActiveSound = true;
				// If we're in the process of stopping, but now we're force-deleting, make sure we finish the sound stopping
				if (ActiveSound->IsStopping())
				{
					// Make sure this sound finishes stopping if we're forcing all sounds to stop due to a flush, etc.
					bool bIsNowStopped = ActiveSound->UpdateStoppingSources(CurrentTick, true);
					check(bIsNowStopped);
				}
			}
			else if (ActiveSound->IsStopping())
			{
				// Update the stopping state. This will return true if we're ok to delete the active sound
				bDeleteActiveSound = ActiveSound->UpdateStoppingSources(CurrentTick, false);

				// If we are now deleting the active sound, then this is no longer stopping, so decrement the counter
				if (bDeleteActiveSound)
				{
					// It's possible we still may not be able to delete this sound if the active sound as a pending async task
					bDeleteActiveSound = ActiveSound->CanDelete();
				}
			}
			else if (ActiveSound->CanDelete())
			{
				bDeleteActiveSound = true;
			}

			if (bDeleteActiveSound)
			{
				if (ActiveSound->bIsPreviewSound && ModulationSystem.IsValid())// && bModulationInterfaceEnabled && ModulationInterface.IsValid())
				{
					ModulationSystem->OnAuditionEnd();
				}
				ActiveSound->bAsyncOcclusionPending = false;
				PendingSoundsToDelete.RemoveAtSwap(Index, 1, false);
				NotifyPendingDelete(*ActiveSound);

#if ATOM_TRACE_ACTIVESOUND
				UE_LOG(LogCriWareAtomDebug, Display, TEXT("delete ActiveSound (%s) [Deferred]"), *ActiveSound->OwnerName.ToString());
#endif
				delete ActiveSound;
			}
		}
	}

	while (PendingSoundsToStop.Num() > 0)
	{
		// Need to make a copy since stopping sounds can add to this list of sounds to stop when the audio thread isn't running (e.g. editor).
		TSet<FAtomActiveSound*> PendingSoundsToStopCopy = PendingSoundsToStop;

		// Stop any pending active sounds that need to be stopped
		for (FAtomActiveSound* ActiveSound : PendingSoundsToStopCopy)
		{
			check(ActiveSound);
			bool bDeleteActiveSound = false;

			// If the request was to stop an ActiveSound that is virtualized.
			if (RemoveVirtualLoop(*ActiveSound))
			{
				// If ActiveSound is set to re-trigger, but is not playing,
				// remove and continue
				if (!ActiveSound->IsPlayingAudio() && !ActiveSound->IsStopping())
				{
					bDeleteActiveSound = true;
				}
			}
			
			if (!bDeleteActiveSound)
			{
				ActiveSound->MarkPendingDestroy(bForceDelete);

				UAtomSoundBase* Sound = ActiveSound->GetSound();

				// If the active sound is a one shot, decrement the one shot counter
				if (Sound && !Sound->IsLooping())
				{
					OneShotCount--;
				}

				const bool bIsStopping = ActiveSound->IsStopping();

				// If we can delete the active sound now, then delete it
				if (bForceDelete || (ActiveSound->CanDelete() && !bIsStopping))
				{
					ActiveSound->bAsyncOcclusionPending = false;

					bDeleteActiveSound = true;
				}
				else
				{
					// There was an async operation pending or we are stopping (not stopped) so we need to defer deleting this sound
					PendingSoundsToDelete.AddUnique(ActiveSound);
				}
			}

			if (bDeleteActiveSound)
			{
				NotifyPendingDelete(*ActiveSound);

				// Remove from the list of pending sounds to stop
				PendingSoundsToStop.Remove(ActiveSound);

#if ATOM_TRACE_ACTIVESOUND
				UE_LOG(LogCriWareAtomDebug, Display, TEXT("delete ActiveSound (%s) [Immediate]"), *ActiveSound->OwnerName.ToString());
#endif
				delete ActiveSound;
			}
			else
			{
				// Remove from the list of pending sounds to stop
				PendingSoundsToStop.Remove(ActiveSound);
			}
		}
	}
}

void FAtomRuntime::StopSoundsUsingResource(IAtomSoundResource* InSound, TArray<UAtomComponent*>* StoppedComponents)
{
	if (StoppedComponents == nullptr && !IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.StopSoundsUsingResource"), STAT_AtomStopSoundsUsingResource, STATGROUP_AtomThreadCommands);

		FAtomRuntime* AtomRuntime = this;
		FAtomThread::RunCommandOnAtomThread([AtomRuntime, InSound, StoppedComponents]()
		{
			AtomRuntime->StopSoundsUsingResource(InSound, StoppedComponents);
		}, GET_STATID(STAT_AtomStopSoundsUsingResource));

		return;
	}
	else if (StoppedComponents)
	{
		check(IsInGameThread());
		FAtomCommandFence AtomFence;
		AtomFence.BeginFence();
		AtomFence.Wait();
	}

	bool bStoppedSounds = false;

	for (int32 ActiveSoundIndex = ActiveSounds.Num() - 1; ActiveSoundIndex >= 0; --ActiveSoundIndex)
	{
		FAtomActiveSound* ActiveSound = ActiveSounds[ActiveSoundIndex];

		UAtomSoundBase* Sound = ActiveSound->GetSound();
		if (Sound)
		{
			TArray<IAtomSoundResource*> SoundResources;
			Sound->GetAllSoundResources(SoundResources);

			if (SoundResources.Contains(InSound))
			{
				if (StoppedComponents)
				{
					if (UAtomComponent* AudioComponent = UAtomComponent::GetAtomComponentFromID(ActiveSound->GetAtomComponentID()))
					{
						StoppedComponents->Add(AudioComponent);
					}
				}

				AddSoundToStop(ActiveSound);
				bStoppedSounds = true;
			}
		}
	}

	/*	for (const TPair<UPTRINT, FWaveInstance*>& WaveInstancePair : ActiveSound->WaveInstances)
		{
			// If anything the ActiveSound uses the wave then we stop the sound
			FWaveInstance* WaveInstance = WaveInstancePair.Value;
			if (WaveInstance->WaveData == SoundWave)
			{
				if (StoppedComponents)
				{
					if (UAudioComponent* AudioComponent = UAudioComponent::GetAudioComponentFromID(ActiveSound->GetAudioComponentID()))
					{
						StoppedComponents->Add(AudioComponent);
					}
				}
				AddSoundToStop(ActiveSound);
				bStoppedSounds = true;
				break;
			}
		}
	}*/

	// Immediately stop all pending active sounds
	ProcessingPendingActiveSoundStops();

	if (!GIsEditor && bStoppedSounds)
	{
		if (UAtomSoundBase* SoundBase = Cast<UAtomSoundBase>(InSound))
		{
			UE_LOG(LogCriWareAtom, Verbose, TEXT("All Sounds using Sound '%s' have been stopped"), *SoundBase->GetName());
		}
	}
}

void FAtomRuntime::UpdateVirtualLoops(bool bForceUpdate)
{
	using namespace AtomRuntimeUtils;

	check(IsInAtomThread());

	if (FAtomVirtualLoop::IsEnabled())
	{
		TArray<FAtomVirtualLoop> VirtualLoopsToRetrigger;
		TArray<FAtomVirtualLoop> VirtualLoopsToRealize;

		for (FVirtualLoopPair& Pair : VirtualLoops)
		{
			FAtomVirtualLoop& VirtualLoop = Pair.Value;
			FAtomActiveSound& ActiveSound = VirtualLoop.GetActiveSound();

			// Don't update if stopping.
			if (ActiveSound.bIsStopping)
			{
				continue;
			}

			// If signaled to fade out and virtualized, add to pending stop list.
			if (ActiveSound.FadeOut != FAtomActiveSound::EFadeOut::None)
			{
				AddSoundToStop(&ActiveSound);
				continue;
			}

			// Update timeing and check if ready to realize
			bool bIsReadytoRealize = VirtualLoop.Update(GetRuntimeDeltaTime(), bForceUpdate);

			// If the loop is ready to realize, add to array to be re-triggered
			// outside of the loop to avoid map manipulation while iterating.
			if (bIsReadytoRealize)
			{
				if (VirtualLoop.IsVirtualizedDueToMaxConcurrency())
				{
					// check concurency here
					if (ConcurrencyManager.EvaluateActiveSound(ActiveSound, true))
					{
						// then ask for realization of the sound
						VirtualLoopsToRealize.Add(VirtualLoop);
					}
				}
				else
				{
					// Retrigger the sound (no play in silent)
					VirtualLoopsToRetrigger.Add(VirtualLoop);
				}
			}
		}

		for (FAtomVirtualLoop& RealizeLoop : VirtualLoopsToRealize)
		{
			RealizeVirtualLoop(RealizeLoop);
		}

		for (FAtomVirtualLoop& RetriggerLoop : VirtualLoopsToRetrigger)
		{
			RetriggerVirtualLoop(RetriggerLoop);
		}
	}

	// if !FAtomVirtualLoop::IsEnabled(), attempt to realize/re-trigger
	// sounds and remove virtual loops.
	else
	{
		// Copies any straggling virtual loops to active sounds and mark them for stop
		for (FVirtualLoopPair& Pair : VirtualLoops)
		{
			FAtomActiveSound* ActiveSound = Pair.Key;
			check(ActiveSound);

			UnlinkActiveSoundFromComponent(*ActiveSound);
			AddNewActiveSound(*ActiveSound);

			ActiveSound->ClearAtomComponent();
			AddSoundToStop(ActiveSound);
		}
	}
}

void FAtomRuntime::UpdateRuntimeDeltaTime()
{
	const double CurrTime = FPlatformTime::Seconds();
	RuntimeDeltaTime = CurrTime - LastUpdateTime;
	LastUpdateTime = CurrTime;
}

void FAtomRuntime::UpdateBusEffectParameters()
{
	for (auto& BusEffectToUpdate : BusEffectsToUpdate)
	{
		if (BusEffectToUpdate.Rack)
		{
			CriAtomExAsrRackId RackId = GetAsrRackId(BusEffectToUpdate.Rack);
			if (RackId != INDEX_NONE)
			{
				FCriWareApi::criAtomExAsrRack_UpdateEffectParameters(
					RackId,
					TCHAR_TO_UTF8(*BusEffectToUpdate.BusName.ToString()),
					TCHAR_TO_UTF8(*BusEffectToUpdate.EffectName.ToString())
				);
			}
		}
	}

	BusEffectsToUpdate.Empty();
}

void FAtomRuntime::UpdateAtomSoundRender()
{
	for (auto& Pair : AsrRacks)
	{
		if (UAtomRack* Rack = Cast<UAtomRack>(const_cast<UAtomRackBase*>(Pair.Key)))
		{
			for (UAtomBus* Bus : Rack->Buses)
			{
				Bus->ProcessAudio(this);
			}

			Rack->ProcessAudio(this);
		}
		else if (const UAtomRackBase* RackBase = Pair.Key)
		{
			if (RackBase->MasterBus)
			{
				RackBase->MasterBus->ProcessAudio(this);
			}
		}
	}

	for (UAtomBus* Bus : MasterRack->Buses)
	{
		Bus->ProcessAudio(this);
	}

	MasterRack->ProcessAudio(this);

	CriSint64 AudioTime = FCriWareApi::criAtomAsr_GetAudioTime(0);
	AtomClock = AudioTime * 0.000001; // micro secs to seconds

	//UE_LOG(LogCriWareAtomDebug, Display, TEXT("Atom Time %g"), GetAtomClock());
}

void FAtomRuntime::UpdateActiveSoundPlaybackTime(bool bIsGameTicking)
{
	if (bIsGameTicking)
	{
		for (FAtomActiveSound* ActiveSound : ActiveSounds)
		{
			// Scale the playback time with the device delta time and the current "min pitch" of the sounds which would play on it.
			const float DeltaTimePitchCorrected = GetRuntimeDeltaTime() * ActiveSound->MinCurrentPitch;
			ActiveSound->PlaybackTime += DeltaTimePitchCorrected;
			ActiveSound->PlaybackTimeNonVirtualized += DeltaTimePitchCorrected;
		}
	}
	else if (GIsEditor)
	{
		for (FAtomActiveSound* ActiveSound : ActiveSounds)
		{
			if (ActiveSound->bIsPreviewSound)
			{
				// Scale the playback time with the device delta time and the current "min pitch" of the sounds which would play on it.
				const float DeltaTimePitchCorrected = GetRuntimeDeltaTime() * ActiveSound->MinCurrentPitch;
				ActiveSound->PlaybackTime += DeltaTimePitchCorrected;
				ActiveSound->PlaybackTimeNonVirtualized += DeltaTimePitchCorrected;
			}
		}
	}
}

bool FAtomRuntime::ShouldUseAttenuation(const UWorld* World) const
{
	// We use attenuation settings:
	// - if we don't have a world, or
	// - we have a game world, or
	// - we are forcing the use of attenuation (e.g. for some editors)
	const bool bIsInGameWorld = World ? World->IsGameWorld() : true;
	return (bIsInGameWorld || bUseAttenuationForNonGameWorlds);
}

#if WITH_EDITOR
void FAtomRuntime::OnBeginPIE(bool bIsSimulating)
{
	/*for (TObjectIterator<USoundNode> It; It; ++It)
	{
		USoundNode* SoundNode = *It;
		SoundNode->OnBeginPIE(bIsSimulating);
	}*/

#if ENABLE_ATOM_DEBUG
	Atom::FAtomDebugger::OnBeginPIE();
#endif // ENABLE_ATOM_DEBUG
}

void FAtomRuntime::OnEndPIE(bool bIsSimulating)
{
	/*for (TObjectIterator<USoundNode> It; It; ++It)
	{
		USoundNode* SoundNode = *It;
		SoundNode->OnEndPIE(bIsSimulating);
	}*/

#if ENABLE_ATOM_DEBUG
	Atom::FAtomDebugger::OnEndPIE();
#endif // ENABLE_ATOM_DEBUG
}
#endif // WITH_EDITOR

void FAtomRuntime::GatherInteriorData(FAtomActiveSound& ActiveSound, FAtomSoundParseParameters& ParseParams) const
{
	SubsystemCollection.ForEachSubsystem<IAtomActiveSoundUpdate>([&ActiveSound, &ParseParams](IAtomActiveSoundUpdate* ActiveSoundUpdate)
	{
		ActiveSoundUpdate->GatherInteriorData(ActiveSound, ParseParams);
		return true;
	});
}

void FAtomRuntime::ApplyInteriorSettings(FAtomActiveSound& ActiveSound, FAtomSoundParseParameters& ParseParams) const
{
	SubsystemCollection.ForEachSubsystem<IAtomActiveSoundUpdate>([&ActiveSound, &ParseParams](IAtomActiveSoundUpdate* ActiveSoundUpdate)
	{
		ActiveSoundUpdate->ApplyInteriorSettings(ActiveSound, ParseParams);
		return true;
	});
}

void FAtomRuntime::NotifyPendingDelete(FAtomActiveSound& ActiveSound) const
{
	SubsystemCollection.ForEachSubsystem<IAtomActiveSoundUpdate>([&ActiveSound](IAtomActiveSoundUpdate* ActiveSoundUpdate)
	{
		ActiveSoundUpdate->OnNotifyPendingDelete(ActiveSound);
		return true;
	});
}

void FAtomRuntime::InitializeSubsystemCollection()
{
	SubsystemCollectionRoot.Reset(NewObject<UAtomSubsystemCollectionRoot>(GetTransientPackage()));
	check(SubsystemCollectionRoot.IsValid());

	SubsystemCollectionRoot->SetAtomRuntimeID(RuntimeID);
	SubsystemCollection.Initialize(SubsystemCollectionRoot.Get());
}

void FAtomRuntime::UpdateAtomEngineSubsystems()
{
	const TArray<UAtomEngineSubsystem*>& Subsystems = GetSubsystemArray<UAtomEngineSubsystem>();
	for (UAtomEngineSubsystem* Subsystem : Subsystems)
	{
		if (Subsystem)
		{
			Subsystem->Update();
		}
	}
}

// this occur from atom server thread
void FAtomRuntime::HandleSDKOnAtomExBeatSync(const CriAtomExBeatSyncInfo* ExBeatSyncInfo)
{
	if (CriAtomExPlayerHn ExPlayerHn = ExBeatSyncInfo->player)
	{
		TSharedPtr<const FAtomBeatSyncInfo> BeatSyncInfo = MakeShareable(new FAtomBeatSyncInfo{
			(int32)ExBeatSyncInfo->bar_count,
			(int32)ExBeatSyncInfo->beat_count,
			(float)ExBeatSyncInfo->beat_progress,
			(float)ExBeatSyncInfo->bpm,
			(int32)ExBeatSyncInfo->offset,
			(int32)ExBeatSyncInfo->num_beats
		});

		if (!IsInAtomThread())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.OnCueBeatSync"), STAT_AtomOnCueBeatSync, STATGROUP_AtomThreadCommands);
			FAtomThread::RunCommandOnAtomThread([this, ExPlayerHn, BeatSyncInfo]()
			{
				// find the affected Activesound and send the info.
				for (FAtomSource* Source : Sources)
				{
					if (Source && Source->GetNativeHandle() == (void*)ExPlayerHn)
					{
						const FAtomPlaybackInstance* PlaybackInstance = Source->GetPlaybackInstance();
						if (PlaybackInstance && PlaybackInstance->ActiveSound)
						{
							PlaybackInstance->ActiveSound->OnCueBeatSync(BeatSyncInfo);
						}
					}
				}
			}, GET_STATID(STAT_AtomOnCueBeatSync));
		}
		else
		{
			// find the affected Activesound and send the info.
			for (FAtomSource* Source : Sources)
			{
				if (Source && Source->GetNativeHandle() == (void*)ExPlayerHn)
				{
					const FAtomPlaybackInstance* PlaybackInstance = Source->GetPlaybackInstance();
					if (PlaybackInstance && PlaybackInstance->ActiveSound)
					{
						PlaybackInstance->ActiveSound->OnCueBeatSync(BeatSyncInfo);
					}
				}
			}
		}
	}
}

// this occur from atom server thread
void FAtomRuntime::HandleSDKOnAtomExSequencerEvent(const CriAtomExSequenceEventInfo* ExEventInfo)
{
	if (ExEventInfo->type != CRIATOMEX_SEQUENCE_EVENT_TYPE_CALLBACK)
	{
		return;
	}

	if (CriAtomExPlayerHn ExPlayerHn = ExEventInfo->player)
	{
		TSharedPtr<const FAtomSequencerEventInfo> EventInfo = MakeShareable(new FAtomSequencerEventInfo{
			FTimespan::FromMilliseconds((float)ExEventInfo->position),
			(int32)ExEventInfo->value,
			FString(UTF8_TO_TCHAR(ExEventInfo->string))
		});

		if (!IsInAtomThread())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.OnCueSequencerEvent"), STAT_AtomOnCueSequencerEvent, STATGROUP_AtomThreadCommands);
			FAtomThread::RunCommandOnAtomThread([this, ExPlayerHn, EventInfo]()
				{
					// find the affected Activesound and send the info.
					for (FAtomSource* Source : Sources)
					{
						if (Source && Source->GetNativeHandle() == (void*)ExPlayerHn)
						{
							const FAtomPlaybackInstance* PlaybackInstance = Source->GetPlaybackInstance();
							if (PlaybackInstance && PlaybackInstance->ActiveSound)
							{
								PlaybackInstance->ActiveSound->OnCueSequencerEvent(EventInfo);
							}
						}
					}
				}, GET_STATID(STAT_AtomOnCueSequencerEvent));
		}
		else
		{
			// find the affected Activesound and send the info.
			for (FAtomSource* Source : Sources)
			{
				if (Source && Source->GetNativeHandle() == (void*)ExPlayerHn)
				{
					const FAtomPlaybackInstance* PlaybackInstance = Source->GetPlaybackInstance();
					if (PlaybackInstance && PlaybackInstance->ActiveSound)
					{
						PlaybackInstance->ActiveSound->OnCueSequencerEvent(EventInfo);
					}
				}
			}
		}
	}
}

/*bool FAtomRuntime::IsValidDefaultSoundRendererType(EAtomSoundRendererType_2::Type RendererType)
{
	return (RendererType == EAtomSoundRendererType_2::Hardware1 ||
		RendererType == EAtomSoundRendererType_2::Hardware2 ||
		RendererType == EAtomSoundRendererType_2::Hardware3 ||
		RendererType == EAtomSoundRendererType_2::Hardware4);
}*/

CriAtomSoundRendererType FAtomRuntime::GetAtomExSoundRendererType(EAtomSoundRendererType RendererType)
{
	switch (RendererType)
	{
	case EAtomSoundRendererType::Default:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HW1;
	case EAtomSoundRendererType::Main:
	case EAtomSoundRendererType::BGM:
	case EAtomSoundRendererType::Voice:
	case EAtomSoundRendererType::Pad:
	case EAtomSoundRendererType::User:
		// By default, ASR renderer chained to default
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_ASR;
	case EAtomSoundRendererType::Haptic:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HAPTIC;
	case EAtomSoundRendererType::Aux:
	case EAtomSoundRendererType::Asr:
		// By default, ASR renderer chained to default
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_ASR;
	case EAtomSoundRendererType::Muted:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_PSEUDO;
	default:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HW1;
	}
}

int32 FAtomRuntime::GetAtomExSoundRendererNumChannels(EAtomSoundRendererType RendererType)
{
	switch (RendererType)
	{
	case EAtomSoundRendererType::Default:
		return 8;
	case EAtomSoundRendererType::Main:
		return 8;
	case EAtomSoundRendererType::BGM:
		return 8;
	case EAtomSoundRendererType::Voice:
		return 2;
	case EAtomSoundRendererType::Pad:
		return 1;
	case EAtomSoundRendererType::User:
		return 2;
	case EAtomSoundRendererType::Haptic:
		return 2;
	case EAtomSoundRendererType::Aux:
		return 8;
	case EAtomSoundRendererType::Muted:
		return 0;
	default:
		return 8;
	}
}

int32 FAtomRuntime::GetAtomExSoundRendererNumPorts(EAtomSoundRendererType RendererType)
{
	switch (RendererType)
	{
	case EAtomSoundRendererType::Default:
		return 4; // hardware 1~4
	case EAtomSoundRendererType::Main:
		return 1;
	case EAtomSoundRendererType::BGM:
		return 1;
	case EAtomSoundRendererType::Voice:
		return 4;
	case EAtomSoundRendererType::Pad:
		return 4;
	case EAtomSoundRendererType::User:
		return 4;
	case EAtomSoundRendererType::Haptic:
		return 4;
	case EAtomSoundRendererType::Aux:
		return 4; // hardware 1~4
	case EAtomSoundRendererType::Muted:
		return 0;
	default:
		return 1;
	}
}

CriAtomSoundRendererType FAtomRuntime::GetSoundfieldAtomExSoundRendererType(EAtomSoundfieldRendererType SoundfieldRendererType)
{
	switch (SoundfieldRendererType)
	{
	case EAtomSoundfieldRendererType::Default:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_ASR; // no spatialization except the system
	case EAtomSoundfieldRendererType::Spatializer:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_SPATIAL_CHANNELS; // Atom controlled spatialization encoding
	case EAtomSoundfieldRendererType::Ambisonics:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_AMBISONICS; // cannot encode to ambisonic
	case EAtomSoundfieldRendererType::SoundObject:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_OBJECT; // Experimental (limited to 16ch)
	default:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_PASSTHROUGH; // disable any kind of soundfield encoding and render directly to channel of platform default device
	}
}

int32 FAtomRuntime::GetSoundfieldAtomExSoundRendererNumChannels(EAtomSoundfieldRendererType SoundfieldRendererType)
{
	switch (SoundfieldRendererType)
	{
	case EAtomSoundfieldRendererType::Default:
		return INDEX_NONE; // inherited
	case EAtomSoundfieldRendererType::Spatializer:
		return INDEX_NONE; // inherited // (ignored if HRTF is enabled in Atom)
	case EAtomSoundfieldRendererType::Ambisonics:
		return INDEX_NONE; // inherited - Master
	case EAtomSoundfieldRendererType::SoundObject:
		return 16; // Experimental: only 16 channels are supported actually.
	default:
		return INDEX_NONE; // inherited -> Parent or Master
	}
}

CriAtomSpeakerMapping FAtomRuntime::GetSoundfieldAtomExSoundRendererSpeakerMapping(EAtomSoundfieldRendererType SoundfieldRendererType)
{
	// sound sources any channel to panning out channels 
	// / Downmixer input mapping - auto means same as downmixer output
	switch (SoundfieldRendererType)
	{
	case EAtomSoundfieldRendererType::Default:
		return CriAtomSpeakerMapping::CRIATOM_SPEAKER_MAPPING_AUTO;
	case EAtomSoundfieldRendererType::Spatializer:
		return CriAtomSpeakerMapping::CRIATOM_SPEAKER_MAPPING_AUTO;
	case EAtomSoundfieldRendererType::Ambisonics:
		return CriAtomSpeakerMapping::CRIATOM_SPEAKER_MAPPING_AMBISONICS_3P;
	case EAtomSoundfieldRendererType::SoundObject:
		return CriAtomSpeakerMapping::CRIATOM_SPEAKER_MAPPING_OBJECT;
	default:
		return CriAtomSpeakerMapping::CRIATOM_SPEAKER_MAPPING_AUTO;
	}
}

EAtomFormat FAtomRuntime::GetFormatFromAtomExFormat(CriAtomExFormat AtomExFormat)
{
	switch (AtomExFormat)
	{
	case CRIATOM_FORMAT_ADX:			return EAtomFormat::ADX;
	case CRIATOM_FORMAT_HCA:			return EAtomFormat::HCA;
	case CRIATOM_FORMAT_HCA_MX:			return EAtomFormat::HCAMX;
	case CRIATOM_FORMAT_WAVE:			return EAtomFormat::Wave;
	case CRIATOM_FORMAT_AIFF:			return EAtomFormat::AIFF;
	case CRIATOM_FORMAT_RAW_PCM:		return EAtomFormat::RawPCM;
	case CRIATOM_FORMAT_VIBRATION:		return EAtomFormat::Vibration;
	case CRIATOM_FORMAT_AUDIO_BUFFER:	return EAtomFormat::AudioBuffer;
	case CRIATOM_FORMAT_INSTRUMENT:		return EAtomFormat::Instrument;
	case CRIATOM_FORMAT_HW1:			return EAtomFormat::Hardware1;
	case CRIATOM_FORMAT_HW2:			return EAtomFormat::Hardware2;
	default: return static_cast<EAtomFormat>(AtomExFormat);
	}
}

EAtomPcmBitDepth FAtomRuntime::GetPcmBitDepthFromAtomPcmFormat(CriAtomPcmFormat AtomPcmFormat)
{
	switch (AtomPcmFormat)
	{
	case CRIATOM_PCM_FORMAT_SINT16:		return EAtomPcmBitDepth::Int16;
	case CRIATOM_PCM_FORMAT_FLOAT32:	return EAtomPcmBitDepth::Float32;
	default: return static_cast<EAtomPcmBitDepth>(AtomPcmFormat);
	}
}

#if !UE_BUILD_SHIPPING
// Console Commands -> todo: move to debugger class !!
namespace Atom
{
	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomMemReport(
		TEXT("atom.Debug.AtomMemReport"),
		TEXT("Lists info for Atom memory"),
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleAtomMemoryInfo(Args, Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomDumpSoundInfo(
		TEXT("atom.Debug.DumpSoundInfo"),
		TEXT("Dumps sound information to log"),
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleDumpSoundInfoCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomListPlaybacks(
		TEXT("atom.Debug.ListPlaybacks"),
		TEXT("List the PlaybackInstances and whether they have a source"),
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleListPlaybacksCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomListSoundClasses(
		TEXT("atom.Debug.ListSoundClasses"),
		TEXT("Lists a summary of loaded sound asset collated by classes"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleListSoundClassesCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomListSoundClassVolumes(
		TEXT("atom.Debug.ListSoundClassVolumes"), 
		TEXT("Lists all sound class volumes"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleListSoundClassVolumesCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomListSoundDurations(
		TEXT("atom.Debug.ListSoundDurations"), 
		TEXT("Lists durations of all active sounds"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleListSoundDurationsCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomListAtomComponents(
		TEXT("atom.Debug.ListAtomComponents"), 
		TEXT("Dumps a detailed list of all AtomComponent objects"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleListAtomComponentsCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomShowSoundClassHierarchy(
		TEXT("atom.Debug.ShowSoundClassHierarchy"), 
		TEXT(""), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleShowSoundClassHierarchyCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomSoloAudio(
		TEXT("atom.Debug.SoloAudio"),
		TEXT("Solos the audio device associated with the parent world"),
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleSoloCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomClearSoloAudio(
		TEXT("atom.Debug.ClearSoloAudio"), 
		TEXT("Clears solo'ed object"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleClearSoloCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs GAtomSoloSoundClass(
		TEXT("atom.Debug.AtomSoloSoundClass"), 
		TEXT("<name> [nonexclusive] Solos sounds using this UAtomSoundClass. If nonexclusive, existing solos will persist"), 
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleAtomSoloSoundClass(Args);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs GAtomSoloSoundCue(
		TEXT("atom.Debug.AtomSoloSoundCue"), 
		TEXT("<name> [nonexclusive] Solos any type of USoundBase. If nonexclusive, existing solos will persist"), 
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleAtomSoloSoundCue(Args);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs GAtomSoloSoundWave(
		TEXT("atom.Debug.AtomSoloSoundWave"), 
		TEXT("<name> [nonexclusive] Solos USoundWave. If nonexclusive, existing solos will persist"), 
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleAtomSoloSoundWave(Args);
			}
		}), ECVF_Cheat);


	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomPlayAllPIEAudio(
		TEXT("atom.Debug.PlayAllPIEAudio"), 
		TEXT("Toggls whether or not all devices should play their audio"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandlePlayAllPIEAtomCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs GAtomDebugSound(
		TEXT("atom.Debug.AtomDebugSound"), 
		TEXT("<filter> Rejects new USoundBase requests where the sound name does not contain the provided filter"), 
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleAtomDebugSound(Args);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs GAtomMixDebugSound(
		TEXT("atom.Debug.AtomMixDebugSound"), 
		TEXT("<filter> With new mixer enabled, rejects new USoundBase requests where the sound name does not contain the provided filter"), 
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleAtomMixDebugSound(Args);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomSetBaseSoundRack(
		TEXT("atom.Debug.SetBaseSoundRack"), 
		TEXT("<MixName> Sets the base sound mix"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleSetBaseSoundRackCommand(Args, Ar);
			}
		}), ECVF_Cheat);

	//static FAutoConsoleCommand GAtomIsolateDryAudio(TEXT("atom.Debug.IsolateDryAudio"), TEXT("Isolates dry audio"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	//static FAutoConsoleCommand GAtomIsolateReverb(TEXT("atom.Debug.IsolateReverb"), TEXT("Isolates reverb"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	
	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomTestLPF(
		TEXT("atom.Debug.TestLPF"), 
		TEXT("Sets LPF to max for all sources"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleTestLPFCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomTestHPF(
		TEXT("atom.Debug.TestHPF"), 
		TEXT("Sets HPF to max for all sources"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleTestHPFCommand(Ar);
			}
		}), ECVF_Cheat);

	//static FAutoConsoleCommand GAtomTestStereoBleed(TEXT("atom.Debug.TestStereoBleed"), TEXT("Test bleeding stereo sounds fully to the rear speakers"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	//static FAutoConsoleCommand GAtomTestLFEBleed(TEXT("atom.Debug.TestLFEBleed"), TEXT("Sets LPF to max for all sources"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	
	static FAutoConsoleCommand GAtomDisableLPF(
		TEXT("atom.Debug.DisableLPF"), 
		TEXT("Disables low-pass filter"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleDisableLPFCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommand GAtomDisableHPF(
		TEXT("atom.Debug.DisableHPF"), 
		TEXT("Disables high-pass filter"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleDisableHPFCommand(Ar);
			}
		}), ECVF_Cheat);

	//static FAutoConsoleCommand GAtomDisableEQFilter(TEXT("atom.Debug.DisableEQFilter"), TEXT("Disables EQ"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	//static FAutoConsoleCommand GAtomDisableRadio(TEXT("atom.Debug.DisableRadio"), TEXT("Disables radio effect"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	//static FAutoConsoleCommand GAtomEnableRadio(TEXT("atom.Debug.EnableRadio"), TEXT("Enables radio effect"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	
	static FAutoConsoleCommand GAtomToggleHRTFForAll(
		TEXT("atom.Debug.ToggleHRTFForAll"), 
		TEXT("Toggles whether or not HRTF spatialization is enabled for all"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleEnableHRTFForAllCommand(Ar);
			}
		}), ECVF_Cheat);

	//static FAutoConsoleCommand GAtomToggleSpatExt(TEXT("atom.Debug.ToggleSpatExt"), TEXT("Toggles enablement of the Spatial Audio Extension"), FConsoleCommandWithWorldDelegate::CreateStatic(&Atom::HandleClearMutesAndSolos), ECVF_Cheat);
	static FAutoConsoleCommand GAtomResetSoundState(
		TEXT("atom.Debug.ResetSoundState"), 
		TEXT("Resets volumes to default and removes test filters"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>&, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleResetSoundStateCommand(Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorld GAtomResetAllDynamicSoundVolumes(
		TEXT("atom.Debug.AtomResetAllDynamicSoundVolumes"), 
		TEXT("Resets all dynamic volumes to unity"), 
		FConsoleCommandWithWorldDelegate::CreateStatic([](UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleResetAllDynamicSoundVolumesCommand();
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs GAtomResetDynamicSoundVolume(
		TEXT("atom.Debug.AtomResetDynamicSoundVolume"), 
		TEXT("Resets volume for given sound type ('Class', 'Cue' or 'Wave') with provided name to unity"), 
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleResetDynamicSoundVolumeCommand(Args);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAtomGetDynamicSoundVolume(
		TEXT("atom.Debug.AtomGetDynamicSoundVolume"), 
		TEXT("Gets volume for given sound type ('Category', 'Cue' or 'Wave') with provided name"), 
		FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleGetDynamicSoundVolumeCommand(Args, Ar);
			}
		}), ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs GAtomSetDynamicSoundVolume(
		TEXT("atom.Debug.AtomSetDynamicSoundVolume"), 
		TEXT("Name=<name> Type=<type> Vol=<vol> Sets volume for given sound type ('Class', 'Cue' or 'Wave') with provided name"), 
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic([](const TArray<FString>& Args, UWorld* World)
		{
			if (FAtomRuntime* AtomRuntime = FAtomRuntimeManager::GetAtomRuntimeRawFromWorld(World))
			{
				AtomRuntime->HandleSetDynamicSoundCommand(Args);
			}
		}), ECVF_Cheat);
} //  namespace

UAtomComponent* FAtomRuntime::GetTestComponent(UWorld* InWorld)
{
	if (InWorld)
	{
		if (!TestAtomComponent.IsValid() || TestAtomComponent->GetWorld() != InWorld)
		{
			TestAtomComponent = TStrongObjectPtr<UAtomComponent>(NewObject<UAtomComponent>());
			TestAtomComponent->RegisterComponentWithWorld(InWorld);
		}

		return TestAtomComponent.Get();
	}

	return nullptr;
}

void FAtomRuntime::StopTestComponent()
{
	if (TestAtomComponent.IsValid())
	{
		TestAtomComponent->Stop();
	}
}

void FAtomRuntime::HandleShowSoundClassHierarchyCommand(FOutputDevice& Ar)
{
	FAtomThreadSuspendContext AtomThreadSuspend;

	ShowSoundClassHierarchy(Ar);
}

void FAtomRuntime::HandleListPlaybacksCommand(FOutputDevice& Ar)
{
	FAtomThreadSuspendContext AtomThreadSuspend;

	TArray<FAtomPlaybackInstance*> PlaybackInstances;
	int32 FirstActiveIndex = GetSortedActivePlaybackInstances(PlaybackInstances, ESortedActivePlaybackGetType::QueryOnly);

	for (int32 InstanceIndex = FirstActiveIndex; InstanceIndex < PlaybackInstances.Num(); InstanceIndex++)
	{
		FAtomPlaybackInstance* PlaybackInstance = PlaybackInstances[InstanceIndex];
		FAtomSource* Source = PlaybackInstanceSourceMap.FindRef(PlaybackInstance);
		UAtomComponent* AtomComponent = UAtomComponent::GetAtomComponentFromID(PlaybackInstance->ActiveSound->GetAtomComponentID());
		AActor* SoundOwner = AtomComponent ? AtomComponent->GetOwner() : nullptr;
		Ar.Logf(TEXT("%4i.    %s %6.2f %6.2f  %s   %s"), InstanceIndex, Source ? TEXT("Yes") : TEXT(" No"), PlaybackInstance->ActiveSound->PlaybackTime, PlaybackInstance->GetVolume(), *PlaybackInstance->SoundData->GetPathName(), SoundOwner ? *SoundOwner->GetName() : TEXT("None"));
	}

	Ar.Logf(TEXT("Total: %i"), PlaybackInstances.Num() - FirstActiveIndex);
}

void FAtomRuntime::GetSoundClassInfo(TMap<FName, FAtomClassDebugInfo>& AtomClassInfos)
{
	// Iterates over all sounds to get a unique map of class names.
	TMap<UAtomSoundBase*, FName> SoundBaseClasses;

	for (TObjectIterator<UAtomSoundCue> CueIt; CueIt; ++CueIt)
	{
		UAtomSoundCue* SoundCue = *CueIt;

		if (UAtomSoundClass* Class = SoundCue->GetSoundClass())
		{
			SoundBaseClasses.Add(SoundCue, Class->GetFName());
		}
		else
		{
			SoundBaseClasses.Add(SoundCue, NAME_UnGrouped);
		}
	}

	for (TObjectIterator<UAtomSoundWave> WaveIt; WaveIt; ++WaveIt)
	{
		UAtomSoundWave* SoundWave = *WaveIt;

		if (UAtomSoundClass* Class = SoundWave->GetSoundClass())
		{
			SoundBaseClasses.Add(SoundWave, Class->GetFName());
		}
		else
		{
			SoundBaseClasses.Add(SoundWave, NAME_UnGrouped);
		}
	}

	// Collates the data into something useful.
	for (auto SoundClassPair : SoundBaseClasses)
	{
		UAtomSoundBase* Sound = SoundClassPair.Key;
		FName ClassName = SoundClassPair.Value;

		FAtomClassDebugInfo* AtomClassInfo = AtomClassInfos.Find(ClassName);
		if (!AtomClassInfo)
		{
			FAtomClassDebugInfo NewAtomClassInfo;

			NewAtomClassInfo.NumResident = 0;
			NewAtomClassInfo.SizeResident = 0;
			NewAtomClassInfo.NumRealTime = 0;
			NewAtomClassInfo.SizeRealTime = 0;

			AtomClassInfos.Add(ClassName, NewAtomClassInfo);

			AtomClassInfo = AtomClassInfos.Find(ClassName);
			check(AtomClassInfo);
		}

#if !WITH_EDITOR
		//AtomClassInfo->SizeResident += Sound->GetCompressedDataSize(GetRuntimeFormat(SoundWave));
		//AtomClassInfo->NumResident++;
#else
		/*switch (Sound->DecompressionType)
		{
		case DTYPE_Native:
		case DTYPE_Preview:
			AudioClassInfo->SizeResident += Sound->RawPCMDataSize;
			AudioClassInfo->NumResident++;
			break;

		case DTYPE_RealTime:
			AudioClassInfo->SizeRealTime += Sound->GetCompressedDataSize(GetRuntimeFormat(SoundWave));
			AudioClassInfo->NumRealTime++;
			break;

		case DTYPE_Streaming:
			// Add these to real time count for now - eventually compressed data won't be loaded &
			// might have a class info entry of their own
			AudioClassInfo->SizeRealTime += Sound->GetCompressedDataSize(GetRuntimeFormat(SoundWave));
			AudioClassInfo->NumRealTime++;
			break;

		case DTYPE_Setup:
		case DTYPE_Invalid:
		default:
			break;
		}*/
#endif
	}
}

void FAtomRuntime::HandleListSoundClassesCommand(FOutputDevice& Ar)
{
	TMap<FName, FAtomClassDebugInfo> AtomClassInfos;

	GetSoundClassInfo(AtomClassInfos);

	Ar.Logf(TEXT("Listing all sound class."));

	// Display the collated data
	int32 TotalSounds = 0;
	for (auto& AtomClassInfoPair : AtomClassInfos)
	{
		FName ClassName = AtomClassInfoPair.Key;
		FAtomClassDebugInfo& ACI = AtomClassInfoPair.Value;

		FString Line = FString::Printf(TEXT("Class '%s' has %d resident sounds taking %.2f kb"), *ClassName.ToString(), ACI.NumResident, ACI.SizeResident / 1024.0f);
		TotalSounds += ACI.NumResident;
		if (ACI.NumRealTime > 0)
		{
			Line += FString::Printf(TEXT(", and %d real time sounds taking %.2f kb "), ACI.NumRealTime, ACI.SizeRealTime / 1024.0f);
			TotalSounds += ACI.NumRealTime;
		}

		Ar.Logf(TEXT("%s"), *Line);
	}

	Ar.Logf(TEXT("%d total sounds in %d classes"), TotalSounds, AtomClassInfos.Num());
}

void FAtomRuntime::ShowSoundClassHierarchy(FOutputDevice& Ar, UAtomSoundClass* InSoundClass, int32 Indent) const
{
	TArray<UAtomSoundClass*> SoundClassesToShow;
	if (InSoundClass)
	{
		SoundClassesToShow.Add(InSoundClass);
	}
	else
	{
		for (auto SoundClassPair : SoundClasses)
		{
			UAtomSoundClass* SoundClass = SoundClassPair.Key;
			if (SoundClass && !SoundClass->ParentClass)
			{
				SoundClassesToShow.Add(SoundClass);
			}
		}
	}

	for (auto SoundClass : SoundClassesToShow)
	{
		if (Indent > 0)
		{
			Ar.Logf(TEXT("%s|- %s"), FCString::Spc(Indent * 2), *SoundClass->GetName());
		}
		else
		{
			Ar.Logf(TEXT("%s"), *SoundClass->GetName());
		}

		for (auto ChildClass : SoundClass->ChildClasses)
		{
			if (ChildClass)
			{
				ShowSoundClassHierarchy(Ar, ChildClass, Indent + 1);
			}
		}
	}
}

void FAtomRuntime::HandleDumpSoundInfoCommand(FOutputDevice& Ar)
{
	/*using namespace AtomRuntimeUtils;

	FAtomThreadSuspendContext AtomThreadSuspend;

	Ar.Logf(TEXT("Native Count: %d\nRealtime Count: %d\n"), PrecachedNative, PrecachedRealtime);
	float AverageSize = 0.0f;
	if (PrecachedNative != 0)
	{
		PrecachedNative = TotalNativeSize / PrecachedNative;
	}
	Ar.Logf(TEXT("Average Length: %.3g\nTotal Size: %d\nAverage Size: %.3g\n"), AverageNativeLength, TotalNativeSize, PrecachedNative);
	Ar.Logf(TEXT("Channel counts:\n"));
	for (auto CountIt = NativeChannelCount.CreateConstIterator(); CountIt; ++CountIt)
	{
		Ar.Logf(TEXT("\t%d: %d"), CountIt.Key(), CountIt.Value());
	}
	Ar.Logf(TEXT("Sample rate counts:\n"));
	for (auto SampleRateIt = NativeSampleRateCount.CreateConstIterator(); SampleRateIt; ++SampleRateIt)
	{
		Ar.Logf(TEXT("\t%d: %d"), SampleRateIt.Key(), SampleRateIt.Value());
	}*/
}


void FAtomRuntime::HandleListSoundClassVolumesCommand(FOutputDevice& Ar)
{
	FAtomThreadSuspendContext AtomThreadSuspend;

	Ar.Logf(TEXT("SoundClass Volumes: (Volume, Pitch)"));

	for (auto SoundClassPair : SoundClasses)
	{
		UAtomSoundClass* SoundClass = SoundClassPair.Key;
		if (SoundClass)
		{
			const FAtomSoundClassProperties& ClassProperties = SoundClassPair.Value;

			Ar.Logf(TEXT("Cur (%3.2f, %3.2f) for SoundClass %s"), ClassProperties.Volume, ClassProperties.Pitch, *SoundClass->GetName());
		}
	}
}

void FAtomRuntime::HandleListAtomComponentsCommand(FOutputDevice& Ar)
{
	FAtomThreadSuspendContext AtomThreadSuspend;

	int32 Count = 0;
	Ar.Logf(TEXT("AtomComponent Dump"));
	for (TObjectIterator<UAtomComponent> It; It; ++It)
	{
		UAtomComponent* AtomComponent = *It;
		UObject* Outer = It->GetOuter();
		UObject* Owner = It->GetOwner();
		Ar.Logf(TEXT("    0x%p: %s, %s, %s, %s"),
			AtomComponent,
			*(It->GetPathName()),
			It->Sound ? *(It->Sound->GetPathName()) : TEXT("NO SOUND"),
			Outer ? *(Outer->GetPathName()) : TEXT("NO OUTER"),
			Owner ? *(Owner->GetPathName()) : TEXT("NO OWNER"));
		Ar.Logf(TEXT("        bAutoDestroy....................%s"), AtomComponent->bAutoDestroy ? TEXT("true") : TEXT("false"));
		Ar.Logf(TEXT("        bStopWhenOwnerDestroyed.........%s"), AtomComponent->bStopWhenOwnerDestroyed ? TEXT("true") : TEXT("false"));
		Ar.Logf(TEXT("        bShouldRemainActiveIfDropped....%s"), AtomComponent->bShouldRemainActiveIfDropped ? TEXT("true") : TEXT("false"));
		Ar.Logf(TEXT("        bIgnoreForFlushing..............%s"), AtomComponent->bIgnoreForFlushing ? TEXT("true") : TEXT("false"));
		Count++;
	}
	Ar.Logf(TEXT("AtomComponent Total = %d"), Count);

	Ar.Logf(TEXT("AtomRuntime 0x%p has %d ActiveSounds"), this, ActiveSounds.Num());
	for (int32 ASIndex = 0; ASIndex < ActiveSounds.Num(); ASIndex++)
	{
		const FAtomActiveSound* ActiveSound = ActiveSounds[ASIndex];
		UAtomComponent* AComp = UAtomComponent::GetAtomComponentFromID(ActiveSound->GetAtomComponentID());
		if (AComp)
		{
			Ar.Logf(TEXT("    0x%p: %4d - %s, %s, %s, %s"),
				AComp,
				ASIndex,
				*(AComp->GetPathName()),
				ActiveSound->Sound ? *(ActiveSound->Sound->GetPathName()) : TEXT("NO SOUND"),
				AComp->GetOuter() ? *(AComp->GetOuter()->GetPathName()) : TEXT("NO OUTER"),
				AComp->GetOwner() ? *(AComp->GetOwner()->GetPathName()) : TEXT("NO OWNER"));
		}
		else
		{
			Ar.Logf(TEXT("    %4d - %s, %s"),
				ASIndex,
				ActiveSound->Sound ? *(ActiveSound->Sound->GetPathName()) : TEXT("NO SOUND"),
				TEXT("NO COMPONENT"));
		}
	}
}

void FAtomRuntime::HandleListSoundDurationsCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("Sound,Type,Duration,Channels"));
	for (TObjectIterator<UAtomSoundBase> It; It; ++It)
	{
		UAtomSoundBase* Sound = *It;
		Ar.Logf(TEXT("%s,%s,%f,%i"), *Sound->GetPathName(), *Sound->GetClass()->GetName(), Sound->Duration, Sound->WaveInfo.NumChannels);
	}
}

void FAtomRuntime::HandleSetBaseSoundRackCommand(const TArray<FString>& Args, FOutputDevice& Ar)
{
	Ar.Logf(TEXT("HandleSetBaseSoundRackCommand - master rack change - not yet suported - TODO"));

	if (Args.Num())
	{
		Ar.Logf(TEXT("Setting base sound rack '%s'"), *Args[0]);
		
		const FName NewRackName = FName(Args[0]);
		UAtomRack* SoundRack = nullptr;

		for (TObjectIterator<UAtomRack> It; It; ++It)
		{
			if (NewRackName == It->GetFName())
			{
				SoundRack = *It;
				break;
			}
		}

		if (SoundRack)
		{
			// TODO stop active rentime .. change the master rack and restart active atom 
			//SetBaseSoundRack(SoundMix);
		}
		else
		{
			Ar.Logf(TEXT("Unknown SoundRack: %s"), *NewRackName.ToString());
		}
	}
}

/*bool FAtomRuntime::HandleIsolateDryAudioCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("Dry audio isolated"));
	SetMixDebugState(DEBUGSTATE_IsolateDryAudio);
}

bool FAtomRuntime::HandleIsolateReverbCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("Reverb audio isolated"));
	SetMixDebugState(DEBUGSTATE_IsolateReverb);
}*/

void FAtomRuntime::HandleTestLPFCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("LPF set to max for all sources"));
	SetMixDebugState(EAtomDebugState::TestLPF);
}

void FAtomRuntime::HandleTestHPFCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("HPF set to max for all sources"));
	SetMixDebugState(EAtomDebugState::TestHPF);
}

/*void FAtomRuntime::HandleTestLFEBleedCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("LFEBleed set to max for all sources"));
	SetMixDebugState(EAtomDebugState::TestLFEBleed);
}*/

void FAtomRuntime::HandleDisableLPFCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("LPF disabled for all sources"));
	SetMixDebugState(EAtomDebugState::DisableLPF);
}

void FAtomRuntime::HandleDisableHPFCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("HPF disabled for all sources"));
	SetMixDebugState(EAtomDebugState::DisableHPF);
}

/*void FAtomRuntime::HandleDisableRadioCommand(FOutputDevice& Ar)
{
	EnableRadioEffect(false);
}

void FAtomRuntime::HandleEnableRadioCommand(FOutputDevice& Ar)
{
	EnableRadioEffect(true);
}*/

void FAtomRuntime::HandleResetSoundStateCommand(FOutputDevice& Ar)
{
	Ar.Logf(TEXT("All volumes reset to their defaults; all test filters removed"));
	SetMixDebugState(EAtomDebugState::None);
}

/*void FAtomRuntime::HandleToggleSpatializationExtensionCommand(FOutputDevice& Ar)
{
	SetSpatializationInterfaceEnabled(!bSpatializationInterfaceEnabled);
}*/

void FAtomRuntime::HandleEnableHRTFForAllCommand(FOutputDevice& Ar)
{
	SetHRTFEnabledForAll(!bHRTFEnabledForAll_OnGameThread);
	Ar.Logf(TEXT("EnableHRTFForAllCommand - not yet suported - TODO"));
}

void FAtomRuntime::HandleSoloCommand(FOutputDevice& Ar)
{
	// Apply the solo to the given device
	FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager();
	if (RuntimeManager)
	{
		//RuntimeManager->SetSoloDevice(RuntimeID);
		Ar.Logf(TEXT("SoloCommand - not yet suported - only one runtime is soloed / active (Atom limitation)"));
	}
}

void FAtomRuntime::HandleClearSoloCommand(FOutputDevice& Ar)
{
	FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager();
	if (RuntimeManager)
	{
		//RuntimeManager->SetSoloDevice(INDEX_NONE);
		Ar.Logf(TEXT("ClearSoloCommand - not yet suported - only one runtime is soloed / active (Atom limitation)"));
	}
}

void FAtomRuntime::HandlePlayAllPIEAtomCommand(FOutputDevice& Ar)
{
	FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager();
	if (RuntimeManager)
	{
		//RuntimeManager->TogglePlayAllAtomRuntime();
		Ar.Logf(TEXT("PlayAllPIEAtomCommand - not yet suported - only one runtime is soloed / active (Atom limitation)"));
	}
}

/*void FAtomRuntime::HandleAtom3dVisualizeCommand()
{
	FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager();
	if (RuntimeManager)
	{
		RuntimeManager->ToggleVisualize3dDebug();
	}
}*/

void FAtomRuntime::HandleAtomSoloCommon(const TArray<FString>& Args, FToggleSoloPtr FPtr)
{
	FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager();
	if (RuntimeManager)
	{
		bool bExclusive = true;
		if (Args.Contains(TEXT("nonexclusive")))
		{
			bExclusive = false;
		}
		
		if (Args.Num())
		{
			(RuntimeManager->GetDebugger().*FPtr)(*Args[0], bExclusive);
		}
		else if (bExclusive)
		{
			// If we are exclusive and no argument is passed, pass NAME_None to clear the current state.
			(RuntimeManager->GetDebugger().*FPtr)(NAME_None, true);
		}
	}
}

void FAtomRuntime::HandleAtomSoloSoundClass(const TArray<FString>& Args)
{
	HandleAtomSoloCommon(Args, &Atom::FAtomDebugger::ToggleSoloSoundClass);
}

void FAtomRuntime::HandleAtomSoloSoundWave(const TArray<FString>& Args)
{
	HandleAtomSoloCommon(Args, &Atom::FAtomDebugger::ToggleSoloSoundWave);
}

void FAtomRuntime::HandleAtomSoloSoundCue(const TArray<FString>& Args)
{
	HandleAtomSoloCommon(Args, &Atom::FAtomDebugger::ToggleSoloSoundCue);
}

void FAtomRuntime::HandleAtomMixDebugSound(const TArray<FString>& Args)
{
	FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager();
	if (RuntimeManager && Args.Num())
	{
		RuntimeManager->GetDebugger().SetAtomMixerDebugSound(*Args[0]);
	}
}

void FAtomRuntime::HandleAtomDebugSound(const TArray<FString>& Args)
{
	FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager();
	if (RuntimeManager && Args.Num())
	{
		RuntimeManager->GetDebugger().SetAtomDebugSound(*Args[0]);
	}
}

void FAtomRuntime::HandleAtomMemoryInfo(const TArray<FString>& Args, FOutputDevice& Ar)
{
	struct FAtomSoundBaseInfo
	{
		UAtomSoundBase* Sound;
		FResourceSizeEx ResourceSize;
		FString SoundBankName;
		float Duration;

		enum class ELoadingType : uint8
		{
			CompressedInMemory,
			DecompressedInMemory,
			Streaming
		};

		// Whether this audio is decompressed in memory, decompressed in realtime, or streamed.
		ELoadingType LoadingType;

		// This is the maximum amount of the cache this asset could take up at any given time,
		// that could potentially not be removed if the sound is retained or currently playing.
		uint32 MaxUnevictableSizeInCache;

		// This is the total amount of compressed audio data that could be loaded in the cache.
		uint32 PotentialTotalSizeInCache;

		FAtomSoundBaseInfo(UAtomSoundBase* InSound, FResourceSizeEx InResourceSize, const FString& InSoundBankName, float InDuration, ELoadingType InLoadingType, uint32 InMaxUnevictableSizeInCache, uint32 InPotentialTotalSizeInCache)
			: Sound(InSound)
			, ResourceSize(InResourceSize)
			, SoundBankName(InSoundBankName)
			, Duration(InDuration)
			, LoadingType(InLoadingType)
			, MaxUnevictableSizeInCache(InMaxUnevictableSizeInCache)
			, PotentialTotalSizeInCache(InPotentialTotalSizeInCache)
		{}
	};

	using ELoadingType = FAtomSoundBaseInfo::ELoadingType;

	struct FAtomSoundBankInfo
	{
		FResourceSizeEx ResourceSize;
		FResourceSizeEx CompressedResourceSize;

		FAtomSoundBankInfo()
			: ResourceSize()
			, CompressedResourceSize()
		{}
	};

	// Alpha sort the objects by path name
	struct FCompareSoundBase
	{
		FORCEINLINE bool operator()(const FAtomSoundBaseInfo& A, const FAtomSoundBaseInfo& B) const
		{
			return A.Sound->GetPathName() < B.Sound->GetPathName();
		}
	};

	// Default to writing our own .csv file unless -log is present
	const bool bLogOutputToFile = Args.Contains(TEXT("LOG"));

	FOutputDevice* ReportAr = &Ar;
	FArchive* FileAr = nullptr;
	FOutputDeviceArchiveWrapper* FileArWrapper = nullptr;

	if (bLogOutputToFile)
	{
		const FString PathName = *(FPaths::ProfilingDir() + TEXT("MemReports/"));
		IFileManager::Get().MakeDirectory(*PathName);

		const FString Filename = CreateProfileFilename(TEXT("_atom_memreport.csv"), true);
		const FString FilenameFull = PathName + Filename;

		FileAr = IFileManager::Get().CreateDebugFileWriter(*FilenameFull);
		FileArWrapper = new FOutputDeviceArchiveWrapper(FileAr);
		ReportAr = FileArWrapper;

		UE_LOG(LogEngine, Log, TEXT("AtomMemReport: saving to %s"), *FilenameFull);
	}
	else
	{
		UE_LOG(LogEngine, Log, TEXT("Use command \"AtomMemReport -log\" to output to client logs or the passed through FOutputDevice."));
	}

	// Get the sound wave class.
	UClass* SoundBaseClass = nullptr;
	ParseObject<UClass>(TEXT("class=SoundBase"), TEXT("CLASS="), SoundBaseClass, nullptr);

	TArray<FAtomSoundBaseInfo> SoundBaseObjects;
	TMap<FString, FAtomSoundBankInfo> SoundBankSizes;
	TArray<FString> SoundBanks;

	// Grab the list of bank to specifically track memory usage for.
	FConfigSection* TrackedBanks = GConfig->GetSectionPrivate(TEXT("AtomMemReportBanks"), 0, 1, GEngineIni);
	if (TrackedBanks)
	{
		for (FConfigSectionMap::TIterator It(*TrackedBanks); It; ++It)
		{
			const FString& SoundBank = *It.Value().GetValue();
			SoundBankSizes.Add(SoundBank, FAtomSoundBankInfo());
			SoundBanks.Add(SoundBank);
		}
	}

	TMap<FString, FAtomSoundBankInfo> SoundBankFolderSizes;
	TArray<FString> SoundBankFolders;

	// Grab the list of folder to specifically track memory usage for.
	FConfigSection* TrackedFolders = GConfig->GetSectionPrivate(TEXT("AtomMemReportFolders"), 0, 1, GEngineIni);
	if (TrackedFolders)
	{
		for (FConfigSectionMap::TIterator It(*TrackedFolders); It; ++It)
		{
			const FString& SoundFolder = *It.Value().GetValue();
			SoundBankFolderSizes.Add(SoundFolder, FAtomSoundBankInfo());
			SoundBankFolders.Add(SoundFolder);
		}
	}

	FResourceSizeEx TotalResourceSize;
	FResourceSizeEx CompressedResourceSize;
	FResourceSizeEx DecompressedResourceSize;
	int32 CompressedResourceCount = 0;

	if (SoundBaseClass)
	{
		// Loop through all objects and find only sound objects
		for (TObjectIterator<UAtomSoundBase> It; It; ++It)
		{
			if (It->IsTemplate(RF_ClassDefaultObject))
			{
				continue;
			}

			// Get the resource size of the sound
			FResourceSizeEx TrueResourceSize = FResourceSizeEx(EResourceSizeMode::Exclusive);
			It->GetResourceSizeEx(TrueResourceSize);
			if (TrueResourceSize.GetTotalMemoryBytes() == 0)
			{
				continue;
			}

			UAtomSoundBase* SoundBase = *It;

			const UAtomSoundBank* SoundBank = Cast<UAtomSoundBank>(SoundBase->GetOuter());
			const IAtomSoundResource* SoundResource = SoundBase->GetSoundResource();
			if (!SoundBank)
			{
				continue;
			}

			// Determine whether this asset is streaming compressed data from disk, decompressed in realtime, or fully decompressed on load.
			ELoadingType LoadType;

			if (SoundBase->IsStreaming())
			{
				LoadType = ELoadingType::Streaming;
			}
			else
			{
				LoadType = ELoadingType::CompressedInMemory;
			}

			FString SoundBankName = SoundBank->GetFName().ToString();

			// Get the sound object path
			FString SoundWavePath = SoundBase->GetPathName();
		}

		ReportAr->Log(TEXT("Atom Sounds Memory Report"));
		ReportAr->Log(TEXT(""));

		if (SoundBaseObjects.Num())
		{
			// Alpha sort the sound base objects
			SoundBaseObjects.Sort(FCompareSoundBase());

			// Log the sound base objects
			ReportAr->Logf(TEXT("Memory (MB),Count"));
			ReportAr->Logf(TEXT("Total,%.3f,%d"), TotalResourceSize.GetTotalMemoryBytes() / 1024.f / 1024.f, SoundBaseObjects.Num());
			ReportAr->Logf(TEXT("Decompressed,%.3f,%d"), DecompressedResourceSize.GetTotalMemoryBytes() / 1024.f / 1024.f, CompressedResourceCount);
			ReportAr->Logf(TEXT("Compressed,%.3f,%d"), CompressedResourceSize.GetTotalMemoryBytes() / 1024.f / 1024.f, SoundBaseObjects.Num() - CompressedResourceCount);

			if (SoundBanks.Num())
			{
				ReportAr->Log(TEXT(""));
				ReportAr->Log(TEXT("Memory Usage and Count for Specified Banks (Folders defined in [AtomMemReportBanks] section in DefaultEngine.ini file):"));
				ReportAr->Log(TEXT(""));
				ReportAr->Logf(TEXT("%s,%s,%s"), TEXT("Directory"), TEXT("Total (MB)"), TEXT("Compressed (MB)"));
				for (const FString& SoundBank : SoundBanks)
				{
					FAtomSoundBankInfo* BankSize = SoundBankSizes.Find(SoundBank);
					check(BankSize);
					ReportAr->Logf(TEXT("%s,%.2f,%.2f"), *SoundBank, BankSize->ResourceSize.GetTotalMemoryBytes() / 1024.0f / 1024.0f, BankSize->CompressedResourceSize.GetTotalMemoryBytes() / 1024.0f / 1024.0f);
				}
			}

			ReportAr->Log(TEXT(""));
			ReportAr->Log(TEXT("All Atom Sound Objects Sorted Alphebetically:"));
			ReportAr->Log(TEXT(""));

			ReportAr->Logf(TEXT("%s,%s,%s,%s,%s,%s,%s,%s"), TEXT("SoundWave"), TEXT("KB"), TEXT("MB"), TEXT("SoundBank"), TEXT("Duration"), TEXT("CompressionState"), TEXT("Max Size in Cache (Unevictable KB)"), TEXT("Max Size In Cache (Total KB)"));
			for (const FAtomSoundBaseInfo& Info : SoundBaseObjects)
			{
				float Kbytes = Info.ResourceSize.GetTotalMemoryBytes() / 1024.0f;

				FString LoadingTypeString;

				switch (Info.LoadingType)
				{
				case ELoadingType::CompressedInMemory:
					LoadingTypeString = TEXT("Compressed");
					break;
				case ELoadingType::DecompressedInMemory:
					LoadingTypeString = TEXT("Decompressed");
					break;
				case ELoadingType::Streaming:
					LoadingTypeString = TEXT("Streaming");
				default:
					break;
				}

				ReportAr->Logf(TEXT("%s,%.2f,%.2f,%s,%.2f,%s,%.2f,%.2f"), *Info.Sound->GetPathName(), Kbytes, Kbytes / 1024.0f, *Info.SoundBankName, Info.Duration, *LoadingTypeString, Info.MaxUnevictableSizeInCache / 1024.0f, Info.PotentialTotalSizeInCache / 1024.0f);
			}
		}
			
			/*
			const FSoundGroup& SoundGroup = GetDefault<USoundGroups>()->GetSoundGroup(SoundGroup->SoundGroup);

			float CompressionDurationThreshold = GetCompressionDurationThreshold(SoundGroup);

			// Determine whether this asset is streaming compressed data from disk, decompressed in realtime, or fully decompressed on load.
			ELoadingType LoadType;

			if (SoundWave->IsStreaming())
			{
				LoadType = ELoadingType::Streaming;
			}
			else
			{
				LoadType = ShouldUseRealtimeDecompression(false, SoundGroup, SoundWave, CompressionDurationThreshold) ? ELoadingType::CompressedInMemory : ELoadingType::DecompressedInMemory;
			}

			FString SoundGroupName;
			switch (SoundWave->SoundGroup)
			{
			case ESoundGroup::SOUNDGROUP_Default:
				SoundGroupName = TEXT("Default");
				break;

			case ESoundGroup::SOUNDGROUP_Effects:
				SoundGroupName = TEXT("Effects");
				break;

			case ESoundGroup::SOUNDGROUP_UI:
				SoundGroupName = TEXT("UI");
				break;

			case ESoundGroup::SOUNDGROUP_Music:
				SoundGroupName = TEXT("Music");
				break;

			case ESoundGroup::SOUNDGROUP_Voice:
				SoundGroupName = TEXT("Voice");
				break;

			default:
				SoundGroupName = SoundGroup.DisplayName;
				break;
			}

			check(SoundWave->SoundWaveDataPtr);
			FSoundWaveData::MaxChunkSizeResults MaxChunkSizes = SoundWave->SoundWaveDataPtr->GetMaxChunkSizeResults();

			// Add the info to the SoundWaveObjects array
			SoundWaveObjects.Add(FSoundWaveInfo(SoundWave, TrueResourceSize, SoundGroupName, SoundWave->Duration, LoadType, MaxChunkSizes.MaxUnevictableSize, MaxChunkSizes.MaxSizeInCache));

			// Track total resource usage
			TotalResourceSize += TrueResourceSize;

			if (LoadType == ELoadingType::DecompressedInMemory)
			{
				DecompressedResourceSize += TrueResourceSize;
				++CompressedResourceCount;
			}
			else if (LoadType == ELoadingType::CompressedInMemory)
			{
				CompressedResourceSize += TrueResourceSize;
			}

			// Get the sound object path
			FString SoundWavePath = SoundWave->GetPathName();

			// Now track the resource size according to all the sub-directories
			FString SubDir;
			int32 Index = 0;

			for (int32 i = 0; i < SoundWavePath.Len(); ++i)
			{
				if (SoundWavePath[i] == '/')
				{
					if (SubDir.Len() > 0)
					{
						FSoundWaveGroupInfo* SubDirSize = SoundWaveGroupSizes.Find(SubDir);
						if (SubDirSize)
						{
							SubDirSize->ResourceSize += TrueResourceSize;
							if (LoadType == ELoadingType::CompressedInMemory)
							{
								SubDirSize->CompressedResourceSize += TrueResourceSize;
							}
						}
					}
					SubDir = TEXT("");
				}
				else
				{
					SubDir.AppendChar(SoundWavePath[i]);
				}
			}
		}

		ReportAr->Log(TEXT("Atom Sounds Memory Report"));
		ReportAr->Log(TEXT(""));

		FString StreamingMemoryReport = IStreamingManager::Get().GetAudioStreamingManager().GenerateMemoryReport();*/

		//ReportAr->Log(TEXT("\n/*******************/\n"));
		//ReportAr->Log(TEXT("Streaming Audio Info:"));
		//ReportAr->Log(*StreamingMemoryReport);
		//ReportAr->Log(TEXT("\n/*******************/\n"));

		/*if (SoundWaveObjects.Num())
		{
			// Alpha sort the sound wave objects
			SoundWaveObjects.Sort(FCompareSoundWave());

			// Log the sound wave objects

			ReportAr->Logf(TEXT("Memory (MB),Count"));
			ReportAr->Logf(TEXT("Total,%.3f,%d"), TotalResourceSize.GetTotalMemoryBytes() / 1024.f / 1024.f, SoundWaveObjects.Num());
			ReportAr->Logf(TEXT("Decompressed,%.3f,%d"), DecompressedResourceSize.GetTotalMemoryBytes() / 1024.f / 1024.f, CompressedResourceCount);
			ReportAr->Logf(TEXT("Compressed,%.3f,%d"), CompressedResourceSize.GetTotalMemoryBytes() / 1024.f / 1024.f, SoundWaveObjects.Num() - CompressedResourceCount);

			if (SoundWaveGroupFolders.Num())
			{
				ReportAr->Log(TEXT(""));
				ReportAr->Log(TEXT("Memory Usage and Count for Specified Folders (Folders defined in [AudioMemReportFolders] section in DefaultEngine.ini file):"));
				ReportAr->Log(TEXT(""));
				ReportAr->Logf(TEXT("%s,%s,%s"), TEXT("Directory"), TEXT("Total (MB)"), TEXT("Compressed (MB)"));
				for (const FString& SoundWaveGroupFolder : SoundWaveGroupFolders)
				{
					FSoundWaveGroupInfo* SubDirSize = SoundWaveGroupSizes.Find(SoundWaveGroupFolder);
					check(SubDirSize);
					ReportAr->Logf(TEXT("%s,%.2f,%.2f"), *SoundWaveGroupFolder, SubDirSize->ResourceSize.GetTotalMemoryBytes() / 1024.0f / 1024.0f, SubDirSize->CompressedResourceSize.GetTotalMemoryBytes() / 1024.0f / 1024.0f);
				}
			}

			ReportAr->Log(TEXT(""));
			ReportAr->Log(TEXT("All Sound Wave Objects Sorted Alphebetically:"));
			ReportAr->Log(TEXT(""));

			ReportAr->Logf(TEXT("%s,%s,%s,%s,%s,%s,%s,%s"), TEXT("SoundWave"), TEXT("KB"), TEXT("MB"), TEXT("SoundGroup"), TEXT("Duration"), TEXT("CompressionState"), TEXT("Max Size in Cache (Unevictable KB)"), TEXT("Max Size In Cache (Total KB)"));
			for (const FSoundWaveInfo& Info : SoundWaveObjects)
			{
				float Kbytes = Info.ResourceSize.GetTotalMemoryBytes() / 1024.0f;

				FString LoadingTypeString;

				switch (Info.LoadingType)
				{
				case ELoadingType::CompressedInMemory:
					LoadingTypeString = TEXT("Compressed");
					break;
				case ELoadingType::DecompressedInMemory:
					LoadingTypeString = TEXT("Decompressed");
					break;
				case ELoadingType::Streaming:
					LoadingTypeString = TEXT("Streaming");
				default:
					break;
				}

				ReportAr->Logf(TEXT("%s,%.2f,%.2f,%s,%.2f,%s,%.2f,%.2f"), *Info.SoundWave->GetPathName(), Kbytes, Kbytes / 1024.0f, *Info.SoundGroupName, Info.Duration, *LoadingTypeString, Info.MaxUnevictableSizeInCache / 1024.0f, Info.PotentialTotalSizeInCache / 1024.0f);
			}
		}*/

	}

	if (FileArWrapper != nullptr)
	{
		// Shutdown and free archive resources
		FileArWrapper->TearDown();
	}
	delete FileArWrapper;
	delete FileAr;
}

void FAtomRuntime::HandleResetAllDynamicSoundVolumesCommand()
{
	if (FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager())
	{
		RuntimeManager->ResetAllDynamicSoundVolumes();
	}
}

void FAtomRuntime::HandleResetDynamicSoundVolumeCommand(const TArray<FString>& Args)
{
	if (FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager())
	{
		FString Cmd = FString::Join(Args, TEXT(" "));

		FName SoundName;
		if (!FParse::Value(*Cmd, TEXT("Name="), SoundName))
		{
			return;
		}

		// Optional: Defaults to Cue
		FString SoundTypeStr;
		EAtomSoundType SoundType = EAtomSoundType::Cue;
		if (FParse::Value(*Cmd, TEXT("Type="), SoundTypeStr))
		{
			if (SoundTypeStr == TEXT("Wave"))
			{
				SoundType = EAtomSoundType::Wave;
			}
			else if (SoundTypeStr == TEXT("Class"))
			{
				SoundType = EAtomSoundType::Class;
			}
		}

		RuntimeManager->ResetDynamicSoundVolume(SoundType, SoundName);
	}
}

void FAtomRuntime::HandleGetDynamicSoundVolumeCommand(const TArray<FString>& Args, FOutputDevice& Ar)
{
	if (!GCriWare)
	{
		return;
	}

	if (const FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager())
	{
		FString Cmd = FString::Join(Args, TEXT(" "));

		FName SoundName;
		if (!FParse::Value(*Cmd, TEXT("Name="), SoundName))
		{
			return;
		}

		// Optional: Defaults to Cue
		FString SoundTypeStr;
		EAtomSoundType SoundType = EAtomSoundType::Cue;
		if (FParse::Value(*Cmd, TEXT("Type="), SoundTypeStr))
		{
			if (SoundTypeStr == TEXT("Wave"))
			{
				SoundType = EAtomSoundType::Wave;
			}
			else if (SoundTypeStr == TEXT("Class"))
			{
				SoundType = EAtomSoundType::Class;
			}
		}

		if (!IsInAtomThread())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.GetDynamicSoundVolume"), STAT_AtomGetDynamicSoundVolume, STATGROUP_AtomThreadCommands);

			const EAtomSoundType InSoundType = SoundType;
			const FName InSoundName = SoundName;
			FAtomThread::RunCommandOnAtomThread([InSoundType, InSoundName]()
			{
				if (!GCriWare)
				{
					return;
				}

				if (const FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager())
				{
					const float Volume = RuntimeManager->GetDynamicSoundVolume(InSoundType, InSoundName);
					UE_LOG(LogCriWareAtom, Display, TEXT("'%s' Dynamic Volume: %.4f"), *InSoundName.GetPlainNameString(), Volume);
				}
			}, GET_STATID(STAT_AtomGetDynamicSoundVolume));
		}
		else
		{
			const float Volume = RuntimeManager->GetDynamicSoundVolume(SoundType, SoundName);
			FString Msg = FString::Printf(TEXT("'%s' Dynamic Volume: %.4f"), *SoundName.GetPlainNameString(), Volume);
			Ar.Logf(TEXT("%s"), *Msg);
		}
	}
}

void FAtomRuntime::HandleSetDynamicSoundCommand(const TArray<FString>& Args)
{
	if (FAtomRuntimeManager* RuntimeManager = GCriWare->GetAtomRuntimeManager())
	{
		FString Cmd = FString::Join(Args, TEXT(" "));

		FName SoundName;
		if (!FParse::Value(*Cmd, TEXT("Name="), SoundName))
		{
			return;
		}

		// Optional: Defaults to Cue
		FString SoundTypeStr;
		EAtomSoundType SoundType = EAtomSoundType::Cue;
		if (FParse::Value(*Cmd, TEXT("Type="), SoundTypeStr))
		{
			if (SoundTypeStr == TEXT("Wave"))
			{
				SoundType = EAtomSoundType::Wave;
			}
			else if (SoundTypeStr == TEXT("Class"))
			{
				SoundType = EAtomSoundType::Class;
			}
		}

		float Volume;
		if (!FParse::Value(*Cmd, TEXT("Vol="), Volume))
		{
			return;
		}

		RuntimeManager->SetDynamicSoundVolume(SoundType, SoundName, Volume);
	}
}
#endif // !UE_BUILD_SHIPPING

bool FAtomRuntime::IsHRTFEnabledForAll() const
{
	if (IsInAtomThread())
	{
		return (bHRTFEnabledForAll || EnableAtomBinauralAudioForAllSpatialSoundsCVar == 1) /* && IsSpatializationPluginEnabled()*/;
	}

	check(IsInGameThread());
	return (bHRTFEnabledForAll_OnGameThread || EnableAtomBinauralAudioForAllSpatialSoundsCVar == 1) /* && IsSpatializationPluginEnabled()*/;
}

bool FAtomRuntime::IsHRTFDisabled() const
{
	if (IsInAtomThread())
	{
		return (bHRTFDisabled || DisableAtomBinauralSpatializationCVar == 1);
	}

	check(IsInGameThread());
	return (bHRTFDisabled_OnGameThread || DisableAtomBinauralSpatializationCVar == 1);
}

void FAtomRuntime::SetMixDebugState(EAtomDebugState InDebugState)
{
	if (!IsInAtomThread())
	{
		DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetMixDebugState"), STAT_AtomSetMixDebugState, STATGROUP_AtomThreadCommands);

		FAtomRuntime* AtomRuntime = this;
		FAtomThread::RunCommandOnAtomThread([AtomRuntime, InDebugState]()
		{
			AtomRuntime->SetMixDebugState(InDebugState);

		}, GET_STATID(STAT_AtomSetMixDebugState));

		return;
	}

	DebugState = InDebugState;
}
