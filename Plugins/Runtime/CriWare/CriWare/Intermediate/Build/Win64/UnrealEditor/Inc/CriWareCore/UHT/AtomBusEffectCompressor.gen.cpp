// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectCompressor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectCompressor() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectCompressorPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectCompressorPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectCompressorStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectCompressorStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSplitEQFilter();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSplitEQFilterType;
	static UEnum* EAtomSplitEQFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSplitEQFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSplitEQFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSplitEQFilterType"));
		}
		return Z_Registration_Info_UEnum_EAtomSplitEQFilterType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSplitEQFilterType>()
	{
		return EAtomSplitEQFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::Enumerators[] = {
		{ "EAtomSplitEQFilterType::None", (int64)EAtomSplitEQFilterType::None },
		{ "EAtomSplitEQFilterType::LowPass", (int64)EAtomSplitEQFilterType::LowPass },
		{ "EAtomSplitEQFilterType::HighPass", (int64)EAtomSplitEQFilterType::HighPass },
		{ "EAtomSplitEQFilterType::BandPass", (int64)EAtomSplitEQFilterType::BandPass },
		{ "EAtomSplitEQFilterType::Notch", (int64)EAtomSplitEQFilterType::Notch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BandPass.Name", "EAtomSplitEQFilterType::BandPass" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*UENUM(BlueprintType)\nenum class EAtomCompressorMode : uint8\n{\n\x09Normal,\n\x09SideChain\n};\n\nUENUM(BlueprintType)\nenum class EAtomCompressorType : uint8\n{\n\x09Peak,\n\x09RMS\n};*/" },
		{ "HighPass.Name", "EAtomSplitEQFilterType::HighPass" },
		{ "LowPass.Name", "EAtomSplitEQFilterType::LowPass" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "None.Name", "EAtomSplitEQFilterType::None" },
		{ "Notch.Name", "EAtomSplitEQFilterType::Notch" },
		{ "ToolTip", "UENUM(BlueprintType)\nenum class EAtomCompressorMode : uint8\n{\n       Normal,\n       SideChain\n};\n\nUENUM(BlueprintType)\nenum class EAtomCompressorType : uint8\n{\n       Peak,\n       RMS\n};" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSplitEQFilterType",
		"EAtomSplitEQFilterType",
		Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType()
	{
		if (!Z_Registration_Info_UEnum_EAtomSplitEQFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSplitEQFilterType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSplitEQFilterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSplitEQFilter;
class UScriptStruct* FAtomSplitEQFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSplitEQFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSplitEQFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSplitEQFilter, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSplitEQFilter"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSplitEQFilter.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSplitEQFilter>()
{
	return FAtomSplitEQFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Q_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Q;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * FAtomSplitEQFilter Structure\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "* FAtomSplitEQFilter Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSplitEQFilter>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "EQ Filter" },
		{ "Comment", "/** Specifies the filter type to use. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Specifies the filter type to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSplitEQFilter, FilterType), Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_FilterType_MetaData)) }; // 1170665513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "EQ Filter" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "24.0" },
		{ "Comment", "/** Specifies the frequency of the filter in hertz (Hz). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the frequency of the filter in hertz (Hz)." },
		{ "UIMax", "24000.0" },
		{ "UIMin", "24.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSplitEQFilter, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Q_MetaData[] = {
		{ "Category", "EQ Filter" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Specifies the Q factor (resonance) of the filter. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the Q factor (resonance) of the filter." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSplitEQFilter, Q), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Q_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Q_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewProp_Q,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSplitEQFilter",
		sizeof(FAtomSplitEQFilter),
		alignof(FAtomSplitEQFilter),
		Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSplitEQFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSplitEQFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSplitEQFilter.InnerSingleton, Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSplitEQFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings;
class UScriptStruct* FAtomBusEffectCompressorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectCompressorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectCompressorSettings>()
{
	return FAtomBusEffectCompressorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundLink_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitEQ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplitEQ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectCompressorSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "* FAtomBusEffectCompressorSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectCompressorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Compressor" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** Specifies the compressor threshold at which the amplitude starts to be compressed in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the compressor threshold at which the amplitude starts to be compressed in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectCompressorSettings, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Compressor" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Specifies the compressor ratio. \n\x09 * There are no minimum and maximum limits, but the minimum value is limited to 0.01f during signal processing. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the compressor ratio.\nThere are no minimum and maximum limits, but the minimum value is limited to 0.01f during signal processing." },
		{ "Units", "x" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectCompressorSettings, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Compressor" },
		{ "ClampMax", "3000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the attack time of the compressor in milliseconds.\n\x09 * The time until compression is completed. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Specifies the attack time of the compressor in milliseconds.\nThe time until compression is completed." },
		{ "UIMax", "3000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectCompressorSettings, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Compressor" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the release time of the compressor in milliseconds.\n\x09 * The time from when the amplitude becomes below the threshold until the end of compression. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Specifies the release time of the compressor in milliseconds.\nThe time from when the amplitude becomes below the threshold until the end of compression." },
		{ "UIMax", "50000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectCompressorSettings, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_ReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Compressor" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** Specify the final output gain of the compressor in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specify the final output gain of the compressor in decibels (dB)." },
		{ "UIMax", "48.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectCompressorSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SurroundLink_MetaData[] = {
		{ "Category", "Compressor" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specify the surround link strength of the compressor.\n\x09 * Surround link function changes the compression strength using the lowest amplitude value in all channels.\n\x09 * 100% fully uses the lowest amplitude value in all channels, while 0% turns off the surround link function.*/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Specify the surround link strength of the compressor.\nSurround link function changes the compression strength using the lowest amplitude value in all channels.\n100% fully uses the lowest amplitude value in all channels, while 0% turns off the surround link function." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
		{ "Units", "%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SurroundLink = { "SurroundLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectCompressorSettings, SurroundLink), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SurroundLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SurroundLink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SplitEQ_MetaData[] = {
		{ "Category", "Compressor|Split EQ" },
		{ "Comment", "/** Specifies the split EQ parameters of the compressor.\n\x09 * Split EQ is an equalizer that divides the band into two. Compresses only the band extracted by the filter and synthesizes it with the remaining band. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Specifies the split EQ parameters of the compressor.\nSplit EQ is an equalizer that divides the band into two. Compresses only the band extracted by the filter and synthesizes it with the remaining band." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SplitEQ = { "SplitEQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectCompressorSettings, SplitEQ), Z_Construct_UScriptStruct_FAtomSplitEQFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SplitEQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SplitEQ_MetaData)) }; // 4233729202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectCompressorSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectCompressorSettings), &Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_ReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SurroundLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_SplitEQ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectCompressorSettings",
		sizeof(FAtomBusEffectCompressorSettings),
		alignof(FAtomBusEffectCompressorSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetBypass(Z_Param_Out_CompressorSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetSplitEQQ)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Q);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetSplitEQQ(Z_Param_Out_CompressorSettings,Z_Param_Q);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetSplitEQFrequency)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetSplitEQFrequency(Z_Param_Out_CompressorSettings,Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetSplitEQFilterType)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_ENUM(EAtomSplitEQFilterType,Z_Param_FilterType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetSplitEQFilterType(Z_Param_Out_CompressorSettings,EAtomSplitEQFilterType(Z_Param_FilterType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetSurroundLink)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurroundLink);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetSurroundLink(Z_Param_Out_CompressorSettings,Z_Param_SurroundLink);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetGain(Z_Param_Out_CompressorSettings,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetReleaseTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetReleaseTime(Z_Param_Out_CompressorSettings,Z_Param_ReleaseTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetAttackTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetAttackTime(Z_Param_Out_CompressorSettings,Z_Param_AttackTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetRatio)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetRatio(Z_Param_Out_CompressorSettings,Z_Param_Ratio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorStatics::execSetThreshold)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_CompressorSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectCompressorSettings*)Z_Param__Result=UAtomBusEffectCompressorStatics::SetThreshold(Z_Param_Out_CompressorSettings,Z_Param_Threshold);
		P_NATIVE_END;
	}
	void UAtomBusEffectCompressorStatics::StaticRegisterNativesUAtomBusEffectCompressorStatics()
	{
		UClass* Class = UAtomBusEffectCompressorStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttackTime", &UAtomBusEffectCompressorStatics::execSetAttackTime },
			{ "SetBypass", &UAtomBusEffectCompressorStatics::execSetBypass },
			{ "SetGain", &UAtomBusEffectCompressorStatics::execSetGain },
			{ "SetRatio", &UAtomBusEffectCompressorStatics::execSetRatio },
			{ "SetReleaseTime", &UAtomBusEffectCompressorStatics::execSetReleaseTime },
			{ "SetSplitEQFilterType", &UAtomBusEffectCompressorStatics::execSetSplitEQFilterType },
			{ "SetSplitEQFrequency", &UAtomBusEffectCompressorStatics::execSetSplitEQFrequency },
			{ "SetSplitEQQ", &UAtomBusEffectCompressorStatics::execSetSplitEQQ },
			{ "SetSurroundLink", &UAtomBusEffectCompressorStatics::execSetSurroundLink },
			{ "SetThreshold", &UAtomBusEffectCompressorStatics::execSetThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetAttackTime_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float AttackTime;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetAttackTime_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetAttackTime_Parms, AttackTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetAttackTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetAttackTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::AtomBusEffectCompressorStatics_eventSetAttackTime_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetBypass_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			bool bBypass;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetBypass_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	void Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectCompressorStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectCompressorStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "/*UFUNCTION(BlueprintCallable, Category = \"Atom|Effects|Compressor\")\n\x09static FAtomBusEffectCompressorSettings& SetType(UPARAM(ref) FAtomBusEffectCompressorSettings& CompressorSettings, EAtomCompressorType Type)\n\x09{\n\x09\x09""CompressorSettings.Type = Type;\n\x09\x09return CompressorSettings;\n\x09}*/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Atom|Effects|Compressor\")\n       static FAtomBusEffectCompressorSettings& SetType(UPARAM(ref) FAtomBusEffectCompressorSettings& CompressorSettings, EAtomCompressorType Type)\n       {\n               CompressorSettings.Type = Type;\n               return CompressorSettings;\n       }" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::AtomBusEffectCompressorStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetGain_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float Gain;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetGain_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::AtomBusEffectCompressorStatics_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetRatio_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float Ratio;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetRatio_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetRatio_Parms, Ratio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetRatio_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::AtomBusEffectCompressorStatics_eventSetRatio_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetReleaseTime_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float ReleaseTime;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetReleaseTime_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetReleaseTime_Parms, ReleaseTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetReleaseTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::NewProp_ReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetReleaseTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::AtomBusEffectCompressorStatics_eventSetReleaseTime_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetSplitEQFilterType_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			EAtomSplitEQFilterType FilterType;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQFilterType_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQFilterType_Parms, FilterType), Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType, METADATA_PARAMS(nullptr, 0) }; // 1170665513
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQFilterType_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor|Split EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetSplitEQFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::AtomBusEffectCompressorStatics_eventSetSplitEQFilterType_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetSplitEQFrequency_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float Frequency;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQFrequency_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQFrequency_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor|Split EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetSplitEQFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::AtomBusEffectCompressorStatics_eventSetSplitEQFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetSplitEQQ_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float Q;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Q;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQQ_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQQ_Parms, Q), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSplitEQQ_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor|Split EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetSplitEQQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::AtomBusEffectCompressorStatics_eventSetSplitEQQ_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetSurroundLink_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float SurroundLink;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundLink;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSurroundLink_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::NewProp_SurroundLink = { "SurroundLink", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSurroundLink_Parms, SurroundLink), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetSurroundLink_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::NewProp_SurroundLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetSurroundLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::AtomBusEffectCompressorStatics_eventSetSurroundLink_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics
	{
		struct AtomBusEffectCompressorStatics_eventSetThreshold_Parms
		{
			FAtomBusEffectCompressorSettings CompressorSettings;
			float Threshold;
			FAtomBusEffectCompressorSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressorSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::NewProp_CompressorSettings = { "CompressorSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetThreshold_Parms, CompressorSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetThreshold_Parms, Threshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorStatics_eventSetThreshold_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(nullptr, 0) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::NewProp_CompressorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorStatics, nullptr, "SetThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::AtomBusEffectCompressorStatics_eventSetThreshold_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectCompressorStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectCompressorStatics_NoRegister()
	{
		return UAtomBusEffectCompressorStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetAttackTime, "SetAttackTime" }, // 1003571286
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetBypass, "SetBypass" }, // 1592400395
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetGain, "SetGain" }, // 4279812802
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetRatio, "SetRatio" }, // 765216919
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetReleaseTime, "SetReleaseTime" }, // 2642203975
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFilterType, "SetSplitEQFilterType" }, // 3699883167
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQFrequency, "SetSplitEQFrequency" }, // 917576071
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSplitEQQ, "SetSplitEQQ" }, // 733948458
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetSurroundLink, "SetSurroundLink" }, // 2361187592
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorStatics_SetThreshold, "SetThreshold" }, // 3058464737
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectCompressorStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "* UAtomBusEffectCompressorStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectCompressorStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::ClassParams = {
		&UAtomBusEffectCompressorStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectCompressorStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectCompressorStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectCompressorStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectCompressorStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectCompressorStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectCompressorStatics>()
	{
		return UAtomBusEffectCompressorStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectCompressorStatics);
	UAtomBusEffectCompressorStatics::~UAtomBusEffectCompressorStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetSplitEQQ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Factor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplitEQQ(Z_Param_Factor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetSplitEQFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplitEQFrequency(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetSplitEQFilterType)
	{
		P_GET_ENUM(EAtomSplitEQFilterType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplitEQFilterType(EAtomSplitEQFilterType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetSurroundLink)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurroundLink(Z_Param_Percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetReleaseTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReleaseTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetAttackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRatio(Z_Param_Ratio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThreshold(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectCompressorPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectCompressorSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectCompressorPreset::StaticRegisterNativesUAtomBusEffectCompressorPreset()
	{
		UClass* Class = UAtomBusEffectCompressorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttackTime", &UAtomBusEffectCompressorPreset::execSetAttackTime },
			{ "SetDefaultSettings", &UAtomBusEffectCompressorPreset::execSetDefaultSettings },
			{ "SetGain", &UAtomBusEffectCompressorPreset::execSetGain },
			{ "SetRatio", &UAtomBusEffectCompressorPreset::execSetRatio },
			{ "SetReleaseTime", &UAtomBusEffectCompressorPreset::execSetReleaseTime },
			{ "SetSettings", &UAtomBusEffectCompressorPreset::execSetSettings },
			{ "SetSplitEQFilterType", &UAtomBusEffectCompressorPreset::execSetSplitEQFilterType },
			{ "SetSplitEQFrequency", &UAtomBusEffectCompressorPreset::execSetSplitEQFrequency },
			{ "SetSplitEQQ", &UAtomBusEffectCompressorPreset::execSetSplitEQQ },
			{ "SetSurroundLink", &UAtomBusEffectCompressorPreset::execSetSurroundLink },
			{ "SetThreshold", &UAtomBusEffectCompressorPreset::execSetThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetAttackTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetAttackTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Set the compressor attack time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the compressor attack time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetAttackTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::AtomBusEffectCompressorPreset_eventSetAttackTime_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectCompressorSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::AtomBusEffectCompressorPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Set the output gain, in decibels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the output gain, in decibels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::AtomBusEffectCompressorPreset_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetRatio_Parms
		{
			float Ratio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetRatio_Parms, Ratio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::NewProp_Ratio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Set the compressor ratio.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the compressor ratio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::AtomBusEffectCompressorPreset_eventSetRatio_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetReleaseTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetReleaseTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Set the compressor release time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the compressor release time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetReleaseTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::AtomBusEffectCompressorPreset_eventSetReleaseTime_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetSettings_Parms
		{
			FAtomBusEffectCompressorSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Sets runtime compressor settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Sets runtime compressor settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::AtomBusEffectCompressorPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetSplitEQFilterType_Parms
		{
			EAtomSplitEQFilterType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetSplitEQFilterType_Parms, Type), Z_Construct_UEnum_CriWareCore_EAtomSplitEQFilterType, METADATA_PARAMS(nullptr, 0) }; // 1170665513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Set the split EQ filter type to operate.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the split EQ filter type to operate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetSplitEQFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::AtomBusEffectCompressorPreset_eventSetSplitEQFilterType_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetSplitEQFrequency_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetSplitEQFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Set the split EQ filter frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the split EQ filter frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetSplitEQFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::AtomBusEffectCompressorPreset_eventSetSplitEQFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetSplitEQQ_Parms
		{
			float Factor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Factor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetSplitEQQ_Parms, Factor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::NewProp_Factor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Set the split EQ resonance of the filter.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the split EQ resonance of the filter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetSplitEQQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::AtomBusEffectCompressorPreset_eventSetSplitEQQ_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetSurroundLink_Parms
		{
			float Percent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetSurroundLink_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::NewProp_Percent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Set the strength of the surround link.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the strength of the surround link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetSurroundLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::AtomBusEffectCompressorPreset_eventSetSurroundLink_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics
	{
		struct AtomBusEffectCompressorPreset_eventSetThreshold_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectCompressorPreset_eventSetThreshold_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Compressor" },
		{ "Comment", "// Set the compressor threshold, in decibels [-96, 0].\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ToolTip", "Set the compressor threshold, in decibels [-96, 0]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectCompressorPreset, nullptr, "SetThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::AtomBusEffectCompressorPreset_eventSetThreshold_Parms), Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectCompressorPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectCompressorPreset_NoRegister()
	{
		return UAtomBusEffectCompressorPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetAttackTime, "SetAttackTime" }, // 2142710105
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2564910118
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetGain, "SetGain" }, // 3757183036
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetRatio, "SetRatio" }, // 3959837910
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetReleaseTime, "SetReleaseTime" }, // 1342165474
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSettings, "SetSettings" }, // 3723489337
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFilterType, "SetSplitEQFilterType" }, // 1479835577
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQFrequency, "SetSplitEQFrequency" }, // 3726481063
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSplitEQQ, "SetSplitEQQ" }, // 1030290065
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetSurroundLink, "SetSurroundLink" }, // 588624142
		{ &Z_Construct_UFunction_UAtomBusEffectCompressorPreset_SetThreshold, "SetThreshold" }, // 2140612265
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectCompressorPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectCompressorPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Delay preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Delay preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectCompressorPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_Settings_MetaData)) }; // 3892268471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectCompressor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectCompressorPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 3892268471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectCompressorPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::ClassParams = {
		&UAtomBusEffectCompressorPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectCompressorPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectCompressorPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectCompressorPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectCompressorPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectCompressorPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectCompressorPreset>()
	{
		return UAtomBusEffectCompressorPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectCompressorPreset);
	UAtomBusEffectCompressorPreset::~UAtomBusEffectCompressorPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::EnumInfo[] = {
		{ EAtomSplitEQFilterType_StaticEnum, TEXT("EAtomSplitEQFilterType"), &Z_Registration_Info_UEnum_EAtomSplitEQFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1170665513U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::ScriptStructInfo[] = {
		{ FAtomSplitEQFilter::StaticStruct, Z_Construct_UScriptStruct_FAtomSplitEQFilter_Statics::NewStructOps, TEXT("AtomSplitEQFilter"), &Z_Registration_Info_UScriptStruct_AtomSplitEQFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSplitEQFilter), 4233729202U) },
		{ FAtomBusEffectCompressorSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectCompressorSettings_Statics::NewStructOps, TEXT("AtomBusEffectCompressorSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectCompressorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectCompressorSettings), 3892268471U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectCompressorStatics, UAtomBusEffectCompressorStatics::StaticClass, TEXT("UAtomBusEffectCompressorStatics"), &Z_Registration_Info_UClass_UAtomBusEffectCompressorStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectCompressorStatics), 1201851622U) },
		{ Z_Construct_UClass_UAtomBusEffectCompressorPreset, UAtomBusEffectCompressorPreset::StaticClass, TEXT("UAtomBusEffectCompressorPreset"), &Z_Registration_Info_UClass_UAtomBusEffectCompressorPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectCompressorPreset), 3881895348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_3230004860(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectCompressor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
