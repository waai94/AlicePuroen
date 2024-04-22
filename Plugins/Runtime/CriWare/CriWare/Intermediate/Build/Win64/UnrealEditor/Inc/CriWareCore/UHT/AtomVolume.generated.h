// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_AtomVolume_generated_h
#error "AtomVolume.generated.h already included, missing '#pragma once' in AtomVolume.h"
#endif
#define CRIWARECORE_AtomVolume_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomVolumeBusSendSettings>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARECORE_API UScriptStruct* StaticStruct<struct FAtomInteriorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h


#define FOREACH_ENUM_EATOMVOLUMELOCATIONSTATE(op) \
	op(EAtomVolumeLocationState::InsideTheVolume) \
	op(EAtomVolumeLocationState::OutsideTheVolume) 

enum class EAtomVolumeLocationState : uint8;
template<> struct TIsUEnumClass<EAtomVolumeLocationState> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomVolumeLocationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
