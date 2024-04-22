﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : CriWareUtils.h
 *
 ****************************************************************************/

#pragma once

#include "CriWareApi.h"

#include "Templates/UniquePtr.h"

// Forward Declarations
template <typename T> class TCriHandle;
template <typename T, typename Parameter> class TCriId;

/**
 * Base class for all CriHandle
 */
class FCriHandle
{
public:
	
	FCriHandle(FCriHandle&&) = default;
	FCriHandle& operator= (FCriHandle&&) = default;
	virtual ~FCriHandle() = default;

protected:

	FCriHandle() {};
};

/**
 * Class for CriHandle smart deletion
 */
template <typename T>
struct TCriHandleDeleter
{
	TCriHandleDeleter() : Self(nullptr) {}
	TCriHandleDeleter(TCriHandle<T>* InSelf) : Self(InSelf) {}

	void operator()(T* Handle) const
	{
		if (Self && !Self->bIsExternal.IsValid())
		{
			Self->Destroy(Handle);
		}

		FScopeLock Lock(&TCriHandle<T>::CS);
		TCriHandle<T>::Handles.Remove(Handle);
	}

	TCriHandle<T>* Self;
};

/**
 * Class for CriWare handle specializations
 * Also, it keeps a global tracking of all CriWare handle.
 */
template <typename T>
class TCriHandle
	: public TUniquePtr<T, TCriHandleDeleter<T>>
	, public FCriHandle
{
	friend struct TCriHandleDeleter<T>;

public:
	TCriHandle()
		//: TUniquePtr<T, TCriHandleDeleter<T>>(reinterpret_cast<T*>(nullptr), TCriHandleDeleter<T>(this))
		: bIsExternal(nullptr)
	{}

	template <
		typename U,
		typename = decltype(ImplicitConv<T*>((U*)nullptr))
	>
	TCriHandle(U* InHandle, TSharedPtr<bool> bInIsExternal = nullptr)
		: TUniquePtr<T, TCriHandleDeleter<T>>(InHandle, TCriHandleDeleter<T>(this))
		, bIsExternal(bInIsExternal)
	{
		FScopeLock Lock(&TCriHandle<T>::CS);
		TCriHandle<T>::Handles.Add(InHandle);
	}

	TCriHandle(TYPE_OF_NULLPTR)
		: TUniquePtr<T, TCriHandleDeleter<T>>(nullptr)
		, bIsExternal(nullptr)
	{
	}

	TCriHandle(T&& InHandle, TSharedPtr<bool> bInIsExternal = nullptr)
		: TUniquePtr<T, TCriHandleDeleter<T>>(InHandle, TCriHandleDeleter<T>(this))
		, bIsExternal(bInIsExternal)
	{
	}

	TCriHandle(TCriHandle&& Other)
		: TUniquePtr<T, TCriHandleDeleter<T>>(MoveTemp(Other))
		, bIsExternal(Other.bIsExternal)
	{
		TCriHandleDeleter<T>& Deleter = this->GetDeleter();
		Deleter.Self = this;
		Other.bIsExternal.Reset();
	}

	TCriHandle& operator=(TCriHandle&& Other)
	{
		bool bWasValid = Other.IsValid();
		TUniquePtr<T, TCriHandleDeleter<T>>::operator=(MoveTemp(Other));
		bIsExternal = Other.bIsExternal;
		TCriHandleDeleter<T>& Deleter = this->GetDeleter();
		Deleter.Self = bWasValid ? this : nullptr; // Self can be nullptr
		Other.bIsExternal.Reset();

		return *this;
	}

	operator T*() const { return TUniquePtr<T, TCriHandleDeleter<T>>::Get(); }

	[[nodiscard]] TSharedPtr<bool> GetSharedExternalObject() const { return bIsExternal; }
	[[nodiscard]] bool IsExternal() const { return bIsExternal.IsValid(); }
	[[nodiscard]] bool IsValid() const { return TUniquePtr<T, TCriHandleDeleter<T>>::IsValid() && (bIsExternal.IsValid() ? *bIsExternal : true); }

protected:
	/*TCriHandle<T>& operator = (const TCriHandle<T>& Other) { }*/

	/** Specialize this to make special handle destructions */
	void Destroy(T* Handle);

private:
	TSharedPtr<bool> bIsExternal = nullptr;

	// Restrics access to Release() to avoid handle in the wild.
	// using TUniquePtr<T, TCriHandleDeleter<T>>::Release;

	/** A global set that hold all handles. (debug) */
	static TSet<T*> Handles;
	static FCriticalSection CS;

public:
	FORCEINLINE static int32 GetCount() { FScopeLock Lock(&CS); return Handles.Num(); }
	FORCEINLINE static TSet<T*>& GetHandles() { return Handles; }
};

template <typename T>
TSet<T*> TCriHandle<T>::Handles;

template <typename T>
FCriticalSection TCriHandle<T>::CS;

/** Creates a smart CriHandle from Cri native handle. */
template <typename T>
FORCEINLINE TCriHandle<T> MakeCriHandle(T* InHandle) { return TCriHandle<T>(InHandle, nullptr); }
template <typename T>
FORCEINLINE TCriHandle<T> MakeExternalCriHandle(T* InHandle, const TSharedPtr<bool>& ExternalHolderPtr) { return TCriHandle<T>(InHandle, ExternalHolderPtr); }

// redefine to force a strong type for templates
struct CriAtomExInputPortTag;
typedef CriAtomExInputPortTag* CriAtomExInputPortHn2;

// aliases
using FCriAtomVoicePoolPtr = TCriHandle<CriAtomExVoicePoolTag>;
using FCriAtomInputPortPtr = TCriHandle<CriAtomExInputPortTag>;
using FCriAtomPlayerPtr = TCriHandle<CriAtomPlayerTag>;
using FCriAtomExPlayerPtr = TCriHandle<CriAtomExPlayerTag>;
using FCriAtomExSourcePtr = TCriHandle<CriAtomEx3dSourceObjTag>;
using FCriAtomExSourceListPtr = TCriHandle<CriAtomEx3dSourceListObjTag>;
using FCriAtomExListenerPtr = TCriHandle<CriAtomEx3dListenerObjTag>;
using FCriAtomAwbPtr = TCriHandle<CriAtomAwbTag>;
using FCriAtomExAcbPtr = TCriHandle<CriAtomExAcbTag>;
using FCriFsBinderPtr = TCriHandle<CriFsBinderHnObjTag>;

// specializations
template<> void CRIWARECORE_API FCriAtomVoicePoolPtr::Destroy(CriAtomExVoicePoolHn Handle);
template<> void CRIWARECORE_API FCriAtomInputPortPtr::Destroy(CriAtomExInputPortHn2 Handle);
template<> void CRIWARECORE_API FCriAtomPlayerPtr::Destroy(CriAtomPlayerHn Handle);
template<> void CRIWARECORE_API FCriAtomExPlayerPtr::Destroy(CriAtomExPlayerHn Handle);
template<> void CRIWARECORE_API FCriAtomExSourcePtr::Destroy(CriAtomEx3dSourceHn Handle);
template<> void CRIWARECORE_API FCriAtomExSourceListPtr::Destroy(CriAtomEx3dSourceListHn Handle);
template<> void CRIWARECORE_API FCriAtomExListenerPtr::Destroy(CriAtomEx3dListenerHn Handle);
template<> void CRIWARECORE_API FCriAtomAwbPtr::Destroy(CriAtomAwbHn Handle);
template<> void CRIWARECORE_API FCriAtomExAcbPtr::Destroy(CriAtomExAcbHn Handle);
template<> void CRIWARECORE_API FCriFsBinderPtr::Destroy(CriFsBinderHn Handle);

/* CriId
 *****************************************************************************/

/**
 * Class for CriId smart deletion
 */
template <typename T, typename Parameter>
struct TCriIdDeleter
{
	using PtrType = T*;

	TCriIdDeleter() : Self(nullptr) {}
	TCriIdDeleter(TCriId<T, Parameter>* InSelf) : Self(InSelf) {}

	void operator()(PtrType IdPtr) const
	{
		if (Self && IdPtr > static_cast<PtrType>(0))
		{
			auto Id = static_cast<T>(reinterpret_cast<uintptr_t>(IdPtr) - 1);

			if (!Self->bIsExternal.IsValid())
			{
				Self->Destroy(Id);
			}

			FScopeLock Lock(&TCriId<T, Parameter>::CS);
			TCriId<T, Parameter>::Ids.Remove(Id);
		}
	}

	TCriId<T, Parameter>* Self;
};

/**
 * Class for CriWare Ids used as Handle
 */
template <typename T, typename Parameter>
class TCriId
	: public TUniquePtr<T, TCriIdDeleter<T, Parameter>>
	, public FCriHandle
{
	friend struct TCriIdDeleter<T, Parameter>;

	using PtrType = T*;

public:
	TCriId()
		: TUniquePtr<T, TCriIdDeleter<T, Parameter>>(reinterpret_cast<PtrType>(static_cast<void*>(nullptr)), TCriIdDeleter<T, Parameter>(this))
		, bIsExternal(nullptr)
	{}

	TCriId(T InId, TSharedPtr<bool> bInIsExternal = nullptr)
		: TUniquePtr<T, TCriIdDeleter<T, Parameter>>(reinterpret_cast<PtrType>(static_cast<uintptr_t>(InId + 1)), TCriIdDeleter<T, Parameter>(this))
		, bIsExternal(bInIsExternal)
	{
		FScopeLock Lock(&CS);
		Ids.Add(InId);
	}

	operator T() const { return GetId(); }

	[[nodiscard]] TSharedPtr<bool> GetSharedExternalObject() const { return bIsExternal; }
	[[nodiscard]] bool IsExternal() const { return bIsExternal.IsValid(); }
	[[nodiscard]] bool IsValid() const { return TUniquePtr<T, TCriIdDeleter<T, Parameter>>::IsValid() && (bIsExternal.IsValid() ? *bIsExternal : true); }

protected:
	/*TCriId<T>& operator = (const TCriHandle<T>& Other) {}*/

	/** Specialize this to make special handle destructions */
	void Destroy(T InId);

private:
	TSharedPtr<bool> bIsExternal = nullptr;

	// Restrics access to Release() to avoid id in the wild.
	using TUniquePtr<T, TCriIdDeleter<T, Parameter>>::Release;

	/** A global set that hold all Ids. (debug) */
	static TSet<T> Ids;
	static FCriticalSection CS;

public:
	FORCEINLINE static int32 GetCount() { FScopeLock Lock(&CS); return Ids.Num(); }
	FORCEINLINE static TSet<T>& GetIds() { return Ids; }

public:
	FORCEINLINE T GetId() const { return static_cast<T>(reinterpret_cast<uintptr_t>(TUniquePtr<T, TCriIdDeleter<T, Parameter>>::Get()) - 1); }
};

template <typename T, typename Parameter>
TSet<T> TCriId<T, Parameter>::Ids;

template <typename T, typename Parameter>
FCriticalSection TCriId<T, Parameter>::CS;

/** 
 * Creates a smart and strongly typed CriId from Cri native Id. 
 * Since native id are all same type (integer), you need to set the strong type you want to return in template parameter list. 
 */
template <typename CriIdType, typename T>
FORCEINLINE CriIdType MakeCriId(T InId) { return CriIdType(InId); }
template <typename CriIdType, typename T>
FORCEINLINE CriIdType MakeExternalCriId(T InId, const TSharedPtr<bool>& ExternalHolderPtr) { return CriIdType(InId, ExternalHolderPtr); }

// aliases
using FCriAtomDbasId = TCriId<CriAtomExDbasId, struct FCriAtomExDbasId_Tag>;
using FCriAtomExAsrRackId = TCriId<CriAtomExAsrRackId, struct FCriAtomExAsrRackId_Tag>;

// specializations
template<> void CRIWARECORE_API FCriAtomDbasId::Destroy(CriAtomExDbasId Id);
template<> void CRIWARECORE_API FCriAtomExAsrRackId::Destroy(CriAtomExAsrRackId Id);

/*
 * Atom Vector utilities
 ****************************************************************************/

FORCEINLINE CriAtomExVector ToCriAtomExVector(const FVector3d& Vector)
{
	CriAtomExVector ExVector;
	ExVector.x = Vector.X;
	ExVector.y = Vector.Y;
	ExVector.z = Vector.Z;
	return MoveTemp(ExVector);
}

FORCEINLINE CriAtomExVector ToCriAtomExVector(const FVector4d& Vector)
{
	CriAtomExVector ExVector;
	ExVector.x = Vector.X;
	ExVector.y = Vector.Y;
	ExVector.z = Vector.Z;
	return MoveTemp(ExVector);
}

FORCEINLINE CriAtomExVector CriAtomExVectorZero()
{
	CriAtomExVector ExVector = { 0.0f, 0.0f, 0.0f };
	return MoveTemp(ExVector);
}

FORCEINLINE const CriAtomExVector* CastToCriAtomExVector(const FVector3f& Vector)
{
	return reinterpret_cast<const CriAtomExVector*>(&Vector.X);
}

FORCEINLINE const CriAtomExVector* CastToCriAtomExVector(const FVector4f& Vector)
{
	return reinterpret_cast<const CriAtomExVector*>(&Vector.X);
}
