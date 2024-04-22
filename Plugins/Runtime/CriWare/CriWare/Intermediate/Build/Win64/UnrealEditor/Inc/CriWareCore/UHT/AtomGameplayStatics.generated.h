// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomGameplayStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAtomAttenuation;
class UAtomComponent;
class UAtomConcurrency;
class UAtomSoundBase;
class UAtomSoundClass;
class UInitialActiveSoundParams;
class UObject;
class USceneComponent;
#ifdef CRIWARECORE_AtomGameplayStatics_generated_h
#error "AtomGameplayStatics.generated.h already included, missing '#pragma once' in AtomGameplayStatics.h"
#endif
#define CRIWARECORE_AtomGameplayStatics_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrimeAllSoundsInSoundClass); \
	DECLARE_FUNCTION(execPrimeSound); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execSetGlobalPitchModulation); \
	DECLARE_FUNCTION(execGetClosestListenerLocation); \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrimeAllSoundsInSoundClass); \
	DECLARE_FUNCTION(execPrimeSound); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execSetGlobalPitchModulation); \
	DECLARE_FUNCTION(execGetClosestListenerLocation); \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomGameplayStatics(); \
	friend struct Z_Construct_UClass_UAtomGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomGameplayStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAtomGameplayStatics(); \
	friend struct Z_Construct_UClass_UAtomGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomGameplayStatics)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomGameplayStatics(UAtomGameplayStatics&&); \
	NO_API UAtomGameplayStatics(const UAtomGameplayStatics&); \
public: \
	NO_API virtual ~UAtomGameplayStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomGameplayStatics(UAtomGameplayStatics&&); \
	NO_API UAtomGameplayStatics(const UAtomGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomGameplayStatics) \
	NO_API virtual ~UAtomGameplayStatics();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_12_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
