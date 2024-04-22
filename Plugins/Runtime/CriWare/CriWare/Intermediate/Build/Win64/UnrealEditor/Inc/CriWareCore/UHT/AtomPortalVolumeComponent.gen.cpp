// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomPortalVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomPortalVolumeComponent() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomPortalVolumeComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomPortalVolumeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomPortalVolumeComponent::StaticRegisterNativesUAtomPortalVolumeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomPortalVolumeComponent);
	UClass* Z_Construct_UClass_UAtomPortalVolumeComponent_NoRegister()
	{
		return UAtomPortalVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomPortalVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomPortalVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomPortalVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AtomGameplayVolume" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Portal" },
		{ "IncludePath", "Atom/Gameplay/AtomPortalVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomPortalVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomPortalVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomPortalVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomPortalVolumeComponent_Statics::ClassParams = {
		&UAtomPortalVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomPortalVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomPortalVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomPortalVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomPortalVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomPortalVolumeComponent.OuterSingleton, Z_Construct_UClass_UAtomPortalVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomPortalVolumeComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomPortalVolumeComponent>()
	{
		return UAtomPortalVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomPortalVolumeComponent);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomPortalVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomPortalVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomPortalVolumeComponent, UAtomPortalVolumeComponent::StaticClass, TEXT("UAtomPortalVolumeComponent"), &Z_Registration_Info_UClass_UAtomPortalVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomPortalVolumeComponent), 3515192271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomPortalVolumeComponent_h_1850786743(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomPortalVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomPortalVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
