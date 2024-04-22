// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectDistortion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectDistortion() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDistortionPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDistortionPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDistortionStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDistortionStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings;
class UScriptStruct* FAtomBusEffectDistortionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectDistortionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectDistortionSettings>()
{
	return FAtomBusEffectDistortionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drive_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Drive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryMix_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetMix_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectDistortionSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "* FAtomBusEffectDistortionSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectDistortionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Drive_MetaData[] = {
		{ "Category", "Distortion" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the strength of distortion (drive) in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Specifies the strength of distortion (drive) in decibels (dB)." },
		{ "UIMax", "48.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Drive = { "Drive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectDistortionSettings, Drive), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Drive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Drive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_DryMix_MetaData[] = {
		{ "Category", "Distortion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the dry (original sound) component of the distortion. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Specifies the mixing ratio of the dry (original sound) component of the distortion." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectDistortionSettings, DryMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_DryMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_DryMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_WetMix_MetaData[] = {
		{ "Category", "Distortion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the wet (distortion) component of the distortion. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Specifies the mixing ratio of the wet (distortion) component of the distortion." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectDistortionSettings, WetMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_WetMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_WetMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Distortion" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** Specify the final output level of the distortion in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specify the final output level of the distortion in decibels (dB)." },
		{ "UIMax", "48.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectDistortionSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectDistortionSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectDistortionSettings), &Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Drive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectDistortionSettings",
		sizeof(FAtomBusEffectDistortionSettings),
		alignof(FAtomBusEffectDistortionSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDistortionSettings,Z_Param_Out_DistortionSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDistortionSettings*)Z_Param__Result=UAtomBusEffectDistortionStatics::SetBypass(Z_Param_Out_DistortionSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionStatics::execSetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDistortionSettings,Z_Param_Out_DistortionSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDistortionSettings*)Z_Param__Result=UAtomBusEffectDistortionStatics::SetGain(Z_Param_Out_DistortionSettings,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionStatics::execSetWetMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDistortionSettings,Z_Param_Out_DistortionSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDistortionSettings*)Z_Param__Result=UAtomBusEffectDistortionStatics::SetWetMix(Z_Param_Out_DistortionSettings,Z_Param_WetMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionStatics::execSetDryMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDistortionSettings,Z_Param_Out_DistortionSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDistortionSettings*)Z_Param__Result=UAtomBusEffectDistortionStatics::SetDryMix(Z_Param_Out_DistortionSettings,Z_Param_DryMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionStatics::execSetDrive)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDistortionSettings,Z_Param_Out_DistortionSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Drive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDistortionSettings*)Z_Param__Result=UAtomBusEffectDistortionStatics::SetDrive(Z_Param_Out_DistortionSettings,Z_Param_Drive);
		P_NATIVE_END;
	}
	void UAtomBusEffectDistortionStatics::StaticRegisterNativesUAtomBusEffectDistortionStatics()
	{
		UClass* Class = UAtomBusEffectDistortionStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectDistortionStatics::execSetBypass },
			{ "SetDrive", &UAtomBusEffectDistortionStatics::execSetDrive },
			{ "SetDryMix", &UAtomBusEffectDistortionStatics::execSetDryMix },
			{ "SetGain", &UAtomBusEffectDistortionStatics::execSetGain },
			{ "SetWetMix", &UAtomBusEffectDistortionStatics::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics
	{
		struct AtomBusEffectDistortionStatics_eventSetBypass_Parms
		{
			FAtomBusEffectDistortionSettings DistortionSettings;
			bool bBypass;
			FAtomBusEffectDistortionSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_DistortionSettings = { "DistortionSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetBypass_Parms, DistortionSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	void Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectDistortionStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectDistortionStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_DistortionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::AtomBusEffectDistortionStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics
	{
		struct AtomBusEffectDistortionStatics_eventSetDrive_Parms
		{
			FAtomBusEffectDistortionSettings DistortionSettings;
			float Drive;
			FAtomBusEffectDistortionSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Drive;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::NewProp_DistortionSettings = { "DistortionSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetDrive_Parms, DistortionSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::NewProp_Drive = { "Drive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetDrive_Parms, Drive), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetDrive_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::NewProp_DistortionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::NewProp_Drive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionStatics, nullptr, "SetDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::AtomBusEffectDistortionStatics_eventSetDrive_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics
	{
		struct AtomBusEffectDistortionStatics_eventSetDryMix_Parms
		{
			FAtomBusEffectDistortionSettings DistortionSettings;
			float DryMix;
			FAtomBusEffectDistortionSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::NewProp_DistortionSettings = { "DistortionSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetDryMix_Parms, DistortionSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetDryMix_Parms, DryMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetDryMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::NewProp_DistortionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionStatics, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::AtomBusEffectDistortionStatics_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics
	{
		struct AtomBusEffectDistortionStatics_eventSetGain_Parms
		{
			FAtomBusEffectDistortionSettings DistortionSettings;
			float Gain;
			FAtomBusEffectDistortionSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::NewProp_DistortionSettings = { "DistortionSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetGain_Parms, DistortionSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::NewProp_DistortionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionStatics, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::AtomBusEffectDistortionStatics_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics
	{
		struct AtomBusEffectDistortionStatics_eventSetWetMix_Parms
		{
			FAtomBusEffectDistortionSettings DistortionSettings;
			float WetMix;
			FAtomBusEffectDistortionSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::NewProp_DistortionSettings = { "DistortionSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetWetMix_Parms, DistortionSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetWetMix_Parms, WetMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionStatics_eventSetWetMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(nullptr, 0) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::NewProp_DistortionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionStatics, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::AtomBusEffectDistortionStatics_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectDistortionStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectDistortionStatics_NoRegister()
	{
		return UAtomBusEffectDistortionStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetBypass, "SetBypass" }, // 3951122227
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDrive, "SetDrive" }, // 2532483166
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetDryMix, "SetDryMix" }, // 1032993359
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetGain, "SetGain" }, // 381969849
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionStatics_SetWetMix, "SetWetMix" }, // 1544311069
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectDistortionStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "* UAtomBusEffectDistortionStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectDistortionStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::ClassParams = {
		&UAtomBusEffectDistortionStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectDistortionStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectDistortionStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectDistortionStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectDistortionStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectDistortionStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectDistortionStatics>()
	{
		return UAtomBusEffectDistortionStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectDistortionStatics);
	UAtomBusEffectDistortionStatics::~UAtomBusEffectDistortionStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectDistortionPreset::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionPreset::execSetWetMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionPreset::execSetDryMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionPreset::execSetDrive)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Drive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrive(Z_Param_Drive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDistortionSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDistortionPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDistortionSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectDistortionPreset::StaticRegisterNativesUAtomBusEffectDistortionPreset()
	{
		UClass* Class = UAtomBusEffectDistortionPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDefaultSettings", &UAtomBusEffectDistortionPreset::execSetDefaultSettings },
			{ "SetDrive", &UAtomBusEffectDistortionPreset::execSetDrive },
			{ "SetDryMix", &UAtomBusEffectDistortionPreset::execSetDryMix },
			{ "SetGain", &UAtomBusEffectDistortionPreset::execSetGain },
			{ "SetSettings", &UAtomBusEffectDistortionPreset::execSetSettings },
			{ "SetWetMix", &UAtomBusEffectDistortionPreset::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectDistortionPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectDistortionSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::AtomBusEffectDistortionPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics
	{
		struct AtomBusEffectDistortionPreset_eventSetDrive_Parms
		{
			float Drive;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Drive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::NewProp_Drive = { "Drive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionPreset_eventSetDrive_Parms, Drive), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::NewProp_Drive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "Comment", "// Set the drive, in decibels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Set the drive, in decibels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionPreset, nullptr, "SetDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::AtomBusEffectDistortionPreset_eventSetDrive_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics
	{
		struct AtomBusEffectDistortionPreset_eventSetDryMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionPreset_eventSetDryMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "Comment", "// Set the dry mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Set the dry mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionPreset, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::AtomBusEffectDistortionPreset_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics
	{
		struct AtomBusEffectDistortionPreset_eventSetGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionPreset_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "Comment", "// Set the output gain, in decibels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Set the output gain, in decibels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionPreset, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::AtomBusEffectDistortionPreset_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics
	{
		struct AtomBusEffectDistortionPreset_eventSetSettings_Parms
		{
			FAtomBusEffectDistortionSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Distortion" },
		{ "Comment", "// Sets runtime Distortion settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Sets runtime Distortion settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::AtomBusEffectDistortionPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics
	{
		struct AtomBusEffectDistortionPreset_eventSetWetMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDistortionPreset_eventSetWetMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Distortion" },
		{ "Comment", "// Set the wet mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ToolTip", "Set the wet mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDistortionPreset, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::AtomBusEffectDistortionPreset_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectDistortionPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectDistortionPreset_NoRegister()
	{
		return UAtomBusEffectDistortionPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDefaultSettings, "SetDefaultSettings" }, // 1942038095
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDrive, "SetDrive" }, // 3171851253
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetDryMix, "SetDryMix" }, // 3216049089
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetGain, "SetGain" }, // 1401840435
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetSettings, "SetSettings" }, // 3479135792
		{ &Z_Construct_UFunction_UAtomBusEffectDistortionPreset_SetWetMix, "SetWetMix" }, // 2027151658
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectDistortionPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectDistortionPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Distortion preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Distortion preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectDistortionPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_Settings_MetaData)) }; // 1911631312
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDistortion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectDistortionPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 1911631312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectDistortionPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::ClassParams = {
		&UAtomBusEffectDistortionPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectDistortionPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectDistortionPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectDistortionPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectDistortionPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectDistortionPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectDistortionPreset>()
	{
		return UAtomBusEffectDistortionPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectDistortionPreset);
	UAtomBusEffectDistortionPreset::~UAtomBusEffectDistortionPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectDistortionSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectDistortionSettings_Statics::NewStructOps, TEXT("AtomBusEffectDistortionSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectDistortionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectDistortionSettings), 1911631312U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectDistortionStatics, UAtomBusEffectDistortionStatics::StaticClass, TEXT("UAtomBusEffectDistortionStatics"), &Z_Registration_Info_UClass_UAtomBusEffectDistortionStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectDistortionStatics), 3800826760U) },
		{ Z_Construct_UClass_UAtomBusEffectDistortionPreset, UAtomBusEffectDistortionPreset::StaticClass, TEXT("UAtomBusEffectDistortionPreset"), &Z_Registration_Info_UClass_UAtomBusEffectDistortionPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectDistortionPreset), 808222817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_3980461997(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDistortion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
