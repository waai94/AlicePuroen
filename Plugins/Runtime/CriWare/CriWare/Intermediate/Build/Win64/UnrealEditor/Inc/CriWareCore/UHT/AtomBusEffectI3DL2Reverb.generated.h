// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Effects/AtomBusEffectI3DL2Reverb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomBusEffectI3DL2ReverbSettings;
#ifdef CRIWARECORE_AtomBusEffectI3DL2Reverb_generated_h
#error "AtomBusEffectI3DL2Reverb.generated.h already included, missing '#pragma once' in AtomBusEffectI3DL2Reverb.h"
#endif
#define CRIWARECORE_AtomBusEffectI3DL2Reverb_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusEffectI3DL2ReverbSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetCenterOutput); \
	DECLARE_FUNCTION(execSetRearOutput); \
	DECLARE_FUNCTION(execSetFrontOutput); \
	DECLARE_FUNCTION(execSetCenterInput); \
	DECLARE_FUNCTION(execSetRearInput); \
	DECLARE_FUNCTION(execSetFrontInput); \
	DECLARE_FUNCTION(execSetHFReference); \
	DECLARE_FUNCTION(execSetDensity); \
	DECLARE_FUNCTION(execSetDiffusion); \
	DECLARE_FUNCTION(execSetReverbDelay); \
	DECLARE_FUNCTION(execSetReverb); \
	DECLARE_FUNCTION(execSetReflectionsDelay); \
	DECLARE_FUNCTION(execSetReflections); \
	DECLARE_FUNCTION(execSetDecayHFRatio); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetRoomHF); \
	DECLARE_FUNCTION(execSetRoom);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBypass); \
	DECLARE_FUNCTION(execSetCenterOutput); \
	DECLARE_FUNCTION(execSetRearOutput); \
	DECLARE_FUNCTION(execSetFrontOutput); \
	DECLARE_FUNCTION(execSetCenterInput); \
	DECLARE_FUNCTION(execSetRearInput); \
	DECLARE_FUNCTION(execSetFrontInput); \
	DECLARE_FUNCTION(execSetHFReference); \
	DECLARE_FUNCTION(execSetDensity); \
	DECLARE_FUNCTION(execSetDiffusion); \
	DECLARE_FUNCTION(execSetReverbDelay); \
	DECLARE_FUNCTION(execSetReverb); \
	DECLARE_FUNCTION(execSetReflectionsDelay); \
	DECLARE_FUNCTION(execSetReflections); \
	DECLARE_FUNCTION(execSetDecayHFRatio); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetRoomHF); \
	DECLARE_FUNCTION(execSetRoom);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectI3DL2ReverbStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectI3DL2ReverbStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectI3DL2ReverbStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectI3DL2ReverbStatics(); \
	friend struct Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectI3DL2ReverbStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectI3DL2ReverbStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectI3DL2ReverbStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectI3DL2ReverbStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectI3DL2ReverbStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectI3DL2ReverbStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectI3DL2ReverbStatics(UAtomBusEffectI3DL2ReverbStatics&&); \
	NO_API UAtomBusEffectI3DL2ReverbStatics(const UAtomBusEffectI3DL2ReverbStatics&); \
public: \
	NO_API virtual ~UAtomBusEffectI3DL2ReverbStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectI3DL2ReverbStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectI3DL2ReverbStatics(UAtomBusEffectI3DL2ReverbStatics&&); \
	NO_API UAtomBusEffectI3DL2ReverbStatics(const UAtomBusEffectI3DL2ReverbStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectI3DL2ReverbStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectI3DL2ReverbStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectI3DL2ReverbStatics) \
	NO_API virtual ~UAtomBusEffectI3DL2ReverbStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_118_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectI3DL2ReverbStatics>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCenterOutput); \
	DECLARE_FUNCTION(execSetRearOutput); \
	DECLARE_FUNCTION(execSetFrontOutput); \
	DECLARE_FUNCTION(execSetCenterInput); \
	DECLARE_FUNCTION(execSetRearInput); \
	DECLARE_FUNCTION(execSetFrontInput); \
	DECLARE_FUNCTION(execSetHFReference); \
	DECLARE_FUNCTION(execSetDensity); \
	DECLARE_FUNCTION(execSetDiffusion); \
	DECLARE_FUNCTION(execSetReverbDelay); \
	DECLARE_FUNCTION(execSetReverb); \
	DECLARE_FUNCTION(execSetReflectionsDelay); \
	DECLARE_FUNCTION(execSetReflections); \
	DECLARE_FUNCTION(execSetDecayHFRatio); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetRoomHF); \
	DECLARE_FUNCTION(execSetRoom); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCenterOutput); \
	DECLARE_FUNCTION(execSetRearOutput); \
	DECLARE_FUNCTION(execSetFrontOutput); \
	DECLARE_FUNCTION(execSetCenterInput); \
	DECLARE_FUNCTION(execSetRearInput); \
	DECLARE_FUNCTION(execSetFrontInput); \
	DECLARE_FUNCTION(execSetHFReference); \
	DECLARE_FUNCTION(execSetDensity); \
	DECLARE_FUNCTION(execSetDiffusion); \
	DECLARE_FUNCTION(execSetReverbDelay); \
	DECLARE_FUNCTION(execSetReverb); \
	DECLARE_FUNCTION(execSetReflectionsDelay); \
	DECLARE_FUNCTION(execSetReflections); \
	DECLARE_FUNCTION(execSetDecayHFRatio); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetRoomHF); \
	DECLARE_FUNCTION(execSetRoom); \
	DECLARE_FUNCTION(execSetDefaultSettings); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectI3DL2ReverbPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectI3DL2ReverbPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectI3DL2ReverbPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectI3DL2ReverbPreset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectI3DL2ReverbPreset, UAtomBusEffectPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectI3DL2ReverbPreset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectI3DL2ReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectI3DL2ReverbPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectI3DL2ReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectI3DL2ReverbPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectI3DL2ReverbPreset(UAtomBusEffectI3DL2ReverbPreset&&); \
	NO_API UAtomBusEffectI3DL2ReverbPreset(const UAtomBusEffectI3DL2ReverbPreset&); \
public: \
	NO_API virtual ~UAtomBusEffectI3DL2ReverbPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectI3DL2ReverbPreset(UAtomBusEffectI3DL2ReverbPreset&&); \
	NO_API UAtomBusEffectI3DL2ReverbPreset(const UAtomBusEffectI3DL2ReverbPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectI3DL2ReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectI3DL2ReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectI3DL2ReverbPreset) \
	NO_API virtual ~UAtomBusEffectI3DL2ReverbPreset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_259_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectI3DL2ReverbPreset>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusEffectI3DL2Reverb2Preset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectI3DL2Reverb2Preset, UAtomBusEffectI3DL2ReverbPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectI3DL2Reverb2Preset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusEffectI3DL2Reverb2Preset(); \
	friend struct Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics; \
public: \
	DECLARE_CLASS(UAtomBusEffectI3DL2Reverb2Preset, UAtomBusEffectI3DL2ReverbPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusEffectI3DL2Reverb2Preset)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusEffectI3DL2Reverb2Preset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectI3DL2Reverb2Preset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectI3DL2Reverb2Preset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectI3DL2Reverb2Preset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectI3DL2Reverb2Preset(UAtomBusEffectI3DL2Reverb2Preset&&); \
	NO_API UAtomBusEffectI3DL2Reverb2Preset(const UAtomBusEffectI3DL2Reverb2Preset&); \
public: \
	NO_API virtual ~UAtomBusEffectI3DL2Reverb2Preset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusEffectI3DL2Reverb2Preset(UAtomBusEffectI3DL2Reverb2Preset&&); \
	NO_API UAtomBusEffectI3DL2Reverb2Preset(const UAtomBusEffectI3DL2Reverb2Preset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusEffectI3DL2Reverb2Preset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusEffectI3DL2Reverb2Preset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusEffectI3DL2Reverb2Preset) \
	NO_API virtual ~UAtomBusEffectI3DL2Reverb2Preset();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_388_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_392_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBusEffectI3DL2Reverb2Preset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
