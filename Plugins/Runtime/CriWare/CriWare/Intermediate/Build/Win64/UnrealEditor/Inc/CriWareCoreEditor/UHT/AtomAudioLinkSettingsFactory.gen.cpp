// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareAudioLink/CriWareAudioLinkEditor/Private/Factories/AtomAudioLinkSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioLinkSettingsFactory() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomAudioLinkSettingsFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomAudioLinkSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomAudioLinkSettingsFactory::StaticRegisterNativesUAtomAudioLinkSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAudioLinkSettingsFactory);
	UClass* Z_Construct_UClass_UAtomAudioLinkSettingsFactory_NoRegister()
	{
		return UAtomAudioLinkSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioLinkSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics::ClassParams = {
		&UAtomAudioLinkSettingsFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioLinkSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomAudioLinkSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAudioLinkSettingsFactory.OuterSingleton, Z_Construct_UClass_UAtomAudioLinkSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAudioLinkSettingsFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomAudioLinkSettingsFactory>()
	{
		return UAtomAudioLinkSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioLinkSettingsFactory);
	UAtomAudioLinkSettingsFactory::~UAtomAudioLinkSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLinkEditor_Private_Factories_AtomAudioLinkSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLinkEditor_Private_Factories_AtomAudioLinkSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAudioLinkSettingsFactory, UAtomAudioLinkSettingsFactory::StaticClass, TEXT("UAtomAudioLinkSettingsFactory"), &Z_Registration_Info_UClass_UAtomAudioLinkSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAudioLinkSettingsFactory), 861979592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLinkEditor_Private_Factories_AtomAudioLinkSettingsFactory_h_1780630249(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLinkEditor_Private_Factories_AtomAudioLinkSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLinkEditor_Private_Factories_AtomAudioLinkSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
