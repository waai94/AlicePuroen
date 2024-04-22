// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectMultiBandEQ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectSurrounderWithEQ() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBandEQFilter();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSurrounderMode;
	static UEnum* EAtomSurrounderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSurrounderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSurrounderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSurrounderMode"));
		}
		return Z_Registration_Info_UEnum_EAtomSurrounderMode.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSurrounderMode>()
	{
		return EAtomSurrounderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::Enumerators[] = {
		{ "EAtomSurrounderMode::Straight", (int64)EAtomSurrounderMode::Straight },
		{ "EAtomSurrounderMode::Cross", (int64)EAtomSurrounderMode::Cross },
		{ "EAtomSurrounderMode::Matrix", (int64)EAtomSurrounderMode::Matrix },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cross.Name", "EAtomSurrounderMode::Cross" },
		{ "Matrix.Name", "EAtomSurrounderMode::Matrix" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "Straight.Name", "EAtomSurrounderMode::Straight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSurrounderMode",
		"EAtomSurrounderMode",
		Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode()
	{
		if (!Z_Registration_Info_UEnum_EAtomSurrounderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSurrounderMode.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSurrounderMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings;
class UScriptStruct* FAtomBusEffectSurrounderWithEQSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectSurrounderWithEQSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectSurrounderWithEQSettings>()
{
	return FAtomBusEffectSurrounderWithEQSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BandFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BandFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BandFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectSurrounderWithEQSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "* FAtomBusEffectSurrounderWithEQSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectSurrounderWithEQSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Surround With EQ" },
		{ "Comment", "/** Specifies the surrounder mode to operate.*/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Specifies the surrounder mode to operate." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectSurrounderWithEQSettings, Mode), Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Mode_MetaData)) }; // 3616462711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Surround With EQ" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the delay time of the surrounder in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Specifies the delay time of the surrounder in milliseconds." },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectSurrounderWithEQSettings, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Surround With EQ" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** Specify the final output level of the surrounder in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specify the final output level of the surrounder in decibels (dB)." },
		{ "UIMax", "48.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectSurrounderWithEQSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Gain_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_BandFilters_Inner = { "BandFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBandEQFilter, METADATA_PARAMS(nullptr, 0) }; // 3105212075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_BandFilters_MetaData[] = {
		{ "Category", "Surround With EQ" },
		{ "Comment", "/** Specifies the EQ filters (biquad filters) of the multi-band equalizer. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Specifies the EQ filters (biquad filters) of the multi-band equalizer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_BandFilters = { "BandFilters", nullptr, (EPropertyFlags)0x0020080000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectSurrounderWithEQSettings, BandFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_BandFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_BandFilters_MetaData)) }; // 3105212075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_MaximumDelayTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "0.0" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectSurrounderWithEQSettings, MaximumDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_MaximumDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_MaximumDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectSurrounderWithEQSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectSurrounderWithEQSettings), &Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_BandFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_BandFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectSurrounderWithEQSettings",
		sizeof(FAtomBusEffectSurrounderWithEQSettings),
		alignof(FAtomBusEffectSurrounderWithEQSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetBypass(Z_Param_Out_SurrounderWithEQSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetMaximumDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetMaximumDelayTime(Z_Param_Out_SurrounderWithEQSettings,Z_Param_MaximumDelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetBandGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetBandGain(Z_Param_Out_SurrounderWithEQSettings,Z_Param_BandIndex,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetBandQ)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Q);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetBandQ(Z_Param_Out_SurrounderWithEQSettings,Z_Param_BandIndex,Z_Param_Q);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetBandFrequency)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetBandFrequency(Z_Param_Out_SurrounderWithEQSettings,Z_Param_BandIndex,Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetBandFilterType)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_ENUM(EAtomBandEQFilterType,Z_Param_FilterType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetBandFilterType(Z_Param_Out_SurrounderWithEQSettings,Z_Param_BandIndex,EAtomBandEQFilterType(Z_Param_FilterType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetGain(Z_Param_Out_SurrounderWithEQSettings,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetDelayTime(Z_Param_Out_SurrounderWithEQSettings,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQStatics::execSetMode)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_SurrounderWithEQSettings);
		P_GET_ENUM(EAtomSurrounderMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectSurrounderWithEQSettings*)Z_Param__Result=UAtomBusEffectSurrounderWithEQStatics::SetMode(Z_Param_Out_SurrounderWithEQSettings,EAtomSurrounderMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	void UAtomBusEffectSurrounderWithEQStatics::StaticRegisterNativesUAtomBusEffectSurrounderWithEQStatics()
	{
		UClass* Class = UAtomBusEffectSurrounderWithEQStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBandFilterType", &UAtomBusEffectSurrounderWithEQStatics::execSetBandFilterType },
			{ "SetBandFrequency", &UAtomBusEffectSurrounderWithEQStatics::execSetBandFrequency },
			{ "SetBandGain", &UAtomBusEffectSurrounderWithEQStatics::execSetBandGain },
			{ "SetBandQ", &UAtomBusEffectSurrounderWithEQStatics::execSetBandQ },
			{ "SetBypass", &UAtomBusEffectSurrounderWithEQStatics::execSetBypass },
			{ "SetDelayTime", &UAtomBusEffectSurrounderWithEQStatics::execSetDelayTime },
			{ "SetGain", &UAtomBusEffectSurrounderWithEQStatics::execSetGain },
			{ "SetMaximumDelayTime", &UAtomBusEffectSurrounderWithEQStatics::execSetMaximumDelayTime },
			{ "SetMode", &UAtomBusEffectSurrounderWithEQStatics::execSetMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetBandFilterType_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			int32 BandIndex;
			EAtomBandEQFilterType FilterType;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFilterType_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFilterType_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFilterType_Parms, FilterType), Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType, METADATA_PARAMS(nullptr, 0) }; // 2612278027
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFilterType_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetBandFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetBandFilterType_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetBandFrequency_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			int32 BandIndex;
			float Frequency;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFrequency_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFrequency_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandFrequency_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetBandFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetBandFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetBandGain_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			int32 BandIndex;
			float Gain;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandGain_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandGain_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetBandGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetBandGain_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetBandQ_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			int32 BandIndex;
			float Q;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Q;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandQ_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandQ_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandQ_Parms, Q), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBandQ_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetBandQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetBandQ_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetBypass_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			bool bBypass;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBypass_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	void Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectSurrounderWithEQStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectSurrounderWithEQStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetDelayTime_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			float DelayTime;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetDelayTime_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetDelayTime_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetGain_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			float Gain;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetGain_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetMaximumDelayTime_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			float MaximumDelayTime;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetMaximumDelayTime_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetMaximumDelayTime_Parms, MaximumDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetMaximumDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetMaximumDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetMaximumDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics
	{
		struct AtomBusEffectSurrounderWithEQStatics_eventSetMode_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings SurrounderWithEQSettings;
			EAtomSurrounderMode Mode;
			FAtomBusEffectSurrounderWithEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurrounderWithEQSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_SurrounderWithEQSettings = { "SurrounderWithEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetMode_Parms, SurrounderWithEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetMode_Parms, Mode), Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode, METADATA_PARAMS(nullptr, 0) }; // 3616462711
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQStatics_eventSetMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_SurrounderWithEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, nullptr, "SetMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::AtomBusEffectSurrounderWithEQStatics_eventSetMode_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectSurrounderWithEQStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_NoRegister()
	{
		return UAtomBusEffectSurrounderWithEQStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFilterType, "SetBandFilterType" }, // 112197558
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandFrequency, "SetBandFrequency" }, // 1288058121
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandGain, "SetBandGain" }, // 676626744
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBandQ, "SetBandQ" }, // 1101975082
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetBypass, "SetBypass" }, // 606405020
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetDelayTime, "SetDelayTime" }, // 3269159861
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetGain, "SetGain" }, // 1401184258
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMaximumDelayTime, "SetMaximumDelayTime" }, // 163641704
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQStatics_SetMode, "SetMode" }, // 1400906534
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectSurrounderWithEQStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "* UAtomBusEffectSurrounderWithEQStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectSurrounderWithEQStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::ClassParams = {
		&UAtomBusEffectSurrounderWithEQStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectSurrounderWithEQStatics>()
	{
		return UAtomBusEffectSurrounderWithEQStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectSurrounderWithEQStatics);
	UAtomBusEffectSurrounderWithEQStatics::~UAtomBusEffectSurrounderWithEQStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execGetMaxDelayTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDelayTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetBandGain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandGain(Z_Param_BandIndex,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetBandQ)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Factor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandQ(Z_Param_BandIndex,Z_Param_Factor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetBandFrequency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandFrequency(Z_Param_BandIndex,Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetBandFilterType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_ENUM(EAtomBandEQFilterType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandFilterType(Z_Param_BandIndex,EAtomBandEQFilterType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetDelayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelayTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetMode)
	{
		P_GET_ENUM(EAtomSurrounderMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMode(EAtomSurrounderMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectSurrounderWithEQPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectSurrounderWithEQSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectSurrounderWithEQPreset::StaticRegisterNativesUAtomBusEffectSurrounderWithEQPreset()
	{
		UClass* Class = UAtomBusEffectSurrounderWithEQPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxDelayTime", &UAtomBusEffectSurrounderWithEQPreset::execGetMaxDelayTime },
			{ "SetBandFilterType", &UAtomBusEffectSurrounderWithEQPreset::execSetBandFilterType },
			{ "SetBandFrequency", &UAtomBusEffectSurrounderWithEQPreset::execSetBandFrequency },
			{ "SetBandGain", &UAtomBusEffectSurrounderWithEQPreset::execSetBandGain },
			{ "SetBandQ", &UAtomBusEffectSurrounderWithEQPreset::execSetBandQ },
			{ "SetDefaultSettings", &UAtomBusEffectSurrounderWithEQPreset::execSetDefaultSettings },
			{ "SetDelayTime", &UAtomBusEffectSurrounderWithEQPreset::execSetDelayTime },
			{ "SetGain", &UAtomBusEffectSurrounderWithEQPreset::execSetGain },
			{ "SetMode", &UAtomBusEffectSurrounderWithEQPreset::execSetMode },
			{ "SetSettings", &UAtomBusEffectSurrounderWithEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventGetMaxDelayTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventGetMaxDelayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "Comment", "// Get the maximum delay time possible.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Get the maximum delay time possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "GetMaxDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::AtomBusEffectSurrounderWithEQPreset_eventGetMaxDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetBandFilterType_Parms
		{
			int32 BandIndex;
			EAtomBandEQFilterType Type;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandFilterType_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandFilterType_Parms, Type), Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType, METADATA_PARAMS(nullptr, 0) }; // 2612278027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Set the filter type to operate.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Set the filter type to operate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetBandFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetBandFilterType_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetBandFrequency_Parms
		{
			int32 BandIndex;
			float Frequency;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandFrequency_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Set the filter frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Set the filter frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetBandFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetBandFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetBandGain_Parms
		{
			int32 BandIndex;
			float Level;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandGain_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandGain_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Set the output gain of the filter.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Set the output gain of the filter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetBandGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetBandGain_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetBandQ_Parms
		{
			int32 BandIndex;
			float Factor;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Factor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandQ_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetBandQ_Parms, Factor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::NewProp_Factor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Set the resonance of the filter.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Set the resonance of the filter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetBandQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetBandQ_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetDelayTime_Parms
		{
			float Time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetDelayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Set the delay time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Set the delay time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetGain_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Set the output gain, in decibels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Set the output gain, in decibels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetMode_Parms
		{
			EAtomSurrounderMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetMode_Parms, Mode), Z_Construct_UEnum_CriWareCore_EAtomSurrounderMode, METADATA_PARAMS(nullptr, 0) }; // 3616462711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Set the surrounder mode to operate.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Set the surrounder mode to operate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetMode_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics
	{
		struct AtomBusEffectSurrounderWithEQPreset_eventSetSettings_Parms
		{
			FAtomBusEffectSurrounderWithEQSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectSurrounderWithEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Surrounder With EQ" },
		{ "Comment", "// Sets runtime Multi-Band EQ settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ToolTip", "Sets runtime Multi-Band EQ settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::AtomBusEffectSurrounderWithEQPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectSurrounderWithEQPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_NoRegister()
	{
		return UAtomBusEffectSurrounderWithEQPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_GetMaxDelayTime, "GetMaxDelayTime" }, // 4049660623
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFilterType, "SetBandFilterType" }, // 3011443162
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandFrequency, "SetBandFrequency" }, // 489843966
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandGain, "SetBandGain" }, // 2515605673
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetBandQ, "SetBandQ" }, // 1497455295
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDefaultSettings, "SetDefaultSettings" }, // 226400390
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetDelayTime, "SetDelayTime" }, // 1768487172
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetGain, "SetGain" }, // 3187246529
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetMode, "SetMode" }, // 1438751396
		{ &Z_Construct_UFunction_UAtomBusEffectSurrounderWithEQPreset_SetSettings, "SetSettings" }, // 3161156463
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectSurrounderWithEQPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectSurrounderWithEQPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The SurrounderWithEQ preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The SurrounderWithEQ preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectSurrounderWithEQPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_Settings_MetaData)) }; // 3178333425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectSurrounderWithEQ.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectSurrounderWithEQPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 3178333425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectSurrounderWithEQPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::ClassParams = {
		&UAtomBusEffectSurrounderWithEQPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectSurrounderWithEQPreset>()
	{
		return UAtomBusEffectSurrounderWithEQPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectSurrounderWithEQPreset);
	UAtomBusEffectSurrounderWithEQPreset::~UAtomBusEffectSurrounderWithEQPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::EnumInfo[] = {
		{ EAtomSurrounderMode_StaticEnum, TEXT("EAtomSurrounderMode"), &Z_Registration_Info_UEnum_EAtomSurrounderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3616462711U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectSurrounderWithEQSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectSurrounderWithEQSettings_Statics::NewStructOps, TEXT("AtomBusEffectSurrounderWithEQSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectSurrounderWithEQSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectSurrounderWithEQSettings), 3178333425U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectSurrounderWithEQStatics, UAtomBusEffectSurrounderWithEQStatics::StaticClass, TEXT("UAtomBusEffectSurrounderWithEQStatics"), &Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectSurrounderWithEQStatics), 3054552645U) },
		{ Z_Construct_UClass_UAtomBusEffectSurrounderWithEQPreset, UAtomBusEffectSurrounderWithEQPreset::StaticClass, TEXT("UAtomBusEffectSurrounderWithEQPreset"), &Z_Registration_Info_UClass_UAtomBusEffectSurrounderWithEQPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectSurrounderWithEQPreset), 3551601495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_2635856100(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectSurrounderWithEQ_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
