// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomConfigFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomConfigFactory() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomConfigFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomConfigFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomConfigFactory::StaticRegisterNativesUAtomConfigFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomConfigFactory);
	UClass* Z_Construct_UClass_UAtomConfigFactory_NoRegister()
	{
		return UAtomConfigFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomConfigFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomConfigFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfigFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomConfigFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomConfigFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomConfigFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomConfigFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomConfigFactory_Statics::ClassParams = {
		&UAtomConfigFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomConfigFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfigFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomConfigFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomConfigFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomConfigFactory.OuterSingleton, Z_Construct_UClass_UAtomConfigFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomConfigFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomConfigFactory>()
	{
		return UAtomConfigFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomConfigFactory);
	UAtomConfigFactory::~UAtomConfigFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConfigFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConfigFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomConfigFactory, UAtomConfigFactory::StaticClass, TEXT("UAtomConfigFactory"), &Z_Registration_Info_UClass_UAtomConfigFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomConfigFactory), 3042818580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConfigFactory_h_2068804344(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConfigFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConfigFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
