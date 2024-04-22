// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectChorus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectChorus() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectChorusPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectChorusPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectChorusStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectChorusStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings;
class UScriptStruct* FAtomBusEffectChorusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectChorusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectChorusSettings>()
{
	return FAtomBusEffectChorusSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryMix_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetMix1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetMix2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetMix3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix3;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectChorusSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "* FAtomBusEffectChorusSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectChorusSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Specify the delay time of the chorus (delay at the center of the LFO). (milliseconds) */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Specify the delay time of the chorus (delay at the center of the LFO). (milliseconds)" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the depth of the chorus LFO (amplitude). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Specifies the depth of the chorus LFO (amplitude)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Specifies the rate of the chorus LFO in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the rate of the chorus LFO in hertz." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.01" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the chorus feedack gain. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Specifies the chorus feedack gain." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DryMix_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the dry (original sound) of the chorus. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Specifies the mixing ratio of the dry (original sound) of the chorus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, DryMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DryMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DryMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix1_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the first tap wet (modified sound) of the chorus. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Specifies the mixing ratio of the first tap wet (modified sound) of the chorus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix1 = { "WetMix1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, WetMix1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix2_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the second tap wet (modified sound) of the chorus. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Specifies the mixing ratio of the second tap wet (modified sound) of the chorus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix2 = { "WetMix2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, WetMix2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix3_MetaData[] = {
		{ "Category", "Chorus" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the third tap wet (modified sound) of the chorus. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Specifies the mixing ratio of the third tap wet (modified sound) of the chorus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix3 = { "WetMix3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, WetMix3), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_MaximumDelayTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "//~ End effect parameters\n" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectChorusSettings, MaximumDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_MaximumDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_MaximumDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectChorusSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectChorusSettings), &Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_WetMix3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectChorusSettings",
		sizeof(FAtomBusEffectChorusSettings),
		alignof(FAtomBusEffectChorusSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetBypass(Z_Param_Out_ChorusSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetMaximumDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetMaximumDelayTime(Z_Param_Out_ChorusSettings,Z_Param_MaximumDelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetWetMix3)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetMix3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetWetMix3(Z_Param_Out_ChorusSettings,Z_Param_WetMix3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetWetMix2)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetMix2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetWetMix2(Z_Param_Out_ChorusSettings,Z_Param_WetMix2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetWetMix1)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetMix1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetWetMix1(Z_Param_Out_ChorusSettings,Z_Param_WetMix1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetDryMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetDryMix(Z_Param_Out_ChorusSettings,Z_Param_DryMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetFeedback)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetFeedback(Z_Param_Out_ChorusSettings,Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetRate)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetRate(Z_Param_Out_ChorusSettings,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetDepth)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetDepth(Z_Param_Out_ChorusSettings,Z_Param_Depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusStatics::execSetDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_ChorusSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectChorusSettings*)Z_Param__Result=UAtomBusEffectChorusStatics::SetDelayTime(Z_Param_Out_ChorusSettings,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	void UAtomBusEffectChorusStatics::StaticRegisterNativesUAtomBusEffectChorusStatics()
	{
		UClass* Class = UAtomBusEffectChorusStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectChorusStatics::execSetBypass },
			{ "SetDelayTime", &UAtomBusEffectChorusStatics::execSetDelayTime },
			{ "SetDepth", &UAtomBusEffectChorusStatics::execSetDepth },
			{ "SetDryMix", &UAtomBusEffectChorusStatics::execSetDryMix },
			{ "SetFeedback", &UAtomBusEffectChorusStatics::execSetFeedback },
			{ "SetMaximumDelayTime", &UAtomBusEffectChorusStatics::execSetMaximumDelayTime },
			{ "SetRate", &UAtomBusEffectChorusStatics::execSetRate },
			{ "SetWetMix1", &UAtomBusEffectChorusStatics::execSetWetMix1 },
			{ "SetWetMix2", &UAtomBusEffectChorusStatics::execSetWetMix2 },
			{ "SetWetMix3", &UAtomBusEffectChorusStatics::execSetWetMix3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetBypass_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			bool bBypass;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetBypass_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	void Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectChorusStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectChorusStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::AtomBusEffectChorusStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetDelayTime_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float DelayTime;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDelayTime_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDelayTime_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::AtomBusEffectChorusStatics_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetDepth_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float Depth;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDepth_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDepth_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDepth_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::AtomBusEffectChorusStatics_eventSetDepth_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetDryMix_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float DryMix;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDryMix_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDryMix_Parms, DryMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetDryMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::AtomBusEffectChorusStatics_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetFeedback_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float Feedback;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetFeedback_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetFeedback_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::AtomBusEffectChorusStatics_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetMaximumDelayTime_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float MaximumDelayTime;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetMaximumDelayTime_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetMaximumDelayTime_Parms, MaximumDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetMaximumDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetMaximumDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::AtomBusEffectChorusStatics_eventSetMaximumDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetRate_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float Rate;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetRate_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::AtomBusEffectChorusStatics_eventSetRate_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetWetMix1_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float WetMix1;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix1_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::NewProp_WetMix1 = { "WetMix1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix1_Parms, WetMix1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix1_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::NewProp_WetMix1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetWetMix1", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::AtomBusEffectChorusStatics_eventSetWetMix1_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetWetMix2_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float WetMix2;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix2_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::NewProp_WetMix2 = { "WetMix2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix2_Parms, WetMix2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix2_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::NewProp_WetMix2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetWetMix2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::AtomBusEffectChorusStatics_eventSetWetMix2_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics
	{
		struct AtomBusEffectChorusStatics_eventSetWetMix3_Parms
		{
			FAtomBusEffectChorusSettings ChorusSettings;
			float WetMix3;
			FAtomBusEffectChorusSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChorusSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::NewProp_ChorusSettings = { "ChorusSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix3_Parms, ChorusSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::NewProp_WetMix3 = { "WetMix3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix3_Parms, WetMix3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusStatics_eventSetWetMix3_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(nullptr, 0) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::NewProp_ChorusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::NewProp_WetMix3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusStatics, nullptr, "SetWetMix3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::AtomBusEffectChorusStatics_eventSetWetMix3_Parms), Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectChorusStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectChorusStatics_NoRegister()
	{
		return UAtomBusEffectChorusStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetBypass, "SetBypass" }, // 2864627206
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDelayTime, "SetDelayTime" }, // 134901691
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDepth, "SetDepth" }, // 3202603352
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetDryMix, "SetDryMix" }, // 513181494
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetFeedback, "SetFeedback" }, // 973632980
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetMaximumDelayTime, "SetMaximumDelayTime" }, // 2069986990
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetRate, "SetRate" }, // 4224470542
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix1, "SetWetMix1" }, // 5303491
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix2, "SetWetMix2" }, // 2884821785
		{ &Z_Construct_UFunction_UAtomBusEffectChorusStatics_SetWetMix3, "SetWetMix3" }, // 1661127798
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectChorusStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectChorus.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "* UAtomBusEffectChorusStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectChorusStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::ClassParams = {
		&UAtomBusEffectChorusStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectChorusStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectChorusStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectChorusStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectChorusStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectChorusStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectChorusStatics>()
	{
		return UAtomBusEffectChorusStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectChorusStatics);
	UAtomBusEffectChorusStatics::~UAtomBusEffectChorusStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execGetMaxDelayTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDelayTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetWetMix3)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetMix3(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetWetMix2)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetMix2(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetWetMix1)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetMix1(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetDryMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedback(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepth(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetDelayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelayTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectChorusPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectChorusSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectChorusPreset::StaticRegisterNativesUAtomBusEffectChorusPreset()
	{
		UClass* Class = UAtomBusEffectChorusPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxDelayTime", &UAtomBusEffectChorusPreset::execGetMaxDelayTime },
			{ "SetDefaultSettings", &UAtomBusEffectChorusPreset::execSetDefaultSettings },
			{ "SetDelayTime", &UAtomBusEffectChorusPreset::execSetDelayTime },
			{ "SetDepth", &UAtomBusEffectChorusPreset::execSetDepth },
			{ "SetDryMix", &UAtomBusEffectChorusPreset::execSetDryMix },
			{ "SetFeedback", &UAtomBusEffectChorusPreset::execSetFeedback },
			{ "SetRate", &UAtomBusEffectChorusPreset::execSetRate },
			{ "SetSettings", &UAtomBusEffectChorusPreset::execSetSettings },
			{ "SetWetMix1", &UAtomBusEffectChorusPreset::execSetWetMix1 },
			{ "SetWetMix2", &UAtomBusEffectChorusPreset::execSetWetMix2 },
			{ "SetWetMix3", &UAtomBusEffectChorusPreset::execSetWetMix3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics
	{
		struct AtomBusEffectChorusPreset_eventGetMaxDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventGetMaxDelayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "Comment", "// Get the maximum delay time possible, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Get the maximum delay time possible, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "GetMaxDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::AtomBusEffectChorusPreset_eventGetMaxDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectChorusSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::AtomBusEffectChorusPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetDelayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Set the delay time in millisecondes.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Set the delay time in millisecondes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::AtomBusEffectChorusPreset_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetDepth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetDepth_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Set depth, amplitude of LFO.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Set depth, amplitude of LFO." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::AtomBusEffectChorusPreset_eventSetDepth_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetDryMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetDryMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Set the dry mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Set the dry mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::AtomBusEffectChorusPreset_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetFeedback_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetFeedback_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Set the feedback level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Set the feedback level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::AtomBusEffectChorusPreset_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetRate_Parms
		{
			float Rate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Set the LFO rate in hertz.\x09\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Set the LFO rate in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::AtomBusEffectChorusPreset_eventSetRate_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetSettings_Parms
		{
			FAtomBusEffectChorusSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Sets runtime Chorus settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Sets runtime Chorus settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::AtomBusEffectChorusPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetWetMix1_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetWetMix1_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Get the first tap wet mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Get the first tap wet mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetWetMix1", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::AtomBusEffectChorusPreset_eventSetWetMix1_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetWetMix2_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetWetMix2_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Get the second tap wet mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Get the second tap wet mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetWetMix2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::AtomBusEffectChorusPreset_eventSetWetMix2_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics
	{
		struct AtomBusEffectChorusPreset_eventSetWetMix3_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectChorusPreset_eventSetWetMix3_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Chorus" },
		{ "Comment", "// Get the third tap wet mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ToolTip", "Get the third tap wet mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectChorusPreset, nullptr, "SetWetMix3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::AtomBusEffectChorusPreset_eventSetWetMix3_Parms), Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectChorusPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectChorusPreset_NoRegister()
	{
		return UAtomBusEffectChorusPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_GetMaxDelayTime, "GetMaxDelayTime" }, // 1957180133
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDefaultSettings, "SetDefaultSettings" }, // 4091245885
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDelayTime, "SetDelayTime" }, // 1018653449
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDepth, "SetDepth" }, // 2569153092
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetDryMix, "SetDryMix" }, // 1803557141
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetFeedback, "SetFeedback" }, // 2028076976
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetRate, "SetRate" }, // 36139749
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetSettings, "SetSettings" }, // 385294952
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix1, "SetWetMix1" }, // 3938620258
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix2, "SetWetMix2" }, // 2466595460
		{ &Z_Construct_UFunction_UAtomBusEffectChorusPreset_SetWetMix3, "SetWetMix3" }, // 600763842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectChorusPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectChorus.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectChorusPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Chorus preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Chorus preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectChorusPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_Settings_MetaData)) }; // 1351967700
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectChorusPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 1351967700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectChorusPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::ClassParams = {
		&UAtomBusEffectChorusPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectChorusPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectChorusPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectChorusPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectChorusPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectChorusPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectChorusPreset>()
	{
		return UAtomBusEffectChorusPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectChorusPreset);
	UAtomBusEffectChorusPreset::~UAtomBusEffectChorusPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectChorusSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectChorusSettings_Statics::NewStructOps, TEXT("AtomBusEffectChorusSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectChorusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectChorusSettings), 1351967700U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectChorusStatics, UAtomBusEffectChorusStatics::StaticClass, TEXT("UAtomBusEffectChorusStatics"), &Z_Registration_Info_UClass_UAtomBusEffectChorusStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectChorusStatics), 527496038U) },
		{ Z_Construct_UClass_UAtomBusEffectChorusPreset, UAtomBusEffectChorusPreset::StaticClass, TEXT("UAtomBusEffectChorusPreset"), &Z_Registration_Info_UClass_UAtomBusEffectChorusPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectChorusPreset), 259464411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_1504822258(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectChorus_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
