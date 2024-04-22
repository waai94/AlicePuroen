// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectPhaser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectPhaser() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPhaserPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPhaserPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPhaserStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPhaserStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings;
class UScriptStruct* FAtomBusEffectPhaserSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectPhaserSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectPhaserSettings>()
{
	return FAtomBusEffectPhaserSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stages_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Stages;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectPhaserSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "* FAtomBusEffectPhaserSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectPhaserSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Stages_MetaData[] = {
		{ "Category", "Phaser" },
		{ "ClampMax", "12" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Specify the strength of the phaser effect. */" },
		{ "Delta", "2" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "Multiple", "2" },
		{ "ToolTip", "Specify the strength of the phaser effect." },
		{ "UIMax", "12" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPhaserSettings, Stages), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Stages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Stages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Phaser" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the depth of the phaser LFO (amplitude). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Specifies the depth of the phaser LFO (amplitude)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPhaserSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Phaser" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Specifies the rate of the phaser LFO in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the rate of the phaser LFO in hertz." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.01" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPhaserSettings, Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "Phaser" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the phaser feedack gain. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Specifies the phaser feedack gain." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPhaserSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_DryMix_MetaData[] = {
		{ "Category", "Phaser" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the dry (original sound) of the phaser. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Specifies the mixing ratio of the dry (original sound) of the phaser." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPhaserSettings, DryMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_DryMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_DryMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_WetMix_MetaData[] = {
		{ "Category", "Phaser" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the wet (modified sound) of the phaser. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Specifies the mixing ratio of the wet (modified sound) of the phaser." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectPhaserSettings, WetMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_WetMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_WetMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectPhaserSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectPhaserSettings), &Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectPhaserSettings",
		sizeof(FAtomBusEffectPhaserSettings),
		alignof(FAtomBusEffectPhaserSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_PhaserSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPhaserSettings*)Z_Param__Result=UAtomBusEffectPhaserStatics::SetBypass(Z_Param_Out_PhaserSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserStatics::execSetWetMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_PhaserSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPhaserSettings*)Z_Param__Result=UAtomBusEffectPhaserStatics::SetWetMix(Z_Param_Out_PhaserSettings,Z_Param_WetMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserStatics::execSetDryMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_PhaserSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPhaserSettings*)Z_Param__Result=UAtomBusEffectPhaserStatics::SetDryMix(Z_Param_Out_PhaserSettings,Z_Param_DryMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserStatics::execSetFeedback)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_PhaserSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPhaserSettings*)Z_Param__Result=UAtomBusEffectPhaserStatics::SetFeedback(Z_Param_Out_PhaserSettings,Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserStatics::execSetRate)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_PhaserSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPhaserSettings*)Z_Param__Result=UAtomBusEffectPhaserStatics::SetRate(Z_Param_Out_PhaserSettings,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserStatics::execSetDepth)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_PhaserSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPhaserSettings*)Z_Param__Result=UAtomBusEffectPhaserStatics::SetDepth(Z_Param_Out_PhaserSettings,Z_Param_Depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserStatics::execSetDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_PhaserSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_Stages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectPhaserSettings*)Z_Param__Result=UAtomBusEffectPhaserStatics::SetDelayTime(Z_Param_Out_PhaserSettings,Z_Param_Stages);
		P_NATIVE_END;
	}
	void UAtomBusEffectPhaserStatics::StaticRegisterNativesUAtomBusEffectPhaserStatics()
	{
		UClass* Class = UAtomBusEffectPhaserStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectPhaserStatics::execSetBypass },
			{ "SetDelayTime", &UAtomBusEffectPhaserStatics::execSetDelayTime },
			{ "SetDepth", &UAtomBusEffectPhaserStatics::execSetDepth },
			{ "SetDryMix", &UAtomBusEffectPhaserStatics::execSetDryMix },
			{ "SetFeedback", &UAtomBusEffectPhaserStatics::execSetFeedback },
			{ "SetRate", &UAtomBusEffectPhaserStatics::execSetRate },
			{ "SetWetMix", &UAtomBusEffectPhaserStatics::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics
	{
		struct AtomBusEffectPhaserStatics_eventSetBypass_Parms
		{
			FAtomBusEffectPhaserSettings PhaserSettings;
			bool bBypass;
			FAtomBusEffectPhaserSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaserSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_PhaserSettings = { "PhaserSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetBypass_Parms, PhaserSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	void Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectPhaserStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectPhaserStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_PhaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::AtomBusEffectPhaserStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics
	{
		struct AtomBusEffectPhaserStatics_eventSetDelayTime_Parms
		{
			FAtomBusEffectPhaserSettings PhaserSettings;
			int32 Stages;
			FAtomBusEffectPhaserSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaserSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Stages;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::NewProp_PhaserSettings = { "PhaserSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDelayTime_Parms, PhaserSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDelayTime_Parms, Stages), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::NewProp_PhaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserStatics, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::AtomBusEffectPhaserStatics_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics
	{
		struct AtomBusEffectPhaserStatics_eventSetDepth_Parms
		{
			FAtomBusEffectPhaserSettings PhaserSettings;
			float Depth;
			FAtomBusEffectPhaserSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaserSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::NewProp_PhaserSettings = { "PhaserSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDepth_Parms, PhaserSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDepth_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDepth_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::NewProp_PhaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserStatics, nullptr, "SetDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::AtomBusEffectPhaserStatics_eventSetDepth_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics
	{
		struct AtomBusEffectPhaserStatics_eventSetDryMix_Parms
		{
			FAtomBusEffectPhaserSettings PhaserSettings;
			float DryMix;
			FAtomBusEffectPhaserSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaserSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::NewProp_PhaserSettings = { "PhaserSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDryMix_Parms, PhaserSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDryMix_Parms, DryMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetDryMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::NewProp_PhaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserStatics, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::AtomBusEffectPhaserStatics_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics
	{
		struct AtomBusEffectPhaserStatics_eventSetFeedback_Parms
		{
			FAtomBusEffectPhaserSettings PhaserSettings;
			float Feedback;
			FAtomBusEffectPhaserSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaserSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::NewProp_PhaserSettings = { "PhaserSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetFeedback_Parms, PhaserSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetFeedback_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::NewProp_PhaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserStatics, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::AtomBusEffectPhaserStatics_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics
	{
		struct AtomBusEffectPhaserStatics_eventSetRate_Parms
		{
			FAtomBusEffectPhaserSettings PhaserSettings;
			float Rate;
			FAtomBusEffectPhaserSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaserSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::NewProp_PhaserSettings = { "PhaserSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetRate_Parms, PhaserSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::NewProp_PhaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserStatics, nullptr, "SetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::AtomBusEffectPhaserStatics_eventSetRate_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics
	{
		struct AtomBusEffectPhaserStatics_eventSetWetMix_Parms
		{
			FAtomBusEffectPhaserSettings PhaserSettings;
			float WetMix;
			FAtomBusEffectPhaserSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaserSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::NewProp_PhaserSettings = { "PhaserSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetWetMix_Parms, PhaserSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetWetMix_Parms, WetMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserStatics_eventSetWetMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(nullptr, 0) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::NewProp_PhaserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserStatics, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::AtomBusEffectPhaserStatics_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectPhaserStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectPhaserStatics_NoRegister()
	{
		return UAtomBusEffectPhaserStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetBypass, "SetBypass" }, // 216815641
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDelayTime, "SetDelayTime" }, // 1295003486
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDepth, "SetDepth" }, // 1825674828
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetDryMix, "SetDryMix" }, // 1309881803
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetFeedback, "SetFeedback" }, // 1778670736
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetRate, "SetRate" }, // 2466550486
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserStatics_SetWetMix, "SetWetMix" }, // 2937494499
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectPhaserStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "* UAtomBusEffectPhaserStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectPhaserStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::ClassParams = {
		&UAtomBusEffectPhaserStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectPhaserStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectPhaserStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectPhaserStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectPhaserStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectPhaserStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectPhaserStatics>()
	{
		return UAtomBusEffectPhaserStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectPhaserStatics);
	UAtomBusEffectPhaserStatics::~UAtomBusEffectPhaserStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetWetMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetDryMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedback(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepth(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetStages)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStages(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectPhaserPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectPhaserSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectPhaserPreset::StaticRegisterNativesUAtomBusEffectPhaserPreset()
	{
		UClass* Class = UAtomBusEffectPhaserPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDefaultSettings", &UAtomBusEffectPhaserPreset::execSetDefaultSettings },
			{ "SetDepth", &UAtomBusEffectPhaserPreset::execSetDepth },
			{ "SetDryMix", &UAtomBusEffectPhaserPreset::execSetDryMix },
			{ "SetFeedback", &UAtomBusEffectPhaserPreset::execSetFeedback },
			{ "SetRate", &UAtomBusEffectPhaserPreset::execSetRate },
			{ "SetSettings", &UAtomBusEffectPhaserPreset::execSetSettings },
			{ "SetStages", &UAtomBusEffectPhaserPreset::execSetStages },
			{ "SetWetMix", &UAtomBusEffectPhaserPreset::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectPhaserSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::AtomBusEffectPhaserPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetDepth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetDepth_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Set depth, amplitude of LFO.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Set depth, amplitude of LFO." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::AtomBusEffectPhaserPreset_eventSetDepth_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetDryMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetDryMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Set the dry mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Set the dry mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::AtomBusEffectPhaserPreset_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetFeedback_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetFeedback_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Set the feedback level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Set the feedback level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::AtomBusEffectPhaserPreset_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Set the LFO rate in hertz.\x09\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Set the LFO rate in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::AtomBusEffectPhaserPreset_eventSetRate_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetSettings_Parms
		{
			FAtomBusEffectPhaserSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Sets runtime Phaser settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Sets runtime Phaser settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::AtomBusEffectPhaserPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetStages_Parms
		{
			int32 Number;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetStages_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Set the number of stages. The possible values are 4, 6, 8, 10 or 12.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Set the number of stages. The possible values are 4, 6, 8, 10 or 12." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetStages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::AtomBusEffectPhaserPreset_eventSetStages_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics
	{
		struct AtomBusEffectPhaserPreset_eventSetWetMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectPhaserPreset_eventSetWetMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Phaser" },
		{ "Comment", "// Get the wet mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ToolTip", "Get the wet mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectPhaserPreset, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::AtomBusEffectPhaserPreset_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectPhaserPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectPhaserPreset_NoRegister()
	{
		return UAtomBusEffectPhaserPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDefaultSettings, "SetDefaultSettings" }, // 3259462979
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDepth, "SetDepth" }, // 690094173
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetDryMix, "SetDryMix" }, // 591697318
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetFeedback, "SetFeedback" }, // 2863025126
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetRate, "SetRate" }, // 4267384581
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetSettings, "SetSettings" }, // 119112595
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetStages, "SetStages" }, // 3801716544
		{ &Z_Construct_UFunction_UAtomBusEffectPhaserPreset_SetWetMix, "SetWetMix" }, // 4007025516
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectPhaserPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectPhaserPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Phaser preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Phaser preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectPhaserPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_Settings_MetaData)) }; // 2730636333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectPhaserPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 2730636333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectPhaserPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::ClassParams = {
		&UAtomBusEffectPhaserPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectPhaserPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectPhaserPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectPhaserPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectPhaserPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectPhaserPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectPhaserPreset>()
	{
		return UAtomBusEffectPhaserPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectPhaserPreset);
	UAtomBusEffectPhaserPreset::~UAtomBusEffectPhaserPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectPhaserSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectPhaserSettings_Statics::NewStructOps, TEXT("AtomBusEffectPhaserSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectPhaserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectPhaserSettings), 2730636333U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectPhaserStatics, UAtomBusEffectPhaserStatics::StaticClass, TEXT("UAtomBusEffectPhaserStatics"), &Z_Registration_Info_UClass_UAtomBusEffectPhaserStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectPhaserStatics), 1135364685U) },
		{ Z_Construct_UClass_UAtomBusEffectPhaserPreset, UAtomBusEffectPhaserPreset::StaticClass, TEXT("UAtomBusEffectPhaserPreset"), &Z_Registration_Info_UClass_UAtomBusEffectPhaserPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectPhaserPreset), 4226863322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_663049855(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectPhaser_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
