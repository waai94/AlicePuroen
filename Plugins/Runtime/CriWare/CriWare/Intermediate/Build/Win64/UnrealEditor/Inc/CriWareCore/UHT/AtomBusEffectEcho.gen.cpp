// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectEcho.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectEcho() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectEchoPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectEchoPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectEchoStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectEchoStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings;
class UScriptStruct* FAtomBusEffectEchoSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectEchoSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectEchoSettings>()
{
	return FAtomBusEffectEchoSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectEchoSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "* FAtomBusEffectEchoSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectEchoSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Echo" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Specifies the delay time of the echo in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "Specifies the delay time of the echo in milliseconds." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectEchoSettings, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "Echo" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "-0.99" },
		{ "Comment", "/** Specifies the feedback gain of the echo. Please note that the echo sound due to large feedback gain will not stop even if you stop playback. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "Specifies the feedback gain of the echo. Please note that the echo sound due to large feedback gain will not stop even if you stop playback." },
		{ "UIMax", "0.99" },
		{ "UIMin", "-0.99" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectEchoSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_MaximumDelayTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "//~ End effect parameters\n" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectEchoSettings, MaximumDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_MaximumDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_MaximumDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectEchoSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectEchoSettings), &Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectEchoSettings",
		sizeof(FAtomBusEffectEchoSettings),
		alignof(FAtomBusEffectEchoSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectEchoSettings,Z_Param_Out_EchoSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectEchoSettings*)Z_Param__Result=UAtomBusEffectEchoStatics::SetBypass(Z_Param_Out_EchoSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoStatics::execSetMaximumDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectEchoSettings,Z_Param_Out_EchoSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectEchoSettings*)Z_Param__Result=UAtomBusEffectEchoStatics::SetMaximumDelayTime(Z_Param_Out_EchoSettings,Z_Param_MaximumDelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoStatics::execSetFeedback)
	{
		P_GET_STRUCT_REF(FAtomBusEffectEchoSettings,Z_Param_Out_EchoSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectEchoSettings*)Z_Param__Result=UAtomBusEffectEchoStatics::SetFeedback(Z_Param_Out_EchoSettings,Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoStatics::execSetDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectEchoSettings,Z_Param_Out_EchoSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectEchoSettings*)Z_Param__Result=UAtomBusEffectEchoStatics::SetDelayTime(Z_Param_Out_EchoSettings,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	void UAtomBusEffectEchoStatics::StaticRegisterNativesUAtomBusEffectEchoStatics()
	{
		UClass* Class = UAtomBusEffectEchoStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectEchoStatics::execSetBypass },
			{ "SetDelayTime", &UAtomBusEffectEchoStatics::execSetDelayTime },
			{ "SetFeedback", &UAtomBusEffectEchoStatics::execSetFeedback },
			{ "SetMaximumDelayTime", &UAtomBusEffectEchoStatics::execSetMaximumDelayTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics
	{
		struct AtomBusEffectEchoStatics_eventSetBypass_Parms
		{
			FAtomBusEffectEchoSettings EchoSettings;
			bool bBypass;
			FAtomBusEffectEchoSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EchoSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_EchoSettings = { "EchoSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetBypass_Parms, EchoSettings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	void Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectEchoStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectEchoStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_EchoSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::AtomBusEffectEchoStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics
	{
		struct AtomBusEffectEchoStatics_eventSetDelayTime_Parms
		{
			FAtomBusEffectEchoSettings EchoSettings;
			float DelayTime;
			FAtomBusEffectEchoSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EchoSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::NewProp_EchoSettings = { "EchoSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetDelayTime_Parms, EchoSettings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetDelayTime_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::NewProp_EchoSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoStatics, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::AtomBusEffectEchoStatics_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics
	{
		struct AtomBusEffectEchoStatics_eventSetFeedback_Parms
		{
			FAtomBusEffectEchoSettings EchoSettings;
			float Feedback;
			FAtomBusEffectEchoSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EchoSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::NewProp_EchoSettings = { "EchoSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetFeedback_Parms, EchoSettings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetFeedback_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::NewProp_EchoSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoStatics, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::AtomBusEffectEchoStatics_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics
	{
		struct AtomBusEffectEchoStatics_eventSetMaximumDelayTime_Parms
		{
			FAtomBusEffectEchoSettings EchoSettings;
			float MaximumDelayTime;
			FAtomBusEffectEchoSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EchoSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::NewProp_EchoSettings = { "EchoSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetMaximumDelayTime_Parms, EchoSettings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetMaximumDelayTime_Parms, MaximumDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoStatics_eventSetMaximumDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(nullptr, 0) }; // 3160920740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::NewProp_EchoSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoStatics, nullptr, "SetMaximumDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::AtomBusEffectEchoStatics_eventSetMaximumDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectEchoStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectEchoStatics_NoRegister()
	{
		return UAtomBusEffectEchoStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetBypass, "SetBypass" }, // 1272200442
		{ &Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetDelayTime, "SetDelayTime" }, // 1231482529
		{ &Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetFeedback, "SetFeedback" }, // 1021868691
		{ &Z_Construct_UFunction_UAtomBusEffectEchoStatics_SetMaximumDelayTime, "SetMaximumDelayTime" }, // 3339743132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectEchoStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectEcho.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "* UAtomBusEffectEchoStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectEchoStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::ClassParams = {
		&UAtomBusEffectEchoStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectEchoStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectEchoStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectEchoStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectEchoStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectEchoStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectEchoStatics>()
	{
		return UAtomBusEffectEchoStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectEchoStatics);
	UAtomBusEffectEchoStatics::~UAtomBusEffectEchoStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectEchoPreset::execGetMaxDelayTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDelayTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoPreset::execSetFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedback(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoPreset::execSetDelayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelayTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectEchoSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectEchoPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectEchoSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectEchoPreset::StaticRegisterNativesUAtomBusEffectEchoPreset()
	{
		UClass* Class = UAtomBusEffectEchoPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxDelayTime", &UAtomBusEffectEchoPreset::execGetMaxDelayTime },
			{ "SetDefaultSettings", &UAtomBusEffectEchoPreset::execSetDefaultSettings },
			{ "SetDelayTime", &UAtomBusEffectEchoPreset::execSetDelayTime },
			{ "SetFeedback", &UAtomBusEffectEchoPreset::execSetFeedback },
			{ "SetSettings", &UAtomBusEffectEchoPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics
	{
		struct AtomBusEffectEchoPreset_eventGetMaxDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoPreset_eventGetMaxDelayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "Comment", "// Get the maximum delay time possible, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "Get the maximum delay time possible, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoPreset, nullptr, "GetMaxDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::AtomBusEffectEchoPreset_eventGetMaxDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectEchoPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectEchoSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 3160920740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::AtomBusEffectEchoPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics
	{
		struct AtomBusEffectEchoPreset_eventSetDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoPreset_eventSetDelayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "Comment", "// Set the delay time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "Set the delay time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoPreset, nullptr, "SetDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::AtomBusEffectEchoPreset_eventSetDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics
	{
		struct AtomBusEffectEchoPreset_eventSetFeedback_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoPreset_eventSetFeedback_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Echo" },
		{ "Comment", "// Set the feedback gain. (Internaly truncated to [-0.99f, 0.99f] to avoid infinite echo.)\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "Set the feedback gain. (Internaly truncated to [-0.99f, 0.99f] to avoid infinite echo.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoPreset, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::AtomBusEffectEchoPreset_eventSetFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics
	{
		struct AtomBusEffectEchoPreset_eventSetSettings_Parms
		{
			FAtomBusEffectEchoSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectEchoPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3160920740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Echo" },
		{ "Comment", "// Sets runtime Echo settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ToolTip", "Sets runtime Echo settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectEchoPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::AtomBusEffectEchoPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectEchoPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectEchoPreset_NoRegister()
	{
		return UAtomBusEffectEchoPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectEchoPreset_GetMaxDelayTime, "GetMaxDelayTime" }, // 2526295128
		{ &Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2803890230
		{ &Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetDelayTime, "SetDelayTime" }, // 2956777590
		{ &Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetFeedback, "SetFeedback" }, // 3164873333
		{ &Z_Construct_UFunction_UAtomBusEffectEchoPreset_SetSettings, "SetSettings" }, // 966758358
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectEchoPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectEcho.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectEchoPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The Echo preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Echo preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectEchoPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_Settings_MetaData)) }; // 3160920740
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectEcho.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectEchoPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 3160920740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectEchoPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::ClassParams = {
		&UAtomBusEffectEchoPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectEchoPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectEchoPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectEchoPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectEchoPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectEchoPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectEchoPreset>()
	{
		return UAtomBusEffectEchoPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectEchoPreset);
	UAtomBusEffectEchoPreset::~UAtomBusEffectEchoPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectEchoSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectEchoSettings_Statics::NewStructOps, TEXT("AtomBusEffectEchoSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectEchoSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectEchoSettings), 3160920740U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectEchoStatics, UAtomBusEffectEchoStatics::StaticClass, TEXT("UAtomBusEffectEchoStatics"), &Z_Registration_Info_UClass_UAtomBusEffectEchoStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectEchoStatics), 4161289517U) },
		{ Z_Construct_UClass_UAtomBusEffectEchoPreset, UAtomBusEffectEchoPreset::StaticClass, TEXT("UAtomBusEffectEchoPreset"), &Z_Registration_Info_UClass_UAtomBusEffectEchoPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectEchoPreset), 1484108553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_4218580607(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectEcho_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
