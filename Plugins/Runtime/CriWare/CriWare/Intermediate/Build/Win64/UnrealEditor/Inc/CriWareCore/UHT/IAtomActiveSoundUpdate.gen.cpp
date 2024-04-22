// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Interfaces/IAtomActiveSoundUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAtomActiveSoundUpdate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomActiveSoundUpdate();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomActiveSoundUpdate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomActiveSoundUpdate::StaticRegisterNativesUAtomActiveSoundUpdate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomActiveSoundUpdate);
	UClass* Z_Construct_UClass_UAtomActiveSoundUpdate_NoRegister()
	{
		return UAtomActiveSoundUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UAtomActiveSoundUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomActiveSoundUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomActiveSoundUpdate_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Atom/Interfaces/IAtomActiveSoundUpdate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomActiveSoundUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomActiveSoundUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomActiveSoundUpdate_Statics::ClassParams = {
		&UAtomActiveSoundUpdate::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomActiveSoundUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomActiveSoundUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomActiveSoundUpdate()
	{
		if (!Z_Registration_Info_UClass_UAtomActiveSoundUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomActiveSoundUpdate.OuterSingleton, Z_Construct_UClass_UAtomActiveSoundUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomActiveSoundUpdate.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomActiveSoundUpdate>()
	{
		return UAtomActiveSoundUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomActiveSoundUpdate);
	UAtomActiveSoundUpdate::~UAtomActiveSoundUpdate() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Interfaces_IAtomActiveSoundUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Interfaces_IAtomActiveSoundUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomActiveSoundUpdate, UAtomActiveSoundUpdate::StaticClass, TEXT("UAtomActiveSoundUpdate"), &Z_Registration_Info_UClass_UAtomActiveSoundUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomActiveSoundUpdate), 2214304939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Interfaces_IAtomActiveSoundUpdate_h_3921942622(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Interfaces_IAtomActiveSoundUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Interfaces_IAtomActiveSoundUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
