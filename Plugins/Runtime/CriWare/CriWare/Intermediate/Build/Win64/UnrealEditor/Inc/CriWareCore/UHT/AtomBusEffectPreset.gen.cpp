// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomBusEffectPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectPreset() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEffectPreset();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomBusEffectPreset::StaticRegisterNativesUAtomBusEffectPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectPreset_NoRegister()
	{
		return UAtomBusEffectPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetBuses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBuses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TargetBuses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Preset of a bus effect that can be shared between sounds. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomBusEffectPreset.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomBusEffectPreset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Preset of a bus effect that can be shared between sounds." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomBusEffectPreset_Statics::NewProp_TargetBuses_ElementProp = { "TargetBuses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectPreset_Statics::NewProp_TargetBuses_MetaData[] = {
		{ "Comment", "/** Keeps the buses using this preset to apply effect settings to Atom runtime. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBusEffectPreset.h" },
		{ "ToolTip", "Keeps the buses using this preset to apply effect settings to Atom runtime." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAtomBusEffectPreset_Statics::NewProp_TargetBuses = { "TargetBuses", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectPreset, TargetBuses), METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPreset_Statics::NewProp_TargetBuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPreset_Statics::NewProp_TargetBuses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectPreset_Statics::NewProp_TargetBuses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectPreset_Statics::NewProp_TargetBuses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectPreset_Statics::ClassParams = {
		&UAtomBusEffectPreset::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomBusEffectPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPreset_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectPreset>()
	{
		return UAtomBusEffectPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectPreset);
	UAtomBusEffectPreset::~UAtomBusEffectPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBusEffectPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBusEffectPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectPreset, UAtomBusEffectPreset::StaticClass, TEXT("UAtomBusEffectPreset"), &Z_Registration_Info_UClass_UAtomBusEffectPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectPreset), 4202077495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBusEffectPreset_h_1618780127(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBusEffectPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBusEffectPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
