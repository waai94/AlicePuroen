// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationGenerator() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGenerator();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGenerator_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomModulationGenerator::StaticRegisterNativesUAtomModulationGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationGenerator);
	UClass* Z_Construct_UClass_UAtomModulationGenerator_NoRegister()
	{
		return UAtomModulationGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for modulators that algorithmically generate values that can effect\n * various endpoints (ex. Aisac Controler & Parameter Destinations)\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Modulation/AtomModulationGenerator.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationGenerator.h" },
		{ "ToolTip", "Base class for modulators that algorithmically generate values that can effect\nvarious endpoints (ex. Aisac Controler & Parameter Destinations)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationGenerator_Statics::ClassParams = {
		&UAtomModulationGenerator::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationGenerator()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationGenerator.OuterSingleton, Z_Construct_UClass_UAtomModulationGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationGenerator.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationGenerator>()
	{
		return UAtomModulationGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationGenerator);
	UAtomModulationGenerator::~UAtomModulationGenerator() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationGenerator, UAtomModulationGenerator::StaticClass, TEXT("UAtomModulationGenerator"), &Z_Registration_Info_UClass_UAtomModulationGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationGenerator), 1770110833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationGenerator_h_1830669759(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
