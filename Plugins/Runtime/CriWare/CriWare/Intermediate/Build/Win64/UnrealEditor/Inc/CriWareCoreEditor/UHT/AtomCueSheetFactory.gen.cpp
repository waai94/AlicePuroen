// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomCueSheetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueSheetFactory() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomCueSheetFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomCueSheetFactory_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomCueSheetFactory::StaticRegisterNativesUAtomCueSheetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomCueSheetFactory);
	UClass* Z_Construct_UClass_UAtomCueSheetFactory_NoRegister()
	{
		return UAtomCueSheetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCueSheetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCueSheetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBankFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomCueSheetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomCueSheetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCueSheetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCueSheetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomCueSheetFactory_Statics::ClassParams = {
		&UAtomCueSheetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCueSheetFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomCueSheetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomCueSheetFactory.OuterSingleton, Z_Construct_UClass_UAtomCueSheetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomCueSheetFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomCueSheetFactory>()
	{
		return UAtomCueSheetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCueSheetFactory);
	UAtomCueSheetFactory::~UAtomCueSheetFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomCueSheetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomCueSheetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomCueSheetFactory, UAtomCueSheetFactory::StaticClass, TEXT("UAtomCueSheetFactory"), &Z_Registration_Info_UClass_UAtomCueSheetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomCueSheetFactory), 1525681790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomCueSheetFactory_h_2520431386(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomCueSheetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomCueSheetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
