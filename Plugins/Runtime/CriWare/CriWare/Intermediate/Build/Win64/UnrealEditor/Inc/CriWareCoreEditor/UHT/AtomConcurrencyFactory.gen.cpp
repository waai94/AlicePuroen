// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomConcurrencyFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomConcurrencyFactory() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomConcurrencyFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomConcurrencyFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomConcurrencyFactory::StaticRegisterNativesUAtomConcurrencyFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomConcurrencyFactory);
	UClass* Z_Construct_UClass_UAtomConcurrencyFactory_NoRegister()
	{
		return UAtomConcurrencyFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomConcurrencyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomConcurrencyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConcurrencyFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/AtomConcurrencyFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomConcurrencyFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomConcurrencyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomConcurrencyFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomConcurrencyFactory_Statics::ClassParams = {
		&UAtomConcurrencyFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomConcurrencyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConcurrencyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomConcurrencyFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomConcurrencyFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomConcurrencyFactory.OuterSingleton, Z_Construct_UClass_UAtomConcurrencyFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomConcurrencyFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomConcurrencyFactory>()
	{
		return UAtomConcurrencyFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomConcurrencyFactory);
	UAtomConcurrencyFactory::~UAtomConcurrencyFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConcurrencyFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConcurrencyFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomConcurrencyFactory, UAtomConcurrencyFactory::StaticClass, TEXT("UAtomConcurrencyFactory"), &Z_Registration_Info_UClass_UAtomConcurrencyFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomConcurrencyFactory), 2487392447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConcurrencyFactory_h_3118063631(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConcurrencyFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomConcurrencyFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
