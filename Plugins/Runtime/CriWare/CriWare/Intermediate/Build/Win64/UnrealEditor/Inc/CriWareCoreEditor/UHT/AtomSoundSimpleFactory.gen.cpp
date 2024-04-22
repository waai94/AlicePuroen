// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomSoundSimpleFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundSimpleFactory() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWave_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundSimpleFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundSimpleFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundSimpleFactory::StaticRegisterNativesUAtomSoundSimpleFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundSimpleFactory);
	UClass* Z_Construct_UClass_UAtomSoundSimpleFactory_NoRegister()
	{
		return UAtomSoundSimpleFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundSimpleFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomSoundSimpleFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomSoundSimpleFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::NewProp_SoundWaves_Inner = { "SoundWaves", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::NewProp_SoundWaves_MetaData[] = {
		{ "Comment", "/** Sound waves to create the simple sound with */" },
		{ "ModuleRelativePath", "Private/Factories/AtomSoundSimpleFactory.h" },
		{ "ToolTip", "Sound waves to create the simple sound with" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::NewProp_SoundWaves = { "SoundWaves", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundSimpleFactory, SoundWaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::NewProp_SoundWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::NewProp_SoundWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::NewProp_SoundWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::NewProp_SoundWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundSimpleFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::ClassParams = {
		&UAtomSoundSimpleFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundSimpleFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundSimpleFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundSimpleFactory.OuterSingleton, Z_Construct_UClass_UAtomSoundSimpleFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundSimpleFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundSimpleFactory>()
	{
		return UAtomSoundSimpleFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundSimpleFactory);
	UAtomSoundSimpleFactory::~UAtomSoundSimpleFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundSimpleFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundSimpleFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundSimpleFactory, UAtomSoundSimpleFactory::StaticClass, TEXT("UAtomSoundSimpleFactory"), &Z_Registration_Info_UClass_UAtomSoundSimpleFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundSimpleFactory), 2744654014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundSimpleFactory_h_3619991959(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundSimpleFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundSimpleFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
