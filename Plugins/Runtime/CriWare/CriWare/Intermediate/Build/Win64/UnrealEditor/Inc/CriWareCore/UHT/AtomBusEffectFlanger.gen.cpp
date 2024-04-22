// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectFlanger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectFlanger() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectFlangerPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectFlangerPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectFlangerStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectFlangerStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings;
class UScriptStruct* FAtomBusEffectFlangerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectFlangerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectFlangerSettings>()
{
	return FAtomBusEffectFlangerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetMix_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectFlangerSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "* FAtomBusEffectFlangerSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectFlangerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Flanger" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Specify the delay time of the flanger (delay at the center of the LFO). (milliseconds) */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Specify the delay time of the flanger (delay at the center of the LFO). (milliseconds)" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectFlangerSettings, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Flanger" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the depth of the flanger LFO (amplitude). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Specifies the depth of the flanger LFO (amplitude)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectFlangerSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Flanger" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Specifies the rate of the flanger LFO. (Hz) */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the rate of the flanger LFO. (Hz)" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.01" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectFlangerSettings, Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "Flanger" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the flanger feedack gain. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Specifies the flanger feedack gain." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectFlangerSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DryMix_MetaData[] = {
		{ "Category", "Flanger" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the dry (original sound) of the flanger. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Specifies the mixing ratio of the dry (original sound) of the flanger." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectFlangerSettings, DryMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DryMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DryMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_WetMix_MetaData[] = {
		{ "Category", "Flanger" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the wet (modified sound) of the flanger. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Specifies the mixing ratio of the wet (modified sound) of the flanger." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectFlangerSettings, WetMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_WetMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_WetMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectFlangerSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectFlangerSettings), &Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectFlangerSettings",
		sizeof(FAtomBusEffectFlangerSettings),
		alignof(FAtomBusEffectFlangerSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_FlangerSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectFlangerSettings*)Z_Param__Result=UAtomBusEffectFlangerStatics::SetBypass(Z_Param_Out_FlangerSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerStatics::execSetWetMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_FlangerSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectFlangerSettings*)Z_Param__Result=UAtomBusEffectFlangerStatics::SetWetMix(Z_Param_Out_FlangerSettings,Z_Param_WetMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerStatics::execSetDryMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_FlangerSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectFlangerSettings*)Z_Param__Result=UAtomBusEffectFlangerStatics::SetDryMix(Z_Param_Out_FlangerSettings,Z_Param_DryMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerStatics::execSetFeedback)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_FlangerSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectFlangerSettings*)Z_Param__Result=UAtomBusEffectFlangerStatics::SetFeedback(Z_Param_Out_FlangerSettings,Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerStatics::execSetRate)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_FlangerSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectFlangerSettings*)Z_Param__Result=UAtomBusEffectFlangerStatics::SetRate(Z_Param_Out_FlangerSettings,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerStatics::execSetDepth)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_FlangerSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectFlangerSettings*)Z_Param__Result=UAtomBusEffectFlangerStatics::SetDepth(Z_Param_Out_FlangerSettings,Z_Param_Depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerStatics::execSetDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_FlangerSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectFlangerSettings*)Z_Param__Result=UAtomBusEffectFlangerStatics::SetDelayTime(Z_Param_Out_FlangerSettings,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	void UAtomBusEffectFlangerStatics::StaticRegisterNativesUAtomBusEffectFlangerStatics()
	{
		UClass* Class = UAtomBusEffectFlangerStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectFlangerStatics::execSetBypass },
			{ "SetDelayTime", &UAtomBusEffectFlangerStatics::execSetDelayTime },
			{ "SetDepth", &UAtomBusEffectFlangerStatics::execSetDepth },
			{ "SetDryMix", &UAtomBusEffectFlangerStatics::execSetDryMix },
			{ "SetFeedback", &UAtomBusEffectFlangerStatics::execSetFeedback },
			{ "SetRate", &UAtomBusEffectFlangerStatics::execSetRate },
			{ "SetWetMix", &UAtomBusEffectFlangerStatics::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics
	{
		struct AtomBusEffectFlangerStatics_eventSetBypass_Parms
		{
			FAtomBusEffectFlangerSettings FlangerSettings;
			bool bBypass;
			FAtomBusEffectFlangerSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlangerSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_FlangerSettings = { "FlangerSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetBypass_Parms, FlangerSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	void Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectFlangerStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectFlangerStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_FlangerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::AtomBusEffectFlangerStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics
	{
		struct AtomBusEffectFlangerStatics_eventSetDelayTime_Parms
		{
			FAtomBusEffectFlangerSettings FlangerSettings;
			float DelayTime;
			FAtomBusEffectFlangerSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlangerSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::NewProp_FlangerSettings = { "FlangerSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDelayTime_Parms, FlangerSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDelayTime_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::NewProp_FlangerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerStatics, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::AtomBusEffectFlangerStatics_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics
	{
		struct AtomBusEffectFlangerStatics_eventSetDepth_Parms
		{
			FAtomBusEffectFlangerSettings FlangerSettings;
			float Depth;
			FAtomBusEffectFlangerSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlangerSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::NewProp_FlangerSettings = { "FlangerSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDepth_Parms, FlangerSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDepth_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDepth_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::NewProp_FlangerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerStatics, nullptr, "SetDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::AtomBusEffectFlangerStatics_eventSetDepth_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics
	{
		struct AtomBusEffectFlangerStatics_eventSetDryMix_Parms
		{
			FAtomBusEffectFlangerSettings FlangerSettings;
			float DryMix;
			FAtomBusEffectFlangerSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlangerSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::NewProp_FlangerSettings = { "FlangerSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDryMix_Parms, FlangerSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDryMix_Parms, DryMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetDryMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::NewProp_FlangerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerStatics, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::AtomBusEffectFlangerStatics_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics
	{
		struct AtomBusEffectFlangerStatics_eventSetFeedback_Parms
		{
			FAtomBusEffectFlangerSettings FlangerSettings;
			float Feedback;
			FAtomBusEffectFlangerSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlangerSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::NewProp_FlangerSettings = { "FlangerSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetFeedback_Parms, FlangerSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetFeedback_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::NewProp_FlangerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerStatics, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::AtomBusEffectFlangerStatics_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics
	{
		struct AtomBusEffectFlangerStatics_eventSetRate_Parms
		{
			FAtomBusEffectFlangerSettings FlangerSettings;
			float Rate;
			FAtomBusEffectFlangerSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlangerSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::NewProp_FlangerSettings = { "FlangerSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetRate_Parms, FlangerSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::NewProp_FlangerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerStatics, nullptr, "SetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::AtomBusEffectFlangerStatics_eventSetRate_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics
	{
		struct AtomBusEffectFlangerStatics_eventSetWetMix_Parms
		{
			FAtomBusEffectFlangerSettings FlangerSettings;
			float WetMix;
			FAtomBusEffectFlangerSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlangerSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::NewProp_FlangerSettings = { "FlangerSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetWetMix_Parms, FlangerSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetWetMix_Parms, WetMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerStatics_eventSetWetMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(nullptr, 0) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::NewProp_FlangerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerStatics, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::AtomBusEffectFlangerStatics_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectFlangerStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectFlangerStatics_NoRegister()
	{
		return UAtomBusEffectFlangerStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetBypass, "SetBypass" }, // 2057892900
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDelayTime, "SetDelayTime" }, // 3856173555
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDepth, "SetDepth" }, // 3585423487
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetDryMix, "SetDryMix" }, // 379309676
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetFeedback, "SetFeedback" }, // 120567902
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetRate, "SetRate" }, // 3864521422
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerStatics_SetWetMix, "SetWetMix" }, // 2526884889
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectFlangerStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "* UAtomBusEffectFlangerStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectFlangerStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::ClassParams = {
		&UAtomBusEffectFlangerStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectFlangerStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectFlangerStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectFlangerStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectFlangerStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectFlangerStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectFlangerStatics>()
	{
		return UAtomBusEffectFlangerStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectFlangerStatics);
	UAtomBusEffectFlangerStatics::~UAtomBusEffectFlangerStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetWetMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetDryMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedback(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepth(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetDelayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelayTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectFlangerPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectFlangerSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectFlangerPreset::StaticRegisterNativesUAtomBusEffectFlangerPreset()
	{
		UClass* Class = UAtomBusEffectFlangerPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDefaultSettings", &UAtomBusEffectFlangerPreset::execSetDefaultSettings },
			{ "SetDelayTime", &UAtomBusEffectFlangerPreset::execSetDelayTime },
			{ "SetDepth", &UAtomBusEffectFlangerPreset::execSetDepth },
			{ "SetDryMix", &UAtomBusEffectFlangerPreset::execSetDryMix },
			{ "SetFeedback", &UAtomBusEffectFlangerPreset::execSetFeedback },
			{ "SetRate", &UAtomBusEffectFlangerPreset::execSetRate },
			{ "SetSettings", &UAtomBusEffectFlangerPreset::execSetSettings },
			{ "SetWetMix", &UAtomBusEffectFlangerPreset::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectFlangerSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::AtomBusEffectFlangerPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetDelayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Set the delay time in millisecondes.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Set the delay time in millisecondes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::AtomBusEffectFlangerPreset_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetDepth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetDepth_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Set depth, amplitude of LFO.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Set depth, amplitude of LFO." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::AtomBusEffectFlangerPreset_eventSetDepth_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetDryMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetDryMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Set the dry mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Set the dry mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::AtomBusEffectFlangerPreset_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetFeedback_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetFeedback_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Set the feedback level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Set the feedback level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::AtomBusEffectFlangerPreset_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Set the LFO rate in hertz.\x09\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Set the LFO rate in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::AtomBusEffectFlangerPreset_eventSetRate_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetSettings_Parms
		{
			FAtomBusEffectFlangerSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Sets runtime Flanger settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Sets runtime Flanger settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::AtomBusEffectFlangerPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics
	{
		struct AtomBusEffectFlangerPreset_eventSetWetMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectFlangerPreset_eventSetWetMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Flanger" },
		{ "Comment", "// Get the wet mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ToolTip", "Get the wet mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectFlangerPreset, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::AtomBusEffectFlangerPreset_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectFlangerPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectFlangerPreset_NoRegister()
	{
		return UAtomBusEffectFlangerPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDefaultSettings, "SetDefaultSettings" }, // 1989703633
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDelayTime, "SetDelayTime" }, // 3555070277
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDepth, "SetDepth" }, // 698641586
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetDryMix, "SetDryMix" }, // 3098243919
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetFeedback, "SetFeedback" }, // 2185004293
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetRate, "SetRate" }, // 3392445635
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetSettings, "SetSettings" }, // 2576172212
		{ &Z_Construct_UFunction_UAtomBusEffectFlangerPreset_SetWetMix, "SetWetMix" }, // 965118551
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectFlangerPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectFlangerPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Flanger preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Flanger preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectFlangerPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_Settings_MetaData)) }; // 2881814033
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectFlanger.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectFlangerPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 2881814033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectFlangerPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::ClassParams = {
		&UAtomBusEffectFlangerPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectFlangerPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectFlangerPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectFlangerPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectFlangerPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectFlangerPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectFlangerPreset>()
	{
		return UAtomBusEffectFlangerPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectFlangerPreset);
	UAtomBusEffectFlangerPreset::~UAtomBusEffectFlangerPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectFlangerSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectFlangerSettings_Statics::NewStructOps, TEXT("AtomBusEffectFlangerSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectFlangerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectFlangerSettings), 2881814033U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectFlangerStatics, UAtomBusEffectFlangerStatics::StaticClass, TEXT("UAtomBusEffectFlangerStatics"), &Z_Registration_Info_UClass_UAtomBusEffectFlangerStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectFlangerStatics), 478101421U) },
		{ Z_Construct_UClass_UAtomBusEffectFlangerPreset, UAtomBusEffectFlangerPreset::StaticClass, TEXT("UAtomBusEffectFlangerPreset"), &Z_Registration_Info_UClass_UAtomBusEffectFlangerPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectFlangerPreset), 4089062466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_1992411645(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectFlanger_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
