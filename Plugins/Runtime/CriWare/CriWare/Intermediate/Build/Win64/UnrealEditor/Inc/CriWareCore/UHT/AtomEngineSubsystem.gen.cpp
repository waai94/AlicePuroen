// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomEngineSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEngineSubsystem();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEngineSubsystem_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSubsystemCollectionRoot();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSubsystemCollectionRoot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomSubsystemCollectionRoot::StaticRegisterNativesUAtomSubsystemCollectionRoot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSubsystemCollectionRoot);
	UClass* Z_Construct_UClass_UAtomSubsystemCollectionRoot_NoRegister()
	{
		return UAtomSubsystemCollectionRoot::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAtomSubsystemCollectionRoot\n * Root UObject used to anchor UAtomEngineSubsystems to the FAtomRuntime.\n */" },
		{ "IncludePath", "Atom/AtomEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomEngineSubsystem.h" },
		{ "ToolTip", "UAtomSubsystemCollectionRoot\nRoot UObject used to anchor UAtomEngineSubsystems to the FAtomRuntime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSubsystemCollectionRoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics::ClassParams = {
		&UAtomSubsystemCollectionRoot::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSubsystemCollectionRoot()
	{
		if (!Z_Registration_Info_UClass_UAtomSubsystemCollectionRoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSubsystemCollectionRoot.OuterSingleton, Z_Construct_UClass_UAtomSubsystemCollectionRoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSubsystemCollectionRoot.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSubsystemCollectionRoot>()
	{
		return UAtomSubsystemCollectionRoot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSubsystemCollectionRoot);
	UAtomSubsystemCollectionRoot::~UAtomSubsystemCollectionRoot() {}
	void UAtomEngineSubsystem::StaticRegisterNativesUAtomEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomEngineSubsystem);
	UClass* Z_Construct_UClass_UAtomEngineSubsystem_NoRegister()
	{
		return UAtomEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAtomEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAtomEngineSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the Atom runtime.\n */" },
		{ "IncludePath", "Atom/AtomEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomEngineSubsystem.h" },
		{ "ToolTip", "UAtomEngineSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the Atom runtime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomEngineSubsystem_Statics::ClassParams = {
		&UAtomEngineSubsystem::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAtomEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomEngineSubsystem.OuterSingleton, Z_Construct_UClass_UAtomEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomEngineSubsystem.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomEngineSubsystem>()
	{
		return UAtomEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomEngineSubsystem);
	UAtomEngineSubsystem::~UAtomEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSubsystemCollectionRoot, UAtomSubsystemCollectionRoot::StaticClass, TEXT("UAtomSubsystemCollectionRoot"), &Z_Registration_Info_UClass_UAtomSubsystemCollectionRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSubsystemCollectionRoot), 3255181098U) },
		{ Z_Construct_UClass_UAtomEngineSubsystem, UAtomEngineSubsystem::StaticClass, TEXT("UAtomEngineSubsystem"), &Z_Registration_Info_UClass_UAtomEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomEngineSubsystem), 1039759922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEngineSubsystem_h_447945121(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
