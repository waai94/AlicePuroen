// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Components/AtomSynthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomBus;
class UAtomModulatorBase;
class UAtomRackBase;
enum class EAtomFaderCurve : uint8;
enum class EAtomModulationDestination : uint8;
enum class EAtomModulationRouting : uint8;
enum class EAtomMultiPositionType : uint8;
struct FAtomAisacControl;
#ifdef CRIWARECORE_AtomSynthComponent_generated_h
#error "AtomSynthComponent.generated.h already included, missing '#pragma once' in AtomSynthComponent.h"
#endif
#define CRIWARECORE_AtomSynthComponent_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomSynthSound(); \
	friend struct Z_Construct_UClass_UAtomSynthSound_Statics; \
public: \
	DECLARE_CLASS(UAtomSynthSound, UAtomSoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomSynthSound)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAtomSynthSound(); \
	friend struct Z_Construct_UClass_UAtomSynthSound_Statics; \
public: \
	DECLARE_CLASS(UAtomSynthSound, UAtomSoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomSynthSound)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomSynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSynthSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomSynthSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSynthSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomSynthSound(UAtomSynthSound&&); \
	CRIWARECORE_API UAtomSynthSound(const UAtomSynthSound&); \
public: \
	CRIWARECORE_API virtual ~UAtomSynthSound();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomSynthSound(UAtomSynthSound&&); \
	CRIWARECORE_API UAtomSynthSound(const UAtomSynthSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomSynthSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSynthSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSynthSound) \
	CRIWARECORE_API virtual ~UAtomSynthSound();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_19_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomSynthSound>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAisacControlValue); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAtomBusSendPreEffect); \
	DECLARE_FUNCTION(execSetRackSend); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAisacControlValue); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAtomBusSendPreEffect); \
	DECLARE_FUNCTION(execSetRackSend); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomSynthComponent, CRIWARECORE_API)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomSynthComponent(); \
	friend struct Z_Construct_UClass_UAtomSynthComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomSynthComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomSynthComponent) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUAtomSynthComponent(); \
	friend struct Z_Construct_UClass_UAtomSynthComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomSynthComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomSynthComponent) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomSynthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSynthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomSynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSynthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomSynthComponent(UAtomSynthComponent&&); \
	CRIWARECORE_API UAtomSynthComponent(const UAtomSynthComponent&); \
public: \
	CRIWARECORE_API virtual ~UAtomSynthComponent();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomSynthComponent(UAtomSynthComponent&&); \
	CRIWARECORE_API UAtomSynthComponent(const UAtomSynthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomSynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSynthComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSynthComponent) \
	CRIWARECORE_API virtual ~UAtomSynthComponent();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_60_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomSynthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
