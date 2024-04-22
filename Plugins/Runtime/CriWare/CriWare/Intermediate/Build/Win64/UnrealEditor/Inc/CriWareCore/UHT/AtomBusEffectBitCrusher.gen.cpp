// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectBitCrusher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectBitCrusher() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings;
class UScriptStruct* FAtomBusEffectBitCrusherSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectBitCrusherSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectBitCrusherSettings>()
{
	return FAtomBusEffectBitCrusherSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BitDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownSampling_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DownSampling;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectBitCrusherSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "* FAtomBusEffectBitCrusherSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectBitCrusherSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Drive_MetaData[] = {
		{ "Category", "Bit-crusher" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specify the drive gain of the bit-crusher. (dB) */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Specify the drive gain of the bit-crusher. (dB)" },
		{ "UIMax", "48.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Drive = { "Drive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBitCrusherSettings, Drive), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Drive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Drive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_BitDepth_MetaData[] = {
		{ "Category", "Bit-crusher" },
		{ "ClampMax", "24" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Specifies the quantization bit number of the bit-crusher. A small value makes amplitude to become Lo-Fi. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Specifies the quantization bit number of the bit-crusher. A small value makes amplitude to become Lo-Fi." },
		{ "UIMax", "24" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBitCrusherSettings, BitDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_BitDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_BitDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DownSampling_MetaData[] = {
		{ "Category", "Bit-crusher" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Specifies the down sampling value of the bit-crusher. As this value is increased, the sampling rate decrease, thus stronger is the Lo-Fi feeling. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Specifies the down sampling value of the bit-crusher. As this value is increased, the sampling rate decrease, thus stronger is the Lo-Fi feeling." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DownSampling = { "DownSampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBitCrusherSettings, DownSampling), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DownSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DownSampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DryMix_MetaData[] = {
		{ "Category", "Bit-crusher" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the dry (original sound) of the bit-crusher. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Specifies the mixing ratio of the dry (original sound) of the bit-crusher." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBitCrusherSettings, DryMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DryMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DryMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_WetMix_MetaData[] = {
		{ "Category", "Bit-crusher" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mixing ratio of the wet (modified sound) of the bit-crusher. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Specifies the mixing ratio of the wet (modified sound) of the bit-crusher." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBitCrusherSettings, WetMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_WetMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_WetMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Bit-crusher" },
		{ "ClampMax", "48.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** Specifies the bit-crusher output gain. (dB) */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the bit-crusher output gain. (dB)" },
		{ "UIMax", "48.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBitCrusherSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectBitCrusherSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectBitCrusherSettings), &Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Drive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_BitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DownSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectBitCrusherSettings",
		sizeof(FAtomBusEffectBitCrusherSettings),
		alignof(FAtomBusEffectBitCrusherSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_BitCrusherSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBitCrusherSettings*)Z_Param__Result=UAtomBusEffectBitCrusherStatics::SetBypass(Z_Param_Out_BitCrusherSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherStatics::execSetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_BitCrusherSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBitCrusherSettings*)Z_Param__Result=UAtomBusEffectBitCrusherStatics::SetGain(Z_Param_Out_BitCrusherSettings,Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherStatics::execSetWetMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_BitCrusherSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBitCrusherSettings*)Z_Param__Result=UAtomBusEffectBitCrusherStatics::SetWetMix(Z_Param_Out_BitCrusherSettings,Z_Param_WetMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherStatics::execSetDryMix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_BitCrusherSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryMix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBitCrusherSettings*)Z_Param__Result=UAtomBusEffectBitCrusherStatics::SetDryMix(Z_Param_Out_BitCrusherSettings,Z_Param_DryMix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherStatics::execSetDownSampling)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_BitCrusherSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_DownSampling);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBitCrusherSettings*)Z_Param__Result=UAtomBusEffectBitCrusherStatics::SetDownSampling(Z_Param_Out_BitCrusherSettings,Z_Param_DownSampling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherStatics::execSetBitDepth)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_BitCrusherSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBitCrusherSettings*)Z_Param__Result=UAtomBusEffectBitCrusherStatics::SetBitDepth(Z_Param_Out_BitCrusherSettings,Z_Param_BitDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherStatics::execSetDrive)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_BitCrusherSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Drive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBitCrusherSettings*)Z_Param__Result=UAtomBusEffectBitCrusherStatics::SetDrive(Z_Param_Out_BitCrusherSettings,Z_Param_Drive);
		P_NATIVE_END;
	}
	void UAtomBusEffectBitCrusherStatics::StaticRegisterNativesUAtomBusEffectBitCrusherStatics()
	{
		UClass* Class = UAtomBusEffectBitCrusherStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBitDepth", &UAtomBusEffectBitCrusherStatics::execSetBitDepth },
			{ "SetBypass", &UAtomBusEffectBitCrusherStatics::execSetBypass },
			{ "SetDownSampling", &UAtomBusEffectBitCrusherStatics::execSetDownSampling },
			{ "SetDrive", &UAtomBusEffectBitCrusherStatics::execSetDrive },
			{ "SetDryMix", &UAtomBusEffectBitCrusherStatics::execSetDryMix },
			{ "SetGain", &UAtomBusEffectBitCrusherStatics::execSetGain },
			{ "SetWetMix", &UAtomBusEffectBitCrusherStatics::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics
	{
		struct AtomBusEffectBitCrusherStatics_eventSetBitDepth_Parms
		{
			FAtomBusEffectBitCrusherSettings BitCrusherSettings;
			int32 BitDepth;
			FAtomBusEffectBitCrusherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BitCrusherSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BitDepth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::NewProp_BitCrusherSettings = { "BitCrusherSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetBitDepth_Parms, BitCrusherSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetBitDepth_Parms, BitDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetBitDepth_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::NewProp_BitCrusherSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::NewProp_BitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, nullptr, "SetBitDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::AtomBusEffectBitCrusherStatics_eventSetBitDepth_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics
	{
		struct AtomBusEffectBitCrusherStatics_eventSetBypass_Parms
		{
			FAtomBusEffectBitCrusherSettings BitCrusherSettings;
			bool bBypass;
			FAtomBusEffectBitCrusherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BitCrusherSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_BitCrusherSettings = { "BitCrusherSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetBypass_Parms, BitCrusherSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	void Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectBitCrusherStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectBitCrusherStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_BitCrusherSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::AtomBusEffectBitCrusherStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics
	{
		struct AtomBusEffectBitCrusherStatics_eventSetDownSampling_Parms
		{
			FAtomBusEffectBitCrusherSettings BitCrusherSettings;
			int32 DownSampling;
			FAtomBusEffectBitCrusherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BitCrusherSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DownSampling;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::NewProp_BitCrusherSettings = { "BitCrusherSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDownSampling_Parms, BitCrusherSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::NewProp_DownSampling = { "DownSampling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDownSampling_Parms, DownSampling), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDownSampling_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::NewProp_BitCrusherSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::NewProp_DownSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, nullptr, "SetDownSampling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::AtomBusEffectBitCrusherStatics_eventSetDownSampling_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics
	{
		struct AtomBusEffectBitCrusherStatics_eventSetDrive_Parms
		{
			FAtomBusEffectBitCrusherSettings BitCrusherSettings;
			float Drive;
			FAtomBusEffectBitCrusherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BitCrusherSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Drive;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::NewProp_BitCrusherSettings = { "BitCrusherSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDrive_Parms, BitCrusherSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::NewProp_Drive = { "Drive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDrive_Parms, Drive), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDrive_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::NewProp_BitCrusherSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::NewProp_Drive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, nullptr, "SetDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::AtomBusEffectBitCrusherStatics_eventSetDrive_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics
	{
		struct AtomBusEffectBitCrusherStatics_eventSetDryMix_Parms
		{
			FAtomBusEffectBitCrusherSettings BitCrusherSettings;
			float DryMix;
			FAtomBusEffectBitCrusherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BitCrusherSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::NewProp_BitCrusherSettings = { "BitCrusherSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDryMix_Parms, BitCrusherSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::NewProp_DryMix = { "DryMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDryMix_Parms, DryMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetDryMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::NewProp_BitCrusherSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::NewProp_DryMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::AtomBusEffectBitCrusherStatics_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics
	{
		struct AtomBusEffectBitCrusherStatics_eventSetGain_Parms
		{
			FAtomBusEffectBitCrusherSettings BitCrusherSettings;
			float Gain;
			FAtomBusEffectBitCrusherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BitCrusherSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::NewProp_BitCrusherSettings = { "BitCrusherSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetGain_Parms, BitCrusherSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::NewProp_BitCrusherSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::AtomBusEffectBitCrusherStatics_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics
	{
		struct AtomBusEffectBitCrusherStatics_eventSetWetMix_Parms
		{
			FAtomBusEffectBitCrusherSettings BitCrusherSettings;
			float WetMix;
			FAtomBusEffectBitCrusherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BitCrusherSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::NewProp_BitCrusherSettings = { "BitCrusherSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetWetMix_Parms, BitCrusherSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::NewProp_WetMix = { "WetMix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetWetMix_Parms, WetMix), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherStatics_eventSetWetMix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(nullptr, 0) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::NewProp_BitCrusherSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::NewProp_WetMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::AtomBusEffectBitCrusherStatics_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBitCrusherStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_NoRegister()
	{
		return UAtomBusEffectBitCrusherStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBitDepth, "SetBitDepth" }, // 3573894948
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetBypass, "SetBypass" }, // 2711432602
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDownSampling, "SetDownSampling" }, // 4286693379
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDrive, "SetDrive" }, // 2212042861
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetDryMix, "SetDryMix" }, // 3263049132
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetGain, "SetGain" }, // 713130795
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherStatics_SetWetMix, "SetWetMix" }, // 3120660673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBitCrusherStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "* UAtomBusEffectBitCrusherStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBitCrusherStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::ClassParams = {
		&UAtomBusEffectBitCrusherStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBitCrusherStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBitCrusherStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBitCrusherStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBitCrusherStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBitCrusherStatics>()
	{
		return UAtomBusEffectBitCrusherStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBitCrusherStatics);
	UAtomBusEffectBitCrusherStatics::~UAtomBusEffectBitCrusherStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetWetMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetDryMix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryMix(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetDownSampling)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDownSampling(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetBitDepth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBitDepth(Z_Param_BitDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetDrive)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrive(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBitCrusherPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBitCrusherSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectBitCrusherPreset::StaticRegisterNativesUAtomBusEffectBitCrusherPreset()
	{
		UClass* Class = UAtomBusEffectBitCrusherPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBitDepth", &UAtomBusEffectBitCrusherPreset::execSetBitDepth },
			{ "SetDefaultSettings", &UAtomBusEffectBitCrusherPreset::execSetDefaultSettings },
			{ "SetDownSampling", &UAtomBusEffectBitCrusherPreset::execSetDownSampling },
			{ "SetDrive", &UAtomBusEffectBitCrusherPreset::execSetDrive },
			{ "SetDryMix", &UAtomBusEffectBitCrusherPreset::execSetDryMix },
			{ "SetGain", &UAtomBusEffectBitCrusherPreset::execSetGain },
			{ "SetSettings", &UAtomBusEffectBitCrusherPreset::execSetSettings },
			{ "SetWetMix", &UAtomBusEffectBitCrusherPreset::execSetWetMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetBitDepth_Parms
		{
			int32 BitDepth;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BitDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetBitDepth_Parms, BitDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::NewProp_BitDepth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Set the bit-depth. Possible values are in the range of 1 to 24 bits.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Set the bit-depth. Possible values are in the range of 1 to 24 bits." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetBitDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::AtomBusEffectBitCrusherPreset_eventSetBitDepth_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectBitCrusherSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::AtomBusEffectBitCrusherPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetDownSampling_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetDownSampling_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Set the down sampling value.\x09\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Set the down sampling value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetDownSampling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::AtomBusEffectBitCrusherPreset_eventSetDownSampling_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetDrive_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetDrive_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Set the drive gain.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Set the drive gain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::AtomBusEffectBitCrusherPreset_eventSetDrive_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetDryMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetDryMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Set the dry mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Set the dry mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetDryMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::AtomBusEffectBitCrusherPreset_eventSetDryMix_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Set the output gain.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Set the output gain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::AtomBusEffectBitCrusherPreset_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetSettings_Parms
		{
			FAtomBusEffectBitCrusherSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Sets runtime BitCrusher settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Sets runtime BitCrusher settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::AtomBusEffectBitCrusherPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics
	{
		struct AtomBusEffectBitCrusherPreset_eventSetWetMix_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBitCrusherPreset_eventSetWetMix_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BitCrusher" },
		{ "Comment", "// Get the wet mix level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ToolTip", "Get the wet mix level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, nullptr, "SetWetMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::AtomBusEffectBitCrusherPreset_eventSetWetMix_Parms), Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBitCrusherPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_NoRegister()
	{
		return UAtomBusEffectBitCrusherPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetBitDepth, "SetBitDepth" }, // 1160512589
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2380796754
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDownSampling, "SetDownSampling" }, // 3495870576
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDrive, "SetDrive" }, // 95570692
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetDryMix, "SetDryMix" }, // 3574000324
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetGain, "SetGain" }, // 1738540378
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetSettings, "SetSettings" }, // 910643341
		{ &Z_Construct_UFunction_UAtomBusEffectBitCrusherPreset_SetWetMix, "SetWetMix" }, // 3325497376
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBitCrusherPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectBitCrusherPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The BitCrusher preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The BitCrusher preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBitCrusherPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_Settings_MetaData)) }; // 2140910680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBitCrusher.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBitCrusherPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 2140910680
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBitCrusherPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::ClassParams = {
		&UAtomBusEffectBitCrusherPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBitCrusherPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBitCrusherPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBitCrusherPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBitCrusherPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBitCrusherPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBitCrusherPreset>()
	{
		return UAtomBusEffectBitCrusherPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBitCrusherPreset);
	UAtomBusEffectBitCrusherPreset::~UAtomBusEffectBitCrusherPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectBitCrusherSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectBitCrusherSettings_Statics::NewStructOps, TEXT("AtomBusEffectBitCrusherSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectBitCrusherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectBitCrusherSettings), 2140910680U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectBitCrusherStatics, UAtomBusEffectBitCrusherStatics::StaticClass, TEXT("UAtomBusEffectBitCrusherStatics"), &Z_Registration_Info_UClass_UAtomBusEffectBitCrusherStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBitCrusherStatics), 2566527635U) },
		{ Z_Construct_UClass_UAtomBusEffectBitCrusherPreset, UAtomBusEffectBitCrusherPreset::StaticClass, TEXT("UAtomBusEffectBitCrusherPreset"), &Z_Registration_Info_UClass_UAtomBusEffectBitCrusherPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBitCrusherPreset), 3453599731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_1193895604(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBitCrusher_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
