// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareWindowsSettings/Public/CriWareWindowsSettings.h"
#include "CriWareCore/Public/CriWareCoreSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareWindowsSettings() {}
// Cross Module References
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareCookOverridesSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings();
	CRIWAREWINDOWSSETTINGS_API UClass* Z_Construct_UClass_UCriWareWindowsSettings();
	CRIWAREWINDOWSSETTINGS_API UClass* Z_Construct_UClass_UCriWareWindowsSettings_NoRegister();
	CRIWAREWINDOWSSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareWASAPISettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareWindowsSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CriWareWASAPISettings;
class UScriptStruct* FCriWareWASAPISettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CriWareWASAPISettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CriWareWASAPISettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCriWareWASAPISettings, Z_Construct_UPackage__Script_CriWareWindowsSettings(), TEXT("CriWareWASAPISettings"));
	}
	return Z_Registration_Info_UScriptStruct_CriWareWASAPISettings.OuterSingleton;
}
template<> CRIWAREWINDOWSSETTINGS_API UScriptStruct* StaticStruct<FCriWareWASAPISettings>()
{
	return FCriWareWASAPISettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardware1_MetaData[];
#endif
		static void NewProp_bEnableHardware1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardware1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardware2_MetaData[];
#endif
		static void NewProp_bEnableHardware2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardware2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardware3_MetaData[];
#endif
		static void NewProp_bEnableHardware3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardware3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardware4_MetaData[];
#endif
		static void NewProp_bEnableHardware4_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardware4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWASAPI_IsExclusive_MetaData[];
#endif
		static void NewProp_bWASAPI_IsExclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWASAPI_IsExclusive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WASAPI_BitsPerSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WASAPI_BitsPerSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WASAPI_SamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WASAPI_SamplingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WASAPI_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WASAPI_NumChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCriWareWASAPISettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware1_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "DisplayName", "Enable WASAPI for Hardware Device 1" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Use Windows Audio Session API (WASAPI) with Hardware Device 1 instead of Microsoft Spatial Sound." },
	};
#endif
	void Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware1_SetBit(void* Obj)
	{
		((FCriWareWASAPISettings*)Obj)->bEnableHardware1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware1 = { "bEnableHardware1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCriWareWASAPISettings), &Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware2_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "DisplayName", "Enable WASAPI for Hardware Device 2" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Use Windows Audio Session API (WASAPI) with Hardware Device 2 instead of Microsoft Spatial Sound." },
	};
#endif
	void Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware2_SetBit(void* Obj)
	{
		((FCriWareWASAPISettings*)Obj)->bEnableHardware2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware2 = { "bEnableHardware2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCriWareWASAPISettings), &Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware3_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "DisplayName", "Enable WASAPI for Hardware Device 3" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Use Windows Audio Session API (WASAPI) with Hardware Device 3 instead of Microsoft Spatial Sound." },
	};
#endif
	void Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware3_SetBit(void* Obj)
	{
		((FCriWareWASAPISettings*)Obj)->bEnableHardware3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware3 = { "bEnableHardware3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCriWareWASAPISettings), &Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware4_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "DisplayName", "Enable WASAPI for Hardware Device 4" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Use Windows Audio Session API (WASAPI) with Hardware Device 4 instead of Microsoft Spatial Sound." },
	};
#endif
	void Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware4_SetBit(void* Obj)
	{
		((FCriWareWASAPISettings*)Obj)->bEnableHardware4 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware4 = { "bEnableHardware4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCriWareWASAPISettings), &Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bWASAPI_IsExclusive_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "DisplayName", "WASAPI Is Exclusive" },
		{ "EditCondition", "bEnableHardware1 || bEnableHardware2 || bEnableHardware3 || bEnableHardware4" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "WASAPI is exclusive." },
	};
#endif
	void Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bWASAPI_IsExclusive_SetBit(void* Obj)
	{
		((FCriWareWASAPISettings*)Obj)->bWASAPI_IsExclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bWASAPI_IsExclusive = { "bWASAPI_IsExclusive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCriWareWASAPISettings), &Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bWASAPI_IsExclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bWASAPI_IsExclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bWASAPI_IsExclusive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_BitsPerSample_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "ClampMin", "0" },
		{ "EditCondition", "(bEnableHardware1 || bEnableHardware2 || bEnableHardware3 || bEnableHardware4) && bWASAPI_IsExclusive" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "WASAPI bits per sample." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_BitsPerSample = { "WASAPI_BitsPerSample", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareWASAPISettings, WASAPI_BitsPerSample), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_BitsPerSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_BitsPerSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_SamplingRate_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "ClampMin", "0" },
		{ "EditCondition", "(bEnableHardware1 || bEnableHardware2 || bEnableHardware3 || bEnableHardware4) && bWASAPI_IsExclusive" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "WASAPI sampling rate." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_SamplingRate = { "WASAPI_SamplingRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareWASAPISettings, WASAPI_SamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_NumChannels_MetaData[] = {
		{ "Category", "WASAPI" },
		{ "ClampMin", "0" },
		{ "DisplayName", "WASAPI Number of Output Channels" },
		{ "EditCondition", "(bEnableHardware1 || bEnableHardware2 || bEnableHardware3 || bEnableHardware4) && bWASAPI_IsExclusive" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "WASAPI number of output channels." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_NumChannels = { "WASAPI_NumChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareWASAPISettings, WASAPI_NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_NumChannels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bEnableHardware4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_bWASAPI_IsExclusive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_BitsPerSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_SamplingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewProp_WASAPI_NumChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareWindowsSettings,
		nullptr,
		&NewStructOps,
		"CriWareWASAPISettings",
		sizeof(FCriWareWASAPISettings),
		alignof(FCriWareWASAPISettings),
		Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCriWareWASAPISettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CriWareWASAPISettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CriWareWASAPISettings.InnerSingleton, Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CriWareWASAPISettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UCriWareWindowsSettings::execGetHardwareDeviceOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetHardwareDeviceOptions();
		P_NATIVE_END;
	}
	void UCriWareWindowsSettings::StaticRegisterNativesUCriWareWindowsSettings()
	{
		UClass* Class = UCriWareWindowsSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHardwareDeviceOptions", &UCriWareWindowsSettings::execGetHardwareDeviceOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics
	{
		struct CriWareWindowsSettings_eventGetHardwareDeviceOptions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriWareWindowsSettings_eventGetHardwareDeviceOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareWindowsSettings, nullptr, "GetHardwareDeviceOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::CriWareWindowsSettings_eventGetHardwareDeviceOptions_Parms), Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareWindowsSettings);
	UClass* Z_Construct_UClass_UCriWareWindowsSettings_NoRegister()
	{
		return UCriWareWindowsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareWindowsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardVoicesOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StandardVoicesOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxVoicesOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HcaMxVoicesOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WASAPISettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WASAPISettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointMappings_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndpointMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardware1_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Hardware1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardware2_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Hardware2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardware3_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Hardware3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardware4_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Hardware4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomSourceDataOverridePlugin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AtomSourceDataOverridePlugin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareWindowsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareWindowsSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriWareWindowsSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriWareWindowsSettings_GetHardwareDeviceOptions, "GetHardwareDeviceOptions" }, // 574357956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for CriWare on Windows platform.\n */" },
		{ "DisplayName", "Windows" },
		{ "IncludePath", "CriWareWindowsSettings.h" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for CriWare on Windows platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_StandardVoicesOverrides_MetaData[] = {
		{ "Category", "Atom|Voices" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Standard Voices Overrides" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_StandardVoicesOverrides = { "StandardVoicesOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, StandardVoicesOverrides), Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_StandardVoicesOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_StandardVoicesOverrides_MetaData)) }; // 4261860336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_HcaMxVoicesOverrides_MetaData[] = {
		{ "Category", "Atom|Voices" },
		{ "Comment", "/** */" },
		{ "DisplayName", "HCA-MX Voices Overrides" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_HcaMxVoicesOverrides = { "HcaMxVoicesOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, HcaMxVoicesOverrides), Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_HcaMxVoicesOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_HcaMxVoicesOverrides_MetaData)) }; // 1099285983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_WASAPISettings_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** */" },
		{ "DisplayName", "WASAPI Settings" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_WASAPISettings = { "WASAPISettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, WASAPISettings), Z_Construct_UScriptStruct_FCriWareWASAPISettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_WASAPISettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_WASAPISettings_MetaData)) }; // 207837723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_EndpointMappings_MetaData[] = {
		{ "ArraySizeEnum", "/Script/CriWareCore.EAtomSoundRendererType" },
		{ "Category", "Atom|Sound Renderer" },
		{ "Comment", "/** Enable to override Asr Rack Configurations from common settings. *///UPROPERTY(config, EditAnyWhere, Category = \"Atom|Sound Renderer\", meta = (\n//\x09""DisplayName = \"Override MasterRack\",\n//\x09Tooltip = \"Enable to override Asr Rack Configurations from common settings. This will not create more sound render than there is in common settings.\"))\n//bool bOverrideMasterRack;\n" },
		{ "DisplayName", "Endpoint Mappings" },
		{ "GetOptions", "GetHardwareDeviceOptions" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "ToolTip", "Enable to override Asr Rack Configurations from common settings. //UPROPERTY(config, EditAnyWhere, Category = \"Atom|Sound Renderer\", meta = (\n//     DisplayName = \"Override MasterRack\",\n//     Tooltip = \"Enable to override Asr Rack Configurations from common settings. This will not create more sound render than there is in common settings.\"))\n//bool bOverrideMasterRack;" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_EndpointMappings = { "EndpointMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(EndpointMappings, UCriWareWindowsSettings), nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, EndpointMappings), METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_EndpointMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_EndpointMappings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware1_MetaData[] = {
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Hardware Device 1" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Audio Device used as 'Hardware 1' endpoint." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware1 = { "Hardware1", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, Hardware1), METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware2_MetaData[] = {
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Hardware Device 2" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Audio Device used as 'Hardware 2' endpoint." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware2 = { "Hardware2", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, Hardware2), METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware3_MetaData[] = {
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Hardware Device 3" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Audio Device used as 'Hardware 3' endpoint." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware3 = { "Hardware3", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, Hardware3), METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware4_MetaData[] = {
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Hardware Device 4" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Audio Device used as 'Hardware 4' endpoint." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware4 = { "Hardware4", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, Hardware4), METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_CookOverrides_MetaData[] = {
		{ "Category", "Atom|Cook Overrides" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "Tooltip", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_CookOverrides = { "CookOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, CookOverrides), Z_Construct_UScriptStruct_FCriWareCookOverridesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_CookOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_CookOverrides_MetaData)) }; // 2538864347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_AtomSourceDataOverridePlugin_MetaData[] = {
		{ "Category", "Atom|Plugins" },
		{ "DisplayName", "Atom SourceDataOverridePlugin" },
		{ "ModuleRelativePath", "Public/CriWareWindowsSettings.h" },
		{ "Tooltip", "Which of the currently enabled source data override plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_AtomSourceDataOverridePlugin = { "AtomSourceDataOverridePlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareWindowsSettings, AtomSourceDataOverridePlugin), METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_AtomSourceDataOverridePlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_AtomSourceDataOverridePlugin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareWindowsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_StandardVoicesOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_HcaMxVoicesOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_WASAPISettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_EndpointMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_Hardware4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_CookOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareWindowsSettings_Statics::NewProp_AtomSourceDataOverridePlugin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareWindowsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareWindowsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareWindowsSettings_Statics::ClassParams = {
		&UCriWareWindowsSettings::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriWareWindowsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareWindowsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWindowsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareWindowsSettings()
	{
		if (!Z_Registration_Info_UClass_UCriWareWindowsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareWindowsSettings.OuterSingleton, Z_Construct_UClass_UCriWareWindowsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareWindowsSettings.OuterSingleton;
	}
	template<> CRIWAREWINDOWSSETTINGS_API UClass* StaticClass<UCriWareWindowsSettings>()
	{
		return UCriWareWindowsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareWindowsSettings);
	UCriWareWindowsSettings::~UCriWareWindowsSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_Statics::ScriptStructInfo[] = {
		{ FCriWareWASAPISettings::StaticStruct, Z_Construct_UScriptStruct_FCriWareWASAPISettings_Statics::NewStructOps, TEXT("CriWareWASAPISettings"), &Z_Registration_Info_UScriptStruct_CriWareWASAPISettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCriWareWASAPISettings), 207837723U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareWindowsSettings, UCriWareWindowsSettings::StaticClass, TEXT("UCriWareWindowsSettings"), &Z_Registration_Info_UClass_UCriWareWindowsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareWindowsSettings), 4230454538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_1801505360(TEXT("/Script/CriWareWindowsSettings"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_CriWareWindowsSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
