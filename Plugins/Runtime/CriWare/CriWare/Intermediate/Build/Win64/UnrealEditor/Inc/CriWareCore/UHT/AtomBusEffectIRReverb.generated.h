// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Effects/AtomBusEffectIRReverb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomBusEffectIRReverbSettings;
#ifdef CRIWARECORE_AtomBusEffectIRReverb_generated_h
#error "AtomBusEffectIRReverb.generated.h already included, missing '#pragma once' in AtomBusEffectIRReverb.h"
#endif
#define CRIWARECORE_AtomBusEffectIRReverb_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusEffectIRReverbSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetIRIndex); \
	DECLARE_FUNCTION(execSetSurroundBackOutputGain); \
	DECLARE_FUNCTION(execSetSurroundOutputGain); \
	DECLARE_FUNCTION(execSetCenterOutputGain); \
	DECLARE_FUNCTION(execSetFrontOutputGain); \
	DECLARE_FUNCTION(execSetSurroundBackInputGain); \
	DECLARE_FUNCTION(execSetSurroundInputGain); \
	DECLARE_FUNCTION(execSetCenterInputGain); \
	DECLARE_FUNCTION(execSetFrontInputGain); \
	DECLARE_FUNCTION(execSetInputSeparationRatio); \
	DECLARE_FUNCTION(execSetReverbGain); \
	DECLARE_FUNCTION(execSetWetGain); \
	DECLARE_FUNCTION(execSetDryGain);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetIRIndex); \
	DECLARE_FUNCTION(execSetSurroundBackOutputGain); \
	DECLARE_FUNCTION(execSetSurroundOutputGain); \
	DECLARE_FUNCTION(execSetCenterOutputGain); \
	DECLARE_FUNCTION(execSetFrontOutputGain); \
	DECLARE_FUNCTION(execSetSurroundBackInputGain); \
	DECLARE_FUNCTION(execSetSurroundInputGain); \
	DECLARE_FUNCTION(execSetCenterInputGain); \
	DECLARE_FUNCTION(execSetFrontInputGain); \
	DECLARE_FUNCTION(execSetInputSeparationRatio); \
	DECLARE_FUNCTION(execSetReverbGain); \
	DECLARE_FUNCTION(execSetWetGain); \
	DECLARE_FUNCTION(execSetDryGain);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectIRReverbStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectIRReverbStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectIRReverbStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectIRReverbStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectIRReverbStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectIRReverbStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectIRReverbStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectIRReverbStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectIRReverbStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectIRReverbStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectIRReverbStatics(UAtomBusEffectIRReverbStatics&&); \
	NO_API UAtomBusEffectIRReverbStatics(const UAtomBusEffectIRReverbStatics&); \
public: \
	NO_API virtual ~UAtomBusEffectIRReverbStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectIRReverbStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectIRReverbStatics(UAtomBusEffectIRReverbStatics&&); \
	NO_API UAtomBusEffectIRReverbStatics(const UAtomBusEffectIRReverbStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectIRReverbStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectIRReverbStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectIRReverbStatics) \
	NO_API virtual ~UAtomBusEffectIRReverbStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_108_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectIRReverbStatics>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIRIndex); \
	DECLARE_FUNCTION(execSetSurroundBackOutputGain); \
	DECLARE_FUNCTION(execSetSurroundOutputGain); \
	DECLARE_FUNCTION(execSetCenterOutputGain); \
	DECLARE_FUNCTION(execSetFrontOutputGain); \
	DECLARE_FUNCTION(execSetSurroundBackInputGain); \
	DECLARE_FUNCTION(execSetSurroundInputGain); \
	DECLARE_FUNCTION(execSetCenterInputGain); \
	DECLARE_FUNCTION(execSetFrontInputGain); \
	DECLARE_FUNCTION(execSetInputSeparationRatio); \
	DECLARE_FUNCTION(execSetReverbGain); \
	DECLARE_FUNCTION(execSetWetGain); \
	DECLARE_FUNCTION(execSetDryGain); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIRIndex); \
	DECLARE_FUNCTION(execSetSurroundBackOutputGain); \
	DECLARE_FUNCTION(execSetSurroundOutputGain); \
	DECLARE_FUNCTION(execSetCenterOutputGain); \
	DECLARE_FUNCTION(execSetFrontOutputGain); \
	DECLARE_FUNCTION(execSetSurroundBackInputGain); \
	DECLARE_FUNCTION(execSetSurroundInputGain); \
	DECLARE_FUNCTION(execSetCenterInputGain); \
	DECLARE_FUNCTION(execSetFrontInputGain); \
	DECLARE_FUNCTION(execSetInputSeparationRatio); \
	DECLARE_FUNCTION(execSetReverbGain); \
	DECLARE_FUNCTION(execSetWetGain); \
	DECLARE_FUNCTION(execSetDryGain); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectIRReverbPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectIRReverbPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectIRReverbPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectIRReverbPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectIRReverbPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectIRReverbPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectIRReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectIRReverbPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectIRReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectIRReverbPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectIRReverbPreset(UAtomBusEffectIRReverbPreset&&); \
	NO_API UAtomBusEffectIRReverbPreset(const UAtomBusEffectIRReverbPreset&); \
public: \
	NO_API virtual ~UAtomBusEffectIRReverbPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectIRReverbPreset(UAtomBusEffectIRReverbPreset&&); \
	NO_API UAtomBusEffectIRReverbPreset(const UAtomBusEffectIRReverbPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectIRReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectIRReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectIRReverbPreset) \
	NO_API virtual ~UAtomBusEffectIRReverbPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_219_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectIRReverbPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
