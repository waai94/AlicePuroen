// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectDelay() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDelayPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDelayPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDelayStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectDelayStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings;
class UScriptStruct* FAtomBusEffectDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectDelaySettings>()
{
	return FAtomBusEffectDelaySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectDelaySettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "* FAtomBusEffectDelaySettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectDelaySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Specifies the delay time in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "Specifies the delay time in milliseconds." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectDelaySettings, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_MaximumDelayTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "//~ End effect parameters\n" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectDelaySettings, MaximumDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_MaximumDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_MaximumDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectDelaySettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectDelaySettings), &Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectDelaySettings",
		sizeof(FAtomBusEffectDelaySettings),
		alignof(FAtomBusEffectDelaySettings),
		Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectDelayStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDelaySettings,Z_Param_Out_DelaySettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDelaySettings*)Z_Param__Result=UAtomBusEffectDelayStatics::SetBypass(Z_Param_Out_DelaySettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDelayStatics::execSetMaximumDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDelaySettings,Z_Param_Out_DelaySettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDelaySettings*)Z_Param__Result=UAtomBusEffectDelayStatics::SetMaximumDelayTime(Z_Param_Out_DelaySettings,Z_Param_MaximumDelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDelayStatics::execSetDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDelaySettings,Z_Param_Out_DelaySettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectDelaySettings*)Z_Param__Result=UAtomBusEffectDelayStatics::SetDelayTime(Z_Param_Out_DelaySettings,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	void UAtomBusEffectDelayStatics::StaticRegisterNativesUAtomBusEffectDelayStatics()
	{
		UClass* Class = UAtomBusEffectDelayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectDelayStatics::execSetBypass },
			{ "SetDelayTime", &UAtomBusEffectDelayStatics::execSetDelayTime },
			{ "SetMaximumDelayTime", &UAtomBusEffectDelayStatics::execSetMaximumDelayTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics
	{
		struct AtomBusEffectDelayStatics_eventSetBypass_Parms
		{
			FAtomBusEffectDelaySettings DelaySettings;
			bool bBypass;
			FAtomBusEffectDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelaySettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_DelaySettings = { "DelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetBypass_Parms, DelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 3573144762
	void Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectDelayStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectDelayStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 3573144762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_DelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDelayStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::AtomBusEffectDelayStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics
	{
		struct AtomBusEffectDelayStatics_eventSetDelayTime_Parms
		{
			FAtomBusEffectDelaySettings DelaySettings;
			float DelayTime;
			FAtomBusEffectDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelaySettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::NewProp_DelaySettings = { "DelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetDelayTime_Parms, DelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 3573144762
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetDelayTime_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 3573144762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::NewProp_DelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDelayStatics, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::AtomBusEffectDelayStatics_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics
	{
		struct AtomBusEffectDelayStatics_eventSetMaximumDelayTime_Parms
		{
			FAtomBusEffectDelaySettings DelaySettings;
			float MaximumDelayTime;
			FAtomBusEffectDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelaySettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::NewProp_DelaySettings = { "DelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetMaximumDelayTime_Parms, DelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 3573144762
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetMaximumDelayTime_Parms, MaximumDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayStatics_eventSetMaximumDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 3573144762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::NewProp_DelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDelayStatics, nullptr, "SetMaximumDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::AtomBusEffectDelayStatics_eventSetMaximumDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectDelayStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectDelayStatics_NoRegister()
	{
		return UAtomBusEffectDelayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetBypass, "SetBypass" }, // 2265859109
		{ &Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetDelayTime, "SetDelayTime" }, // 1115526620
		{ &Z_Construct_UFunction_UAtomBusEffectDelayStatics_SetMaximumDelayTime, "SetMaximumDelayTime" }, // 4059156756
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectDelayStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectDelay.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "* UAtomBusEffectDelayStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectDelayStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::ClassParams = {
		&UAtomBusEffectDelayStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectDelayStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectDelayStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectDelayStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectDelayStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectDelayStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectDelayStatics>()
	{
		return UAtomBusEffectDelayStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectDelayStatics);
	UAtomBusEffectDelayStatics::~UAtomBusEffectDelayStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectDelayPreset::execGetMaxDelayTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDelayTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDelayPreset::execSetDelayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelayTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDelayPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectDelayPreset::StaticRegisterNativesUAtomBusEffectDelayPreset()
	{
		UClass* Class = UAtomBusEffectDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxDelayTime", &UAtomBusEffectDelayPreset::execGetMaxDelayTime },
			{ "SetDefaultSettings", &UAtomBusEffectDelayPreset::execSetDefaultSettings },
			{ "SetDelayTime", &UAtomBusEffectDelayPreset::execSetDelayTime },
			{ "SetSettings", &UAtomBusEffectDelayPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics
	{
		struct AtomBusEffectDelayPreset_eventGetMaxDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayPreset_eventGetMaxDelayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "Comment", "// Get the maximum delay time possible.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "Get the maximum delay time possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDelayPreset, nullptr, "GetMaxDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::AtomBusEffectDelayPreset_eventGetMaxDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectDelayPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectDelaySettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 3573144762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDelayPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::AtomBusEffectDelayPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics
	{
		struct AtomBusEffectDelayPreset_eventSetDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayPreset_eventSetDelayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "Comment", "// Set the Delay time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "Set the Delay time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDelayPreset, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::AtomBusEffectDelayPreset_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics
	{
		struct AtomBusEffectDelayPreset_eventSetSettings_Parms
		{
			FAtomBusEffectDelaySettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3573144762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Delay" },
		{ "Comment", "// Sets runtime Delay settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ToolTip", "Sets runtime Delay settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::AtomBusEffectDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectDelayPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectDelayPreset_NoRegister()
	{
		return UAtomBusEffectDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectDelayPreset_GetMaxDelayTime, "GetMaxDelayTime" }, // 4234941685
		{ &Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2364451873
		{ &Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetDelayTime, "SetDelayTime" }, // 2730717734
		{ &Z_Construct_UFunction_UAtomBusEffectDelayPreset_SetSettings, "SetSettings" }, // 2514342460
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectDelayPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectDelay.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectDelayPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Delay preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Delay preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectDelayPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_Settings_MetaData)) }; // 3573144762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectDelay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectDelayPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 3573144762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectDelayPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::ClassParams = {
		&UAtomBusEffectDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectDelayPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectDelayPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectDelayPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectDelayPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectDelayPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectDelayPreset>()
	{
		return UAtomBusEffectDelayPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectDelayPreset);
	UAtomBusEffectDelayPreset::~UAtomBusEffectDelayPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectDelaySettings_Statics::NewStructOps, TEXT("AtomBusEffectDelaySettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectDelaySettings), 3573144762U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectDelayStatics, UAtomBusEffectDelayStatics::StaticClass, TEXT("UAtomBusEffectDelayStatics"), &Z_Registration_Info_UClass_UAtomBusEffectDelayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectDelayStatics), 3211450962U) },
		{ Z_Construct_UClass_UAtomBusEffectDelayPreset, UAtomBusEffectDelayPreset::StaticClass, TEXT("UAtomBusEffectDelayPreset"), &Z_Registration_Info_UClass_UAtomBusEffectDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectDelayPreset), 1018285931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_3768859135(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectDelay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
