// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectBandpassFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectBandpassFilter() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings;
class UScriptStruct* FAtomBusEffectBandpassFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectBandpassFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectBandpassFilterSettings>()
{
	return FAtomBusEffectBandpassFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectBandpassFilterSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ToolTip", "* FAtomBusEffectBandpassFilterSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectBandpassFilterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_LowCutoff_MetaData[] = {
		{ "Category", "Bandpass Filter" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "24.0" },
		{ "Comment", "/** Specifies the low cutoff frequency of the band pass filter output in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the low cutoff frequency of the band pass filter output in hertz." },
		{ "UIMax", "24000.0" },
		{ "UIMin", "24.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_LowCutoff = { "LowCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBandpassFilterSettings, LowCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_LowCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_LowCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_HighCutoff_MetaData[] = {
		{ "Category", "Bandpass Filter" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "24.0" },
		{ "Comment", "/** Specifies the high cutoff frequency of the band pass filter output in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the high cutoff frequency of the band pass filter output in hertz." },
		{ "UIMax", "24000.0" },
		{ "UIMin", "24.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_HighCutoff = { "HighCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectBandpassFilterSettings, HighCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_HighCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_HighCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectBandpassFilterSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectBandpassFilterSettings), &Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_LowCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_HighCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectBandpassFilterSettings",
		sizeof(FAtomBusEffectBandpassFilterSettings),
		alignof(FAtomBusEffectBandpassFilterSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectBandpassFilterStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBandpassFilterSettings,Z_Param_Out_BandpassFilterSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBandpassFilterSettings*)Z_Param__Result=UAtomBusEffectBandpassFilterStatics::SetBypass(Z_Param_Out_BandpassFilterSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBandpassFilterStatics::execSetHighCutoff)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBandpassFilterSettings,Z_Param_Out_BandpassFilterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HighCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBandpassFilterSettings*)Z_Param__Result=UAtomBusEffectBandpassFilterStatics::SetHighCutoff(Z_Param_Out_BandpassFilterSettings,Z_Param_HighCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBandpassFilterStatics::execSetLowCutoff)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBandpassFilterSettings,Z_Param_Out_BandpassFilterSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LowCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectBandpassFilterSettings*)Z_Param__Result=UAtomBusEffectBandpassFilterStatics::SetLowCutoff(Z_Param_Out_BandpassFilterSettings,Z_Param_LowCutoff);
		P_NATIVE_END;
	}
	void UAtomBusEffectBandpassFilterStatics::StaticRegisterNativesUAtomBusEffectBandpassFilterStatics()
	{
		UClass* Class = UAtomBusEffectBandpassFilterStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectBandpassFilterStatics::execSetBypass },
			{ "SetHighCutoff", &UAtomBusEffectBandpassFilterStatics::execSetHighCutoff },
			{ "SetLowCutoff", &UAtomBusEffectBandpassFilterStatics::execSetLowCutoff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics
	{
		struct AtomBusEffectBandpassFilterStatics_eventSetBypass_Parms
		{
			FAtomBusEffectBandpassFilterSettings BandpassFilterSettings;
			bool bBypass;
			FAtomBusEffectBandpassFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BandpassFilterSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_BandpassFilterSettings = { "BandpassFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetBypass_Parms, BandpassFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 1025814438
	void Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectBandpassFilterStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectBandpassFilterStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 1025814438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_BandpassFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BandpassFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::AtomBusEffectBandpassFilterStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics
	{
		struct AtomBusEffectBandpassFilterStatics_eventSetHighCutoff_Parms
		{
			FAtomBusEffectBandpassFilterSettings BandpassFilterSettings;
			float HighCutoff;
			FAtomBusEffectBandpassFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BandpassFilterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighCutoff;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::NewProp_BandpassFilterSettings = { "BandpassFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetHighCutoff_Parms, BandpassFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 1025814438
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::NewProp_HighCutoff = { "HighCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetHighCutoff_Parms, HighCutoff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetHighCutoff_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 1025814438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::NewProp_BandpassFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::NewProp_HighCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BandpassFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics, nullptr, "SetHighCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::AtomBusEffectBandpassFilterStatics_eventSetHighCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics
	{
		struct AtomBusEffectBandpassFilterStatics_eventSetLowCutoff_Parms
		{
			FAtomBusEffectBandpassFilterSettings BandpassFilterSettings;
			float LowCutoff;
			FAtomBusEffectBandpassFilterSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BandpassFilterSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowCutoff;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::NewProp_BandpassFilterSettings = { "BandpassFilterSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetLowCutoff_Parms, BandpassFilterSettings), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 1025814438
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::NewProp_LowCutoff = { "LowCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetLowCutoff_Parms, LowCutoff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterStatics_eventSetLowCutoff_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(nullptr, 0) }; // 1025814438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::NewProp_BandpassFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::NewProp_LowCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BandpassFilter" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics, nullptr, "SetLowCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::AtomBusEffectBandpassFilterStatics_eventSetLowCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBandpassFilterStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_NoRegister()
	{
		return UAtomBusEffectBandpassFilterStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetBypass, "SetBypass" }, // 1079829936
		{ &Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetHighCutoff, "SetHighCutoff" }, // 2365816108
		{ &Z_Construct_UFunction_UAtomBusEffectBandpassFilterStatics_SetLowCutoff, "SetLowCutoff" }, // 2616242840
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBandpassFilterStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ToolTip", "* UAtomBusEffectBandpassFilterStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBandpassFilterStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::ClassParams = {
		&UAtomBusEffectBandpassFilterStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBandpassFilterStatics>()
	{
		return UAtomBusEffectBandpassFilterStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBandpassFilterStatics);
	UAtomBusEffectBandpassFilterStatics::~UAtomBusEffectBandpassFilterStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectBandpassFilterPreset::execSetHighCutoff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frenquency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHighCutoff(Z_Param_Frenquency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBandpassFilterPreset::execSetLowCutoff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frenquency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowCutoff(Z_Param_Frenquency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBandpassFilterPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBandpassFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectBandpassFilterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectBandpassFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectBandpassFilterPreset::StaticRegisterNativesUAtomBusEffectBandpassFilterPreset()
	{
		UClass* Class = UAtomBusEffectBandpassFilterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDefaultSettings", &UAtomBusEffectBandpassFilterPreset::execSetDefaultSettings },
			{ "SetHighCutoff", &UAtomBusEffectBandpassFilterPreset::execSetHighCutoff },
			{ "SetLowCutoff", &UAtomBusEffectBandpassFilterPreset::execSetLowCutoff },
			{ "SetSettings", &UAtomBusEffectBandpassFilterPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectBandpassFilterPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectBandpassFilterSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 1025814438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BandpassFilter" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::AtomBusEffectBandpassFilterPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics
	{
		struct AtomBusEffectBandpassFilterPreset_eventSetHighCutoff_Parms
		{
			float Frenquency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frenquency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::NewProp_Frenquency = { "Frenquency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterPreset_eventSetHighCutoff_Parms, Frenquency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::NewProp_Frenquency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BandpassFilter" },
		{ "Comment", "// Set the high cutoff frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ToolTip", "Set the high cutoff frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset, nullptr, "SetHighCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::AtomBusEffectBandpassFilterPreset_eventSetHighCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics
	{
		struct AtomBusEffectBandpassFilterPreset_eventSetLowCutoff_Parms
		{
			float Frenquency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frenquency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::NewProp_Frenquency = { "Frenquency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterPreset_eventSetLowCutoff_Parms, Frenquency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::NewProp_Frenquency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|BandpassFilter" },
		{ "Comment", "// Set the low cutoff frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ToolTip", "Set the low cutoff frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset, nullptr, "SetLowCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::AtomBusEffectBandpassFilterPreset_eventSetLowCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics
	{
		struct AtomBusEffectBandpassFilterPreset_eventSetSettings_Parms
		{
			FAtomBusEffectBandpassFilterSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectBandpassFilterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1025814438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|BandpassFilter" },
		{ "Comment", "// Sets runtime BandpassFilter settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ToolTip", "Sets runtime BandpassFilter settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::AtomBusEffectBandpassFilterPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectBandpassFilterPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_NoRegister()
	{
		return UAtomBusEffectBandpassFilterPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2626390347
		{ &Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetHighCutoff, "SetHighCutoff" }, // 2162893307
		{ &Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetLowCutoff, "SetLowCutoff" }, // 1401673675
		{ &Z_Construct_UFunction_UAtomBusEffectBandpassFilterPreset_SetSettings, "SetSettings" }, // 2432320258
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectBandpassFilterPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectBandpassFilterPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The BandpassFilter preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The BandpassFilter preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBandpassFilterPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_Settings_MetaData)) }; // 1025814438
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectBandpassFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectBandpassFilterPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 1025814438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectBandpassFilterPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::ClassParams = {
		&UAtomBusEffectBandpassFilterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectBandpassFilterPreset>()
	{
		return UAtomBusEffectBandpassFilterPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectBandpassFilterPreset);
	UAtomBusEffectBandpassFilterPreset::~UAtomBusEffectBandpassFilterPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectBandpassFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectBandpassFilterSettings_Statics::NewStructOps, TEXT("AtomBusEffectBandpassFilterSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectBandpassFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectBandpassFilterSettings), 1025814438U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectBandpassFilterStatics, UAtomBusEffectBandpassFilterStatics::StaticClass, TEXT("UAtomBusEffectBandpassFilterStatics"), &Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBandpassFilterStatics), 255329243U) },
		{ Z_Construct_UClass_UAtomBusEffectBandpassFilterPreset, UAtomBusEffectBandpassFilterPreset::StaticClass, TEXT("UAtomBusEffectBandpassFilterPreset"), &Z_Registration_Info_UClass_UAtomBusEffectBandpassFilterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectBandpassFilterPreset), 2135418152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_1830337630(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectBandpassFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
