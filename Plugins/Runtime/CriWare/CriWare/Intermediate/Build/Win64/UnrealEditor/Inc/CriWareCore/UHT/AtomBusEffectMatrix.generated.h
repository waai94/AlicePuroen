// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Effects/AtomBusEffectMatrix.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAtomSpeaker : uint8;
struct FAtomBusEffectMatrixSettings;
struct FAtomChannelLevelMatrix;
#ifdef CRIWARECORE_AtomBusEffectMatrix_generated_h
#error "AtomBusEffectMatrix.generated.h already included, missing '#pragma once' in AtomBusEffectMatrix.h"
#endif
#define CRIWARECORE_AtomBusEffectMatrix_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusEffectMatrixSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetLevelMatrix);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetLevelMatrix);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectMatrixStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectMatrixStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectMatrixStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectMatrixStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectMatrixStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectMatrixStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectMatrixStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectMatrixStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectMatrixStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectMatrixStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectMatrixStatics(UAtomBusEffectMatrixStatics&&); \
	NO_API UAtomBusEffectMatrixStatics(const UAtomBusEffectMatrixStatics&); \
public: \
	NO_API virtual ~UAtomBusEffectMatrixStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectMatrixStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectMatrixStatics(UAtomBusEffectMatrixStatics&&); \
	NO_API UAtomBusEffectMatrixStatics(const UAtomBusEffectMatrixStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectMatrixStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectMatrixStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectMatrixStatics) \
	NO_API virtual ~UAtomBusEffectMatrixStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_57_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectMatrixStatics>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetChannelLevel); \
	DECLARE_FUNCTION(execSetLevelMatrix); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetChannelLevel); \
	DECLARE_FUNCTION(execSetLevelMatrix); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectMatrixPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectMatrixPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectMatrixPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectMatrixPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectMatrixPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectMatrixPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectMatrixPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectMatrixPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectMatrixPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectMatrixPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectMatrixPreset(UAtomBusEffectMatrixPreset&&); \
	NO_API UAtomBusEffectMatrixPreset(const UAtomBusEffectMatrixPreset&); \
public: \
	NO_API virtual ~UAtomBusEffectMatrixPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectMatrixPreset(UAtomBusEffectMatrixPreset&&); \
	NO_API UAtomBusEffectMatrixPreset(const UAtomBusEffectMatrixPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectMatrixPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectMatrixPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectMatrixPreset) \
	NO_API virtual ~UAtomBusEffectMatrixPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_84_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectMatrixPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
