// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomRack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomConfig;
class UAtomDspBusSetting;
#ifdef CRIWARECORE_AtomRack_generated_h
#error "AtomRack.generated.h already included, missing '#pragma once' in AtomRack.h"
#endif
#define CRIWARECORE_AtomRack_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_21_DELEGATE \
struct _Script_CriWareCore_eventOnRackEnvelope_Parms \
{ \
	TArray<float> Envelope; \
}; \
static inline void FOnRackEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnRackEnvelope, TArray<float> const& Envelope) \
{ \
	_Script_CriWareCore_eventOnRackEnvelope_Parms Parms; \
	Parms.Envelope=Envelope; \
	OnRackEnvelope.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_23_DELEGATE \
struct _Script_CriWareCore_eventOnRackSpectralAnalysis_Parms \
{ \
	TArray<float> Magnitudes; \
}; \
static inline void FOnRackSpectralAnalysis_DelegateWrapper(const FMulticastScriptDelegate& OnRackSpectralAnalysis, TArray<float> const& Magnitudes) \
{ \
	_Script_CriWareCore_eventOnRackSpectralAnalysis_Parms Parms; \
	Parms.Magnitudes=Magnitudes; \
	OnRackSpectralAnalysis.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomRackBase(); \
	friend struct Z_Construct_UClass_UAtomRackBase_Statics; \
public: \
	DECLARE_CLASS(UAtomRackBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRackBase) \
	static const TCHAR* StaticConfigName() {return TEXT("CriWare");} \



#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUAtomRackBase(); \
	friend struct Z_Construct_UClass_UAtomRackBase_Statics; \
public: \
	DECLARE_CLASS(UAtomRackBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRackBase) \
	static const TCHAR* StaticConfigName() {return TEXT("CriWare");} \



#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomRackBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRackBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRackBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRackBase(UAtomRackBase&&); \
	NO_API UAtomRackBase(const UAtomRackBase&); \
public: \
	NO_API virtual ~UAtomRackBase();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRackBase(UAtomRackBase&&); \
	NO_API UAtomRackBase(const UAtomRackBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRackBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRackBase) \
	NO_API virtual ~UAtomRackBase();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_144_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomRackBase>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomRackWithParentBase(); \
	friend struct Z_Construct_UClass_UAtomRackWithParentBase_Statics; \
public: \
	DECLARE_CLASS(UAtomRackWithParentBase, UAtomRackBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRackWithParentBase)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_INCLASS \
private: \
	static void StaticRegisterNativesUAtomRackWithParentBase(); \
	friend struct Z_Construct_UClass_UAtomRackWithParentBase_Statics; \
public: \
	DECLARE_CLASS(UAtomRackWithParentBase, UAtomRackBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRackWithParentBase)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomRackWithParentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRackWithParentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRackWithParentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRackWithParentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRackWithParentBase(UAtomRackWithParentBase&&); \
	NO_API UAtomRackWithParentBase(const UAtomRackWithParentBase&); \
public: \
	NO_API virtual ~UAtomRackWithParentBase();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRackWithParentBase(UAtomRackWithParentBase&&); \
	NO_API UAtomRackWithParentBase(const UAtomRackWithParentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRackWithParentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRackWithParentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRackWithParentBase) \
	NO_API virtual ~UAtomRackWithParentBase();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_220_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_224_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomRackWithParentBase>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execBP_SetSnapshot); \
	DECLARE_FUNCTION(execSetSnapshot); \
	DECLARE_FUNCTION(execSetDspBusSetting); \
	DECLARE_FUNCTION(execGetDspBusSettingName); \
	DECLARE_FUNCTION(execSetDspBusSettingName); \
	DECLARE_FUNCTION(execSetAtomConfig);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execBP_SetSnapshot); \
	DECLARE_FUNCTION(execSetSnapshot); \
	DECLARE_FUNCTION(execSetDspBusSetting); \
	DECLARE_FUNCTION(execGetDspBusSettingName); \
	DECLARE_FUNCTION(execSetDspBusSettingName); \
	DECLARE_FUNCTION(execSetAtomConfig);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomRack(); \
	friend struct Z_Construct_UClass_UAtomRack_Statics; \
public: \
	DECLARE_CLASS(UAtomRack, UAtomRackWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRack)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUAtomRack(); \
	friend struct Z_Construct_UClass_UAtomRack_Statics; \
public: \
	DECLARE_CLASS(UAtomRack, UAtomRackWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomRack)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomRack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRack(UAtomRack&&); \
	NO_API UAtomRack(const UAtomRack&); \
public: \
	NO_API virtual ~UAtomRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomRack(UAtomRack&&); \
	NO_API UAtomRack(const UAtomRack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomRack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomRack) \
	NO_API virtual ~UAtomRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_259_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomRack>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomSoundfieldRack(); \
	friend struct Z_Construct_UClass_UAtomSoundfieldRack_Statics; \
public: \
	DECLARE_CLASS(UAtomSoundfieldRack, UAtomRackWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomSoundfieldRack)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_INCLASS \
private: \
	static void StaticRegisterNativesUAtomSoundfieldRack(); \
	friend struct Z_Construct_UClass_UAtomSoundfieldRack_Statics; \
public: \
	DECLARE_CLASS(UAtomSoundfieldRack, UAtomRackWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomSoundfieldRack)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomSoundfieldRack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSoundfieldRack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomSoundfieldRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSoundfieldRack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomSoundfieldRack(UAtomSoundfieldRack&&); \
	NO_API UAtomSoundfieldRack(const UAtomSoundfieldRack&); \
public: \
	NO_API virtual ~UAtomSoundfieldRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomSoundfieldRack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomSoundfieldRack(UAtomSoundfieldRack&&); \
	NO_API UAtomSoundfieldRack(const UAtomSoundfieldRack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomSoundfieldRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSoundfieldRack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSoundfieldRack) \
	NO_API virtual ~UAtomSoundfieldRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_530_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_534_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomSoundfieldRack>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ACCESSORS
#if WITH_EDITORONLY_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomEndpointRack, NO_API)


#else
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ARCHIVESERIALIZER
#endif
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomEndpointRack(); \
	friend struct Z_Construct_UClass_UAtomEndpointRack_Statics; \
public: \
	DECLARE_CLASS(UAtomEndpointRack, UAtomRackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomEndpointRack) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_INCLASS \
private: \
	static void StaticRegisterNativesUAtomEndpointRack(); \
	friend struct Z_Construct_UClass_UAtomEndpointRack_Statics; \
public: \
	DECLARE_CLASS(UAtomEndpointRack, UAtomRackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomEndpointRack) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomEndpointRack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomEndpointRack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomEndpointRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomEndpointRack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomEndpointRack(UAtomEndpointRack&&); \
	NO_API UAtomEndpointRack(const UAtomEndpointRack&); \
public: \
	NO_API virtual ~UAtomEndpointRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomEndpointRack(UAtomEndpointRack&&); \
	NO_API UAtomEndpointRack(const UAtomEndpointRack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomEndpointRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomEndpointRack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomEndpointRack) \
	NO_API virtual ~UAtomEndpointRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_584_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_588_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomEndpointRack>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomSoundfieldEndpointRack(); \
	friend struct Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics; \
public: \
	DECLARE_CLASS(UAtomSoundfieldEndpointRack, UAtomRackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomSoundfieldEndpointRack)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_INCLASS \
private: \
	static void StaticRegisterNativesUAtomSoundfieldEndpointRack(); \
	friend struct Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics; \
public: \
	DECLARE_CLASS(UAtomSoundfieldEndpointRack, UAtomRackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomSoundfieldEndpointRack)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomSoundfieldEndpointRack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSoundfieldEndpointRack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomSoundfieldEndpointRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSoundfieldEndpointRack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomSoundfieldEndpointRack(UAtomSoundfieldEndpointRack&&); \
	NO_API UAtomSoundfieldEndpointRack(const UAtomSoundfieldEndpointRack&); \
public: \
	NO_API virtual ~UAtomSoundfieldEndpointRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomSoundfieldEndpointRack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomSoundfieldEndpointRack(UAtomSoundfieldEndpointRack&&); \
	NO_API UAtomSoundfieldEndpointRack(const UAtomSoundfieldEndpointRack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomSoundfieldEndpointRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSoundfieldEndpointRack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomSoundfieldEndpointRack) \
	NO_API virtual ~UAtomSoundfieldEndpointRack();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_618_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_622_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomSoundfieldEndpointRack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h


#define FOREACH_ENUM_EATOMGAINPARAMMODE(op) \
	op(EAtomGainParamMode::Linear) \
	op(EAtomGainParamMode::Decibels) 

enum class EAtomGainParamMode : uint8;
template<> struct TIsUEnumClass<EAtomGainParamMode> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomGainParamMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
