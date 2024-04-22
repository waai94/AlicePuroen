// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectBiquadFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectBiquadFilter() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomBiquadFilterType;
	static UEnum* EAtomBiquadFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomBiquadFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomBiquadFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomBiquadFilterType"));
		}
		return Z_Registration_Info_UEnum_EAtomBiquadFilterType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomBiquadFilterType>()
	{
		return EAtomBiquadFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::Enumerators[] = {
		{ "EAtomBiquadFilterType::LowPass", (int64)EAtomBiquadFilterType::LowPass },
		{ "EAtomBiquadFilterType::HighPass", (int64)EAtomBiquadFilterType::HighPass },
		{ "EAtomBiquadFilterType::Notch", (int64)EAtomBiquadFilterType::Notch },
		{ "EAtomBiquadFilterType::LowShelf", (int64)EAtomBiquadFilterType::LowShelf },
		{ "EAtomBiquadFilterType::HighShelf", (int64)EAtomBiquadFilterType::HighShelf },
		{ "EAtomBiquadFilterType::Peaking", (int64)EAtomBiquadFilterType::Peaking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HighPass.Name", "EAtomBiquadFilterType::HighPass" },
		{ "HighShelf.Name", "EAtomBiquadFilterType::HighShelf" },
		{ "LowPass.Name", "EAtomBiquadFilterType::LowPass" },
		{ "LowShelf.Name", "EAtomBiquadFilterType::LowShelf" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "Notch.Name", "EAtomBiquadFilterType::Notch" },
		{ "Peaking.Name", "EAtomBiquadFilterType::Peaking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomBiquadFilterType",
		"EAtomBiquadFilterType",
		Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType()
	{
		if (!Z_Registration_Info_UEnum_EAtomBiquadFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomBiquadFilterType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomBiquadFilterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings;
class UScriptStruct* FAtomBusEffectBiquadFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectBiquadFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectBiquadFilterSettings>()
{
	return FAtomBusEffectBiquadFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Q_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Q;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectBiquadFilterSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "* FAtomBusEffectBiquadFilterSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectBiquadFilterSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Biquad Filter" },
		{ "Comment", "/** Specifies the filter type to operate for the biquad filter.*/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Specifies the filter type to operate for the biquad filter." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBiquadFilterSettings, FilterType), Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_FilterType_MetaData)) }; // 2997813485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Cutoff_MetaData[] = {
		{ "Category", "Biquad Filter" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "24.0" },
		{ "Comment", "/** Specifies the cutoff frequency of the biquad filter. (Hz) */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the cutoff frequency of the biquad filter. (Hz)" },
		{ "UIMax", "24000.0" },
		{ "UIMin", "24.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Cutoff = { "Cutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBiquadFilterSettings, Cutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Cutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Cutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Q_MetaData[] = {
		{ "Category", "Biquad Filter" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Specifies the Q factor (resonance) of the biquad filter.*/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the Q factor (resonance) of the biquad filter." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBiquadFilterSettings, Q), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Q_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Q_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Biquad Filter" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the biquad filter output gain for low/high shelf or Peaking filters. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Specifies the biquad filter output gain for low/high shelf or Peaking filters." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBiquadFilterSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectBiquadFilterSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectBiquadFilterSettings), &Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Cutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectBiquadFilterSettings",
		sizeof(FAtomBusEffectBiquadFilterSettings),
		alignof(FAtomBusEffectBiquadFilterSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBiquadFilterSettings,Z_Param_Out_BiquadFilterSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBiquadFilterSettings*)Z_Param__Result=UAtomBusEffectBiquadFilterStatics::SetBypass(Z_Param_Out_BiquadFilterSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterStatics::execSetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBiquadFilterSettings,Z_Param_Out_BiquadFilterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBiquadFilterSettings*)Z_Param__Result=UAtomBusEffectBiquadFilterStatics::SetGain(Z_Param_Out_BiquadFilterSettings,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterStatics::execSetQ)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBiquadFilterSettings,Z_Param_Out_BiquadFilterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Q);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBiquadFilterSettings*)Z_Param__Result=UAtomBusEffectBiquadFilterStatics::SetQ(Z_Param_Out_BiquadFilterSettings,Z_Param_Q);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterStatics::execSetCutoff)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBiquadFilterSettings,Z_Param_Out_BiquadFilterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBiquadFilterSettings*)Z_Param__Result=UAtomBusEffectBiquadFilterStatics::SetCutoff(Z_Param_Out_BiquadFilterSettings,Z_Param_Cutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterStatics::execSetLowCutoff)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBiquadFilterSettings,Z_Param_Out_BiquadFilterSettings);
		P_GET_ENUM(EAtomBiquadFilterType,Z_Param_FilterType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBiquadFilterSettings*)Z_Param__Result=UAtomBusEffectBiquadFilterStatics::SetLowCutoff(Z_Param_Out_BiquadFilterSettings,EAtomBiquadFilterType(Z_Param_FilterType));
		P_NATIVE_END;
	}
	void UAtomBusEffectBiquadFilterStatics::StaticRegisterNativesUAtomBusEffectBiquadFilterStatics()
	{
		UClass* Class = UAtomBusEffectBiquadFilterStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectBiquadFilterStatics::execSetBypass },
			{ "SetCutoff", &UAtomBusEffectBiquadFilterStatics::execSetCutoff },
			{ "SetGain", &UAtomBusEffectBiquadFilterStatics::execSetGain },
			{ "SetLowCutoff", &UAtomBusEffectBiquadFilterStatics::execSetLowCutoff },
			{ "SetQ", &UAtomBusEffectBiquadFilterStatics::execSetQ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics
	{
		struct AtomBusEffectBiquadFilterStatics_eventSetBypass_Parms
		{
			FAtomBusEffectBiquadFilterSettings BiquadFilterSettings;
			bool bBypass;
			FAtomBusEffectBiquadFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiquadFilterSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_BiquadFilterSettings = { "BiquadFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetBypass_Parms, BiquadFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	void Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectBiquadFilterStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectBiquadFilterStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_BiquadFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::AtomBusEffectBiquadFilterStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics
	{
		struct AtomBusEffectBiquadFilterStatics_eventSetCutoff_Parms
		{
			FAtomBusEffectBiquadFilterSettings BiquadFilterSettings;
			float Cutoff;
			FAtomBusEffectBiquadFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiquadFilterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cutoff;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::NewProp_BiquadFilterSettings = { "BiquadFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetCutoff_Parms, BiquadFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::NewProp_Cutoff = { "Cutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetCutoff_Parms, Cutoff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetCutoff_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::NewProp_BiquadFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::NewProp_Cutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics, nullptr, "SetCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::AtomBusEffectBiquadFilterStatics_eventSetCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics
	{
		struct AtomBusEffectBiquadFilterStatics_eventSetGain_Parms
		{
			FAtomBusEffectBiquadFilterSettings BiquadFilterSettings;
			float Gain;
			FAtomBusEffectBiquadFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiquadFilterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::NewProp_BiquadFilterSettings = { "BiquadFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetGain_Parms, BiquadFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::NewProp_BiquadFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::AtomBusEffectBiquadFilterStatics_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics
	{
		struct AtomBusEffectBiquadFilterStatics_eventSetLowCutoff_Parms
		{
			FAtomBusEffectBiquadFilterSettings BiquadFilterSettings;
			EAtomBiquadFilterType FilterType;
			FAtomBusEffectBiquadFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiquadFilterSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_BiquadFilterSettings = { "BiquadFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetLowCutoff_Parms, BiquadFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetLowCutoff_Parms, FilterType), Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType, METADATA_PARAMS(nullptr, 0) }; // 2997813485
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetLowCutoff_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_BiquadFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics, nullptr, "SetLowCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::AtomBusEffectBiquadFilterStatics_eventSetLowCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics
	{
		struct AtomBusEffectBiquadFilterStatics_eventSetQ_Parms
		{
			FAtomBusEffectBiquadFilterSettings BiquadFilterSettings;
			float Q;
			FAtomBusEffectBiquadFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiquadFilterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Q;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::NewProp_BiquadFilterSettings = { "BiquadFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetQ_Parms, BiquadFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetQ_Parms, Q), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterStatics_eventSetQ_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::NewProp_BiquadFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics, nullptr, "SetQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::AtomBusEffectBiquadFilterStatics_eventSetQ_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBiquadFilterStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_NoRegister()
	{
		return UAtomBusEffectBiquadFilterStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetBypass, "SetBypass" }, // 2567268333
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetCutoff, "SetCutoff" }, // 3228109456
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetGain, "SetGain" }, // 2981462817
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetLowCutoff, "SetLowCutoff" }, // 3281555951
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterStatics_SetQ, "SetQ" }, // 945387777
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBiquadFilterStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "* UAtomBusEffectBiquadFilterStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBiquadFilterStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::ClassParams = {
		&UAtomBusEffectBiquadFilterStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBiquadFilterStatics>()
	{
		return UAtomBusEffectBiquadFilterStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBiquadFilterStatics);
	UAtomBusEffectBiquadFilterStatics::~UAtomBusEffectBiquadFilterStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterPreset::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterPreset::execSetQ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Factor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQ(Z_Param_Factor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterPreset::execSetCutoff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCutoff(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterPreset::execSetFilterType)
	{
		P_GET_ENUM(EAtomBiquadFilterType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterType(EAtomBiquadFilterType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBiquadFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBiquadFilterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBiquadFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectBiquadFilterPreset::StaticRegisterNativesUAtomBusEffectBiquadFilterPreset()
	{
		UClass* Class = UAtomBusEffectBiquadFilterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCutoff", &UAtomBusEffectBiquadFilterPreset::execSetCutoff },
			{ "SetDefaultSettings", &UAtomBusEffectBiquadFilterPreset::execSetDefaultSettings },
			{ "SetFilterType", &UAtomBusEffectBiquadFilterPreset::execSetFilterType },
			{ "SetGain", &UAtomBusEffectBiquadFilterPreset::execSetGain },
			{ "SetQ", &UAtomBusEffectBiquadFilterPreset::execSetQ },
			{ "SetSettings", &UAtomBusEffectBiquadFilterPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics
	{
		struct AtomBusEffectBiquadFilterPreset_eventSetCutoff_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterPreset_eventSetCutoff_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "Comment", "// Set the cutoff frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Set the cutoff frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset, nullptr, "SetCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::AtomBusEffectBiquadFilterPreset_eventSetCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectBiquadFilterPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectBiquadFilterSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::AtomBusEffectBiquadFilterPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics
	{
		struct AtomBusEffectBiquadFilterPreset_eventSetFilterType_Parms
		{
			EAtomBiquadFilterType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterPreset_eventSetFilterType_Parms, Type), Z_Construct_UEnum_CriWareCore_EAtomBiquadFilterType, METADATA_PARAMS(nullptr, 0) }; // 2997813485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "Comment", "// Set the type of filter to operate.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Set the type of filter to operate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset, nullptr, "SetFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::AtomBusEffectBiquadFilterPreset_eventSetFilterType_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics
	{
		struct AtomBusEffectBiquadFilterPreset_eventSetGain_Parms
		{
			float Level;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterPreset_eventSetGain_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "Comment", "// Set the output gain for shelf or peaking filters.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Set the output gain for shelf or peaking filters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::AtomBusEffectBiquadFilterPreset_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics
	{
		struct AtomBusEffectBiquadFilterPreset_eventSetQ_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterPreset_eventSetQ_Parms, Factor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::NewProp_Factor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "Comment", "// Set the resonance of the filter.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Set the resonance of the filter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset, nullptr, "SetQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::AtomBusEffectBiquadFilterPreset_eventSetQ_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics
	{
		struct AtomBusEffectBiquadFilterPreset_eventSetSettings_Parms
		{
			FAtomBusEffectBiquadFilterSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBiquadFilterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|BiquadFilter" },
		{ "Comment", "// Sets runtime BiquadFilter settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ToolTip", "Sets runtime BiquadFilter settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::AtomBusEffectBiquadFilterPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBiquadFilterPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_NoRegister()
	{
		return UAtomBusEffectBiquadFilterPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetCutoff, "SetCutoff" }, // 3905859130
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2640807516
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetFilterType, "SetFilterType" }, // 101627454
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetGain, "SetGain" }, // 490997598
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetQ, "SetQ" }, // 1091461335
		{ &Z_Construct_UFunction_UAtomBusEffectBiquadFilterPreset_SetSettings, "SetSettings" }, // 2876069072
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBiquadFilterPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectBiquadFilterPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The BiquadFilter preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The BiquadFilter preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBiquadFilterPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_Settings_MetaData)) }; // 3848021317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBiquadFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBiquadFilterPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 3848021317
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBiquadFilterPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::ClassParams = {
		&UAtomBusEffectBiquadFilterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBiquadFilterPreset>()
	{
		return UAtomBusEffectBiquadFilterPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBiquadFilterPreset);
	UAtomBusEffectBiquadFilterPreset::~UAtomBusEffectBiquadFilterPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::EnumInfo[] = {
		{ EAtomBiquadFilterType_StaticEnum, TEXT("EAtomBiquadFilterType"), &Z_Registration_Info_UEnum_EAtomBiquadFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2997813485U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectBiquadFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectBiquadFilterSettings_Statics::NewStructOps, TEXT("AtomBusEffectBiquadFilterSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectBiquadFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectBiquadFilterSettings), 3848021317U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectBiquadFilterStatics, UAtomBusEffectBiquadFilterStatics::StaticClass, TEXT("UAtomBusEffectBiquadFilterStatics"), &Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBiquadFilterStatics), 1543827901U) },
		{ Z_Construct_UClass_UAtomBusEffectBiquadFilterPreset, UAtomBusEffectBiquadFilterPreset::StaticClass, TEXT("UAtomBusEffectBiquadFilterPreset"), &Z_Registration_Info_UClass_UAtomBusEffectBiquadFilterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBiquadFilterPreset), 2791694164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_1468848068(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBiquadFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
