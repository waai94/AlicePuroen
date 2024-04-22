// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Effects/AtomBusEffectFlanger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomBusEffectFlangerSettings;
#ifdef CRIWARECORE_AtomBusEffectFlanger_generated_h
#error "AtomBusEffectFlanger.generated.h already included, missing '#pragma once' in AtomBusEffectFlanger.h"
#endif
#define CRIWARECORE_AtomBusEffectFlanger_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusEffectFlangerSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetWetMix); \
	DECLARE_FUNCTION(execSetDryMix); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetDepth); \
	DECLARE_FUNCTION(execSetDelayTime);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetWetMix); \
	DECLARE_FUNCTION(execSetDryMix); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetDepth); \
	DECLARE_FUNCTION(execSetDelayTime);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectFlangerStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectFlangerStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectFlangerStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectFlangerStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectFlangerStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectFlangerStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectFlangerStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectFlangerStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectFlangerStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectFlangerStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectFlangerStatics(UAtomBusEffectFlangerStatics&&); \
	NO_API UAtomBusEffectFlangerStatics(const UAtomBusEffectFlangerStatics&); \
public: \
	NO_API virtual ~UAtomBusEffectFlangerStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectFlangerStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectFlangerStatics(UAtomBusEffectFlangerStatics&&); \
	NO_API UAtomBusEffectFlangerStatics(const UAtomBusEffectFlangerStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectFlangerStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectFlangerStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectFlangerStatics) \
	NO_API virtual ~UAtomBusEffectFlangerStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_74_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectFlangerStatics>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWetMix); \
	DECLARE_FUNCTION(execSetDryMix); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetDepth); \
	DECLARE_FUNCTION(execSetDelayTime); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWetMix); \
	DECLARE_FUNCTION(execSetDryMix); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetDepth); \
	DECLARE_FUNCTION(execSetDelayTime); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectFlangerPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectFlangerPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectFlangerPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectFlangerPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectFlangerPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectFlangerPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectFlangerPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectFlangerPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectFlangerPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectFlangerPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectFlangerPreset(UAtomBusEffectFlangerPreset&&); \
	NO_API UAtomBusEffectFlangerPreset(const UAtomBusEffectFlangerPreset&); \
public: \
	NO_API virtual ~UAtomBusEffectFlangerPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectFlangerPreset(UAtomBusEffectFlangerPreset&&); \
	NO_API UAtomBusEffectFlangerPreset(const UAtomBusEffectFlangerPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectFlangerPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectFlangerPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectFlangerPreset) \
	NO_API virtual ~UAtomBusEffectFlangerPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_136_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectFlangerPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
