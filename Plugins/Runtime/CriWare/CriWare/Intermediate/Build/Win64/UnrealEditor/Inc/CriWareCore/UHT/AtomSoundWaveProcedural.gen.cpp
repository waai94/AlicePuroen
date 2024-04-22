// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundWaveProcedural.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundWaveProcedural() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWaveProcedural();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWaveProcedural_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomSoundWaveProcedural::StaticRegisterNativesUAtomSoundWaveProcedural()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundWaveProcedural);
	UClass* Z_Construct_UClass_UAtomSoundWaveProcedural_NoRegister()
	{
		return UAtomSoundWaveProcedural::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundWaveProcedural_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundWaveProcedural_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWaveProcedural_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomSoundWaveProcedural.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWaveProcedural.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundWaveProcedural_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundWaveProcedural>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundWaveProcedural_Statics::ClassParams = {
		&UAtomSoundWaveProcedural::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWaveProcedural_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWaveProcedural_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundWaveProcedural()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundWaveProcedural.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundWaveProcedural.OuterSingleton, Z_Construct_UClass_UAtomSoundWaveProcedural_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundWaveProcedural.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundWaveProcedural>()
	{
		return UAtomSoundWaveProcedural::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundWaveProcedural);
	UAtomSoundWaveProcedural::~UAtomSoundWaveProcedural() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWaveProcedural_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWaveProcedural_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundWaveProcedural, UAtomSoundWaveProcedural::StaticClass, TEXT("UAtomSoundWaveProcedural"), &Z_Registration_Info_UClass_UAtomSoundWaveProcedural, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundWaveProcedural), 1341620794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWaveProcedural_h_4265854274(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWaveProcedural_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWaveProcedural_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
