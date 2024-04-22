// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Effects/AtomBusEffectSurrounderWithEQ.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAtomBandEQFilterType : uint8;
enum class EAtomSurrounderMode : uint8;
struct FAtomBusEffectSurrounderWithEQSettings;
#ifdef CRIWARECORE_AtomBusEffectSurrounderWithEQ_generated_h
#error "AtomBusEffectSurrounderWithEQ.generated.h already included, missing '#pragma once' in AtomBusEffectSurrounderWithEQ.h"
#endif
#define CRIWARECORE_AtomBusEffectSurrounderWithEQ_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusEffectSurrounderWithEQSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetMaximumDelayTime); \
	DECLARE_FUNCTION(execSetBandGain); \
	DECLARE_FUNCTION(execSetBandQ); \
	DECLARE_FUNCTION(execSetBandFrequency); \
	DECLARE_FUNCTION(execSetBandFilterType); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetDelayTime); \
	DECLARE_FUNCTION(execSetMode);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetMaximumDelayTime); \
	DECLARE_FUNCTION(execSetBandGain); \
	DECLARE_FUNCTION(execSetBandQ); \
	DECLARE_FUNCTION(execSetBandFrequency); \
	DECLARE_FUNCTION(execSetBandFilterType); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetDelayTime); \
	DECLARE_FUNCTION(execSetMode);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectSurrounderWithEQStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectSurrounderWithEQStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectSurrounderWithEQStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectSurrounderWithEQStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectSurrounderWithEQStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectSurrounderWithEQStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectSurrounderWithEQStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectSurrounderWithEQStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectSurrounderWithEQStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectSurrounderWithEQStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectSurrounderWithEQStatics(UAtomBusEffectSurrounderWithEQStatics&&); \
	NO_API UAtomBusEffectSurrounderWithEQStatics(const UAtomBusEffectSurrounderWithEQStatics&); \
public: \
	NO_API virtual ~UAtomBusEffectSurrounderWithEQStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectSurrounderWithEQStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectSurrounderWithEQStatics(UAtomBusEffectSurrounderWithEQStatics&&); \
	NO_API UAtomBusEffectSurrounderWithEQStatics(const UAtomBusEffectSurrounderWithEQStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectSurrounderWithEQStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectSurrounderWithEQStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectSurrounderWithEQStatics) \
	NO_API virtual ~UAtomBusEffectSurrounderWithEQStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_95_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectSurrounderWithEQStatics>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxDelayTime); \
	DECLARE_FUNCTION(execSetBandGain); \
	DECLARE_FUNCTION(execSetBandQ); \
	DECLARE_FUNCTION(execSetBandFrequency); \
	DECLARE_FUNCTION(execSetBandFilterType); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetDelayTime); \
	DECLARE_FUNCTION(execSetMode); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxDelayTime); \
	DECLARE_FUNCTION(execSetBandGain); \
	DECLARE_FUNCTION(execSetBandQ); \
	DECLARE_FUNCTION(execSetBandFrequency); \
	DECLARE_FUNCTION(execSetBandFilterType); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetDelayTime); \
	DECLARE_FUNCTION(execSetMode); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectSurrounderWithEQPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectSurrounderWithEQPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectSurrounderWithEQPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectSurrounderWithEQPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectSurrounderWithEQPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectSurrounderWithEQPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectSurrounderWithEQPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectSurrounderWithEQPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectSurrounderWithEQPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectSurrounderWithEQPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectSurrounderWithEQPreset(UAtomBusEffectSurrounderWithEQPreset&&); \
	NO_API UAtomBusEffectSurrounderWithEQPreset(const UAtomBusEffectSurrounderWithEQPreset&); \
public: \
	NO_API virtual ~UAtomBusEffectSurrounderWithEQPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectSurrounderWithEQPreset(UAtomBusEffectSurrounderWithEQPreset&&); \
	NO_API UAtomBusEffectSurrounderWithEQPreset(const UAtomBusEffectSurrounderWithEQPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectSurrounderWithEQPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectSurrounderWithEQPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectSurrounderWithEQPreset) \
	NO_API virtual ~UAtomBusEffectSurrounderWithEQPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_173_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_177_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectSurrounderWithEQPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h


#define FOREACH_ENUM_EATOMSURROUNDERMODE(op) \
	op(EAtomSurrounderMode::Straight) \
	op(EAtomSurrounderMode::Cross) \
	op(EAtomSurrounderMode::Matrix) 

enum class EAtomSurrounderMode : uint8;
template<> struct TIsUEnumClass<EAtomSurrounderMode> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSurrounderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
