// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Modulation/AtomModulationStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomModulationControlBus;
class UAtomModulationControlBusMix;
class UAtomModulationGenerator;
class UAtomModulationParameter;
class UAtomModulatorBase;
class UObject;
struct FAtomModulationControlBusMixStage;
#ifdef CRIWARECORE_AtomModulationStatics_generated_h
#error "AtomModulationStatics.generated.h already included, missing '#pragma once' in AtomModulationStatics.h"
#endif
#define CRIWARECORE_AtomModulationStatics_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateModulator); \
	DECLARE_FUNCTION(execUpdateMixFromObject); \
	DECLARE_FUNCTION(execUpdateMixByFilter); \
	DECLARE_FUNCTION(execClearAllGlobalBusMixValues); \
	DECLARE_FUNCTION(execClearGlobalBusMixValue); \
	DECLARE_FUNCTION(execSetGlobalBusMixValue); \
	DECLARE_FUNCTION(execUpdateMix); \
	DECLARE_FUNCTION(execDeactivateGenerator); \
	DECLARE_FUNCTION(execDeactivateBusMix); \
	DECLARE_FUNCTION(execDeactivateBus); \
	DECLARE_FUNCTION(execCreateBusMix); \
	DECLARE_FUNCTION(execCreateBusMixStage); \
	DECLARE_FUNCTION(execCreateBus); \
	DECLARE_FUNCTION(execActivateGenerator); \
	DECLARE_FUNCTION(execActivateBusMix); \
	DECLARE_FUNCTION(execActivateBus);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateModulator); \
	DECLARE_FUNCTION(execUpdateMixFromObject); \
	DECLARE_FUNCTION(execUpdateMixByFilter); \
	DECLARE_FUNCTION(execClearAllGlobalBusMixValues); \
	DECLARE_FUNCTION(execClearGlobalBusMixValue); \
	DECLARE_FUNCTION(execSetGlobalBusMixValue); \
	DECLARE_FUNCTION(execUpdateMix); \
	DECLARE_FUNCTION(execDeactivateGenerator); \
	DECLARE_FUNCTION(execDeactivateBusMix); \
	DECLARE_FUNCTION(execDeactivateBus); \
	DECLARE_FUNCTION(execCreateBusMix); \
	DECLARE_FUNCTION(execCreateBusMixStage); \
	DECLARE_FUNCTION(execCreateBus); \
	DECLARE_FUNCTION(execActivateGenerator); \
	DECLARE_FUNCTION(execActivateBusMix); \
	DECLARE_FUNCTION(execActivateBus);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomModulationStatics(); \
	friend struct Z_Construct_UClass_UAtomModulationStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomModulationStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomModulationStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAtomModulationStatics(); \
	friend struct Z_Construct_UClass_UAtomModulationStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomModulationStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomModulationStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomModulationStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomModulationStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomModulationStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomModulationStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomModulationStatics(UAtomModulationStatics&&); \
	NO_API UAtomModulationStatics(const UAtomModulationStatics&); \
public: \
	NO_API virtual ~UAtomModulationStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomModulationStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomModulationStatics(UAtomModulationStatics&&); \
	NO_API UAtomModulationStatics(const UAtomModulationStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomModulationStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomModulationStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomModulationStatics) \
	NO_API virtual ~UAtomModulationStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_17_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomModulationStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
