// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Factories/AtomRackFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomRackFactory() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomEndpointRackFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomEndpointRackFactory_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackFactory_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundfieldRackFactory();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundfieldRackFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomRackFactory::StaticRegisterNativesUAtomRackFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRackFactory);
	UClass* Z_Construct_UClass_UAtomRackFactory_NoRegister()
	{
		return UAtomRackFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRackFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRackFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomRackFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomRackFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRackFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRackFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRackFactory_Statics::ClassParams = {
		&UAtomRackFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomRackFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRackFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomRackFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRackFactory.OuterSingleton, Z_Construct_UClass_UAtomRackFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRackFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomRackFactory>()
	{
		return UAtomRackFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRackFactory);
	UAtomRackFactory::~UAtomRackFactory() {}
	void UAtomSoundfieldRackFactory::StaticRegisterNativesUAtomSoundfieldRackFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundfieldRackFactory);
	UClass* Z_Construct_UClass_UAtomSoundfieldRackFactory_NoRegister()
	{
		return UAtomSoundfieldRackFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomRackFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomRackFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundfieldRackFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics::ClassParams = {
		&UAtomSoundfieldRackFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundfieldRackFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundfieldRackFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundfieldRackFactory.OuterSingleton, Z_Construct_UClass_UAtomSoundfieldRackFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundfieldRackFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundfieldRackFactory>()
	{
		return UAtomSoundfieldRackFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundfieldRackFactory);
	UAtomSoundfieldRackFactory::~UAtomSoundfieldRackFactory() {}
	void UAtomEndpointRackFactory::StaticRegisterNativesUAtomEndpointRackFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomEndpointRackFactory);
	UClass* Z_Construct_UClass_UAtomEndpointRackFactory_NoRegister()
	{
		return UAtomEndpointRackFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomEndpointRackFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomEndpointRackFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEndpointRackFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomRackFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomRackFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomEndpointRackFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomEndpointRackFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomEndpointRackFactory_Statics::ClassParams = {
		&UAtomEndpointRackFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomEndpointRackFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEndpointRackFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomEndpointRackFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomEndpointRackFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomEndpointRackFactory.OuterSingleton, Z_Construct_UClass_UAtomEndpointRackFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomEndpointRackFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomEndpointRackFactory>()
	{
		return UAtomEndpointRackFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomEndpointRackFactory);
	UAtomEndpointRackFactory::~UAtomEndpointRackFactory() {}
	void UAtomSoundfieldEndpointRackFactory::StaticRegisterNativesUAtomSoundfieldEndpointRackFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundfieldEndpointRackFactory);
	UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_NoRegister()
	{
		return UAtomSoundfieldEndpointRackFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AtomRackFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AtomRackFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundfieldEndpointRackFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics::ClassParams = {
		&UAtomSoundfieldEndpointRackFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundfieldEndpointRackFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundfieldEndpointRackFactory.OuterSingleton, Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundfieldEndpointRackFactory.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundfieldEndpointRackFactory>()
	{
		return UAtomSoundfieldEndpointRackFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundfieldEndpointRackFactory);
	UAtomSoundfieldEndpointRackFactory::~UAtomSoundfieldEndpointRackFactory() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomRackFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomRackFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRackFactory, UAtomRackFactory::StaticClass, TEXT("UAtomRackFactory"), &Z_Registration_Info_UClass_UAtomRackFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRackFactory), 1695775550U) },
		{ Z_Construct_UClass_UAtomSoundfieldRackFactory, UAtomSoundfieldRackFactory::StaticClass, TEXT("UAtomSoundfieldRackFactory"), &Z_Registration_Info_UClass_UAtomSoundfieldRackFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundfieldRackFactory), 43294438U) },
		{ Z_Construct_UClass_UAtomEndpointRackFactory, UAtomEndpointRackFactory::StaticClass, TEXT("UAtomEndpointRackFactory"), &Z_Registration_Info_UClass_UAtomEndpointRackFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomEndpointRackFactory), 2639450642U) },
		{ Z_Construct_UClass_UAtomSoundfieldEndpointRackFactory, UAtomSoundfieldEndpointRackFactory::StaticClass, TEXT("UAtomSoundfieldEndpointRackFactory"), &Z_Registration_Info_UClass_UAtomSoundfieldEndpointRackFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundfieldEndpointRackFactory), 223744840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomRackFactory_h_308799069(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomRackFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Factories_AtomRackFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
