﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomWaveBankResource.cpp
 *
 ****************************************************************************/

#include "Atom/AtomWaveBankResource.h"

#include "CriWare.h"
#include "Atom/AtomRuntimeManager.h"
#include "Atom/AtomRuntime.h"
#include "Atom/AtomWaveBank.h"

bool FAtomWaveBankResource::AsyncLoad(TFunction<void(EAtomResourceLoadResult)> OnLoadCompleted, ENamedThreads::Type CallbackThread, EAtomResourceScope Scope)
{
	// todo: replace with source proxy 
	UAtomWaveBank* WaveBank = Cast<UAtomWaveBank>(Source);
	check(WaveBank);

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
					UE_LOG(LogCriWareAtomDebug, Log, TEXT("Waited %f seconds for async awb loads."), TimeSinceStarted);
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
	auto RawData = WaveBank->GetRawData();

	// check if streaming is asked
	bool bRequestStreamed = WaveBank->IsStreaming();

	// check if we can stream from file or use inlined memory
	bool bUseInlined = !RawData->DoesExist() || RawData->IsInlined() || !bRequestStreamed;

	//bool bIsInSeparateFile = RawData->InSeperateFile();
	bool bUseIODispatcher = RawData->IsUsingIODispatcher();
	//bool bCanBeLoaded = RawData->CanLoadFromDisk();
	//UE_LOG(LogTemp, Warning, TEXT("AsyncLoad CS: sep %d IO %d Disk %d "), bIsInSeparateFile, bUseIODispatcher, bCanBeLoaded);

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
	//LoadTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, WaveBank, bUseInlined, Offset, Size, FilePath, OnLoadCompleted, CallbackThread, Scope]()
	LoadTask = new FLoadTask([this, WaveBank, bUseInlined, Offset, Size, FilePath, OnLoadCompleted, CallbackThread, Scope](bool& bShutdown)
	{
		if (WaveBank->Validate() && !WaveBank->HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
		{
			if (!bUseInlined)
			{
				static const CriChar8 SectionName[] = "AWB";

				CriFsBinderHn FsBinderAwbHn = nullptr;
				FCriWareApi::criFsBinder_Create(&FsBinderAwbHn);
				FCriFsBinderPtr FsBinderAwb = MakeCriHandle(FsBinderAwbHn);

				CriFsBinderId FsBinderAwbID = -1;
				CriError ErrorCode = FCriWareApi::criFsBinder_BindFileSection(FsBinderAwb, nullptr, TCHAR_TO_UTF8(*FilePath), Offset, Size, SectionName, nullptr, 0, &FsBinderAwbID);

				CriFsBinderStatus FsBinderStatus = CRIFSBINDER_STATUS_NONE;
				while (FsBinderStatus != CRIFSBINDER_STATUS_COMPLETE
					&& FsBinderStatus != CRIFSBINDER_STATUS_ERROR)
				{
					FCriWareApi::criFsBinder_GetStatus(FsBinderAwbID, &FsBinderStatus);
				}

				FCriAtomAwbPtr Awb;
				if (FsBinderStatus == CRIFSBINDER_STATUS_COMPLETE)
				{
					Awb = MakeCriHandle(FCriWareApi::criAtomAwb_LoadTocAsync(FsBinderAwb, SectionName, nullptr, 0));

					CriAtomAwbStatus AwbStatus = CRIATOMAWB_STATUS_LOADING;
					while (AwbStatus != CRIATOMAWB_STATUS_COMPLETE
						&& AwbStatus != CRIATOMAWB_STATUS_ERROR)
					{
						AwbStatus = FCriWareApi::criAtomAwb_GetStatus(Awb);
						FPlatformProcess::Sleep(0.001);
					}

					if (AwbStatus != CRIATOMAWB_STATUS_COMPLETE)
					{
						Awb.Reset();
					}

					/*
						criAtomAwb_GetWaveFileInfo  ->Obtain offset/size of each wave
					*/
				}

				if (!Awb.Get())
				{
					// Failed
					FsBinderAwb.Reset();

					if (OnLoadCompleted)
					{
						FAtomResourceManager::ExecuteOnLoadCompleteCallback(EAtomResourceLoadResult::Interrupted, OnLoadCompleted, CallbackThread);
					}
					return;
				}

				SetNativeHandle(Awb);
				SetFsHandle(FsBinderAwb);
			}
			else
			{
				FCriAtomAwbPtr Awb;

				// check if data is already loaded (if used by another runtime or in another scope)
				// if not, we load the data to memory.
				const uint8* ResourceData = Source->GetResourceData();
				bool bInitResource = false;
				if (!ResourceData && Source->InitAtomResource())
				{
					ResourceData = Source->GetResourceData();
					bInitResource = true;
				}

				// note: maybe not needed for WaveBank
				// test try to get an unique data for unique resource (atom cannot have concurency acces to same memory)
				if (0)//if (Scope == EAtomResourceScope::Unique)
				{
					auto RawData = WaveBank->GetRawData();

					check(!LocalData);
					RawData->GetCopy((void**)&LocalData, true);
					ResourceData = LocalData;
				}

				if (ResourceData)
				{
					Awb = MakeCriHandle(FCriWareApi::criAtomAwb_LoadFromMemory((void*)ResourceData, Size, nullptr, 0));
					/*
						criAtomAwb_GetWaveDataInfo  -> Obtain pointer/size of each wave
					*/
				}

				if (!Awb.Get())
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

				SetNativeHandle(Awb);
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

void FAtomWaveBankResource::Unload()
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

void FAtomWaveBankResource::Teardown()
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

	if (!bIsSourceUsedByAnotherResource)
	{
		Source->RemoveAtomResource();
	}
}

int32 FAtomWaveBankResource::GetNumWaves() const
{
	if (IsLoaded())
	{
		return FCriWareApi::criAtomAwb_GetNumContents(CriResource);
	}

	return 0;
}

bool FAtomWaveBankResource::GetWaveIDByIndex(int32 WaveIndex, int32& OutWaveID) const
{
	if (IsLoaded())
	{
		OutWaveID = FCriWareApi::criAtomAwb_GetIdByIndex(CriResource, WaveIndex);
		return OutWaveID != CRIATOMAWB_ILLEGAL_ID;
	}

	return false;
}

bool FAtomWaveBankResource::GetWaveformInfo(int32 WaveID, FAtomWaveInfo& OutWaveInfo) const
{
	if (IsLoaded())
	{
		return GetWaveformInfoInternal(CriResource, FsBinder, WaveID, OutWaveInfo);
	}

	return false;
}

bool FAtomWaveBankResource::GetWaveformInfoInternal(CriAtomAwbHn AwbHandle, CriFsBinderHn FsBinderHandle, int32 WaveID, FAtomWaveInfo& OutWaveInfo)
{
	CriAtomExFormatInfoTag NativeWaveInfo = {};

	CriAtomAwbType Type = FCriWareApi::criAtomAwb_GetType(AwbHandle);

	const CriUint32 HeaderReadSize = 2048;
	CriUint32 Size = 0;
	if (Type == CRIATOMAWB_TYPE_TOC)
	{
		CriSint64 Offset = 0;
		FCriWareApi::criAtomAwb_GetWaveFileInfo(AwbHandle, WaveID, &Offset, &Size);
		if (Size >= HeaderReadSize)
		{
			static const CriChar8 SectionName[] = "AWB";

			CriFsStdioHn FsHn = FCriWareApi::criFsStdio_OpenFile(FsBinderHandle, SectionName, "r");
			if (FsHn)
			{
				if (Offset > 0)
				{
					FCriWareApi::criFsStdio_SeekFile(FsHn, Offset, CRIFSSTDIO_SEEK_SET);
				}

				uint8 WavePtr[HeaderReadSize];
				Size = FCriWareApi::criFsStdio_ReadFile(FsHn, HeaderReadSize, &WavePtr, HeaderReadSize);
				FCriWareApi::criFsStdio_CloseFile(FsHn);
				FsHn = nullptr;

				if (Size >= HeaderReadSize)
				{
					CriBool Result = FCriWareApi::criAtomEx_AnalyzeAudioHeader(&WavePtr, HeaderReadSize, &NativeWaveInfo);
				}
			}
		}
	}
	else if (Type == CRIATOMAWB_TYPE_ONMEMORY)
	{
		void* WavePtr = nullptr;
		FCriWareApi::criAtomAwb_GetWaveDataInfo(AwbHandle, WaveID, &WavePtr, &Size);
		if (Size >= HeaderReadSize && WavePtr != nullptr)
		{
			//	const void* buffer, CriSint32 buffer_size, CriAtomExFormatInfo * info)
			CriBool Result = FCriWareApi::criAtomEx_AnalyzeAudioHeader(WavePtr, HeaderReadSize, &NativeWaveInfo);
		}
	}

	if (NativeWaveInfo.num_channels > 0)
	{
		// store wave information
		OutWaveInfo.WaveID = WaveID;
		OutWaveInfo.Format = FAtomRuntime::GetFormatFromAtomExFormat(NativeWaveInfo.format);
		OutWaveInfo.SampleRate = NativeWaveInfo.sampling_rate;
		OutWaveInfo.NumChannels = NativeWaveInfo.num_channels;
		OutWaveInfo.NumFrames = NativeWaveInfo.num_samples; // note: cri 'samples' are ue4 'frames'
		OutWaveInfo.bIsStreamed = true; // Type == CRIATOMAWB_TYPE_TOC;

		return true;
	}

	return false;
}

CriAtomAwbHn FAtomWaveBankResource::GetNativeHandle() const
{
	return CriResource.Get();
}
