// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Gameplay/AtomGameplayVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_AtomGameplayVolume_generated_h
#error "AtomGameplayVolume.generated.h already included, missing '#pragma once' in AtomGameplayVolume.h"
#endif
#define CRIWARECORE_AtomGameplayVolume_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_12_DELEGATE \
static inline void FAtomGameplayVolumeEvent_DelegateWrapper(const FMulticastScriptDelegate& AtomGameplayVolumeEvent) \
{ \
	AtomGameplayVolumeEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_RPC_WRAPPERS \
	virtual void OnListenerExit_Implementation(); \
	virtual void OnListenerEnter_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnListenerExit_Implementation(); \
	virtual void OnListenerEnter_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_CALLBACK_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtomGameplayVolume(); \
	friend struct Z_Construct_UClass_AAtomGameplayVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomGameplayVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(AAtomGameplayVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAAtomGameplayVolume(); \
	friend struct Z_Construct_UClass_AAtomGameplayVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomGameplayVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(AAtomGameplayVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomGameplayVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomGameplayVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomGameplayVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomGameplayVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomGameplayVolume(AAtomGameplayVolume&&); \
	NO_API AAtomGameplayVolume(const AAtomGameplayVolume&); \
public: \
	NO_API virtual ~AAtomGameplayVolume();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomGameplayVolume(AAtomGameplayVolume&&); \
	NO_API AAtomGameplayVolume(const AAtomGameplayVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomGameplayVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomGameplayVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomGameplayVolume) \
	NO_API virtual ~AAtomGameplayVolume();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_25_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class AAtomGameplayVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
