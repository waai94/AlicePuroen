// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomModulationParameterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationParameterFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameter_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomModulationParameterFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomModulationParameterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomModulationParameterFactory::StaticRegisterNativesUAtomModulationParameterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterFactory);
	UClass* Z_Construct_UClass_UAtomModulationParameterFactory_NoRegister()
	{
		return UAtomModulationParameterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParameterClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomModulationParameterFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomModulationParameterFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterFactory_Statics::NewProp_ParameterClass_MetaData[] = {
		{ "Category", "ModulationParameterFactory" },
		{ "Comment", "/** The type of sound source effect preset that will be created */" },
		{ "ModuleRelativePath", "Private/Factories/AtomModulationParameterFactory.h" },
		{ "ToolTip", "The type of sound source effect preset that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAtomModulationParameterFactory_Statics::NewProp_ParameterClass = { "ParameterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameterFactory, ParameterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAtomModulationParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterFactory_Statics::NewProp_ParameterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFactory_Statics::NewProp_ParameterClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationParameterFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameterFactory_Statics::NewProp_ParameterClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterFactory_Statics::ClassParams = {
		&UAtomModulationParameterFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationParameterFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterFactory.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomModulationParameterFactory>()
	{
		return UAtomModulationParameterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterFactory);
	UAtomModulationParameterFactory::~UAtomModulationParameterFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationParameterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationParameterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationParameterFactory, UAtomModulationParameterFactory::StaticClass, TEXT("UAtomModulationParameterFactory"), &Z_Registration_Info_UClass_UAtomModulationParameterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterFactory), 2997061191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationParameterFactory_h_993243649(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationParameterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomModulationParameterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
