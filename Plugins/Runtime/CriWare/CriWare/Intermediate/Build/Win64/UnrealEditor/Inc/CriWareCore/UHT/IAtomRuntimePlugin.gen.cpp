// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Extensions/IAtomRuntimePlugin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAtomRuntimePlugin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRuntimePluginSettingsBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRuntimePluginSettingsBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomRuntimePluginSettingsBase::StaticRegisterNativesUAtomRuntimePluginSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRuntimePluginSettingsBase);
	UClass* Z_Construct_UClass_UAtomRuntimePluginSettingsBase_NoRegister()
	{
		return UAtomRuntimePluginSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "Extensions/IAtomRuntimePlugin.h" },
		{ "ModuleRelativePath", "Public/Extensions/IAtomRuntimePlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRuntimePluginSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics::ClassParams = {
		&UAtomRuntimePluginSettingsBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRuntimePluginSettingsBase()
	{
		if (!Z_Registration_Info_UClass_UAtomRuntimePluginSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRuntimePluginSettingsBase.OuterSingleton, Z_Construct_UClass_UAtomRuntimePluginSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRuntimePluginSettingsBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomRuntimePluginSettingsBase>()
	{
		return UAtomRuntimePluginSettingsBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRuntimePluginSettingsBase);
	UAtomRuntimePluginSettingsBase::~UAtomRuntimePluginSettingsBase() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomRuntimePlugin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomRuntimePlugin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRuntimePluginSettingsBase, UAtomRuntimePluginSettingsBase::StaticClass, TEXT("UAtomRuntimePluginSettingsBase"), &Z_Registration_Info_UClass_UAtomRuntimePluginSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRuntimePluginSettingsBase), 2796021449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomRuntimePlugin_h_3385357758(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomRuntimePlugin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomRuntimePlugin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
