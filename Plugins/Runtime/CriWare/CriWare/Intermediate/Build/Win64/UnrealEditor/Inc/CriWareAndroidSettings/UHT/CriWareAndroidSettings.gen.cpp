// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareAndroidSettings/Public/CriWareAndroidSettings.h"
#include "CriWareCore/Public/CriWareCoreSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareAndroidSettings() {}
// Cross Module References
	CRIWAREANDROIDSETTINGS_API UClass* Z_Construct_UClass_UCriWareAndroidSettings();
	CRIWAREANDROIDSETTINGS_API UClass* Z_Construct_UClass_UCriWareAndroidSettings_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareCookOverridesSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareAndroidSettings();
// End Cross Module References
	void UCriWareAndroidSettings::StaticRegisterNativesUCriWareAndroidSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareAndroidSettings);
	UClass* Z_Construct_UClass_UCriWareAndroidSettings_NoRegister()
	{
		return UCriWareAndroidSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareAndroidSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_UCriWareAndroidSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareAndroidSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareAndroidSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for CriWare on Android platform.\n */" },
		{ "DisplayName", "Android" },
		{ "IncludePath", "CriWareAndroidSettings.h" },
		{ "ModuleRelativePath", "Public/CriWareAndroidSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for CriWare on Android platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_StandardVoicesOverrides_MetaData[] = {
		{ "Category", "Atom|Voices" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Standard Voices Overrides" },
		{ "ModuleRelativePath", "Public/CriWareAndroidSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_StandardVoicesOverrides = { "StandardVoicesOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareAndroidSettings, StandardVoicesOverrides), Z_Construct_UScriptStruct_FCriWareStandardVoicesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_StandardVoicesOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_StandardVoicesOverrides_MetaData)) }; // 4261860336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_HcaMxVoicesOverrides_MetaData[] = {
		{ "Category", "Atom|Voices" },
		{ "Comment", "/** */" },
		{ "DisplayName", "HCA-MX Voices Overrides" },
		{ "ModuleRelativePath", "Public/CriWareAndroidSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_HcaMxVoicesOverrides = { "HcaMxVoicesOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareAndroidSettings, HcaMxVoicesOverrides), Z_Construct_UScriptStruct_FCriWareHcaMxVoicesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_HcaMxVoicesOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_HcaMxVoicesOverrides_MetaData)) }; // 1099285983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_CookOverrides_MetaData[] = {
		{ "Category", "Atom|Cook Overrides" },
		{ "ModuleRelativePath", "Public/CriWareAndroidSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "Tooltip", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_CookOverrides = { "CookOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareAndroidSettings, CookOverrides), Z_Construct_UScriptStruct_FCriWareCookOverridesSettings, METADATA_PARAMS(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_CookOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_CookOverrides_MetaData)) }; // 2538864347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_AtomSourceDataOverridePlugin_MetaData[] = {
		{ "Category", "Atom|Plugins" },
		{ "DisplayName", "Atom SourceDataOverridePlugin" },
		{ "ModuleRelativePath", "Public/CriWareAndroidSettings.h" },
		{ "Tooltip", "Which of the currently enabled source data override plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_AtomSourceDataOverridePlugin = { "AtomSourceDataOverridePlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareAndroidSettings, AtomSourceDataOverridePlugin), METADATA_PARAMS(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_AtomSourceDataOverridePlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_AtomSourceDataOverridePlugin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareAndroidSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_StandardVoicesOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_HcaMxVoicesOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_CookOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareAndroidSettings_Statics::NewProp_AtomSourceDataOverridePlugin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareAndroidSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareAndroidSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareAndroidSettings_Statics::ClassParams = {
		&UCriWareAndroidSettings::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCriWareAndroidSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareAndroidSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareAndroidSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareAndroidSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareAndroidSettings()
	{
		if (!Z_Registration_Info_UClass_UCriWareAndroidSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareAndroidSettings.OuterSingleton, Z_Construct_UClass_UCriWareAndroidSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareAndroidSettings.OuterSingleton;
	}
	template<> CRIWAREANDROIDSETTINGS_API UClass* StaticClass<UCriWareAndroidSettings>()
	{
		return UCriWareAndroidSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareAndroidSettings);
	UCriWareAndroidSettings::~UCriWareAndroidSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAndroid_CriWareAndroidSettings_Public_CriWareAndroidSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAndroid_CriWareAndroidSettings_Public_CriWareAndroidSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareAndroidSettings, UCriWareAndroidSettings::StaticClass, TEXT("UCriWareAndroidSettings"), &Z_Registration_Info_UClass_UCriWareAndroidSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareAndroidSettings), 2665499823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAndroid_CriWareAndroidSettings_Public_CriWareAndroidSettings_h_1467565123(TEXT("/Script/CriWareAndroidSettings"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAndroid_CriWareAndroidSettings_Public_CriWareAndroidSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAndroid_CriWareAndroidSettings_Public_CriWareAndroidSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
