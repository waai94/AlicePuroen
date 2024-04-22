// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Effects/AtomBusEffectBandpassFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomBusEffectBandpassFilterSettings;
#ifdef CRIWARECORE_AtomBusEffectBandpassFilter_generated_h
#error "AtomBusEffectBandpassFilter.generated.h already included, missing '#pragma once' in AtomBusEffectBandpassFilter.h"
#endif
#define CRIWARECORE_AtomBusEffectBandpassFilter_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusEffectBandpassFilterSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetHighCutoff); \
	DECLARE_FUNCTION(execSetLowCutoff);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetHighCutoff); \
	DECLARE_FUNCTION(execSetLowCutoff);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectBandpassFilterStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectBandpassFilterStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectBandpassFilterStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectBandpassFilterStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectBandpassFilterStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectBandpassFilterStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectBandpassFilterStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectBandpassFilterStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectBandpassFilterStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectBandpassFilterStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectBandpassFilterStatics(UAtomBusEffectBandpassFilterStatics&&); \
	NO_API UAtomBusEffectBandpassFilterStatics(const UAtomBusEffectBandpassFilterStatics&); \
public: \
	NO_API virtual ~UAtomBusEffectBandpassFilterStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectBandpassFilterStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectBandpassFilterStatics(UAtomBusEffectBandpassFilterStatics&&); \
	NO_API UAtomBusEffectBandpassFilterStatics(const UAtomBusEffectBandpassFilterStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectBandpassFilterStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectBandpassFilterStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectBandpassFilterStatics) \
	NO_API virtual ~UAtomBusEffectBandpassFilterStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_58_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectBandpassFilterStatics>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHighCutoff); \
	DECLARE_FUNCTION(execSetLowCutoff); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHighCutoff); \
	DECLARE_FUNCTION(execSetLowCutoff); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectBandpassFilterPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectBandpassFilterPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectBandpassFilterPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectBandpassFilterPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectBandpassFilterPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectBandpassFilterPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectBandpassFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectBandpassFilterPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectBandpassFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectBandpassFilterPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectBandpassFilterPreset(UAtomBusEffectBandpassFilterPreset&&); \
	NO_API UAtomBusEffectBandpassFilterPreset(const UAtomBusEffectBandpassFilterPreset&); \
public: \
	NO_API virtual ~UAtomBusEffectBandpassFilterPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectBandpassFilterPreset(UAtomBusEffectBandpassFilterPreset&&); \
	NO_API UAtomBusEffectBandpassFilterPreset(const UAtomBusEffectBandpassFilterPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectBandpassFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectBandpassFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectBandpassFilterPreset) \
	NO_API virtual ~UAtomBusEffectBandpassFilterPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_92_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectBandpassFilterPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
