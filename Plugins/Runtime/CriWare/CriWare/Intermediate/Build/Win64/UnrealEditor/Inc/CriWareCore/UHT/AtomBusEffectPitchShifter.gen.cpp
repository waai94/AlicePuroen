// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectPitchShifter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectPitchShifter() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomPitchShifterMode;
	static UEnum* EAtomPitchShifterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomPitchShifterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomPitchShifterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomPitchShifterMode"));
		}
		return Z_Registration_Info_UEnum_EAtomPitchShifterMode.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomPitchShifterMode>()
	{
		return EAtomPitchShifterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::Enumerators[] = {
		{ "EAtomPitchShifterMode::Music", (int64)EAtomPitchShifterMode::Music },
		{ "EAtomPitchShifterMode::Vocal", (int64)EAtomPitchShifterMode::Vocal },
		{ "EAtomPitchShifterMode::SoundEffects", (int64)EAtomPitchShifterMode::SoundEffects },
		{ "EAtomPitchShifterMode::Speech", (int64)EAtomPitchShifterMode::Speech },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "Music.Name", "EAtomPitchShifterMode::Music" },
		{ "SoundEffects.Name", "EAtomPitchShifterMode::SoundEffects" },
		{ "Speech.Name", "EAtomPitchShifterMode::Speech" },
		{ "Vocal.Name", "EAtomPitchShifterMode::Vocal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomPitchShifterMode",
		"EAtomPitchShifterMode",
		Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode()
	{
		if (!Z_Registration_Info_UEnum_EAtomPitchShifterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomPitchShifterMode.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomPitchShifterMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings;
class UScriptStruct* FAtomBusEffectPitchShifterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectPitchShifterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectPitchShifterSettings>()
{
	return FAtomBusEffectPitchShifterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchShift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormantShift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FormantShift;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShiftMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShiftMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShiftMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPitchFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DataPitchFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDataPitchFrequency_MetaData[];
#endif
		static void NewProp_bUseDataPitchFrequency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDataPitchFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectPitchShifterSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "* FAtomBusEffectPitchShifterSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectPitchShifterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_PitchShift_MetaData[] = {
		{ "Category", "Pitch Shifter" },
		{ "ClampMax", "24" },
		{ "ClampMin", "-24" },
		{ "Comment", "/** Specify the shift amount in semitones of the pitch shifter. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Specify the shift amount in semitones of the pitch shifter." },
		{ "UIMax", "24" },
		{ "UIMin", "-24" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_PitchShift = { "PitchShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPitchShifterSettings, PitchShift), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_PitchShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_PitchShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_FormantShift_MetaData[] = {
		{ "Category", "Pitch Shifter" },
		{ "ClampMax", "24" },
		{ "ClampMin", "-24" },
		{ "Comment", "/** Specifies the shift amount in semitones of the formant (harmonic frequencies that occur in the human voice) of the pitch shifter when using Vocal or Speach modes. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Specifies the shift amount in semitones of the formant (harmonic frequencies that occur in the human voice) of the pitch shifter when using Vocal or Speach modes." },
		{ "UIMax", "24" },
		{ "UIMin", "-24" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_FormantShift = { "FormantShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPitchShifterSettings, FormantShift), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_FormantShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_FormantShift_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_ShiftMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_ShiftMode_MetaData[] = {
		{ "Category", "Pitch Shifter" },
		{ "Comment", "/** Specifies the operation mode of the pitch shifter. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Specifies the operation mode of the pitch shifter." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_ShiftMode = { "ShiftMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPitchShifterSettings, ShiftMode), Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_ShiftMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_ShiftMode_MetaData)) }; // 2061705336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_DataPitchFrequency_MetaData[] = {
		{ "Category", "Pitch Shifter" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "24.0" },
		{ "Comment", "/** Advanced - Specify the pitch frequency of the input audio data in hertz.\n\x09 * This is hint information for formant analysis, but please be aware that if you specify a value \n\x09 * that is far from the actual voice data, noise will be added to the voice. \n\x09 * If not specified, the default pitch (459.375 Hz) is used internally. */" },
		{ "EditCondition", "bUseDataPitchFrequency" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Advanced - Specify the pitch frequency of the input audio data in hertz.\nThis is hint information for formant analysis, but please be aware that if you specify a value\nthat is far from the actual voice data, noise will be added to the voice.\nIf not specified, the default pitch (459.375 Hz) is used internally." },
		{ "UIMax", "24000.0" },
		{ "UIMin", "24.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_DataPitchFrequency = { "DataPitchFrequency", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPitchShifterSettings, DataPitchFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_DataPitchFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_DataPitchFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bUseDataPitchFrequency_MetaData[] = {
		{ "Category", "Pitch Shifter" },
		{ "Comment", "/** Advanced - Enable usage of DataPitchFrenquency. */" },
		{ "DisplayAfter", "FormantShift" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Advanced - Enable usage of DataPitchFrenquency." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bUseDataPitchFrequency_SetBit(void* Obj)
	{
		((FAtomBusEffectPitchShifterSettings*)Obj)->bUseDataPitchFrequency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bUseDataPitchFrequency = { "bUseDataPitchFrequency", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectPitchShifterSettings), &Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bUseDataPitchFrequency_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bUseDataPitchFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bUseDataPitchFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectPitchShifterSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectPitchShifterSettings), &Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_PitchShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_FormantShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_ShiftMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_ShiftMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_DataPitchFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bUseDataPitchFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectPitchShifterSettings",
		sizeof(FAtomBusEffectPitchShifterSettings),
		alignof(FAtomBusEffectPitchShifterSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPitchShifterSettings,Z_Param_Out_PitchShifterSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPitchShifterSettings*)Z_Param__Result=UAtomBusEffectPitchShifterStatics::SetBypass(Z_Param_Out_PitchShifterSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterStatics::execSetDataPitchFrequency)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPitchShifterSettings,Z_Param_Out_PitchShifterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DataPitchFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPitchShifterSettings*)Z_Param__Result=UAtomBusEffectPitchShifterStatics::SetDataPitchFrequency(Z_Param_Out_PitchShifterSettings,Z_Param_DataPitchFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterStatics::execSetShiftMode)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPitchShifterSettings,Z_Param_Out_PitchShifterSettings);
		P_GET_ENUM(EAtomPitchShifterMode,Z_Param_ShiftMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPitchShifterSettings*)Z_Param__Result=UAtomBusEffectPitchShifterStatics::SetShiftMode(Z_Param_Out_PitchShifterSettings,EAtomPitchShifterMode(Z_Param_ShiftMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterStatics::execSetFormantShift)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPitchShifterSettings,Z_Param_Out_PitchShifterSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_FormantShift);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPitchShifterSettings*)Z_Param__Result=UAtomBusEffectPitchShifterStatics::SetFormantShift(Z_Param_Out_PitchShifterSettings,Z_Param_FormantShift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterStatics::execSetPitchShift)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPitchShifterSettings,Z_Param_Out_PitchShifterSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_PitchShift);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPitchShifterSettings*)Z_Param__Result=UAtomBusEffectPitchShifterStatics::SetPitchShift(Z_Param_Out_PitchShifterSettings,Z_Param_PitchShift);
		P_NATIVE_END;
	}
	void UAtomBusEffectPitchShifterStatics::StaticRegisterNativesUAtomBusEffectPitchShifterStatics()
	{
		UClass* Class = UAtomBusEffectPitchShifterStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectPitchShifterStatics::execSetBypass },
			{ "SetDataPitchFrequency", &UAtomBusEffectPitchShifterStatics::execSetDataPitchFrequency },
			{ "SetFormantShift", &UAtomBusEffectPitchShifterStatics::execSetFormantShift },
			{ "SetPitchShift", &UAtomBusEffectPitchShifterStatics::execSetPitchShift },
			{ "SetShiftMode", &UAtomBusEffectPitchShifterStatics::execSetShiftMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics
	{
		struct AtomBusEffectPitchShifterStatics_eventSetBypass_Parms
		{
			FAtomBusEffectPitchShifterSettings PitchShifterSettings;
			bool bBypass;
			FAtomBusEffectPitchShifterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchShifterSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_PitchShifterSettings = { "PitchShifterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetBypass_Parms, PitchShifterSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	void Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectPitchShifterStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectPitchShifterStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_PitchShifterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::AtomBusEffectPitchShifterStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics
	{
		struct AtomBusEffectPitchShifterStatics_eventSetDataPitchFrequency_Parms
		{
			FAtomBusEffectPitchShifterSettings PitchShifterSettings;
			float DataPitchFrequency;
			FAtomBusEffectPitchShifterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchShifterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DataPitchFrequency;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::NewProp_PitchShifterSettings = { "PitchShifterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetDataPitchFrequency_Parms, PitchShifterSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::NewProp_DataPitchFrequency = { "DataPitchFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetDataPitchFrequency_Parms, DataPitchFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetDataPitchFrequency_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::NewProp_PitchShifterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::NewProp_DataPitchFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterStatics, nullptr, "SetDataPitchFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::AtomBusEffectPitchShifterStatics_eventSetDataPitchFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics
	{
		struct AtomBusEffectPitchShifterStatics_eventSetFormantShift_Parms
		{
			FAtomBusEffectPitchShifterSettings PitchShifterSettings;
			int32 FormantShift;
			FAtomBusEffectPitchShifterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchShifterSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FormantShift;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::NewProp_PitchShifterSettings = { "PitchShifterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetFormantShift_Parms, PitchShifterSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::NewProp_FormantShift = { "FormantShift", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetFormantShift_Parms, FormantShift), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetFormantShift_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::NewProp_PitchShifterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::NewProp_FormantShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterStatics, nullptr, "SetFormantShift", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::AtomBusEffectPitchShifterStatics_eventSetFormantShift_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics
	{
		struct AtomBusEffectPitchShifterStatics_eventSetPitchShift_Parms
		{
			FAtomBusEffectPitchShifterSettings PitchShifterSettings;
			int32 PitchShift;
			FAtomBusEffectPitchShifterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchShifterSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PitchShift;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::NewProp_PitchShifterSettings = { "PitchShifterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetPitchShift_Parms, PitchShifterSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::NewProp_PitchShift = { "PitchShift", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetPitchShift_Parms, PitchShift), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetPitchShift_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::NewProp_PitchShifterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::NewProp_PitchShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterStatics, nullptr, "SetPitchShift", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::AtomBusEffectPitchShifterStatics_eventSetPitchShift_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics
	{
		struct AtomBusEffectPitchShifterStatics_eventSetShiftMode_Parms
		{
			FAtomBusEffectPitchShifterSettings PitchShifterSettings;
			EAtomPitchShifterMode ShiftMode;
			FAtomBusEffectPitchShifterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchShifterSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShiftMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShiftMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_PitchShifterSettings = { "PitchShifterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetShiftMode_Parms, PitchShifterSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_ShiftMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_ShiftMode = { "ShiftMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetShiftMode_Parms, ShiftMode), Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode, METADATA_PARAMS(nullptr, 0) }; // 2061705336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterStatics_eventSetShiftMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(nullptr, 0) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_PitchShifterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_ShiftMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_ShiftMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterStatics, nullptr, "SetShiftMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::AtomBusEffectPitchShifterStatics_eventSetShiftMode_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectPitchShifterStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_NoRegister()
	{
		return UAtomBusEffectPitchShifterStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetBypass, "SetBypass" }, // 3303392742
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetDataPitchFrequency, "SetDataPitchFrequency" }, // 1004777659
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetFormantShift, "SetFormantShift" }, // 231260934
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetPitchShift, "SetPitchShift" }, // 4042013284
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterStatics_SetShiftMode, "SetShiftMode" }, // 1528207719
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectPitchShifterStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "* UAtomBusEffectPitchShifterStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectPitchShifterStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::ClassParams = {
		&UAtomBusEffectPitchShifterStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectPitchShifterStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectPitchShifterStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectPitchShifterStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectPitchShifterStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectPitchShifterStatics>()
	{
		return UAtomBusEffectPitchShifterStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectPitchShifterStatics);
	UAtomBusEffectPitchShifterStatics::~UAtomBusEffectPitchShifterStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterPreset::execSetDataPitchFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataPitchFrequency(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterPreset::execSetShiftMode)
	{
		P_GET_ENUM(EAtomPitchShifterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShiftMode(EAtomPitchShifterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterPreset::execSetFormantShift)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Cents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFormantShift(Z_Param_Cents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterPreset::execSetPitchShift)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Cents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchShift(Z_Param_Cents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPitchShifterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPitchShifterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPitchShifterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectPitchShifterPreset::StaticRegisterNativesUAtomBusEffectPitchShifterPreset()
	{
		UClass* Class = UAtomBusEffectPitchShifterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDataPitchFrequency", &UAtomBusEffectPitchShifterPreset::execSetDataPitchFrequency },
			{ "SetDefaultSettings", &UAtomBusEffectPitchShifterPreset::execSetDefaultSettings },
			{ "SetFormantShift", &UAtomBusEffectPitchShifterPreset::execSetFormantShift },
			{ "SetPitchShift", &UAtomBusEffectPitchShifterPreset::execSetPitchShift },
			{ "SetSettings", &UAtomBusEffectPitchShifterPreset::execSetSettings },
			{ "SetShiftMode", &UAtomBusEffectPitchShifterPreset::execSetShiftMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics
	{
		struct AtomBusEffectPitchShifterPreset_eventSetDataPitchFrequency_Parms
		{
			float Frequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterPreset_eventSetDataPitchFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "Comment", "// Adavanced - Set the data pitch frequency. This is hint information for formant analysis.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Adavanced - Set the data pitch frequency. This is hint information for formant analysis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterPreset, nullptr, "SetDataPitchFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::AtomBusEffectPitchShifterPreset_eventSetDataPitchFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectPitchShifterPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectPitchShifterSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::AtomBusEffectPitchShifterPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics
	{
		struct AtomBusEffectPitchShifterPreset_eventSetFormantShift_Parms
		{
			int32 Cents;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Cents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::NewProp_Cents = { "Cents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterPreset_eventSetFormantShift_Parms, Cents), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::NewProp_Cents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "Comment", "// Set the shift amount of the formant.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Set the shift amount of the formant." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterPreset, nullptr, "SetFormantShift", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::AtomBusEffectPitchShifterPreset_eventSetFormantShift_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics
	{
		struct AtomBusEffectPitchShifterPreset_eventSetPitchShift_Parms
		{
			int32 Cents;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Cents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::NewProp_Cents = { "Cents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterPreset_eventSetPitchShift_Parms, Cents), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::NewProp_Cents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "Comment", "// Set the shift amount.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Set the shift amount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterPreset, nullptr, "SetPitchShift", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::AtomBusEffectPitchShifterPreset_eventSetPitchShift_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics
	{
		struct AtomBusEffectPitchShifterPreset_eventSetSettings_Parms
		{
			FAtomBusEffectPitchShifterSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "Comment", "// Sets runtime PitchShifter settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Sets runtime PitchShifter settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::AtomBusEffectPitchShifterPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics
	{
		struct AtomBusEffectPitchShifterPreset_eventSetShiftMode_Parms
		{
			EAtomPitchShifterMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPitchShifterPreset_eventSetShiftMode_Parms, Mode), Z_Construct_UEnum_CriWareCore_EAtomPitchShifterMode, METADATA_PARAMS(nullptr, 0) }; // 2061705336
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Pitch Shifter" },
		{ "Comment", "// Set the operation mode.\x09\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ToolTip", "Set the operation mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPitchShifterPreset, nullptr, "SetShiftMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::AtomBusEffectPitchShifterPreset_eventSetShiftMode_Parms), Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectPitchShifterPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_NoRegister()
	{
		return UAtomBusEffectPitchShifterPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDataPitchFrequency, "SetDataPitchFrequency" }, // 3952124144
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetDefaultSettings, "SetDefaultSettings" }, // 4137176333
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetFormantShift, "SetFormantShift" }, // 1635637713
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetPitchShift, "SetPitchShift" }, // 2160653733
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetSettings, "SetSettings" }, // 3131290715
		{ &Z_Construct_UFunction_UAtomBusEffectPitchShifterPreset_SetShiftMode, "SetShiftMode" }, // 4191136270
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectPitchShifterPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectPitchShifterPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The PitchShifter preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The PitchShifter preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectPitchShifterPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_Settings_MetaData)) }; // 1707121433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPitchShifter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectPitchShifterPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 1707121433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectPitchShifterPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::ClassParams = {
		&UAtomBusEffectPitchShifterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectPitchShifterPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectPitchShifterPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectPitchShifterPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectPitchShifterPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectPitchShifterPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectPitchShifterPreset>()
	{
		return UAtomBusEffectPitchShifterPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectPitchShifterPreset);
	UAtomBusEffectPitchShifterPreset::~UAtomBusEffectPitchShifterPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::EnumInfo[] = {
		{ EAtomPitchShifterMode_StaticEnum, TEXT("EAtomPitchShifterMode"), &Z_Registration_Info_UEnum_EAtomPitchShifterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2061705336U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectPitchShifterSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectPitchShifterSettings_Statics::NewStructOps, TEXT("AtomBusEffectPitchShifterSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectPitchShifterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectPitchShifterSettings), 1707121433U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectPitchShifterStatics, UAtomBusEffectPitchShifterStatics::StaticClass, TEXT("UAtomBusEffectPitchShifterStatics"), &Z_Registration_Info_UClass_UAtomBusEffectPitchShifterStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectPitchShifterStatics), 968337234U) },
		{ Z_Construct_UClass_UAtomBusEffectPitchShifterPreset, UAtomBusEffectPitchShifterPreset::StaticClass, TEXT("UAtomBusEffectPitchShifterPreset"), &Z_Registration_Info_UClass_UAtomBusEffectPitchShifterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectPitchShifterPreset), 3396933054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_1753918095(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPitchShifter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
