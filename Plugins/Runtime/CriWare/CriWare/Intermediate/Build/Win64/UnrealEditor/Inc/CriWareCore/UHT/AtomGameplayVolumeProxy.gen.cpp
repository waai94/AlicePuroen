// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomGameplayVolumeProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGameplayVolumeProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeConditionProxy();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeProxy();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomGameplayVolumeProxy::StaticRegisterNativesUAtomGameplayVolumeProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumeProxy);
	UClass* Z_Construct_UClass_UAtomGameplayVolumeProxy_NoRegister()
	{
		return UAtomGameplayVolumeProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAtomGameplayVolumeProxy - Abstract proxy used on audio thread to represent Atom gameplay volumes.\n */" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayVolumeProxy.h" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomGameplayVolumeProxy - Abstract proxy used on audio thread to represent Atom gameplay volumes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayVolumeProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics::ClassParams = {
		&UAtomGameplayVolumeProxy::StaticClass,
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
		0x041010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumeProxy()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumeProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumeProxy.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumeProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumeProxy.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumeProxy>()
	{
		return UAtomGameplayVolumeProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumeProxy);
	void UAtomGameplayVolumePrimitiveComponentProxy::StaticRegisterNativesUAtomGameplayVolumePrimitiveComponentProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumePrimitiveComponentProxy);
	UClass* Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_NoRegister()
	{
		return UAtomGameplayVolumePrimitiveComponentProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayVolumeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAGVPrimitiveComponentProxy - Proxy based on a volume's primitive component\n */" },
		{ "DisplayName", "AGV Primitive Proxy" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayVolumeProxy.h" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAGVPrimitiveComponentProxy - Proxy based on a volume's primitive component" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayVolumePrimitiveComponentProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics::ClassParams = {
		&UAtomGameplayVolumePrimitiveComponentProxy::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumePrimitiveComponentProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumePrimitiveComponentProxy.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumePrimitiveComponentProxy.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumePrimitiveComponentProxy>()
	{
		return UAtomGameplayVolumePrimitiveComponentProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumePrimitiveComponentProxy);
	void UAtomGameplayVolumeConditionProxy::StaticRegisterNativesUAtomGameplayVolumeConditionProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumeConditionProxy);
	UClass* Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_NoRegister()
	{
		return UAtomGameplayVolumeConditionProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayVolumeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAtomGameplayVolumeConditionProxy - Proxy for use with the UAtomGameplayCondition interface\n */" },
		{ "DisplayName", "AGV Condition Proxy" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayVolumeProxy.h" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomGameplayVolumeConditionProxy - Proxy for use with the UAtomGameplayCondition interface" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayVolumeConditionProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics::ClassParams = {
		&UAtomGameplayVolumeConditionProxy::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumeConditionProxy()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumeConditionProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumeConditionProxy.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumeConditionProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumeConditionProxy.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumeConditionProxy>()
	{
		return UAtomGameplayVolumeConditionProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumeConditionProxy);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomGameplayVolumeProxy, UAtomGameplayVolumeProxy::StaticClass, TEXT("UAtomGameplayVolumeProxy"), &Z_Registration_Info_UClass_UAtomGameplayVolumeProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumeProxy), 3316436961U) },
		{ Z_Construct_UClass_UAtomGameplayVolumePrimitiveComponentProxy, UAtomGameplayVolumePrimitiveComponentProxy::StaticClass, TEXT("UAtomGameplayVolumePrimitiveComponentProxy"), &Z_Registration_Info_UClass_UAtomGameplayVolumePrimitiveComponentProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumePrimitiveComponentProxy), 65750093U) },
		{ Z_Construct_UClass_UAtomGameplayVolumeConditionProxy, UAtomGameplayVolumeConditionProxy::StaticClass, TEXT("UAtomGameplayVolumeConditionProxy"), &Z_Registration_Info_UClass_UAtomGameplayVolumeConditionProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumeConditionProxy), 3165567308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeProxy_h_3215597748(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
