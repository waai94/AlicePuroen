// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomModulationGeneratorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationGeneratorFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGenerator_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomModulationGeneratorFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomModulationGeneratorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomModulationGeneratorFactory::StaticRegisterNativesUAtomModulationGeneratorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationGeneratorFactory);
	UClass* Z_Construct_UClass_UAtomModulationGeneratorFactory_NoRegister()
	{
		return UAtomModulationGeneratorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomModulationGeneratorFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomModulationGeneratorFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::NewProp_GeneratorClass_MetaData[] = {
		{ "Category", "AtomModulationGeneratorFactory" },
		{ "Comment", "/** The type of sound source effect preset that will be created */" },
		{ "ModuleRelativePath", "Private/Factories/AtomModulationGeneratorFactory.h" },
		{ "ToolTip", "The type of sound source effect preset that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::NewProp_GeneratorClass = { "GeneratorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationGeneratorFactory, GeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAtomModulationGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::NewProp_GeneratorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::NewProp_GeneratorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::NewProp_GeneratorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationGeneratorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::ClassParams = {
		&UAtomModulationGeneratorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationGeneratorFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationGeneratorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationGeneratorFactory.OuterSingleton, Z_Construct_UClass_UAtomModulationGeneratorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationGeneratorFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomModulationGeneratorFactory>()
	{
		return UAtomModulationGeneratorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationGeneratorFactory);
	UAtomModulationGeneratorFactory::~UAtomModulationGeneratorFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationGeneratorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationGeneratorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationGeneratorFactory, UAtomModulationGeneratorFactory::StaticClass, TEXT("UAtomModulationGeneratorFactory"), &Z_Registration_Info_UClass_UAtomModulationGeneratorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationGeneratorFactory), 2450437634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationGeneratorFactory_h_805437157(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationGeneratorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationGeneratorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
