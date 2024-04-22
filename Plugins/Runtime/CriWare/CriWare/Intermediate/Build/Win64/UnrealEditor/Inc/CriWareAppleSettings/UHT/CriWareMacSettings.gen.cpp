// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareAppleSettings/Public/CriWareMacSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareMacSettings() {}
// Cross Module References
	CRIWAREAPPLESETTINGS_API UClass* Z_Construct_UClass_UCriWareAppleSettings();
	CRIWAREAPPLESETTINGS_API UClass* Z_Construct_UClass_UCriWareMacSettings();
	CRIWAREAPPLESETTINGS_API UClass* Z_Construct_UClass_UCriWareMacSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareAppleSettings();
// End Cross Module References
	void UCriWareMacSettings::StaticRegisterNativesUCriWareMacSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareMacSettings);
	UClass* Z_Construct_UClass_UCriWareMacSettings_NoRegister()
	{
		return UCriWareMacSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareMacSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareMacSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCriWareAppleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareAppleSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareMacSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for CriWare on Mac platform.\n */" },
		{ "DisplayName", "macOS" },
		{ "IncludePath", "CriWareMacSettings.h" },
		{ "ModuleRelativePath", "Public/CriWareMacSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for CriWare on Mac platform." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareMacSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareMacSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareMacSettings_Statics::ClassParams = {
		&UCriWareMacSettings::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareMacSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareMacSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareMacSettings()
	{
		if (!Z_Registration_Info_UClass_UCriWareMacSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareMacSettings.OuterSingleton, Z_Construct_UClass_UCriWareMacSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareMacSettings.OuterSingleton;
	}
	template<> CRIWAREAPPLESETTINGS_API UClass* StaticClass<UCriWareMacSettings>()
	{
		return UCriWareMacSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareMacSettings);
	UCriWareMacSettings::~UCriWareMacSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareMacSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareMacSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareMacSettings, UCriWareMacSettings::StaticClass, TEXT("UCriWareMacSettings"), &Z_Registration_Info_UClass_UCriWareMacSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareMacSettings), 3515749758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareMacSettings_h_1440834945(TEXT("/Script/CriWareAppleSettings"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareMacSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareMacSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
