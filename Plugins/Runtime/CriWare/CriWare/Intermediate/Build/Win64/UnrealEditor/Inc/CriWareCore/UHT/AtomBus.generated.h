// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomBus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomBusEffectPreset;
class UAtomRackBase;
class UObject;
enum class EAtomSpeaker : uint8;
struct FAtomPanning;
#ifdef CRIWARECORE_AtomBus_generated_h
#error "AtomBus.generated.h already included, missing '#pragma once' in AtomBus.h"
#endif
#define CRIWARECORE_AtomBus_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomChannelLevelMatrix>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomPanning_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomPanning>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBusSend_Statics; \
	CRIWARECORE_API static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomBusSend>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRack); \
	DECLARE_FUNCTION(execFindEffectPreset); \
	DECLARE_FUNCTION(execGetNumEffectPresets); \
	DECLARE_FUNCTION(execGetEffectPreset); \
	DECLARE_FUNCTION(execSetDefaultEffectPreset); \
	DECLARE_FUNCTION(execRemoveEffectPreset); \
	DECLARE_FUNCTION(execSetEffectPreset); \
	DECLARE_FUNCTION(execGetSendLevel); \
	DECLARE_FUNCTION(execSetSendLevel); \
	DECLARE_FUNCTION(execResetChannelLevelMatrix); \
	DECLARE_FUNCTION(execGetChannelLevel); \
	DECLARE_FUNCTION(execSetChannelLevel); \
	DECLARE_FUNCTION(execGetPanning); \
	DECLARE_FUNCTION(execSetPanning); \
	DECLARE_FUNCTION(execGetBusOutputVolume); \
	DECLARE_FUNCTION(execSetBusOutputVolume);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRack); \
	DECLARE_FUNCTION(execFindEffectPreset); \
	DECLARE_FUNCTION(execGetNumEffectPresets); \
	DECLARE_FUNCTION(execGetEffectPreset); \
	DECLARE_FUNCTION(execSetDefaultEffectPreset); \
	DECLARE_FUNCTION(execRemoveEffectPreset); \
	DECLARE_FUNCTION(execSetEffectPreset); \
	DECLARE_FUNCTION(execGetSendLevel); \
	DECLARE_FUNCTION(execSetSendLevel); \
	DECLARE_FUNCTION(execResetChannelLevelMatrix); \
	DECLARE_FUNCTION(execGetChannelLevel); \
	DECLARE_FUNCTION(execSetChannelLevel); \
	DECLARE_FUNCTION(execGetPanning); \
	DECLARE_FUNCTION(execSetPanning); \
	DECLARE_FUNCTION(execGetBusOutputVolume); \
	DECLARE_FUNCTION(execSetBusOutputVolume);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBus(); \
	friend struct Z_Construct_UClass_UAtomBus_Statics; \
public: \
	DECLARE_CLASS(UAtomBus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBus)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBus(); \
	friend struct Z_Construct_UClass_UAtomBus_Statics; \
public: \
	DECLARE_CLASS(UAtomBus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomBus)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBus(UAtomBus&&); \
	NO_API UAtomBus(const UAtomBus&); \
public: \
	NO_API virtual ~UAtomBus();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBus(UAtomBus&&); \
	NO_API UAtomBus(const UAtomBus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBus) \
	NO_API virtual ~UAtomBus();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_178_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomBus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h


#define FOREACH_ENUM_EATOMSPATIALIZATIONTYPE(op) \
	op(EAtomSpatializationType::Panning) \
	op(EAtomSpatializationType::SendToChannel) 

enum class EAtomSpatializationType : uint8;
template<> struct TIsUEnumClass<EAtomSpatializationType> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSpatializationType>();

#define FOREACH_ENUM_EATOMBUSSENDTYPE(op) \
	op(EAtomBusSendType::PreVolume) \
	op(EAtomBusSendType::PostVolume) \
	op(EAtomBusSendType::PostPanning) 

enum class EAtomBusSendType : uint8;
template<> struct TIsUEnumClass<EAtomBusSendType> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomBusSendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
