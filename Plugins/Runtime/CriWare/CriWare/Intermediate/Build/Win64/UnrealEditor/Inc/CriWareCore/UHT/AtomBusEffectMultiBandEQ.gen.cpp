// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectMultiBandEQ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectMultiBandEQ() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBandEQFilter();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomBandEQFilterType;
	static UEnum* EAtomBandEQFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomBandEQFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomBandEQFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomBandEQFilterType"));
		}
		return Z_Registration_Info_UEnum_EAtomBandEQFilterType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomBandEQFilterType>()
	{
		return EAtomBandEQFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::Enumerators[] = {
		{ "EAtomBandEQFilterType::LowShelf", (int64)EAtomBandEQFilterType::LowShelf },
		{ "EAtomBandEQFilterType::HighShelf", (int64)EAtomBandEQFilterType::HighShelf },
		{ "EAtomBandEQFilterType::Peaking", (int64)EAtomBandEQFilterType::Peaking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HighShelf.Name", "EAtomBandEQFilterType::HighShelf" },
		{ "LowShelf.Name", "EAtomBandEQFilterType::LowShelf" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "Peaking.Name", "EAtomBandEQFilterType::Peaking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomBandEQFilterType",
		"EAtomBandEQFilterType",
		Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType()
	{
		if (!Z_Registration_Info_UEnum_EAtomBandEQFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomBandEQFilterType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomBandEQFilterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBandEQFilter;
class UScriptStruct* FAtomBandEQFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBandEQFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBandEQFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBandEQFilter, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBandEQFilter"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBandEQFilter.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBandEQFilter>()
{
	return FAtomBandEQFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * FAtomBandEQFilter Structure\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "* FAtomBandEQFilter Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBandEQFilter>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "EQ Filter" },
		{ "Comment", "/** Specifies the filter type to use. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Specifies the filter type to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBandEQFilter, FilterType), Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_FilterType_MetaData)) }; // 2612278027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "EQ Filter" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "24.0" },
		{ "Comment", "/** Specifies the frequency of the filter in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the frequency of the filter in hertz." },
		{ "UIMax", "24000.0" },
		{ "UIMin", "24.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBandEQFilter, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Q_MetaData[] = {
		{ "Category", "EQ Filter" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Specifies the Q factor (resonance) of the filter. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the Q factor (resonance) of the filter." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBandEQFilter, Q), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Q_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Q_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "EQ Filter" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the filter output gain. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Specifies the filter output gain." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBandEQFilter, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Gain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewProp_Gain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBandEQFilter",
		sizeof(FAtomBandEQFilter),
		alignof(FAtomBandEQFilter),
		Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBandEQFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBandEQFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBandEQFilter.InnerSingleton, Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBandEQFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings;
class UScriptStruct* FAtomBusEffectMultiBandEQSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectMultiBandEQSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectMultiBandEQSettings>()
{
	return FAtomBusEffectMultiBandEQSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BandFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BandFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BandFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectMultiBandEQSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "* FAtomBusEffectMultiBandEQSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectMultiBandEQSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_BandFilters_Inner = { "BandFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBandEQFilter, METADATA_PARAMS(nullptr, 0) }; // 3105212075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_BandFilters_MetaData[] = {
		{ "Category", "Multi-band EQ" },
		{ "Comment", "/** Specifies the EQ filters (biquad filters) of the multi-band equalizer. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Specifies the EQ filters (biquad filters) of the multi-band equalizer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_BandFilters = { "BandFilters", nullptr, (EPropertyFlags)0x0020080000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectMultiBandEQSettings, BandFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_BandFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_BandFilters_MetaData)) }; // 3105212075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectMultiBandEQSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectMultiBandEQSettings), &Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_BandFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_BandFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectMultiBandEQSettings",
		sizeof(FAtomBusEffectMultiBandEQSettings),
		alignof(FAtomBusEffectMultiBandEQSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiBandEQSettings,Z_Param_Out_MultiBandEQSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiBandEQSettings*)Z_Param__Result=UAtomBusEffectMultiBandEQStatics::SetBypass(Z_Param_Out_MultiBandEQSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQStatics::execSetBandGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiBandEQSettings,Z_Param_Out_MultiBandEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiBandEQSettings*)Z_Param__Result=UAtomBusEffectMultiBandEQStatics::SetBandGain(Z_Param_Out_MultiBandEQSettings,Z_Param_BandIndex,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQStatics::execSetBandQ)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiBandEQSettings,Z_Param_Out_MultiBandEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Q);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiBandEQSettings*)Z_Param__Result=UAtomBusEffectMultiBandEQStatics::SetBandQ(Z_Param_Out_MultiBandEQSettings,Z_Param_BandIndex,Z_Param_Q);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQStatics::execSetBandFrequency)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiBandEQSettings,Z_Param_Out_MultiBandEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiBandEQSettings*)Z_Param__Result=UAtomBusEffectMultiBandEQStatics::SetBandFrequency(Z_Param_Out_MultiBandEQSettings,Z_Param_BandIndex,Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQStatics::execSetBandFilterType)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiBandEQSettings,Z_Param_Out_MultiBandEQSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_ENUM(EAtomBandEQFilterType,Z_Param_FilterType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiBandEQSettings*)Z_Param__Result=UAtomBusEffectMultiBandEQStatics::SetBandFilterType(Z_Param_Out_MultiBandEQSettings,Z_Param_BandIndex,EAtomBandEQFilterType(Z_Param_FilterType));
		P_NATIVE_END;
	}
	void UAtomBusEffectMultiBandEQStatics::StaticRegisterNativesUAtomBusEffectMultiBandEQStatics()
	{
		UClass* Class = UAtomBusEffectMultiBandEQStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBandFilterType", &UAtomBusEffectMultiBandEQStatics::execSetBandFilterType },
			{ "SetBandFrequency", &UAtomBusEffectMultiBandEQStatics::execSetBandFrequency },
			{ "SetBandGain", &UAtomBusEffectMultiBandEQStatics::execSetBandGain },
			{ "SetBandQ", &UAtomBusEffectMultiBandEQStatics::execSetBandQ },
			{ "SetBypass", &UAtomBusEffectMultiBandEQStatics::execSetBypass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics
	{
		struct AtomBusEffectMultiBandEQStatics_eventSetBandFilterType_Parms
		{
			FAtomBusEffectMultiBandEQSettings MultiBandEQSettings;
			int32 BandIndex;
			EAtomBandEQFilterType FilterType;
			FAtomBusEffectMultiBandEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiBandEQSettings;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_MultiBandEQSettings = { "MultiBandEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFilterType_Parms, MultiBandEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFilterType_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFilterType_Parms, FilterType), Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType, METADATA_PARAMS(nullptr, 0) }; // 2612278027
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFilterType_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_MultiBandEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics, nullptr, "SetBandFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::AtomBusEffectMultiBandEQStatics_eventSetBandFilterType_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics
	{
		struct AtomBusEffectMultiBandEQStatics_eventSetBandFrequency_Parms
		{
			FAtomBusEffectMultiBandEQSettings MultiBandEQSettings;
			int32 BandIndex;
			float Frequency;
			FAtomBusEffectMultiBandEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiBandEQSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_MultiBandEQSettings = { "MultiBandEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFrequency_Parms, MultiBandEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFrequency_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandFrequency_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_MultiBandEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics, nullptr, "SetBandFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::AtomBusEffectMultiBandEQStatics_eventSetBandFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics
	{
		struct AtomBusEffectMultiBandEQStatics_eventSetBandGain_Parms
		{
			FAtomBusEffectMultiBandEQSettings MultiBandEQSettings;
			int32 BandIndex;
			float Gain;
			FAtomBusEffectMultiBandEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiBandEQSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_MultiBandEQSettings = { "MultiBandEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandGain_Parms, MultiBandEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandGain_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_MultiBandEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics, nullptr, "SetBandGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::AtomBusEffectMultiBandEQStatics_eventSetBandGain_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics
	{
		struct AtomBusEffectMultiBandEQStatics_eventSetBandQ_Parms
		{
			FAtomBusEffectMultiBandEQSettings MultiBandEQSettings;
			int32 BandIndex;
			float Q;
			FAtomBusEffectMultiBandEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiBandEQSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BandIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Q;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_MultiBandEQSettings = { "MultiBandEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandQ_Parms, MultiBandEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandQ_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandQ_Parms, Q), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBandQ_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_MultiBandEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics, nullptr, "SetBandQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::AtomBusEffectMultiBandEQStatics_eventSetBandQ_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics
	{
		struct AtomBusEffectMultiBandEQStatics_eventSetBypass_Parms
		{
			FAtomBusEffectMultiBandEQSettings MultiBandEQSettings;
			bool bBypass;
			FAtomBusEffectMultiBandEQSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiBandEQSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_MultiBandEQSettings = { "MultiBandEQSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBypass_Parms, MultiBandEQSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	void Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectMultiBandEQStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectMultiBandEQStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(nullptr, 0) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_MultiBandEQSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::AtomBusEffectMultiBandEQStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectMultiBandEQStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_NoRegister()
	{
		return UAtomBusEffectMultiBandEQStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFilterType, "SetBandFilterType" }, // 4240325525
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandFrequency, "SetBandFrequency" }, // 881330317
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandGain, "SetBandGain" }, // 1719095328
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBandQ, "SetBandQ" }, // 995629839
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQStatics_SetBypass, "SetBypass" }, // 2596435222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectMultiBandEQStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "* UAtomBusEffectMultiBandEQStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectMultiBandEQStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::ClassParams = {
		&UAtomBusEffectMultiBandEQStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectMultiBandEQStatics>()
	{
		return UAtomBusEffectMultiBandEQStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectMultiBandEQStatics);
	UAtomBusEffectMultiBandEQStatics::~UAtomBusEffectMultiBandEQStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQPreset::execSetBandGain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandGain(Z_Param_BandIndex,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQPreset::execSetBandQ)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Factor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandQ(Z_Param_BandIndex,Z_Param_Factor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQPreset::execSetBandFrequency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandFrequency(Z_Param_BandIndex,Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQPreset::execSetBandFilterType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BandIndex);
		P_GET_ENUM(EAtomBandEQFilterType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandFilterType(Z_Param_BandIndex,EAtomBandEQFilterType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiBandEQSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiBandEQPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiBandEQSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectMultiBandEQPreset::StaticRegisterNativesUAtomBusEffectMultiBandEQPreset()
	{
		UClass* Class = UAtomBusEffectMultiBandEQPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBandFilterType", &UAtomBusEffectMultiBandEQPreset::execSetBandFilterType },
			{ "SetBandFrequency", &UAtomBusEffectMultiBandEQPreset::execSetBandFrequency },
			{ "SetBandGain", &UAtomBusEffectMultiBandEQPreset::execSetBandGain },
			{ "SetBandQ", &UAtomBusEffectMultiBandEQPreset::execSetBandQ },
			{ "SetDefaultSettings", &UAtomBusEffectMultiBandEQPreset::execSetDefaultSettings },
			{ "SetSettings", &UAtomBusEffectMultiBandEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics
	{
		struct AtomBusEffectMultiBandEQPreset_eventSetBandFilterType_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandFilterType_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandFilterType_Parms, Type), Z_Construct_UEnum_CriWareCore_EAtomBandEQFilterType, METADATA_PARAMS(nullptr, 0) }; // 2612278027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Set the filter type to operate.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Set the filter type to operate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset, nullptr, "SetBandFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::AtomBusEffectMultiBandEQPreset_eventSetBandFilterType_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics
	{
		struct AtomBusEffectMultiBandEQPreset_eventSetBandFrequency_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandFrequency_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Set the filter frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Set the filter frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset, nullptr, "SetBandFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::AtomBusEffectMultiBandEQPreset_eventSetBandFrequency_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics
	{
		struct AtomBusEffectMultiBandEQPreset_eventSetBandGain_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandGain_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandGain_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Set the output gain of the filter.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Set the output gain of the filter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset, nullptr, "SetBandGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::AtomBusEffectMultiBandEQPreset_eventSetBandGain_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics
	{
		struct AtomBusEffectMultiBandEQPreset_eventSetBandQ_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::NewProp_BandIndex = { "BandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandQ_Parms, BandIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetBandQ_Parms, Factor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::NewProp_BandIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::NewProp_Factor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Set the resonance of the filter.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Set the resonance of the filter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset, nullptr, "SetBandQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::AtomBusEffectMultiBandEQPreset_eventSetBandQ_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectMultiBandEQPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectMultiBandEQSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::AtomBusEffectMultiBandEQPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics
	{
		struct AtomBusEffectMultiBandEQPreset_eventSetSettings_Parms
		{
			FAtomBusEffectMultiBandEQSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiBandEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Multi-band EQ" },
		{ "Comment", "// Sets runtime Multi-Band EQ settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ToolTip", "Sets runtime Multi-Band EQ settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::AtomBusEffectMultiBandEQPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectMultiBandEQPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_NoRegister()
	{
		return UAtomBusEffectMultiBandEQPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFilterType, "SetBandFilterType" }, // 315639097
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandFrequency, "SetBandFrequency" }, // 1086784456
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandGain, "SetBandGain" }, // 3682150711
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetBandQ, "SetBandQ" }, // 3263541085
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetDefaultSettings, "SetDefaultSettings" }, // 1936469505
		{ &Z_Construct_UFunction_UAtomBusEffectMultiBandEQPreset_SetSettings, "SetSettings" }, // 158215514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectMultiBandEQPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectMultiBandEQPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The MultiBandEQ preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The MultiBandEQ preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectMultiBandEQPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_Settings_MetaData)) }; // 3732252421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiBandEQ.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectMultiBandEQPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 3732252421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectMultiBandEQPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::ClassParams = {
		&UAtomBusEffectMultiBandEQPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectMultiBandEQPreset>()
	{
		return UAtomBusEffectMultiBandEQPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectMultiBandEQPreset);
	UAtomBusEffectMultiBandEQPreset::~UAtomBusEffectMultiBandEQPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::EnumInfo[] = {
		{ EAtomBandEQFilterType_StaticEnum, TEXT("EAtomBandEQFilterType"), &Z_Registration_Info_UEnum_EAtomBandEQFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2612278027U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::ScriptStructInfo[] = {
		{ FAtomBandEQFilter::StaticStruct, Z_Construct_UScriptStruct_FAtomBandEQFilter_Statics::NewStructOps, TEXT("AtomBandEQFilter"), &Z_Registration_Info_UScriptStruct_AtomBandEQFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBandEQFilter), 3105212075U) },
		{ FAtomBusEffectMultiBandEQSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectMultiBandEQSettings_Statics::NewStructOps, TEXT("AtomBusEffectMultiBandEQSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectMultiBandEQSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectMultiBandEQSettings), 3732252421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectMultiBandEQStatics, UAtomBusEffectMultiBandEQStatics::StaticClass, TEXT("UAtomBusEffectMultiBandEQStatics"), &Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectMultiBandEQStatics), 4141888007U) },
		{ Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset, UAtomBusEffectMultiBandEQPreset::StaticClass, TEXT("UAtomBusEffectMultiBandEQPreset"), &Z_Registration_Info_UClass_UAtomBusEffectMultiBandEQPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectMultiBandEQPreset), 397114213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_611015407(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiBandEQ_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
