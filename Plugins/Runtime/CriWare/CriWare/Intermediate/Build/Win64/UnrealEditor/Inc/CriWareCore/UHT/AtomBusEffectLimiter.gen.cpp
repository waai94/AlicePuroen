// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectLimiter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectLimiter() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectLimiterPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectLimiterPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectLimiterStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectLimiterStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomLimiterType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomLimiterType;
	static UEnum* EAtomLimiterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomLimiterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomLimiterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomLimiterType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomLimiterType"));
		}
		return Z_Registration_Info_UEnum_EAtomLimiterType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomLimiterType>()
	{
		return EAtomLimiterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::Enumerators[] = {
		{ "EAtomLimiterType::Peak", (int64)EAtomLimiterType::Peak },
		{ "EAtomLimiterType::RMS", (int64)EAtomLimiterType::RMS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "Peak.Name", "EAtomLimiterType::Peak" },
		{ "RMS.Name", "EAtomLimiterType::RMS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomLimiterType",
		"EAtomLimiterType",
		Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomLimiterType()
	{
		if (!Z_Registration_Info_UEnum_EAtomLimiterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomLimiterType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomLimiterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomLimiterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings;
class UScriptStruct* FAtomBusEffectLimiterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectLimiterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectLimiterSettings>()
{
	return FAtomBusEffectLimiterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectLimiterSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "* FAtomBusEffectLimiterSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectLimiterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Limiter" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** Specifies the limiter threshold for amplitude compression in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the limiter threshold for amplitude compression in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectLimiterSettings, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Limiter" },
		{ "ClampMax", "3000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the attack time of the limiter in milliseconds.\n\x09 * The time until compression is completed. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Specifies the attack time of the limiter in milliseconds.\nThe time until compression is completed." },
		{ "UIMax", "3000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectLimiterSettings, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Limiter" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the release time of the limiter in milliseconds.\n\x09 * The time from when the amplitude becomes below the threshold until the end of compression. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Specifies the release time of the limiter in milliseconds.\nThe time from when the amplitude becomes below the threshold until the end of compression." },
		{ "UIMax", "50000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectLimiterSettings, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_ReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Limiter" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** Specify the final output gain of the limiter in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specify the final output gain of the limiter in decibels (dB)." },
		{ "UIMax", "48.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectLimiterSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_SurroundLink_MetaData[] = {
		{ "Category", "Limiter" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specify the surround link strength of the limiter.\n\x09 * Surround link function changes the compression strength using the lowest amplitude value in all channels.\n\x09 * 100% fully uses the lowest amplitude value in all channels, while 0% turns off the surround link function.*/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Specify the surround link strength of the limiter.\nSurround link function changes the compression strength using the lowest amplitude value in all channels.\n100% fully uses the lowest amplitude value in all channels, while 0% turns off the surround link function." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
		{ "Units", "%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_SurroundLink = { "SurroundLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectLimiterSettings, SurroundLink), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_SurroundLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_SurroundLink_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Limiter" },
		{ "Comment", "/** Specifies the limiter amplitude detection value type.*/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Specifies the limiter amplitude detection value type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectLimiterSettings, Type), Z_Construct_UEnum_CriWareCore_EAtomLimiterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Type_MetaData)) }; // 1484491930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectLimiterSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectLimiterSettings), &Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_ReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_SurroundLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectLimiterSettings",
		sizeof(FAtomBusEffectLimiterSettings),
		alignof(FAtomBusEffectLimiterSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_LimiterSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectLimiterSettings*)Z_Param__Result=UAtomBusEffectLimiterStatics::SetBypass(Z_Param_Out_LimiterSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterStatics::execSetType)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_LimiterSettings);
		P_GET_ENUM(EAtomLimiterType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectLimiterSettings*)Z_Param__Result=UAtomBusEffectLimiterStatics::SetType(Z_Param_Out_LimiterSettings,EAtomLimiterType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterStatics::execSetSurroundLink)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_LimiterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurroundLink);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectLimiterSettings*)Z_Param__Result=UAtomBusEffectLimiterStatics::SetSurroundLink(Z_Param_Out_LimiterSettings,Z_Param_SurroundLink);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterStatics::execSetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_LimiterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectLimiterSettings*)Z_Param__Result=UAtomBusEffectLimiterStatics::SetGain(Z_Param_Out_LimiterSettings,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterStatics::execSetReleaseTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_LimiterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectLimiterSettings*)Z_Param__Result=UAtomBusEffectLimiterStatics::SetReleaseTime(Z_Param_Out_LimiterSettings,Z_Param_ReleaseTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterStatics::execSetAttackTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_LimiterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectLimiterSettings*)Z_Param__Result=UAtomBusEffectLimiterStatics::SetAttackTime(Z_Param_Out_LimiterSettings,Z_Param_AttackTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterStatics::execSetThreshold)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_LimiterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectLimiterSettings*)Z_Param__Result=UAtomBusEffectLimiterStatics::SetThreshold(Z_Param_Out_LimiterSettings,Z_Param_Threshold);
		P_NATIVE_END;
	}
	void UAtomBusEffectLimiterStatics::StaticRegisterNativesUAtomBusEffectLimiterStatics()
	{
		UClass* Class = UAtomBusEffectLimiterStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttackTime", &UAtomBusEffectLimiterStatics::execSetAttackTime },
			{ "SetBypass", &UAtomBusEffectLimiterStatics::execSetBypass },
			{ "SetGain", &UAtomBusEffectLimiterStatics::execSetGain },
			{ "SetReleaseTime", &UAtomBusEffectLimiterStatics::execSetReleaseTime },
			{ "SetSurroundLink", &UAtomBusEffectLimiterStatics::execSetSurroundLink },
			{ "SetThreshold", &UAtomBusEffectLimiterStatics::execSetThreshold },
			{ "SetType", &UAtomBusEffectLimiterStatics::execSetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics
	{
		struct AtomBusEffectLimiterStatics_eventSetAttackTime_Parms
		{
			FAtomBusEffectLimiterSettings LimiterSettings;
			float AttackTime;
			FAtomBusEffectLimiterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimiterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::NewProp_LimiterSettings = { "LimiterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetAttackTime_Parms, LimiterSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetAttackTime_Parms, AttackTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetAttackTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::NewProp_LimiterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterStatics, nullptr, "SetAttackTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::AtomBusEffectLimiterStatics_eventSetAttackTime_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics
	{
		struct AtomBusEffectLimiterStatics_eventSetBypass_Parms
		{
			FAtomBusEffectLimiterSettings LimiterSettings;
			bool bBypass;
			FAtomBusEffectLimiterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimiterSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_LimiterSettings = { "LimiterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetBypass_Parms, LimiterSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	void Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectLimiterStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectLimiterStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_LimiterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::AtomBusEffectLimiterStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics
	{
		struct AtomBusEffectLimiterStatics_eventSetGain_Parms
		{
			FAtomBusEffectLimiterSettings LimiterSettings;
			float Gain;
			FAtomBusEffectLimiterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimiterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::NewProp_LimiterSettings = { "LimiterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetGain_Parms, LimiterSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::NewProp_LimiterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterStatics, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::AtomBusEffectLimiterStatics_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics
	{
		struct AtomBusEffectLimiterStatics_eventSetReleaseTime_Parms
		{
			FAtomBusEffectLimiterSettings LimiterSettings;
			float ReleaseTime;
			FAtomBusEffectLimiterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimiterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::NewProp_LimiterSettings = { "LimiterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetReleaseTime_Parms, LimiterSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetReleaseTime_Parms, ReleaseTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetReleaseTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::NewProp_LimiterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::NewProp_ReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterStatics, nullptr, "SetReleaseTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::AtomBusEffectLimiterStatics_eventSetReleaseTime_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics
	{
		struct AtomBusEffectLimiterStatics_eventSetSurroundLink_Parms
		{
			FAtomBusEffectLimiterSettings LimiterSettings;
			float SurroundLink;
			FAtomBusEffectLimiterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimiterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundLink;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::NewProp_LimiterSettings = { "LimiterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetSurroundLink_Parms, LimiterSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::NewProp_SurroundLink = { "SurroundLink", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetSurroundLink_Parms, SurroundLink), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetSurroundLink_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::NewProp_LimiterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::NewProp_SurroundLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterStatics, nullptr, "SetSurroundLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::AtomBusEffectLimiterStatics_eventSetSurroundLink_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics
	{
		struct AtomBusEffectLimiterStatics_eventSetThreshold_Parms
		{
			FAtomBusEffectLimiterSettings LimiterSettings;
			float Threshold;
			FAtomBusEffectLimiterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimiterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::NewProp_LimiterSettings = { "LimiterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetThreshold_Parms, LimiterSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetThreshold_Parms, Threshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetThreshold_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::NewProp_LimiterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterStatics, nullptr, "SetThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::AtomBusEffectLimiterStatics_eventSetThreshold_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics
	{
		struct AtomBusEffectLimiterStatics_eventSetType_Parms
		{
			FAtomBusEffectLimiterSettings LimiterSettings;
			EAtomLimiterType Type;
			FAtomBusEffectLimiterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimiterSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_LimiterSettings = { "LimiterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetType_Parms, LimiterSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetType_Parms, Type), Z_Construct_UEnum_CriWareCore_EAtomLimiterType, METADATA_PARAMS(nullptr, 0) }; // 1484491930
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterStatics_eventSetType_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(nullptr, 0) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_LimiterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterStatics, nullptr, "SetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::AtomBusEffectLimiterStatics_eventSetType_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectLimiterStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectLimiterStatics_NoRegister()
	{
		return UAtomBusEffectLimiterStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetAttackTime, "SetAttackTime" }, // 178485714
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetBypass, "SetBypass" }, // 334195052
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetGain, "SetGain" }, // 1788379873
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetReleaseTime, "SetReleaseTime" }, // 761294258
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetSurroundLink, "SetSurroundLink" }, // 4242229359
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetThreshold, "SetThreshold" }, // 1900482970
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterStatics_SetType, "SetType" }, // 1708536010
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectLimiterStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "* UAtomBusEffectLimiterStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectLimiterStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::ClassParams = {
		&UAtomBusEffectLimiterStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectLimiterStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectLimiterStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectLimiterStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectLimiterStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectLimiterStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectLimiterStatics>()
	{
		return UAtomBusEffectLimiterStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectLimiterStatics);
	UAtomBusEffectLimiterStatics::~UAtomBusEffectLimiterStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetType)
	{
		P_GET_ENUM(EAtomLimiterType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetType(EAtomLimiterType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetSurroundLink)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurroundLink(Z_Param_Percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetReleaseTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReleaseTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetAttackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThreshold(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectLimiterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectLimiterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectLimiterPreset::StaticRegisterNativesUAtomBusEffectLimiterPreset()
	{
		UClass* Class = UAtomBusEffectLimiterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttackTime", &UAtomBusEffectLimiterPreset::execSetAttackTime },
			{ "SetDefaultSettings", &UAtomBusEffectLimiterPreset::execSetDefaultSettings },
			{ "SetGain", &UAtomBusEffectLimiterPreset::execSetGain },
			{ "SetReleaseTime", &UAtomBusEffectLimiterPreset::execSetReleaseTime },
			{ "SetSettings", &UAtomBusEffectLimiterPreset::execSetSettings },
			{ "SetSurroundLink", &UAtomBusEffectLimiterPreset::execSetSurroundLink },
			{ "SetThreshold", &UAtomBusEffectLimiterPreset::execSetThreshold },
			{ "SetType", &UAtomBusEffectLimiterPreset::execSetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetAttackTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetAttackTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Set the limiter attack time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Set the limiter attack time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetAttackTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::AtomBusEffectLimiterPreset_eventSetAttackTime_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectLimiterSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::AtomBusEffectLimiterPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Set the output gain, in decibels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Set the output gain, in decibels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::AtomBusEffectLimiterPreset_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetReleaseTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetReleaseTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Set the limiter release time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Set the limiter release time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetReleaseTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::AtomBusEffectLimiterPreset_eventSetReleaseTime_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetSettings_Parms
		{
			FAtomBusEffectLimiterSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Sets runtime limiter settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Sets runtime limiter settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::AtomBusEffectLimiterPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetSurroundLink_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetSurroundLink_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::NewProp_Percent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Set the strength of the surround link.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Set the strength of the surround link." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetSurroundLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::AtomBusEffectLimiterPreset_eventSetSurroundLink_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetThreshold_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetThreshold_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Set the limiter threshold, in decibels [-96, 0].\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Set the limiter threshold, in decibels [-96, 0]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::AtomBusEffectLimiterPreset_eventSetThreshold_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics
	{
		struct AtomBusEffectLimiterPreset_eventSetType_Parms
		{
			EAtomLimiterType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectLimiterPreset_eventSetType_Parms, Type), Z_Construct_UEnum_CriWareCore_EAtomLimiterType, METADATA_PARAMS(nullptr, 0) }; // 1484491930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Limiter" },
		{ "Comment", "// Set the amplitude detection value type.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ToolTip", "Set the amplitude detection value type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectLimiterPreset, nullptr, "SetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::AtomBusEffectLimiterPreset_eventSetType_Parms), Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectLimiterPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectLimiterPreset_NoRegister()
	{
		return UAtomBusEffectLimiterPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetAttackTime, "SetAttackTime" }, // 394353037
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2070478455
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetGain, "SetGain" }, // 1076902328
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetReleaseTime, "SetReleaseTime" }, // 2861379865
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSettings, "SetSettings" }, // 2023371032
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetSurroundLink, "SetSurroundLink" }, // 1555074101
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetThreshold, "SetThreshold" }, // 3688780896
		{ &Z_Construct_UFunction_UAtomBusEffectLimiterPreset_SetType, "SetType" }, // 2670311631
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectLimiterPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectLimiterPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Delay preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Delay preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectLimiterPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_Settings_MetaData)) }; // 2884220837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectLimiter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectLimiterPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 2884220837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectLimiterPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::ClassParams = {
		&UAtomBusEffectLimiterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectLimiterPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectLimiterPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectLimiterPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectLimiterPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectLimiterPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectLimiterPreset>()
	{
		return UAtomBusEffectLimiterPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectLimiterPreset);
	UAtomBusEffectLimiterPreset::~UAtomBusEffectLimiterPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::EnumInfo[] = {
		{ EAtomLimiterType_StaticEnum, TEXT("EAtomLimiterType"), &Z_Registration_Info_UEnum_EAtomLimiterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1484491930U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectLimiterSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectLimiterSettings_Statics::NewStructOps, TEXT("AtomBusEffectLimiterSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectLimiterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectLimiterSettings), 2884220837U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectLimiterStatics, UAtomBusEffectLimiterStatics::StaticClass, TEXT("UAtomBusEffectLimiterStatics"), &Z_Registration_Info_UClass_UAtomBusEffectLimiterStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectLimiterStatics), 3466324006U) },
		{ Z_Construct_UClass_UAtomBusEffectLimiterPreset, UAtomBusEffectLimiterPreset::StaticClass, TEXT("UAtomBusEffectLimiterPreset"), &Z_Registration_Info_UClass_UAtomBusEffectLimiterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectLimiterPreset), 2667872364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_2840565043(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectLimiter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
