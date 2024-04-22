﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomCueSheetResource.cpp
 *
 ****************************************************************************/

#include "Atom/AtomCueSheetResource.h"

#include "CriWare.h"
#include "Atom/AtomRuntimeManager.h"
#include "Atom/AtomRuntime.h"
#include "Atom/AtomCueSheet.h"
#include "Atom/AtomWaveBank.h"
#include "Atom/AtomSoundCue.h"
#include "Atom/AtomWaveBankResource.h"

#define ATOM_TRACE_RESOURCES 0

void FAtomCueSheetResource::GetDependencySoundResources(TArray<IAtomSoundResource*>& SoundResources) const
{
	UAtomCueSheet* CueSheet = Cast<UAtomCueSheet>(Source);
	check(CueSheet);
	SoundResources.Append(CueSheet->WaveBanks);
}

bool FAtomCueSheetResource::AsyncLoad(TFunction<void(EAtomResourceLoadResult)> OnLoadCompleted, ENamedThreads::Type CallbackThread, EAtomResourceScope Scope)
{
	// todo: replace with source proxy 
	UAtomCueSheet* CueSheet = Cast<UAtomCueSheet>(Source);
	check(CueSheet);

	// check resouce load status
	if (IsLoaded())
	{
		if (OnLoadCompleted)
		{
			FAtomResourceManager::ExecuteOnLoadCompleteCallback(EAtomResourceLoadResult::AlreadyLoaded, OnLoadCompleted, CallbackThread);
		}
		return false;
	}

	if (IsAsyncLoading())
	{
		if (OnLoadCompleted)
		{
			// todo: use a multi delegate event (safer)
			// wait then Dispatch an async notify.
			AsyncTask(ENamedThreads::AnyHiPriThreadNormalTask, [ID = ResourceID, OnLoadCompleted, CallbackThread]()
			{
				// debug
				float TimeStarted = FPlatformTime::Seconds();
				FAtomResourceHandle Handle;

				do 
				{
					Handle.Reset();

					float TimeSinceStarted = FPlatformTime::Seconds() - TimeStarted;
					UE_LOG(LogCriWareAtomDebug, Log, TEXT("Waited %f seconds for async acb loads."), TimeSinceStarted);
					FPlatformProcess::Sleep(0.001f);

					if (auto RuntimeManager = FAtomRuntimeManager::Get())
					{
						Handle = RuntimeManager->GetAtomResourceManager().GetResource(ID);
					}
				} while (Handle && Handle->IsAsyncLoading());

				auto LoadStatus = Handle && Handle->IsLoaded() ? EAtomResourceLoadResult::Completed : EAtomResourceLoadResult::Interrupted;
				FAtomResourceManager::ExecuteOnLoadCompleteCallback(LoadStatus, OnLoadCompleted, CallbackThread);
			});
		}
		return false;
	}

	// access to bulk data of the source
	auto RawData = CueSheet->GetRawData();

	// check if streaming is asked
	bool bRequestStreamed = CueSheet->IsStreaming();

	// check if we can stream from file or use inlined memory
	bool bUseInlined = !RawData->DoesExist() || RawData->IsInlined() || !bRequestStreamed;

	//bool bIsInSeparateFile = RawData->InSeperateFile();
	bool bUseIODispatcher = RawData->IsUsingIODispatcher();
	//bool bCanBeLoaded = RawData->CanLoadFromDisk();
	//UE_LOG(LogTemp, Warning, TEXT("AsyncLoad CS: sep %d MMap %d Disk %d "), bIsInSeparateFile, bUseMemoryMapped, bCanBeLoaded);

	FString FilePath;
	int64 Offset;
	int64 Size;
	if (!bUseInlined)
	{
		if (bUseIODispatcher)
		{
			FilePath = FString::Printf(TEXT("@%d"), ResourceID);
			Offset = 0;
			Size = RawData->GetBulkDataSize();
		}
		else
		{
			//FilePath = RawData->GetPackagePath().GetLocalFullPath(RawData->GetPackageSegment());
			//Offset = RawData->GetBulkDataOffsetInFile();
			FilePath = FString::Printf(TEXT("%%%d"), ResourceID);
			Offset = 0;
			Size = RawData->GetBulkDataSize();
		}
	}
	else // inlined 
	{
		Offset = 0;
		Size = RawData->GetBulkDataSize();
	}

	// call to file loading  - criAtomExAcb_LoadAcbData is a synchronous function
	//LoadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, CueSheet, bUseInlined, Offset, Size, FilePath, OnLoadCompleted, CallbackThread, Scope]()
	LoadTask = new FLoadTask([this, CueSheet, bUseInlined, Offset, Size, FilePath, OnLoadCompleted, CallbackThread, Scope](bool& bShutdown)
	{
		if (CueSheet->Validate() && !CueSheet->HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
		{
			if (!bUseInlined)
			{
				static const CriChar8 SectionName[] = "ACB";

				CriFsBinderHn FsBinderAcbHn = nullptr;
				FCriWareApi::criFsBinder_Create(&FsBinderAcbHn);
				FCriFsBinderPtr FsBinderAcb = MakeCriHandle(FsBinderAcbHn);

				CriFsBinderId FsBinderAcbID = -1;
				FCriWareApi::criFsBinder_BindFileSection(FsBinderAcb, nullptr, TCHAR_TO_UTF8(*FilePath), Offset, Size, SectionName, nullptr, 0, &FsBinderAcbID);

				CriFsBinderStatus FsBinderStatus = CRIFSBINDER_STATUS_NONE;
				while (FsBinderStatus != CRIFSBINDER_STATUS_COMPLETE
					&& FsBinderStatus != CRIFSBINDER_STATUS_ERROR)
				{
					FCriWareApi::criFsBinder_GetStatus(FsBinderAcbID, &FsBinderStatus);
				}

				FCriAtomExAcbPtr ExAcb;
				if (FsBinderStatus == CRIFSBINDER_STATUS_COMPLETE)
				{
					ExAcb = MakeCriHandle(FCriWareApi::criAtomExAcb_LoadAcbFile(FsBinderAcb, SectionName, nullptr, nullptr, nullptr, 0));
				}

				if (!ExAcb.Get())
				{
					// Failed
					FsBinderAcb.Reset();

					if (OnLoadCompleted)
					{
						FAtomResourceManager::ExecuteOnLoadCompleteCallback(EAtomResourceLoadResult::Interrupted, OnLoadCompleted, CallbackThread);
					}
					return;
				}

				SetNativeHandle(ExAcb);
				SetFsHandle(FsBinderAcb);
			}
			else
			{
				FCriAtomExAcbPtr ExAcb;

				// check if data is already loaded (if used by another runtime or in another scope)
				// if not, we load the data to memory.
				const uint8* ResourceData = Source->GetResourceData();
				bool bInitResource = false;
				if (!ResourceData && Source->InitAtomResource())
				{
					ResourceData = Source->GetResourceData();
					bInitResource = true;
				}

				// test try to get an unique data for unique resource (atom cannot have concurency acces to same memory)
				if (Scope == EAtomResourceScope::Unique)
				{
					auto RawData = CueSheet->GetRawData();

					check(!LocalData);
					RawData->GetCopy((void**)&LocalData, true);
					ResourceData = LocalData;
				}

				if (ResourceData)
				{
					ExAcb = MakeCriHandle(FCriWareApi::criAtomExAcb_LoadAcbData((void*)ResourceData, Size, nullptr, nullptr, nullptr, 0));
				}

				if (!ExAcb.Get())
				{
					// Failed

					// release only if we loaded it
					if (bInitResource)
					{
						Source->RemoveAtomResource();
					}

					if (OnLoadCompleted)
					{
						FAtomResourceManager::ExecuteOnLoadCompleteCallback(EAtomResourceLoadResult::Interrupted, OnLoadCompleted, CallbackThread);
					}
					return;
				}

				SetNativeHandle(ExAcb);
			}

			// get wave banks and try to load if possible
			for (int32 Index = 0; Index < CueSheet->WaveBanks.Num(); Index++)
			{
				UAtomWaveBank* WaveBank = CueSheet->WaveBanks[Index];
				AttachWaveBankInternal(WaveBank, (uint16)Index);
			}
		}

		if (OnLoadCompleted)
		{
			FAtomResourceManager::ExecuteOnLoadCompleteCallback(EAtomResourceLoadResult::Completed, OnLoadCompleted, CallbackThread);
		}
	});
	//}, TStatId(), nullptr, ENamedThreads::AnyNormalThreadNormalTask);

	return true;
}

void FAtomCueSheetResource::Unload()
{
	// Wait for loading to finalize. 
	if (IsAsyncLoading())
	{
		MakeSureIsLoaded(EAtomResourceScope::Shared); // scope ignored
	}
	
	// Unload runtime resource.
	if (IsLoaded())
	{
		CriResource.Reset();
	}
	FsBinder.Reset();
	bIsStreamed = false;

	// Destroy attached wave bank binders. 
	AttachedAwbResources.Reset();

	// Remove the task.
	if (LoadTask)
	{
		delete LoadTask;
		LoadTask = nullptr;
	}

	if (LocalData)
	{
		FMemory::Free(LocalData);
		LocalData = nullptr;
	}
}

void FAtomCueSheetResource::Teardown()
{
	// unload if loaded and release natives handles.
	Unload();

	// Unload underlying data resource 
	// - Release Only if last handle destroyed (or external call).
	// - Release only if not used by any other resource.
	bool bIsSourceUsedByAnotherResource = false;
	if (GCriWare)
	{
		if (auto ResourceManager = GCriWare->GetAtomResourceManager())
		{
			ResourceManager->IterateOverAllResources([this, &bIsSourceUsedByAnotherResource](FAtomResourceId ID, FAtomResource* Resource)
				{
					if (Resource->GetSoundResource() == Source && Resource != this)
					{
						bIsSourceUsedByAnotherResource = true;
					}
				});
		}
	}

	UObject* SourceObject = Cast<UObject>(Source);
	if (!bIsSourceUsedByAnotherResource && IsValid(SourceObject) && !SourceObject->HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		Source->RemoveAtomResource();
	}
}

int32 FAtomCueSheetResource::GetNumCues() const
{
	if (IsLoaded())
	{
		return FCriWareApi::criAtomExAcb_GetNumCues(CriResource);
	}

	return 0;
}

static void LoadCueInfo(const FCriAtomExAcbPtr& ExAcbResource, const CriAtomExCueInfo& AtomExCueInfo, FAtomCueInfo& CueInfo, float DistanceFactorToApply)
{
	if (!ExAcbResource) {
		return;
	}

	CueInfo.ID = static_cast<int32>(AtomExCueInfo.id);
	CueInfo.Name = FString(UTF8_TO_TCHAR(AtomExCueInfo.name));
	CueInfo.Type = (EAtomCueType)AtomExCueInfo.type;
	CueInfo.bHeaderVisibility = (AtomExCueInfo.header_visibility == 1);
	CueInfo.bIgnorePlayerParameters = (AtomExCueInfo.ignore_player_parameter == 1);

	// Duration (ms -> ticks)
	CueInfo.Duration = AtomExCueInfo.length >= 0 ? FTimespan(AtomExCueInfo.length * 10000UL) : FTimespan::FromSeconds(INDEFINITELY_LOOPING_DURATION);

	// Volume and pitch
	CueInfo.Volume = Atom::ConvertToDecibels(AtomExCueInfo.volume);
	//CueInfo.Pitch = AtomExCueInfo.pitch;
	
	// Loop
	CueInfo.bLooping = AtomExCueInfo.length == -1;

	// Virtualization
	switch (AtomExCueInfo.silent_mode)
	{
	default:
	case CRIATOMEX_SILENT_MODE_NORMAL: CueInfo.VirtualizationMode = EAtomVirtualizationMode::Normal; break;
	case CRIATOMEX_SILENT_MODE_STOP: CueInfo.VirtualizationMode = EAtomVirtualizationMode::StopWhenSilent; break;
	case CRIATOMEX_SILENT_MODE_VIRTUAL: CueInfo.VirtualizationMode = EAtomVirtualizationMode::PlayWhenSilent; break;
	case CRIATOMEX_SILENT_MODE_VIRTUAL_RETRIGGER: CueInfo.VirtualizationMode = EAtomVirtualizationMode::Retrigger; break;
	}

	// Priority
	// convert to float range because Atom sdk use a greater range than the per-cue range priority for scaling.
	CueInfo.Priority = AtomExCueInfo.priority;

	// GameVariable if used
	CueInfo.GameVariable = (CueInfo.Type == EAtomCueType::SwitchGameVariable)
				? FName(UTF8_TO_TCHAR(AtomExCueInfo.game_variable_info.name))
				: NAME_None;

	// UserData - will be an independnat function 
	//if (AtomExCueInfo.user_data != nullptr) {
	//	CueInfo.UserData = FString(UTF8_TO_TCHAR(AtomExCueInfo.user_data));
	//}

	// CategoryName list
	CueInfo.CategoryNames.Reset();
	for (size_t i = 0; i < CRIATOMEXCATEGORY_MAX_CATEGORIES_PER_PLAYBACK; i++) {
		CriAtomExCategoryInfo CategoryInfo;
		CriBool result = FCriWareApi::criAtomExAcf_GetCategoryInfo(AtomExCueInfo.categories[i], &CategoryInfo);
		if (result == CRI_FALSE) {
			break;
		}
		CueInfo.CategoryNames.Add(CategoryInfo.name);
	}

	// Attenuation volume
	CueInfo.bIs3D = AtomExCueInfo.pan_type == CRIATOMEX_PAN_TYPE_3D_POS || AtomExCueInfo.pan_type == CRIATOMEX_PAN_TYPE_AUTO;

	// Attenuation distances
	CueInfo.AttenuationDistance.MaxDistance = AtomExCueInfo.pos3d_info.max_distance / DistanceFactorToApply;
	CueInfo.AttenuationDistance.MinDistance = AtomExCueInfo.pos3d_info.min_distance / DistanceFactorToApply;
	CueInfo.AttenuationDistance.ConeInsideAngle = AtomExCueInfo.pos3d_info.cone_inside_angle; // in degree
	CueInfo.AttenuationDistance.ConeOutsideAngle = AtomExCueInfo.pos3d_info.cone_outside_angle; // in degree
	CueInfo.AttenuationDistance.DopplerFactor = AtomExCueInfo.pos3d_info.doppler_factor;
	CueInfo.AttenuationDistance.SourceRadius = AtomExCueInfo.pos3d_info.source_radius / DistanceFactorToApply;
	CueInfo.AttenuationDistance.InteriorDistance = AtomExCueInfo.pos3d_info.interior_distance / DistanceFactorToApply;

	// AISACControlName list
	CueInfo.AisacControlNames.Reset();
	CriSint32 NumControls = FCriWareApi::criAtomExAcb_GetNumUsableAisacControlsById(ExAcbResource, CueInfo.ID);
	for (int i = 0; i < NumControls; i++) {
		CriAtomExAisacControlInfo ControlInfo;
		CriBool result = FCriWareApi::criAtomExAcb_GetUsableAisacControlById(
			ExAcbResource, CueInfo.ID, (CriUint16)i, &ControlInfo);
		if (result != CRI_FALSE) {
			CueInfo.AisacControlNames.Add(ControlInfo.name);
		}
	}

	// ParameterPalletAssigned
	CueInfo.bIsParameterPalletAssigned = FCriWareApi::criAtomExAcb_IsParameterPalletAssignedByName(ExAcbResource, TCHAR_TO_UTF8(*CueInfo.Name));
}

bool FAtomCueSheetResource::GetCueInfoByIndex(int32 CueIndex, FAtomCueInfo& OutCueInfo) const
{
	if (IsLoaded())
	{
		CriAtomExCueInfo AtomExCueInfo = {};
		if (FCriWareApi::criAtomExAcb_GetCueInfoByIndex(CriResource, CueIndex, &AtomExCueInfo))
		{
			LoadCueInfo(CriResource, AtomExCueInfo, OutCueInfo, 0.01f/*DistanceFactor*/);
			return true;
		}
	}

	return false;
}

bool FAtomCueSheetResource::GetWaveformInfo(int32 CueID, FAtomWaveInfo& OutWaveInfo, bool bReadFromWaveBank /* = false */, bool bForceFromWaveBank /* = false */)
{
	if (IsLoaded())
	{
		CriAtomExWaveformInfo NativeWaveInfo = {};

		FScopeLock Lock(&SDKCriticalSection);

		if (FCriWareApi::criAtomExAcb_GetWaveformInfoById(CriResource, static_cast<CriAtomExCueId>(CueID), &NativeWaveInfo))
		{
			if (NativeWaveInfo.num_channels <= 0)
			{
				return false;
			}

			// get wave information from underlying awb if used and requested
			if (bReadFromWaveBank && NativeWaveInfo.streaming_flag)
			{
				uint16 Index = 0;

				if (CriAtomAwbHn AwbHandle = GetNativeAwbHandle(Index))
				{
					if (FAtomResourceHandle* ResourceHandle = AttachedAwbResources.Find(Index))
					{
						if (ResourceHandle->IsValid())
						{
							if (const FCriFsBinderPtr& FsBinderPtr = ResourceHandle->GetResource()->GetWaveBankResource()->FsBinder)
							{
								bool Result = FAtomWaveBankResource::GetWaveformInfoInternal(AwbHandle, FsBinderPtr, NativeWaveInfo.wave_id, OutWaveInfo);
								if (Result)
								{
									OutWaveInfo.bIsStreamed = true;
								}

								return Result;
							}
						}
					}
				}

				// if using a wave bank but unable to retreive wave info, die
				if (bForceFromWaveBank)
				{
					return false;
				}
			}

			// or store wave information from cue wave info
			OutWaveInfo.WaveID = NativeWaveInfo.wave_id;
			OutWaveInfo.Format = FAtomRuntime::GetFormatFromAtomExFormat(NativeWaveInfo.format);
			OutWaveInfo.SampleRate = NativeWaveInfo.sampling_rate;
			OutWaveInfo.NumChannels = NativeWaveInfo.num_channels;
			OutWaveInfo.NumFrames = NativeWaveInfo.num_samples; // note: cri 'samples' are ue4 'frames'
			OutWaveInfo.bIsStreamed = NativeWaveInfo.streaming_flag;

			return true;
		}
	}

	return false;
}

uint16 FAtomCueSheetResource::GetNumWaveBankSlots() const
{
	//const CriChar8* criAtomExAcb_GetAwbFileSlotName(CriAtomExAcbHn acb_hn, CriUint16 index);
	// 
	//CriBool criAtomExAcb_IsAttachedAwbFile(CriAtomExAcbHn acb_hn, const CriChar8* awb_name);

	/*void CRIAPI criAtomExAcb_AttachAwbFile(
		CriAtomExAcbHn acb_hn,
		CriFsBinderHn awb_binder,
		const CriChar8 * awb_path,
		const CriChar8 * awb_name,
		void* work,
		CriSint32 work_size);*/

	/*void CRIAPI criAtomExAcb_DetachAwbFile(
		CriAtomExAcbHn acb_hn,
		const CriChar8 * awb_name);*/

	if (IsLoaded())
	{
		return (int32)FCriWareApi::criAtomExAcb_GetNumAwbFileSlots(CriResource);
	}

	return 0;
}

FString FAtomCueSheetResource::GetWaveBankSlotName(uint16 Index) const
{
	return FString(UTF8_TO_TCHAR(FCriWareApi::criAtomExAcb_GetAwbFileSlotName(CriResource, (CriUint16)Index)));
}

bool FAtomCueSheetResource::AttachWaveBank(IAtomSoundResource* AtomWaveBankSource, uint16 Index)
{
	if (IsLoaded())
	{
		return AttachWaveBankInternal(AtomWaveBankSource, Index);
	}

	return false;
}

bool FAtomCueSheetResource::AttachWaveBankInternal(IAtomSoundResource* WaveBankSource, uint16 Index)
{
	if (!WaveBankSource)
	{
		return false;
	}

	const CriChar8* SlotName = FCriWareApi::criAtomExAcb_GetAwbFileSlotName(CriResource, (CriUint16)Index);

	// check if exist
	if (FCriWareApi::criAtomExAcb_IsAttachedAwbFile(CriResource, SlotName) == CRI_TRUE)
	{
		UE_LOG(LogCriWareAtom, Warning, TEXT("Attach a WaveBank to CueSheet failed: WaveBank is already attached."));
		return false;
	}

	// get awb data file info
	UAtomWaveBank* WaveBank = Cast<UAtomWaveBank>(WaveBankSource);
	check(WaveBank);

	if (GCriWare)
	{
		if (auto ResourceManager = GCriWare->GetAtomResourceManager())
		{
			FAtomLoadParams LoadParams;
			LoadParams.Source = WaveBank;
			LoadParams.Scope = EAtomResourceScope::Shared; // this resource is shared over multiple objects
			LoadParams.bAsyncLoad = false;
			LoadParams.bIsStreamed = true; // Note: in the case it is already loaded and inlined the resorce will be inlined.
			FAtomResourceHandle AwbResource = ResourceManager->RequestSoundResource(LoadParams);

			FCriFsBinderPtr& FsBinderAwb = AwbResource->GetWaveBankResource()->FsBinder;
			{
#if ATOM_TRACE_RESOURCES
				UE_LOG(LogCriWareAtomDebug, Display, TEXT("Attach WaveBank %s to Slot #%d of CueSheet %s."), *Cast<UObject>(WaveBankSource)->GetName(), Index, *Cast<UObject>(Source)->GetName());
#endif
				// attach
				if (FsBinderAwb.IsValid() && Index > 0)
				{
					// do not support inlined now (no API)
					FCriWareApi::criAtomExAcb_AttachAwbFile(CriResource, FsBinderAwb, "AWB", SlotName, nullptr, 0);
				}
				else
				{
					// for inlined or not awb-hn for index 0 can uses the handle directly
					FCriWareApi::criAtomExAcb_AttachAwbHn(CriResource, AwbResource->GetWaveBankResource()->CriResource);
				}

				// add to index map
				AttachedAwbResources.Emplace(Index, AwbResource);

				return true;
			}
		}
	}

	return false;
}

bool FAtomCueSheetResource::DetachWaveBank(uint16 Index)
{
	if (IsLoaded())
	{
		const CriChar8* SlotName = FCriWareApi::criAtomExAcb_GetAwbFileSlotName(CriResource, (CriUint16)Index);

		// check if exist
		if (FCriWareApi::criAtomExAcb_IsAttachedAwbFile(CriResource, SlotName) == CRI_FALSE)
		{
			return false;
		}

		UE_LOG(LogCriWareAtom, Warning, TEXT("Detach WaveBank to Slot #%d of CueSheet %s"), Index, *Cast<UObject>(Source)->GetName());

		// detach
		FCriWareApi::criAtomExAcb_DetachAwbFile(CriResource, SlotName);

		AttachedAwbResources.Remove(Index);

		return true;
	}

	return false;
}

CriAtomAwbHn FAtomCueSheetResource::GetNativeAwbHandle(int16 Index)
{
	if (IsLoaded())
	{
		// Get AWB handle (external wave data)
		if (Index < 0 || AttachedAwbResources.Num() == 0) // inlined with AcbData
		{
			return FCriWareApi::criAtomExAcb_GetOnMemoryAwbHandle(CriResource);
		}
		else // from an external awb data 
		{
			if (const FAtomResourceHandle* AwbHandlePtr = AttachedAwbResources.Find(Index))
			{
				if (FAtomResource* Resource = AwbHandlePtr->GetResource())
				{
					if (FAtomWaveBankResource* WaveBankResource = Resource->GetWaveBankResource())
					{
						return WaveBankResource->GetNativeHandle();
					}
				}
			}
		}
	}

	return (CriAtomAwbHn)nullptr;
}

CriAtomExAcbHn FAtomCueSheetResource::GetNativeHandle() const
{
	return CriResource.Get();
}
