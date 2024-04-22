// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/CriWareCoreSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareCoreSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareCoreSettings();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareCoreSettings_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundDebugEntry();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareCookOverridesSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings;
class UScriptStruct* FCriWareStandardVoicesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("CriWareStandardVoicesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FCriWareStandardVoicesSettings>()
{
	return FCriWareStandardVoicesSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStandardMemoryVoices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumStandardMemoryVoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceNumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceNumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceSamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceSamplingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStandardStreamingVoices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumStandardStreamingVoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceNumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceNumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceSamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceSamplingRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCriWareStandardVoicesSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardMemoryVoices_MetaData[] = {
		{ "Category", "Standard Voices" },
		{ "ClampMax", "32767" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Standard Memory Voices" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of voices on standard memeory that are reserved by Atom. (ADX/HCA)" },
		{ "UIMax", "128" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardMemoryVoices = { "NumStandardMemoryVoices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareStandardVoicesSettings, NumStandardMemoryVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardMemoryVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardMemoryVoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceNumChannels_MetaData[] = {
		{ "Category", "Standard Voices" },
		{ "ClampMax", "16" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Channels for Standard Memory Voice" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of channels used by a standard memory voice." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceNumChannels = { "StandardMemoryVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareStandardVoicesSettings, StandardMemoryVoiceNumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate_MetaData[] = {
		{ "Category", "Standard Voices" },
		{ "ClampMax", "384000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the sampling rate used by a standard memory voice." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate = { "StandardMemoryVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareStandardVoicesSettings, StandardMemoryVoiceSamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardStreamingVoices_MetaData[] = {
		{ "Category", "Standard Voices" },
		{ "ClampMax", "32767" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Standard Streaming Voices" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of voices that are reserved for standard streaming." },
		{ "UIMax", "128" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardStreamingVoices = { "NumStandardStreamingVoices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareStandardVoicesSettings, NumStandardStreamingVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardStreamingVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardStreamingVoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceNumChannels_MetaData[] = {
		{ "Category", "Standard Voices" },
		{ "ClampMax", "16" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Channels for Standard Streaming Voice" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of channels used by a standard streaming voice." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceNumChannels = { "StandardStreamingVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareStandardVoicesSettings, StandardStreamingVoiceNumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate_MetaData[] = {
		{ "Category", "Standard Voices" },
		{ "ClampMax", "384000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the sampling rate used by a standard streaming voice." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate = { "StandardStreamingVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareStandardVoicesSettings, StandardStreamingVoiceSamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardMemoryVoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceNumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_NumStandardStreamingVoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceNumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"CriWareStandardVoicesSettings",
		sizeof(FCriWareStandardVoicesSettings),
		alignof(FCriWareStandardVoicesSettings),
		Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings.InnerSingleton, Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings;
class UScriptStruct* FCriWareHcaMxVoicesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("CriWareHcaMxVoicesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FCriWareHcaMxVoicesSettings>()
{
	return FCriWareHcaMxVoicesSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxMemoryVoices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumHcaMxMemoryVoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxMemoryVoiceNumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HcaMxMemoryVoiceNumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxStreamingVoices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumHcaMxStreamingVoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxStreamingVoiceNumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HcaMxStreamingVoiceNumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxVoiceSamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HcaMxVoiceSamplingRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCriWareHcaMxVoicesSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxMemoryVoices_MetaData[] = {
		{ "Category", "HCA-MX Voices" },
		{ "ClampMax", "32767" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of HCA-MX Memory Voices" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of voices on HCA-MX memory that are reserved by Atom." },
		{ "UIMax", "128" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxMemoryVoices = { "NumHcaMxMemoryVoices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareHcaMxVoicesSettings, NumHcaMxMemoryVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxMemoryVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxMemoryVoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels_MetaData[] = {
		{ "Category", "HCA-MX Voices" },
		{ "ClampMax", "16" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Channels for HCA-MX Memory Voices" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of channels used by a HCA-MX memory voice." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels = { "HcaMxMemoryVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareHcaMxVoicesSettings, HcaMxMemoryVoiceNumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxStreamingVoices_MetaData[] = {
		{ "Category", "HCA-MX Voices" },
		{ "ClampMax", "32767" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of HCA-MX Streaming Voices" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of voices that are reserved for HCA-MX streaming." },
		{ "UIMax", "128" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxStreamingVoices = { "NumHcaMxStreamingVoices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareHcaMxVoicesSettings, NumHcaMxStreamingVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxStreamingVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxStreamingVoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels_MetaData[] = {
		{ "Category", "HCA-MX Voices" },
		{ "ClampMax", "16" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Number of Channels for HCA-MX Streaming Voice" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the number of channels used by a HCA-MX streaming voice." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels = { "HcaMxStreamingVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareHcaMxVoicesSettings, HcaMxStreamingVoiceNumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxVoiceSamplingRate_MetaData[] = {
		{ "Category", "HCA-MX Voices" },
		{ "ClampMax", "384000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "HCA-MX Voice Sampling Rate" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the sampling rate used by any HCA-MX voice." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxVoiceSamplingRate = { "HcaMxVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriWareHcaMxVoicesSettings, HcaMxVoiceSamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxVoiceSamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxVoiceSamplingRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxMemoryVoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_NumHcaMxStreamingVoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewProp_HcaMxVoiceSamplingRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"CriWareHcaMxVoicesSettings",
		sizeof(FCriWareHcaMxVoicesSettings),
		alignof(FCriWareHcaMxVoicesSettings),
		Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings.InnerSingleton, Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings;
class UScriptStruct* FCriWareCookOverridesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("CriWareCookOverridesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FCriWareCookOverridesSettings>()
{
	return FCriWareCookOverridesSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAtomStreamCaching_MetaData[];
#endif
		static void NewProp_bUseAtomStreamCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAtomStreamCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseManaStreamCaching_MetaData[];
#endif
		static void NewProp_bUseManaStreamCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManaStreamCaching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCriWareCookOverridesSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseAtomStreamCaching_MetaData[] = {
		{ "Category", "Atom|Cook Overrides" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "NOT USED YET - If this is enabled any Atom wave data will be separated from the corresponding asset and loaded into a cache (CueSheets use Atom D-Bas while WaveBanks will use a dedicated cache.)." },
	};
#endif
	void Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseAtomStreamCaching_SetBit(void* Obj)
	{
		((FCriWareCookOverridesSettings*)Obj)->bUseAtomStreamCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseAtomStreamCaching = { "bUseAtomStreamCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCriWareCookOverridesSettings), &Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseAtomStreamCaching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseAtomStreamCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseAtomStreamCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseManaStreamCaching_MetaData[] = {
		{ "Category", "Atom|Cook Overrides" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "NOT USED YET - If this is enabled any Mana movie data will be separated from the corresponding asset and loaded into a cache." },
	};
#endif
	void Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseManaStreamCaching_SetBit(void* Obj)
	{
		((FCriWareCookOverridesSettings*)Obj)->bUseManaStreamCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseManaStreamCaching = { "bUseManaStreamCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCriWareCookOverridesSettings), &Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseManaStreamCaching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseManaStreamCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseManaStreamCaching_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseAtomStreamCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewProp_bUseManaStreamCaching,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"CriWareCookOverridesSettings",
		sizeof(FCriWareCookOverridesSettings),
		alignof(FCriWareCookOverridesSettings),
		Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCriWareCookOverridesSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings.InnerSingleton, Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry;
class UScriptStruct* FAtomSoundDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundDebugEntry, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundDebugEntry>()
{
	return FAtomSoundDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundDebugEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Short name to use when referencing sound (ex. in the command line) */" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "ToolTip", "Short name to use when referencing sound (ex. in the command line)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundDebugEntry, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomSoundBase" },
		{ "Category", "Debug" },
		{ "Comment", "/** Reference to a Debug Sound */" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "ToolTip", "Reference to a Debug Sound" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundDebugEntry, Sound), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewProp_Sound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSoundDebugEntry",
		sizeof(FAtomSoundDebugEntry),
		alignof(FAtomSoundDebugEntry),
		Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry.InnerSingleton;
	}
	void UCriWareCoreSettings::StaticRegisterNativesUCriWareCoreSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareCoreSettings);
	UClass* Z_Construct_UClass_UCriWareCoreSettings_NoRegister()
	{
		return UCriWareCoreSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareCoreSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBinders_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBinders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBindings_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLoaders_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoaders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLoggingFileSystem_MetaData[];
#endif
		static void NewProp_bEnableLoggingFileSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLoggingFileSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtomConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInGamePreview_MetaData[];
#endif
		static void NewProp_bUseInGamePreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInGamePreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitorCommunicationBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MonitorCommunicationBufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSoundPlaybackHandles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSoundPlaybackHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLoggingAtom_MetaData[];
#endif
		static void NewProp_bEnableLoggingAtom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLoggingAtom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterRack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MasterRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationRack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpatializationRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBinauralSpatialization_MetaData[];
#endif
		static void NewProp_bEnableBinauralSpatialization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBinauralSpatialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAudioLink_MetaData[];
#endif
		static void NewProp_bUseAudioLink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAudioLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUnrealSoundRenderer_MetaData[];
#endif
		static void NewProp_bUseUnrealSoundRenderer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUnrealSoundRenderer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOutputSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSoundClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultManaSoundClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultManaSoundClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundConcurrencyName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSoundConcurrencyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutomaticVoiceManagement_MetaData[];
#endif
		static void NewProp_bUseAutomaticVoiceManagement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutomaticVoiceManagement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardVoicesSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StandardVoicesSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxVoicesSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HcaMxVoicesSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModulationParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSoundClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultManaSoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultManaSoundClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundConcurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSoundConcurrency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEditManaClassName_MetaData[];
#endif
		static void NewProp_bCanEditManaClassName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEditManaClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareCoreSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Core" },
		{ "IncludePath", "CriWareCoreSettings.h" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumBinders_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ClampMin", "5" },
		{ "DisplayName", "Number of Binders" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Number of binders. 1 binder is used per resource to read data from Unreal archives. (Note: 4 binders are reserved by the resource manager.)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumBinders = { "NumBinders", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, NumBinders), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumBinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumBinders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxBindings_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ClampMin", "4" },
		{ "DisplayName", "Maximum Number of Bindings" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Maximum number of binders that can access data at same time." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxBindings = { "MaxBindings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, MaxBindings), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxBindings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumLoaders_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number of Loaders" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Number of loaders. 1 Loader is used per voice of a streamed voice pool, also 1 loader is used per resource." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumLoaders = { "NumLoaders", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, NumLoaders), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumLoaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumLoaders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingFileSystem_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Enable logging of File System." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingFileSystem_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bEnableLoggingFileSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingFileSystem = { "bEnableLoggingFileSystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingFileSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingFileSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingFileSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_AtomConfig_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomConfig" },
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Atom configuration preset. (ACF)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_AtomConfig = { "AtomConfig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, AtomConfig), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_AtomConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_AtomConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseInGamePreview_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Enable In-Game-Preview functionality." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseInGamePreview_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bUseInGamePreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseInGamePreview = { "bUseInGamePreview", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseInGamePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseInGamePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseInGamePreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MonitorCommunicationBufferSize_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "2097152" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the buffer size used to communicate between Atom Monitor and CRI Atom Craft tool." },
		{ "Units", "B" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MonitorCommunicationBufferSize = { "MonitorCommunicationBufferSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, MonitorCommunicationBufferSize), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MonitorCommunicationBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MonitorCommunicationBufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxPitch_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Maximum Pitch Value (cents)" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the maximum value for the pitch change in Cents." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, MaxPitch), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DistanceFactor_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the distance factor to use with Atom." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DistanceFactor = { "DistanceFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DistanceFactor), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DistanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DistanceFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxSoundPlaybackHandles_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMax", "32767" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Maximum Sound Playback Handles" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the maximum number of sounds that Atom can play at same time." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxSoundPlaybackHandles = { "MaxSoundPlaybackHandles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, MaxSoundPlaybackHandles), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxSoundPlaybackHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxSoundPlaybackHandles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingAtom_MetaData[] = {
		{ "Category", "Atom|Debug" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Enable logging of Atom." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingAtom_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bEnableLoggingAtom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingAtom = { "bEnableLoggingAtom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingAtom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingAtom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingAtom_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DebugSounds_Inner = { "DebugSounds", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSoundDebugEntry, METADATA_PARAMS(nullptr, 0) }; // 658499598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DebugSounds_MetaData[] = {
		{ "Category", "Atom|Debug" },
		{ "Comment", "/**\n\x09* Sounds only packaged in non-shipped builds for debugging.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "ToolTip", "Sounds only packaged in non-shipped builds for debugging." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DebugSounds = { "DebugSounds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DebugSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DebugSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DebugSounds_MetaData)) }; // 658499598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MasterRack_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomRack" },
		{ "Category", "Atom|Sound Renderer" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the master atom sound renderer rack through which all sounds are routed by default." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MasterRack = { "MasterRack", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, MasterRack), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MasterRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MasterRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_SpatializationRack_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomSoundfieldRack, /Script/CriWareCore.AtomSoundfieldEndpointRack, /Script/CriWareCore.AtomRack" },
		{ "Category", "Atom|Sound Renderer" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the Atom soundfield rack to use for sound routed for binaural spatialization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_SpatializationRack = { "SpatializationRack", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, SpatializationRack), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_SpatializationRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_SpatializationRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableBinauralSpatialization_MetaData[] = {
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Enable Binaural Spatialization" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "If enabled, Atom will use HRTF encoding over any spatial soundfield racks at initialization." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableBinauralSpatialization_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bEnableBinauralSpatialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableBinauralSpatialization = { "bEnableBinauralSpatialization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableBinauralSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableBinauralSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableBinauralSpatialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAudioLink_MetaData[] = {
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Use Audio Link (Experimental)" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "If enabled, Unreal can route submixes and audio sources output to Atom sound renderer as sources or to buses. (You need to restart the engine to apply.)" },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAudioLink_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bUseAudioLink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAudioLink = { "bUseAudioLink", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAudioLink_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAudioLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAudioLink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseUnrealSoundRenderer_MetaData[] = {
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Use Unreal Audio Sound Renderer (Experimental)" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "If enabled, Atom will route all sounds to Unreal Audio. (You need to restart the engine to apply.)" },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseUnrealSoundRenderer_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bUseUnrealSoundRenderer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseUnrealSoundRenderer = { "bUseUnrealSoundRenderer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseUnrealSoundRenderer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseUnrealSoundRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseUnrealSoundRenderer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultOutputSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "Atom|Sound Renderer" },
		{ "DisplayName", "Unreal Submix To Route" },
		{ "EditCondition", "bUseUnrealSoundRenderer" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Specifies the Unreal submix to route Atom sound output to. If unset, falls back to the 'Master Submix' as set in the 'Audio' category of Project Settings'." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultOutputSubmix = { "DefaultOutputSubmix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DefaultOutputSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultOutputSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultOutputSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClassName_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomSoundClass" },
		{ "Category", "Atom|Voices" },
		{ "Comment", "/** The SoundClass assigned to newly created sounds */" },
		{ "DisplayName", "Default Sound Class" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "ToolTip", "The SoundClass assigned to newly created sounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClassName = { "DefaultSoundClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DefaultSoundClassName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClassName_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomSoundClass" },
		{ "Category", "Atom|Voices" },
		{ "Comment", "/** The SoundClass assigned to Mana player assets */" },
		{ "DisplayName", "Default Mana Sound Class" },
		{ "EditCondition", "bCanEditManaClassName" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "ToolTip", "The SoundClass assigned to Mana player assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClassName = { "DefaultManaSoundClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DefaultManaSoundClassName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomConcurrency" },
		{ "Category", "Atom|Voices" },
		{ "Comment", "/** The SoundConcurrency assigned to newly created sounds */" },
		{ "DisplayName", "Default Sound Concurrency" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "ToolTip", "The SoundConcurrency assigned to newly created sounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrencyName = { "DefaultSoundConcurrencyName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DefaultSoundConcurrencyName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAutomaticVoiceManagement_MetaData[] = {
		{ "Category", "Atom|Voices" },
		{ "DisplayName", "Use Automatic Voice Management (Experimental)" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Whether use automatic voice pools management or pre-defined fixed voice pools." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAutomaticVoiceManagement_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bUseAutomaticVoiceManagement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAutomaticVoiceManagement = { "bUseAutomaticVoiceManagement", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAutomaticVoiceManagement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAutomaticVoiceManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAutomaticVoiceManagement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_StandardVoicesSettings_MetaData[] = {
		{ "Category", "Atom|Voices" },
		{ "EditCondition", "!bUseAutomaticVoiceManagement" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_StandardVoicesSettings = { "StandardVoicesSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, StandardVoicesSettings), Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_StandardVoicesSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_StandardVoicesSettings_MetaData)) }; // 4261860336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_HcaMxVoicesSettings_MetaData[] = {
		{ "Category", "Atom|Voices" },
		{ "Comment", "//~ HCA-MX voices\n" },
		{ "DisplayName", "HCA-MX Voices Settings" },
		{ "EditCondition", "!bUseAutomaticVoiceManagement" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_HcaMxVoicesSettings = { "HcaMxVoicesSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, HcaMxVoicesSettings), Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_HcaMxVoicesSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_HcaMxVoicesSettings_MetaData)) }; // 1099285983
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_ModulationParameters_Inner = { "ModulationParameters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_ModulationParameters_MetaData[] = {
		{ "AllowedClasses", "/Script/CriWareCore.AtomModulationParameter" },
		{ "Category", "Atom|Modulation" },
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
		{ "Tooltip", "Array of Atom Modulation Parameters that are loaded on plugin startup." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_ModulationParameters = { "ModulationParameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, ModulationParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_ModulationParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_ModulationParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClass = { "DefaultSoundClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DefaultSoundClass), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClass = { "DefaultManaSoundClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DefaultManaSoundClass), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrency_MetaData[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrency = { "DefaultSoundConcurrency", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreSettings, DefaultSoundConcurrency), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bCanEditManaClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CriWareCoreSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bCanEditManaClassName_SetBit(void* Obj)
	{
		((UCriWareCoreSettings*)Obj)->bCanEditManaClassName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bCanEditManaClassName = { "bCanEditManaClassName", nullptr, (EPropertyFlags)0x0040000400002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreSettings), &Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bCanEditManaClassName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bCanEditManaClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bCanEditManaClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareCoreSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumBinders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_NumLoaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingFileSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_AtomConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseInGamePreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MonitorCommunicationBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DistanceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MaxSoundPlaybackHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableLoggingAtom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DebugSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DebugSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_MasterRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_SpatializationRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bEnableBinauralSpatialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAudioLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseUnrealSoundRenderer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultOutputSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrencyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bUseAutomaticVoiceManagement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_StandardVoicesSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_HcaMxVoicesSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_ModulationParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_ModulationParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultManaSoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_DefaultSoundConcurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreSettings_Statics::NewProp_bCanEditManaClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareCoreSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareCoreSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareCoreSettings_Statics::ClassParams = {
		&UCriWareCoreSettings::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCriWareCoreSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareCoreSettings()
	{
		if (!Z_Registration_Info_UClass_UCriWareCoreSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareCoreSettings.OuterSingleton, Z_Construct_UClass_UCriWareCoreSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareCoreSettings.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UCriWareCoreSettings>()
	{
		return UCriWareCoreSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareCoreSettings);
	UCriWareCoreSettings::~UCriWareCoreSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_Statics::ScriptStructInfo[] = {
		{ FCriWareStandardVoicesSettings::StaticStruct, Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings_Statics::NewStructOps, TEXT("CriWareStandardVoicesSettings"), &Z_Registration_Info_UScriptStruct_CriWareStandardVoicesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCriWareStandardVoicesSettings), 4261860336U) },
		{ FCriWareHcaMxVoicesSettings::StaticStruct, Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings_Statics::NewStructOps, TEXT("CriWareHcaMxVoicesSettings"), &Z_Registration_Info_UScriptStruct_CriWareHcaMxVoicesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCriWareHcaMxVoicesSettings), 1099285983U) },
		{ FCriWareCookOverridesSettings::StaticStruct, Z_Construct_UScriptStruct_FCriWareCookOverridesSettings_Statics::NewStructOps, TEXT("CriWareCookOverridesSettings"), &Z_Registration_Info_UScriptStruct_CriWareCookOverridesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCriWareCookOverridesSettings), 2538864347U) },
		{ FAtomSoundDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundDebugEntry_Statics::NewStructOps, TEXT("AtomSoundDebugEntry"), &Z_Registration_Info_UScriptStruct_AtomSoundDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundDebugEntry), 658499598U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareCoreSettings, UCriWareCoreSettings::StaticClass, TEXT("UCriWareCoreSettings"), &Z_Registration_Info_UClass_UCriWareCoreSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareCoreSettings), 2290795797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_4193891010(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
