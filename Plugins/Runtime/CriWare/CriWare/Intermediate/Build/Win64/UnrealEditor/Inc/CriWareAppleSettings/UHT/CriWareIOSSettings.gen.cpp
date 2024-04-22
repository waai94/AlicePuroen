// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareAppleSettings/Public/CriWareIOSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareIOSSettings() {}
// Cross Module References
	CRIWAREAPPLESETTINGS_API UClass* Z_Construct_UClass_UCriWareAppleSettings();
	CRIWAREAPPLESETTINGS_API UClass* Z_Construct_UClass_UCriWareIOSSettings();
	CRIWAREAPPLESETTINGS_API UClass* Z_Construct_UClass_UCriWareIOSSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareAppleSettings();
// End Cross Module References
	void UCriWareIOSSettings::StaticRegisterNativesUCriWareIOSSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareIOSSettings);
	UClass* Z_Construct_UClass_UCriWareIOSSettings_NoRegister()
	{
		return UCriWareIOSSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareIOSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareIOSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCriWareAppleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareAppleSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareIOSSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for CriWare on IOS platform.\n */" },
		{ "DisplayName", "iOS" },
		{ "IncludePath", "CriWareIOSSettings.h" },
		{ "ModuleRelativePath", "Public/CriWareIOSSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for CriWare on IOS platform." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareIOSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareIOSSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareIOSSettings_Statics::ClassParams = {
		&UCriWareIOSSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCriWareIOSSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareIOSSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareIOSSettings()
	{
		if (!Z_Registration_Info_UClass_UCriWareIOSSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareIOSSettings.OuterSingleton, Z_Construct_UClass_UCriWareIOSSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareIOSSettings.OuterSingleton;
	}
	template<> CRIWAREAPPLESETTINGS_API UClass* StaticClass<UCriWareIOSSettings>()
	{
		return UCriWareIOSSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareIOSSettings);
	UCriWareIOSSettings::~UCriWareIOSSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareIOSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareIOSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareIOSSettings, UCriWareIOSSettings::StaticClass, TEXT("UCriWareIOSSettings"), &Z_Registration_Info_UClass_UCriWareIOSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareIOSSettings), 2207297640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareIOSSettings_h_308978341(TEXT("/Script/CriWareAppleSettings"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareIOSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareApple_CriWareAppleSettings_Public_CriWareIOSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
