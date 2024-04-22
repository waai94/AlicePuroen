// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_AtomParameter_generated_h
#error "AtomParameter.generated.h already included, missing '#pragma once' in AtomParameter.h"
#endif
#define CRIWARECORE_AtomParameter_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomParameter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomParameter>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_392_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSelector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomSelector>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_420_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSelectorParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomSelectorParam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h


#define FOREACH_ENUM_EATOMPARAMETERTYPE(op) \
	op(EAtomParameterType::None) \
	op(EAtomParameterType::Boolean) \
	op(EAtomParameterType::Integer) \
	op(EAtomParameterType::Float) \
	op(EAtomParameterType::String) \
	op(EAtomParameterType::Aisac) \
	op(EAtomParameterType::NoneArray) \
	op(EAtomParameterType::BooleanArray) \
	op(EAtomParameterType::IntegerArray) \
	op(EAtomParameterType::FloatArray) \
	op(EAtomParameterType::StringArray) \
	op(EAtomParameterType::COUNT) 

enum class EAtomParameterType : uint8;
template<> struct TIsUEnumClass<EAtomParameterType> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
