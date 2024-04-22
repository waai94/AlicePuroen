// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundBaseRendererInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundBaseRendererInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBaseRendererInterface();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBaseRendererInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomSoundBaseRendererInterface::StaticRegisterNativesUAtomSoundBaseRendererInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBaseRendererInterface);
	UClass* Z_Construct_UClass_UAtomSoundBaseRendererInterface_NoRegister()
	{
		return UAtomSoundBaseRendererInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBaseRendererInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomSoundBaseRendererInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics::ClassParams = {
		&UAtomSoundBaseRendererInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBaseRendererInterface()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBaseRendererInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBaseRendererInterface.OuterSingleton, Z_Construct_UClass_UAtomSoundBaseRendererInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBaseRendererInterface.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundBaseRendererInterface>()
	{
		return UAtomSoundBaseRendererInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBaseRendererInterface);
	UAtomSoundBaseRendererInterface::~UAtomSoundBaseRendererInterface() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBaseRendererInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBaseRendererInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundBaseRendererInterface, UAtomSoundBaseRendererInterface::StaticClass, TEXT("UAtomSoundBaseRendererInterface"), &Z_Registration_Info_UClass_UAtomSoundBaseRendererInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBaseRendererInterface), 1281993091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBaseRendererInterface_h_4219704257(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBaseRendererInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBaseRendererInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
