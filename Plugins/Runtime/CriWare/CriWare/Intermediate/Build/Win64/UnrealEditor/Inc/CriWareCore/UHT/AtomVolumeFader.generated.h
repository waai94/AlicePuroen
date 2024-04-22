// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomVolumeFader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARECORE_AtomVolumeFader_generated_h
#error "AtomVolumeFader.generated.h already included, missing '#pragma once' in AtomVolumeFader.h"
#endif
#define CRIWARECORE_AtomVolumeFader_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolumeFader_h


#define FOREACH_ENUM_EATOMFADERCURVE(op) \
	op(EAtomFaderCurve::Linear) \
	op(EAtomFaderCurve::Logarithmic) \
	op(EAtomFaderCurve::SCurve) \
	op(EAtomFaderCurve::Sin) \
	op(EAtomFaderCurve::Count) 

enum class EAtomFaderCurve : uint8;
template<> struct TIsUEnumClass<EAtomFaderCurve> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomFaderCurve>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
