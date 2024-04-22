// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Gameplay/Interfaces/IAtomGameplayCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_IAtomGameplayCondition_generated_h
#error "IAtomGameplayCondition.generated.h already included, missing '#pragma once' in IAtomGameplayCondition.h"
#endif
#define CRIWARECORE_IAtomGameplayCondition_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_RPC_WRAPPERS \
	CRIWARECORE_API virtual bool ConditionMet_Position_Implementation(FVector const& Position) const { return false; }; \
	CRIWARECORE_API virtual bool ConditionMet_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execConditionMet_Position); \
	DECLARE_FUNCTION(execConditionMet);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConditionMet_Position); \
	DECLARE_FUNCTION(execConditionMet);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_CALLBACK_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomGameplayCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomGameplayCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomGameplayCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomGameplayCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomGameplayCondition(UAtomGameplayCondition&&); \
	CRIWARECORE_API UAtomGameplayCondition(const UAtomGameplayCondition&); \
public: \
	CRIWARECORE_API virtual ~UAtomGameplayCondition();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARECORE_API UAtomGameplayCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARECORE_API UAtomGameplayCondition(UAtomGameplayCondition&&); \
	CRIWARECORE_API UAtomGameplayCondition(const UAtomGameplayCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARECORE_API, UAtomGameplayCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomGameplayCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomGameplayCondition) \
	CRIWARECORE_API virtual ~UAtomGameplayCondition();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAtomGameplayCondition(); \
	friend struct Z_Construct_UClass_UAtomGameplayCondition_Statics; \
public: \
	DECLARE_CLASS(UAtomGameplayCondition, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CriWareCore"), CRIWARECORE_API) \
	DECLARE_SERIALIZER(UAtomGameplayCondition)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAtomGameplayCondition() {} \
public: \
	typedef UAtomGameplayCondition UClassType; \
	typedef IAtomGameplayCondition ThisClass; \
	CRIWARECORE_API static bool Execute_ConditionMet(const UObject* O); \
	CRIWARECORE_API static bool Execute_ConditionMet_Position(const UObject* O, FVector const& Position); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IAtomGameplayCondition() {} \
public: \
	typedef UAtomGameplayCondition UClassType; \
	typedef IAtomGameplayCondition ThisClass; \
	CRIWARECORE_API static bool Execute_ConditionMet(const UObject* O); \
	CRIWARECORE_API static bool Execute_ConditionMet_Position(const UObject* O, FVector const& Position); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_9_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomGameplayCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
