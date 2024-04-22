// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/CriWareCoreSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareCoreSubsystem() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareCoreSubsystem();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareCoreSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UCriWareCoreSubsystem::StaticRegisterNativesUCriWareCoreSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareCoreSubsystem);
	UClass* Z_Construct_UClass_UCriWareCoreSubsystem_NoRegister()
	{
		return UCriWareCoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareCoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareCoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CriWareCoreSubsystem.h" },
		{ "ModuleRelativePath", "Public/CriWareCoreSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareCoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareCoreSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareCoreSubsystem_Statics::ClassParams = {
		&UCriWareCoreSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareCoreSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCriWareCoreSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareCoreSubsystem.OuterSingleton, Z_Construct_UClass_UCriWareCoreSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareCoreSubsystem.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UCriWareCoreSubsystem>()
	{
		return UCriWareCoreSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareCoreSubsystem);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareCoreSubsystem, UCriWareCoreSubsystem::StaticClass, TEXT("UCriWareCoreSubsystem"), &Z_Registration_Info_UClass_UCriWareCoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareCoreSubsystem), 2115411472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSubsystem_h_515298568(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareCoreSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
