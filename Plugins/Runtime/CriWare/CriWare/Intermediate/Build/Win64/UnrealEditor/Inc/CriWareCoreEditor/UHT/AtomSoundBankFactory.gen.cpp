// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomSoundBankFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundBankFactory() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundBankFactory::StaticRegisterNativesUAtomSoundBankFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBankFactory);
	UClass* Z_Construct_UClass_UAtomSoundBankFactory_NoRegister()
	{
		return UAtomSoundBankFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBankFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBankFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBankFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/AtomSoundBankFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomSoundBankFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBankFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBankFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBankFactory_Statics::ClassParams = {
		&UAtomSoundBankFactory::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBankFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBankFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBankFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBankFactory.OuterSingleton, Z_Construct_UClass_UAtomSoundBankFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBankFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundBankFactory>()
	{
		return UAtomSoundBankFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBankFactory);
	UAtomSoundBankFactory::~UAtomSoundBankFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundBankFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundBankFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundBankFactory, UAtomSoundBankFactory::StaticClass, TEXT("UAtomSoundBankFactory"), &Z_Registration_Info_UClass_UAtomSoundBankFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBankFactory), 2865541361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundBankFactory_h_1089032627(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundBankFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomSoundBankFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
