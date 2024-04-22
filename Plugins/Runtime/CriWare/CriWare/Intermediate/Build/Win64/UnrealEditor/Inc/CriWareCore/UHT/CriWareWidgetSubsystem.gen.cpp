// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/CriWareWidgetSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareWidgetSubsystem() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareWidgetSubsystem();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareWidgetSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UCriWareWidgetSubsystem::StaticRegisterNativesUCriWareWidgetSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareWidgetSubsystem);
	UClass* Z_Construct_UClass_UCriWareWidgetSubsystem_NoRegister()
	{
		return UCriWareWidgetSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareWidgetSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareWidgetSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareWidgetSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CriWareWidgetSubsystem.h" },
		{ "ModuleRelativePath", "Public/CriWareWidgetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareWidgetSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareWidgetSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareWidgetSubsystem_Statics::ClassParams = {
		&UCriWareWidgetSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCriWareWidgetSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareWidgetSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareWidgetSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCriWareWidgetSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareWidgetSubsystem.OuterSingleton, Z_Construct_UClass_UCriWareWidgetSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareWidgetSubsystem.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UCriWareWidgetSubsystem>()
	{
		return UCriWareWidgetSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareWidgetSubsystem);
	UCriWareWidgetSubsystem::~UCriWareWidgetSubsystem() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareWidgetSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareWidgetSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareWidgetSubsystem, UCriWareWidgetSubsystem::StaticClass, TEXT("UCriWareWidgetSubsystem"), &Z_Registration_Info_UClass_UCriWareWidgetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareWidgetSubsystem), 1570526808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareWidgetSubsystem_h_566819521(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareWidgetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareWidgetSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
