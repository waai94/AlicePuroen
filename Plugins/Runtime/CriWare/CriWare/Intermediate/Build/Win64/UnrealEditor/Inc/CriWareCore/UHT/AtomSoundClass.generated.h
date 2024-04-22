// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomSoundClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_AtomSoundClass_generated_h
#error "AtomSoundClass.generated.h already included, missing '#pragma once' in AtomSoundClass.h"
#endif
#define CRIWARECORE_AtomSoundClass_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomCategory_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomCategory>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics; \
	CRIWARECORE_API static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomSoundClassProperties>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPauseAllSounds); \
	DECLARE_FUNCTION(execStopAllSounds);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPauseAllSounds); \
	DECLARE_FUNCTION(execStopAllSounds);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomSoundClass(); \
	friend struct Z_Construct_UClass_UAtomSoundClass_Statics; \
public: \
	DECLARE_CLASS(UAtomSoundClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomSoundClass) \
	static const TCHAR* StaticConfigName() {return TEXT("CriWare");} \



#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUAtomSoundClass(); \
	friend struct Z_Construct_UClass_UAtomSoundClass_Statics; \
public: \
	DECLARE_CLASS(UAtomSoundClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomSoundClass) \
	static const TCHAR* StaticConfigName() {return TEXT("CriWare");} \



#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomSoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSoundClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomSoundClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSoundClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomSoundClass(UAtomSoundClass&&); \
	NO_API UAtomSoundClass(const UAtomSoundClass&); \
public: \
	NO_API virtual ~UAtomSoundClass();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomSoundClass(UAtomSoundClass&&); \
	NO_API UAtomSoundClass(const UAtomSoundClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomSoundClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSoundClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSoundClass) \
	NO_API virtual ~UAtomSoundClass();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_142_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomSoundClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
