// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Effects/AtomBusEffectCompressor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAtomSplitEQFilterType : uint8;
struct FAtomBusEffectCompressorSettings;
#ifdef CRIWARECORE_AtomBusEffectCompressor_generated_h
#error "AtomBusEffectCompressor.generated.h already included, missing '#pragma once' in AtomBusEffectCompressor.h"
#endif
#define CRIWARECORE_AtomBusEffectCompressor_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics; \
	CRIWARECORE_API static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomSplitEQFilter>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusEffectCompressorSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetSplitEQQ); \
	DECLARE_FUNCTION(execSetSplitEQFrequency); \
	DECLARE_FUNCTION(execSetSplitEQFilterType); \
	DECLARE_FUNCTION(execSetSurroundLink); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetRatio); \
	DECLARE_FUNCTION(execSetThreshold);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetSplitEQQ); \
	DECLARE_FUNCTION(execSetSplitEQFrequency); \
	DECLARE_FUNCTION(execSetSplitEQFilterType); \
	DECLARE_FUNCTION(execSetSurroundLink); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetRatio); \
	DECLARE_FUNCTION(execSetThreshold);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectCompressorStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectCompressorStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectCompressorStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectCompressorStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectCompressorStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectCompressorStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectCompressorStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectCompressorStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectCompressorStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectCompressorStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectCompressorStatics(UAtomBusEffectCompressorStatics&&); \
	NO_API UAtomBusEffectCompressorStatics(const UAtomBusEffectCompressorStatics&); \
public: \
	NO_API virtual ~UAtomBusEffectCompressorStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectCompressorStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectCompressorStatics(UAtomBusEffectCompressorStatics&&); \
	NO_API UAtomBusEffectCompressorStatics(const UAtomBusEffectCompressorStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectCompressorStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectCompressorStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectCompressorStatics) \
	NO_API virtual ~UAtomBusEffectCompressorStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_137_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectCompressorStatics>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSplitEQQ); \
	DECLARE_FUNCTION(execSetSplitEQFrequency); \
	DECLARE_FUNCTION(execSetSplitEQFilterType); \
	DECLARE_FUNCTION(execSetSurroundLink); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetRatio); \
	DECLARE_FUNCTION(execSetThreshold); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSplitEQQ); \
	DECLARE_FUNCTION(execSetSplitEQFrequency); \
	DECLARE_FUNCTION(execSetSplitEQFilterType); \
	DECLARE_FUNCTION(execSetSurroundLink); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetRatio); \
	DECLARE_FUNCTION(execSetThreshold); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectCompressorPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectCompressorPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectCompressorPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectCompressorPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectCompressorPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectCompressorPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectCompressorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectCompressorPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectCompressorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectCompressorPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectCompressorPreset(UAtomBusEffectCompressorPreset&&); \
	NO_API UAtomBusEffectCompressorPreset(const UAtomBusEffectCompressorPreset&); \
public: \
	NO_API virtual ~UAtomBusEffectCompressorPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectCompressorPreset(UAtomBusEffectCompressorPreset&&); \
	NO_API UAtomBusEffectCompressorPreset(const UAtomBusEffectCompressorPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectCompressorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectCompressorPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectCompressorPreset) \
	NO_API virtual ~UAtomBusEffectCompressorPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_227_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_231_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectCompressorPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h


#define FOREACH_ENUM_EATOMSPLITEQFILTERTYPE(op) \
	op(EAtomSplitEQFilterType::None) \
	op(EAtomSplitEQFilterType::LowPass) \
	op(EAtomSplitEQFilterType::HighPass) \
	op(EAtomSplitEQFilterType::BandPass) \
	op(EAtomSplitEQFilterType::Notch) 

enum class EAtomSplitEQFilterType : uint8;
template<> struct TIsUEnumClass<EAtomSplitEQFilterType> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSplitEQFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
