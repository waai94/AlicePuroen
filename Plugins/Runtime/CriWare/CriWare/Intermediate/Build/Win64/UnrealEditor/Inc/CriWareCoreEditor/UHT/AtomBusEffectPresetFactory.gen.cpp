// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomBusEffectPresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectPresetFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomBusEffectPresetFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomBusEffectPresetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomBusEffectPresetFactory::StaticRegisterNativesUAtomBusEffectPresetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectPresetFactory);
	UClass* Z_Construct_UClass_UAtomBusEffectPresetFactory_NoRegister()
	{
		return UAtomBusEffectPresetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomBusEffectPresetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AtomBusEffectPresetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomBusEffectPresetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomBusEffectPresetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::NewProp_AtomBusEffectPresetClass_MetaData[] = {
		{ "Category", "AtomBusEffectFactory" },
		{ "Comment", "/** The type of sound source effect preset that will be created */" },
		{ "ModuleRelativePath", "Private/Factories/AtomBusEffectPresetFactory.h" },
		{ "ToolTip", "The type of sound source effect preset that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::NewProp_AtomBusEffectPresetClass = { "AtomBusEffectPresetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectPresetFactory, AtomBusEffectPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::NewProp_AtomBusEffectPresetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::NewProp_AtomBusEffectPresetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::NewProp_AtomBusEffectPresetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectPresetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::ClassParams = {
		&UAtomBusEffectPresetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectPresetFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectPresetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectPresetFactory.OuterSingleton, Z_Construct_UClass_UAtomBusEffectPresetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectPresetFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomBusEffectPresetFactory>()
	{
		return UAtomBusEffectPresetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectPresetFactory);
	UAtomBusEffectPresetFactory::~UAtomBusEffectPresetFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomBusEffectPresetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomBusEffectPresetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectPresetFactory, UAtomBusEffectPresetFactory::StaticClass, TEXT("UAtomBusEffectPresetFactory"), &Z_Registration_Info_UClass_UAtomBusEffectPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectPresetFactory), 4282834054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomBusEffectPresetFactory_h_3829981900(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomBusEffectPresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomBusEffectPresetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
