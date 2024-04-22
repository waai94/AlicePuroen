// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Gameplay/Interfaces/IAtomGameplayVolumeInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_IAtomGameplayVolumeInteraction_generated_h
#error "IAtomGameplayVolumeInteraction.generated.h already included, missing '#pragma once' in IAtomGameplayVolumeInteraction.h"
#endif
#define CRIWARECORE_IAtomGameplayVolumeInteraction_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_RPC_WRAPPERS \
	CRIWARECORE_API virtual void OnListenerExit_Implementation() {}; \
	CRIWARECORE_API virtual void OnListenerEnter_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_CALLBACK_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomGameplayVolumeInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomGameplayVolumeInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomGameplayVolumeInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomGameplayVolumeInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomGameplayVolumeInteraction(UAtomGameplayVolumeInteraction&&); \
	CRIWARECORE_API UAtomGameplayVolumeInteraction(const UAtomGameplayVolumeInteraction&); \
public: \
	CRIWARECORE_API virtual ~UAtomGameplayVolumeInteraction();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomGameplayVolumeInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomGameplayVolumeInteraction(UAtomGameplayVolumeInteraction&&); \
	CRIWARECORE_API UAtomGameplayVolumeInteraction(const UAtomGameplayVolumeInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomGameplayVolumeInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomGameplayVolumeInteraction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomGameplayVolumeInteraction) \
	CRIWARECORE_API virtual ~UAtomGameplayVolumeInteraction();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAtomGameplayVolumeInteraction(); \
	friend struct Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics; \
public: \
	DECLARE_CLASS(UAtomGameplayVolumeInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomGameplayVolumeInteraction)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAtomGameplayVolumeInteraction() {} \
public: \
	typedef UAtomGameplayVolumeInteraction UClassType; \
	typedef IAtomGameplayVolumeInteraction ThisClass; \
	CRIWARECORE_API static void Execute_OnListenerEnter(UObject* O); \
	CRIWARECORE_API static void Execute_OnListenerExit(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IAtomGameplayVolumeInteraction() {} \
public: \
	typedef UAtomGameplayVolumeInteraction UClassType; \
	typedef IAtomGameplayVolumeInteraction ThisClass; \
	CRIWARECORE_API static void Execute_OnListenerEnter(UObject* O); \
	CRIWARECORE_API static void Execute_OnListenerExit(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_9_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomGameplayVolumeInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
