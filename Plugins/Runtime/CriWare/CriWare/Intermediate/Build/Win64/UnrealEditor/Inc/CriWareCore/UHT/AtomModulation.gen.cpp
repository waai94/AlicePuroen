// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomModulatorBase::StaticRegisterNativesUAtomModulatorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulatorBase);
	UClass* Z_Construct_UClass_UAtomModulatorBase_NoRegister()
	{
		return UAtomModulatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all modulators used with ADX Atom.\n */" },
		{ "IncludePath", "Atom/Modulation/AtomModulation.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulation.h" },
		{ "ToolTip", "Base class for all modulators used with ADX Atom." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulatorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulatorBase_Statics::ClassParams = {
		&UAtomModulatorBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulatorBase()
	{
		if (!Z_Registration_Info_UClass_UAtomModulatorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulatorBase.OuterSingleton, Z_Construct_UClass_UAtomModulatorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulatorBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulatorBase>()
	{
		return UAtomModulatorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulatorBase);
	UAtomModulatorBase::~UAtomModulatorBase() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulatorBase, UAtomModulatorBase::StaticClass, TEXT("UAtomModulatorBase"), &Z_Registration_Info_UClass_UAtomModulatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulatorBase), 4030493796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulation_h_4097087044(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
