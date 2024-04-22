// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffect32BandEQ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffect32BandEQ() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffect32BandEQPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffect32BandEQPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomBusEffect32BandEQPreset::StaticRegisterNativesUAtomBusEffect32BandEQPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffect32BandEQPreset);
	UClass* Z_Construct_UClass_UAtomBusEffect32BandEQPreset_NoRegister()
	{
		return UAtomBusEffect32BandEQPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectMultiBandEQPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffect3BandEQPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffect32BandEQ.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffect32BandEQ.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffect3BandEQPreset Class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffect32BandEQPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics::ClassParams = {
		&UAtomBusEffect32BandEQPreset::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffect32BandEQPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffect32BandEQPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffect32BandEQPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffect32BandEQPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffect32BandEQPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffect32BandEQPreset>()
	{
		return UAtomBusEffect32BandEQPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffect32BandEQPreset);
	UAtomBusEffect32BandEQPreset::~UAtomBusEffect32BandEQPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffect32BandEQ_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffect32BandEQ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffect32BandEQPreset, UAtomBusEffect32BandEQPreset::StaticClass, TEXT("UAtomBusEffect32BandEQPreset"), &Z_Registration_Info_UClass_UAtomBusEffect32BandEQPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffect32BandEQPreset), 2274923341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffect32BandEQ_h_1763111721(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffect32BandEQ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffect32BandEQ_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
