// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectBinaural.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectBinaural() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBinauralPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBinauralPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBinauralStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBinauralStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings;
class UScriptStruct* FAtomBusEffectBinauralSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectBinauralSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectBinauralSettings>()
{
	return FAtomBusEffectBinauralSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Balance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Balance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectBinauralSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "* FAtomBusEffectBinauralSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectBinauralSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Binaural" },
		{ "ClampMax", "12.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "/** Specifies the output gain. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "Specifies the output gain." },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBinauralSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Balance_MetaData[] = {
		{ "Category", "Binaural" },
		{ "ClampMax", "12.0" },
		{ "ClampMin", "-12.0" },
		{ "Comment", "/** Specifies the volume balance between front and rear channels. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "Specifies the volume balance between front and rear channels." },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBinauralSettings, Balance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Balance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Balance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectBinauralSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectBinauralSettings), &Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_Balance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectBinauralSettings",
		sizeof(FAtomBusEffectBinauralSettings),
		alignof(FAtomBusEffectBinauralSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectBinauralStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBinauralSettings,Z_Param_Out_BinauralSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBinauralSettings*)Z_Param__Result=UAtomBusEffectBinauralStatics::SetBypass(Z_Param_Out_BinauralSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBinauralStatics::execSetBalance)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBinauralSettings,Z_Param_Out_BinauralSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Balance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBinauralSettings*)Z_Param__Result=UAtomBusEffectBinauralStatics::SetBalance(Z_Param_Out_BinauralSettings,Z_Param_Balance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBinauralStatics::execSetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBinauralSettings,Z_Param_Out_BinauralSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBinauralSettings*)Z_Param__Result=UAtomBusEffectBinauralStatics::SetGain(Z_Param_Out_BinauralSettings,Z_Param_Gain);
		P_NATIVE_END;
	}
	void UAtomBusEffectBinauralStatics::StaticRegisterNativesUAtomBusEffectBinauralStatics()
	{
		UClass* Class = UAtomBusEffectBinauralStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBalance", &UAtomBusEffectBinauralStatics::execSetBalance },
			{ "SetBypass", &UAtomBusEffectBinauralStatics::execSetBypass },
			{ "SetGain", &UAtomBusEffectBinauralStatics::execSetGain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics
	{
		struct AtomBusEffectBinauralStatics_eventSetBalance_Parms
		{
			FAtomBusEffectBinauralSettings BinauralSettings;
			float Balance;
			FAtomBusEffectBinauralSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinauralSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Balance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::NewProp_BinauralSettings = { "BinauralSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetBalance_Parms, BinauralSettings), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(nullptr, 0) }; // 442524121
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetBalance_Parms, Balance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetBalance_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(nullptr, 0) }; // 442524121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::NewProp_BinauralSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::NewProp_Balance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Binaural" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBinauralStatics, nullptr, "SetBalance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::AtomBusEffectBinauralStatics_eventSetBalance_Parms), Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics
	{
		struct AtomBusEffectBinauralStatics_eventSetBypass_Parms
		{
			FAtomBusEffectBinauralSettings BinauralSettings;
			bool bBypass;
			FAtomBusEffectBinauralSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinauralSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_BinauralSettings = { "BinauralSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetBypass_Parms, BinauralSettings), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(nullptr, 0) }; // 442524121
	void Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectBinauralStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectBinauralStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(nullptr, 0) }; // 442524121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_BinauralSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Binaural" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBinauralStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::AtomBusEffectBinauralStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics
	{
		struct AtomBusEffectBinauralStatics_eventSetGain_Parms
		{
			FAtomBusEffectBinauralSettings BinauralSettings;
			float Gain;
			FAtomBusEffectBinauralSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinauralSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::NewProp_BinauralSettings = { "BinauralSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetGain_Parms, BinauralSettings), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(nullptr, 0) }; // 442524121
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralStatics_eventSetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(nullptr, 0) }; // 442524121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::NewProp_BinauralSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Binaural" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBinauralStatics, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::AtomBusEffectBinauralStatics_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBinauralStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectBinauralStatics_NoRegister()
	{
		return UAtomBusEffectBinauralStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBalance, "SetBalance" }, // 1592748435
		{ &Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetBypass, "SetBypass" }, // 2475674339
		{ &Z_Construct_UFunction_UAtomBusEffectBinauralStatics_SetGain, "SetGain" }, // 3478170756
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBinauralStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "* UAtomBusEffectBinauralStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBinauralStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::ClassParams = {
		&UAtomBusEffectBinauralStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBinauralStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBinauralStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBinauralStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBinauralStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBinauralStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBinauralStatics>()
	{
		return UAtomBusEffectBinauralStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBinauralStatics);
	UAtomBusEffectBinauralStatics::~UAtomBusEffectBinauralStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectBinauralPreset::execSetBalance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBalance(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBinauralPreset::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBinauralPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBinauralSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBinauralPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBinauralSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectBinauralPreset::StaticRegisterNativesUAtomBusEffectBinauralPreset()
	{
		UClass* Class = UAtomBusEffectBinauralPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBalance", &UAtomBusEffectBinauralPreset::execSetBalance },
			{ "SetDefaultSettings", &UAtomBusEffectBinauralPreset::execSetDefaultSettings },
			{ "SetGain", &UAtomBusEffectBinauralPreset::execSetGain },
			{ "SetSettings", &UAtomBusEffectBinauralPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics
	{
		struct AtomBusEffectBinauralPreset_eventSetBalance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralPreset_eventSetBalance_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Binaural" },
		{ "Comment", "// Set volume balance between front and rear channels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "Set volume balance between front and rear channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBinauralPreset, nullptr, "SetBalance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::AtomBusEffectBinauralPreset_eventSetBalance_Parms), Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectBinauralPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectBinauralSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 442524121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Binaural" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBinauralPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::AtomBusEffectBinauralPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics
	{
		struct AtomBusEffectBinauralPreset_eventSetGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralPreset_eventSetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Binaural" },
		{ "Comment", "// Set output gain.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "Set output gain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBinauralPreset, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::AtomBusEffectBinauralPreset_eventSetGain_Parms), Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics
	{
		struct AtomBusEffectBinauralPreset_eventSetSettings_Parms
		{
			FAtomBusEffectBinauralSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBinauralPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 442524121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Binaural" },
		{ "Comment", "// Sets runtime Binaural settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ToolTip", "Sets runtime Binaural settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBinauralPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::AtomBusEffectBinauralPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBinauralPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectBinauralPreset_NoRegister()
	{
		return UAtomBusEffectBinauralPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetBalance, "SetBalance" }, // 2870830202
		{ &Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetDefaultSettings, "SetDefaultSettings" }, // 3403771524
		{ &Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetGain, "SetGain" }, // 45563296
		{ &Z_Construct_UFunction_UAtomBusEffectBinauralPreset_SetSettings, "SetSettings" }, // 3934992688
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBinauralPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectBinauralPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Binaural preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Binaural preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBinauralPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_Settings_MetaData)) }; // 442524121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBinaural.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBinauralPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 442524121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBinauralPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::ClassParams = {
		&UAtomBusEffectBinauralPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBinauralPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBinauralPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBinauralPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBinauralPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBinauralPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBinauralPreset>()
	{
		return UAtomBusEffectBinauralPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBinauralPreset);
	UAtomBusEffectBinauralPreset::~UAtomBusEffectBinauralPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectBinauralSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectBinauralSettings_Statics::NewStructOps, TEXT("AtomBusEffectBinauralSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectBinauralSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectBinauralSettings), 442524121U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectBinauralStatics, UAtomBusEffectBinauralStatics::StaticClass, TEXT("UAtomBusEffectBinauralStatics"), &Z_Registration_Info_UClass_UAtomBusEffectBinauralStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBinauralStatics), 3060369743U) },
		{ Z_Construct_UClass_UAtomBusEffectBinauralPreset, UAtomBusEffectBinauralPreset::StaticClass, TEXT("UAtomBusEffectBinauralPreset"), &Z_Registration_Info_UClass_UAtomBusEffectBinauralPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBinauralPreset), 2277126573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_713921708(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBinaural_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
