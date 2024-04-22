﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomResource.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "CriWareUtils.h"
#include "Atom.h"
#include "AtomResourceManager.h"

// Forward Declarations.
class FAtomCueSheetResource;
class FAtomWaveBankResource;
class IAtomSoundResource;

/*
 * Interface for asset using an Atom native resource.
 */
struct IAtomResource
{
	virtual void OnAtomResourceLoadCompleted() {}
};

/*
 * Class to define a resource in Atom runtime.
 */
class CRIWARECORE_API FAtomResource
{
protected:

	FAtomResourceId ResourceID;

public:

	FAtomResource() : ResourceID(INDEX_NONE) {}
	virtual ~FAtomResource() {}

	virtual bool Init(FAtomResourceId InResourceID)
	{ 
		ResourceID = InResourceID;
		
		return true;
	}
	
	// Remove data resource from source asset. Works only if not shared with an other resource.
	virtual void Teardown()  
	{
		// inform all consumers to stop accessing this resouce because it will be removed.
	}

	// load resource to Atom library, load data in source asset if needed.
	virtual bool AsyncLoad(TFunction<void(EAtomResourceLoadResult)> OnLoadCompleted, ENamedThreads::Type CallbackThread, EAtomResourceScope Scope) { return false; }
	
	virtual bool IsLoaded() const { return false; }
	virtual bool IsAsyncLoading() const { return false; }
	virtual void MakeSureIsLoaded(EAtomResourceScope Scope) {}

	// Unload the resource from Atom library.
	virtual void Unload() {}

	virtual IAtomSoundResource* GetSoundResource() const { return nullptr; }
	virtual void GetDependencySoundResources(TArray<IAtomSoundResource*>& SoundResources) const {}

	// Dynamic cast methods.
	virtual FAtomCueSheetResource* GetCueSheetResource() { return nullptr; }
	virtual FAtomWaveBankResource* GetWaveBankResource() { return nullptr; }
};

/*
 * Template for Atom resource that uses a cri data stream handler.
 */
template<class TCriHandleType>
class FAtomStreamableResource
	: public FAtomResource
{
	// Ensure that this uses a subclass of FCriHandle.
	static_assert(std::is_base_of_v<FCriHandle, TCriHandleType>, "TCriHandleType must be derived from FCriHandle");

public:

	FAtomStreamableResource(IAtomSoundResource* InSource)
		: Source(InSource)
	{}

	inline bool IsUsingFileSystemBinder() const
	{
		return FsBinder.IsValid();
	}

	//~ Begin FAtomResource
	virtual bool IsLoaded() const override
	{
		return !IsAsyncLoading() && CriResource.IsValid();
	}

	virtual bool IsAsyncLoading() const override;
	virtual void MakeSureIsLoaded(EAtomResourceScope Scope) override;

	virtual IAtomSoundResource* GetSoundResource() const override
	{ 
		return Source;
	}
	//~ End FAtomResource

protected:

	void SetNativeHandle(TCriHandleType& InCriHandle)
	{
		CriResource = MoveTemp(InCriHandle);
	}

	void SetFsHandle(FCriFsBinderPtr& InFsBinder)
	{
		bIsStreamed = InFsBinder.IsValid();
		if (bIsStreamed)
		{
			FsBinder = MoveTemp(InFsBinder);
		}
	}

	// todo: a data source proxy/ptr 
	IAtomSoundResource* Source;

	class FLoadTask : public FRunnable {
	public:
		FLoadTask(TFunction<void(bool& bShutdown)> InTaskFunc)
			: TaskFunc(InTaskFunc)
		{
			Thread = FRunnableThread::Create(this, TEXT("AtomLoadTask"));
		};

		bool IsComplete() { return bIsExit; }
		void WaitUntilTaskCompletes() { if (Thread) { Thread->WaitForCompletion(); } }

		virtual bool Init() override { return true; }
		virtual uint32 Run() override { if (TaskFunc) { TaskFunc(bShutdown); } return 0; }
		virtual void Exit() override { bIsExit = true; }
		virtual void Stop() override { bShutdown = true; }

	private:
		FRunnableThread* Thread;
		bool bShutdown = false;
		bool bIsExit = false;
		TFunction<void(bool& bShutdown)> TaskFunc;
	};

	/** Task used to load data. */
	//FGraphEventRef LoadTask;
	FLoadTask* LoadTask = nullptr;

	TCriHandleType CriResource;
	FCriFsBinderPtr FsBinder;

	/** For inlined resource, When scope is Unique, keep data localy for exclusive access. */
	uint8* LocalData{ nullptr };

	bool bIsStreamed{ false };
};

template <typename T>
bool FAtomStreamableResource<T>::IsAsyncLoading() const
{
	return LoadTask && !LoadTask->IsComplete();
}

template <typename T>
void FAtomStreamableResource<T>::MakeSureIsLoaded(EAtomResourceScope Scope)
{
	AsyncLoad(nullptr, ENamedThreads::AnyThread, Scope);
	if (IsAsyncLoading())
	{
		LoadTask->WaitUntilTaskCompletes();
		//FTaskGraphInterface::Get().WaitUntilTaskCompletes(LoadTask);
	}
}
