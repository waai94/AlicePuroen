// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomSoundCueFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundCueFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundCue_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundCueFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundCueFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundCueFactory::StaticRegisterNativesUAtomSoundCueFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundCueFactory);
	UClass* Z_Construct_UClass_UAtomSoundCueFactory_NoRegister()
	{
		return UAtomSoundCueFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundCueFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CueClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundCueFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCueFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/AtomSoundCueFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomSoundCueFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCueFactory_Statics::NewProp_CueClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Private/Factories/AtomSoundCueFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAtomSoundCueFactory_Statics::NewProp_CueClass = { "CueClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundCueFactory, CueClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAtomSoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCueFactory_Statics::NewProp_CueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCueFactory_Statics::NewProp_CueClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundCueFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundCueFactory_Statics::NewProp_CueClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundCueFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundCueFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundCueFactory_Statics::ClassParams = {
		&UAtomSoundCueFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundCueFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCueFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCueFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCueFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundCueFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundCueFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundCueFactory.OuterSingleton, Z_Construct_UClass_UAtomSoundCueFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundCueFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundCueFactory>()
	{
		return UAtomSoundCueFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundCueFactory);
	UAtomSoundCueFactory::~UAtomSoundCueFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundCueFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundCueFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundCueFactory, UAtomSoundCueFactory::StaticClass, TEXT("UAtomSoundCueFactory"), &Z_Registration_Info_UClass_UAtomSoundCueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundCueFactory), 3368082848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundCueFactory_h_1271112659(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundCueFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundCueFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
