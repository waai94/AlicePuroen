// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Extensions/IAtomEndpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAtomEndpoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEndpointSettingsBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEndpointSettingsBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomEndpointSettingsBase::StaticRegisterNativesUAtomEndpointSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomEndpointSettingsBase);
	UClass* Z_Construct_UClass_UAtomEndpointSettingsBase_NoRegister()
	{
		return UAtomEndpointSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomEndpointSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomEndpointSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEndpointSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be\n * send to an external endpoint.\n */" },
		{ "IncludePath", "Extensions/IAtomEndpoint.h" },
		{ "ModuleRelativePath", "Public/Extensions/IAtomEndpoint.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external endpoint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomEndpointSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomEndpointSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomEndpointSettingsBase_Statics::ClassParams = {
		&UAtomEndpointSettingsBase::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomEndpointSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEndpointSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomEndpointSettingsBase()
	{
		if (!Z_Registration_Info_UClass_UAtomEndpointSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomEndpointSettingsBase.OuterSingleton, Z_Construct_UClass_UAtomEndpointSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomEndpointSettingsBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomEndpointSettingsBase>()
	{
		return UAtomEndpointSettingsBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomEndpointSettingsBase);
	UAtomEndpointSettingsBase::~UAtomEndpointSettingsBase() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomEndpoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomEndpoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomEndpointSettingsBase, UAtomEndpointSettingsBase::StaticClass, TEXT("UAtomEndpointSettingsBase"), &Z_Registration_Info_UClass_UAtomEndpointSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomEndpointSettingsBase), 1228613468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomEndpoint_h_184264191(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomEndpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Extensions_IAtomEndpoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
