// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/Modulation/AtomModulationDestination.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_AtomModulationDestination_generated_h
#error "AtomModulationDestination.generated.h already included, missing '#pragma once' in AtomModulationDestination.h"
#endif
#define CRIWARECORE_AtomModulationDestination_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomSoundModulationDefaultSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAtomSoundModulationDefaultSettings Super;


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomSoundModulationRoutingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h


#define FOREACH_ENUM_EATOMMODULATIONROUTING(op) \
	op(EAtomModulationRouting::Disable) \
	op(EAtomModulationRouting::Inherit) \
	op(EAtomModulationRouting::Override) \
	op(EAtomModulationRouting::Union) \
	op(EAtomModulationRouting::DAW) 

enum class EAtomModulationRouting : uint8;
template<> struct TIsUEnumClass<EAtomModulationRouting> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomModulationRouting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
