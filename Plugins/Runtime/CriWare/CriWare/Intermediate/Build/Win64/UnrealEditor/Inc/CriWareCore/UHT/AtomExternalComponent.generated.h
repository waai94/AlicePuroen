// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Components/AtomExternalComponent.h"
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
#ifdef CRIWARECORE_AtomExternalComponent_generated_h
#error "AtomExternalComponent.generated.h already included, missing '#pragma once' in AtomExternalComponent.h"
#endif
#define CRIWARECORE_AtomExternalComponent_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomExternalSound(); \
	friend struct Z_Construct_UClass_UAtomExternalSound_Statics; \
public: \
	DECLARE_CLASS(UAtomExternalSound, UAtomSoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomExternalSound)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAtomExternalSound(); \
	friend struct Z_Construct_UClass_UAtomExternalSound_Statics; \
public: \
	DECLARE_CLASS(UAtomExternalSound, UAtomSoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomExternalSound)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomExternalSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomExternalSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomExternalSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomExternalSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomExternalSound(UAtomExternalSound&&); \
	CRIWARECORE_API UAtomExternalSound(const UAtomExternalSound&); \
public: \
	CRIWARECORE_API virtual ~UAtomExternalSound();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomExternalSound(UAtomExternalSound&&); \
	CRIWARECORE_API UAtomExternalSound(const UAtomExternalSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomExternalSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomExternalSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomExternalSound) \
	CRIWARECORE_API virtual ~UAtomExternalSound();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_34_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomExternalSound>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_RPC_WRAPPERS \
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


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomExternalComponent, CRIWARECORE_API)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomExternalComponent(); \
	friend struct Z_Construct_UClass_UAtomExternalComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomExternalComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomExternalComponent) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUAtomExternalComponent(); \
	friend struct Z_Construct_UClass_UAtomExternalComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomExternalComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomExternalComponent) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomExternalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomExternalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomExternalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomExternalComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomExternalComponent(UAtomExternalComponent&&); \
	CRIWARECORE_API UAtomExternalComponent(const UAtomExternalComponent&); \
public: \
	CRIWARECORE_API virtual ~UAtomExternalComponent();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomExternalComponent(UAtomExternalComponent&&); \
	CRIWARECORE_API UAtomExternalComponent(const UAtomExternalComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomExternalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomExternalComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomExternalComponent) \
	CRIWARECORE_API virtual ~UAtomExternalComponent();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_94_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomExternalComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomExternalComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
