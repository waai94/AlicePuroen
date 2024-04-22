// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomBus;
class UAtomBusEffectPreset;
class UAtomCueSheet;
class UAtomRack;
class UAtomRackWithParentBase;
class UAtomSoundBase;
class UAtomWaveBank;
class UObject;
#ifdef CRIWARECORE_AtomBlueprintLibrary_generated_h
#error "AtomBlueprintLibrary.generated.h already included, missing '#pragma once' in AtomBlueprintLibrary.h"
#endif
#define CRIWARECORE_AtomBlueprintLibrary_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_28_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundLoadComplete_Parms \
{ \
	const UAtomSoundBase* LoadedSound; \
	bool WasCancelled; \
}; \
static inline void FOnAtomSoundLoadComplete_DelegateWrapper(const FScriptDelegate& OnAtomSoundLoadComplete, const UAtomSoundBase* LoadedSound, bool WasCancelled) \
{ \
	_Script_CriWareCore_eventOnAtomSoundLoadComplete_Parms Parms; \
	Parms.LoadedSound=LoadedSound; \
	Parms.WasCancelled=WasCancelled ? true : false; \
	OnAtomSoundLoadComplete.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_29_DELEGATE \
struct _Script_CriWareCore_eventOnAtomWaveBankLoadComplete_Parms \
{ \
	const UAtomWaveBank* LoadedWaveBank; \
	bool WasCancelled; \
}; \
static inline void FOnAtomWaveBankLoadComplete_DelegateWrapper(const FScriptDelegate& OnAtomWaveBankLoadComplete, const UAtomWaveBank* LoadedWaveBank, bool WasCancelled) \
{ \
	_Script_CriWareCore_eventOnAtomWaveBankLoadComplete_Parms Parms; \
	Parms.LoadedWaveBank=LoadedWaveBank; \
	Parms.WasCancelled=WasCancelled ? true : false; \
	OnAtomWaveBankLoadComplete.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_30_DELEGATE \
struct _Script_CriWareCore_eventOnAtomCueSheetLoadComplete_Parms \
{ \
	const UAtomCueSheet* LoadedCueSheet; \
	bool WasCancelled; \
}; \
static inline void FOnAtomCueSheetLoadComplete_DelegateWrapper(const FScriptDelegate& OnAtomCueSheetLoadComplete, const UAtomCueSheet* LoadedCueSheet, bool WasCancelled) \
{ \
	_Script_CriWareCore_eventOnAtomCueSheetLoadComplete_Parms Parms; \
	Parms.LoadedCueSheet=LoadedCueSheet; \
	Parms.WasCancelled=WasCancelled ? true : false; \
	OnAtomCueSheetLoadComplete.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_33_DELEGATE \
struct _Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms \
{ \
	FName CategoryName; \
	bool IsPaused; \
	bool IsMuted; \
	bool IsSoloed; \
	float Volume; \
	int32 PlayCount; \
}; \
static inline void FOnAtomGetCategoryStatus_DelegateWrapper(const FScriptDelegate& OnAtomGetCategoryStatus, const FName CategoryName, bool IsPaused, bool IsMuted, bool IsSoloed, const float Volume, const int32 PlayCount) \
{ \
	_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms Parms; \
	Parms.CategoryName=CategoryName; \
	Parms.IsPaused=IsPaused ? true : false; \
	Parms.IsMuted=IsMuted ? true : false; \
	Parms.IsSoloed=IsSoloed ? true : false; \
	Parms.Volume=Volume; \
	Parms.PlayCount=PlayCount; \
	OnAtomGetCategoryStatus.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_36_DELEGATE \
struct _Script_CriWareCore_eventOnAtomGetGameVariableValue_Parms \
{ \
	FName Name; \
	float Value; \
}; \
static inline void FOnAtomGetGameVariableValue_DelegateWrapper(const FScriptDelegate& OnAtomGetGameVariableValue, const FName Name, const float Value) \
{ \
	_Script_CriWareCore_eventOnAtomGetGameVariableValue_Parms Parms; \
	Parms.Name=Name; \
	Parms.Value=Value; \
	OnAtomGetGameVariableValue.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMapOutputPortToRack); \
	DECLARE_FUNCTION(execGetGameVariableValueByName); \
	DECLARE_FUNCTION(execSetGameVariableValueByName); \
	DECLARE_FUNCTION(execGetCategoryStatusByName); \
	DECLARE_FUNCTION(execSetCategoryVolumeByName); \
	DECLARE_FUNCTION(execSoloCategoryByName); \
	DECLARE_FUNCTION(execMuteCategoryByName); \
	DECLARE_FUNCTION(execPauseCategoryByName); \
	DECLARE_FUNCTION(execStopCategoryByName); \
	DECLARE_FUNCTION(execIsBinauralizerEnabled); \
	DECLARE_FUNCTION(execEnableBinauralizer); \
	DECLARE_FUNCTION(execClearRackEffectPresets); \
	DECLARE_FUNCTION(execRemoveRackEffectPreset); \
	DECLARE_FUNCTION(execClearBusEffectPresets); \
	DECLARE_FUNCTION(execRemoveBusEffectPreset); \
	DECLARE_FUNCTION(execSetBusEffectPreset); \
	DECLARE_FUNCTION(execClearMasterEffectPresets); \
	DECLARE_FUNCTION(execRemoveMasterEffectPreset); \
	DECLARE_FUNCTION(execSetMasterEffectPreset); \
	DECLARE_FUNCTION(execPrimeWaveBankForPlayback); \
	DECLARE_FUNCTION(execPrimeCueSheetForPlayback); \
	DECLARE_FUNCTION(execPrimeSoundForPlayback);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMapOutputPortToRack); \
	DECLARE_FUNCTION(execGetGameVariableValueByName); \
	DECLARE_FUNCTION(execSetGameVariableValueByName); \
	DECLARE_FUNCTION(execGetCategoryStatusByName); \
	DECLARE_FUNCTION(execSetCategoryVolumeByName); \
	DECLARE_FUNCTION(execSoloCategoryByName); \
	DECLARE_FUNCTION(execMuteCategoryByName); \
	DECLARE_FUNCTION(execPauseCategoryByName); \
	DECLARE_FUNCTION(execStopCategoryByName); \
	DECLARE_FUNCTION(execIsBinauralizerEnabled); \
	DECLARE_FUNCTION(execEnableBinauralizer); \
	DECLARE_FUNCTION(execClearRackEffectPresets); \
	DECLARE_FUNCTION(execRemoveRackEffectPreset); \
	DECLARE_FUNCTION(execClearBusEffectPresets); \
	DECLARE_FUNCTION(execRemoveBusEffectPreset); \
	DECLARE_FUNCTION(execSetBusEffectPreset); \
	DECLARE_FUNCTION(execClearMasterEffectPresets); \
	DECLARE_FUNCTION(execRemoveMasterEffectPreset); \
	DECLARE_FUNCTION(execSetMasterEffectPreset); \
	DECLARE_FUNCTION(execPrimeWaveBankForPlayback); \
	DECLARE_FUNCTION(execPrimeCueSheetForPlayback); \
	DECLARE_FUNCTION(execPrimeSoundForPlayback);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomRuntimeBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAtomRuntimeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRuntimeBlueprintLibrary)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUAtomRuntimeBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAtomRuntimeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRuntimeBlueprintLibrary)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomRuntimeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRuntimeBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRuntimeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRuntimeBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRuntimeBlueprintLibrary(UAtomRuntimeBlueprintLibrary&&); \
	NO_API UAtomRuntimeBlueprintLibrary(const UAtomRuntimeBlueprintLibrary&); \
public: \
	NO_API virtual ~UAtomRuntimeBlueprintLibrary();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomRuntimeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRuntimeBlueprintLibrary(UAtomRuntimeBlueprintLibrary&&); \
	NO_API UAtomRuntimeBlueprintLibrary(const UAtomRuntimeBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRuntimeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRuntimeBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRuntimeBlueprintLibrary) \
	NO_API virtual ~UAtomRuntimeBlueprintLibrary();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_38_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomRuntimeBlueprintLibrary>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLinearFrequencyClamped); \
	DECLARE_FUNCTION(execGetLogFrequencyClamped); \
	DECLARE_FUNCTION(execConvertDecibelsToLinearSlowerFromFloor); \
	DECLARE_FUNCTION(execConvertLinearToDecibelsSlowerFromFloor); \
	DECLARE_FUNCTION(execConvertDecibelsToLinearSlower); \
	DECLARE_FUNCTION(execConvertLinearToDecibelsSlower); \
	DECLARE_FUNCTION(execConvertDecibelsToLinear); \
	DECLARE_FUNCTION(execConvertLinearToDecibels);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLinearFrequencyClamped); \
	DECLARE_FUNCTION(execGetLogFrequencyClamped); \
	DECLARE_FUNCTION(execConvertDecibelsToLinearSlowerFromFloor); \
	DECLARE_FUNCTION(execConvertLinearToDecibelsSlowerFromFloor); \
	DECLARE_FUNCTION(execConvertDecibelsToLinearSlower); \
	DECLARE_FUNCTION(execConvertLinearToDecibelsSlower); \
	DECLARE_FUNCTION(execConvertDecibelsToLinear); \
	DECLARE_FUNCTION(execConvertLinearToDecibels);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomUtilitiesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAtomUtilitiesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomUtilitiesBlueprintLibrary)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUAtomUtilitiesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAtomUtilitiesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomUtilitiesBlueprintLibrary)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomUtilitiesBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomUtilitiesBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomUtilitiesBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomUtilitiesBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomUtilitiesBlueprintLibrary(UAtomUtilitiesBlueprintLibrary&&); \
	NO_API UAtomUtilitiesBlueprintLibrary(const UAtomUtilitiesBlueprintLibrary&); \
public: \
	NO_API virtual ~UAtomUtilitiesBlueprintLibrary();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomUtilitiesBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomUtilitiesBlueprintLibrary(UAtomUtilitiesBlueprintLibrary&&); \
	NO_API UAtomUtilitiesBlueprintLibrary(const UAtomUtilitiesBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomUtilitiesBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomUtilitiesBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomUtilitiesBlueprintLibrary) \
	NO_API virtual ~UAtomUtilitiesBlueprintLibrary();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_150_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomUtilitiesBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
