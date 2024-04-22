// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomGameplayRequirements.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGameplayRequirements() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRequirementPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRequirementPreset_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGameplayRequirements();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomRequirementPreset::StaticRegisterNativesUAtomRequirementPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRequirementPreset);
	UClass* Z_Construct_UClass_UAtomRequirementPreset_NoRegister()
	{
		return UAtomRequirementPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRequirementPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRequirementPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRequirementPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UAtomRequirementPreset - A reusable GameplayTagQuery for Atom.\n */" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayRequirements.h" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayRequirements.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomRequirementPreset - A reusable GameplayTagQuery for Atom." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRequirementPreset_Statics::NewProp_Query_MetaData[] = {
		{ "Category", "Gameplay Tag Query" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayRequirements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomRequirementPreset_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRequirementPreset, Query), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UAtomRequirementPreset_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRequirementPreset_Statics::NewProp_Query_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomRequirementPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRequirementPreset_Statics::NewProp_Query,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRequirementPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRequirementPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRequirementPreset_Statics::ClassParams = {
		&UAtomRequirementPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomRequirementPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRequirementPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRequirementPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRequirementPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRequirementPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomRequirementPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRequirementPreset.OuterSingleton, Z_Construct_UClass_UAtomRequirementPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRequirementPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomRequirementPreset>()
	{
		return UAtomRequirementPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRequirementPreset);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomGameplayRequirements;
class UScriptStruct* FAtomGameplayRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomGameplayRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomGameplayRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomGameplayRequirements, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomGameplayRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_AtomGameplayRequirements.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomGameplayRequirements>()
{
	return FAtomGameplayRequirements::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Custom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AtomGameplayRequirements - A set of requirements for Atom gameplay features.\n */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayRequirements.h" },
		{ "ToolTip", "AtomGameplayRequirements - A set of requirements for Atom gameplay features." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomGameplayRequirements>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "Requirements" },
		{ "Comment", "/** An optional requirement preset tested against a collection of tags to determine a match.  Ignored if null. */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayRequirements.h" },
		{ "ToolTip", "An optional requirement preset tested against a collection of tags to determine a match.  Ignored if null." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomGameplayRequirements, Preset), Z_Construct_UClass_UAtomRequirementPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Custom_MetaData[] = {
		{ "Category", "Requirements" },
		{ "Comment", "/** An optional custom query tested against a collection of tags to determine a match.  Ignored if empty. */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayRequirements.h" },
		{ "ToolTip", "An optional custom query tested against a collection of tags to determine a match.  Ignored if empty." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomGameplayRequirements, Custom), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Custom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Custom_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewProp_Custom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomGameplayRequirements",
		sizeof(FAtomGameplayRequirements),
		alignof(FAtomGameplayRequirements),
		Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomGameplayRequirements()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomGameplayRequirements.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomGameplayRequirements.InnerSingleton, Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomGameplayRequirements.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_Statics::ScriptStructInfo[] = {
		{ FAtomGameplayRequirements::StaticStruct, Z_Construct_UScriptStruct_FAtomGameplayRequirements_Statics::NewStructOps, TEXT("AtomGameplayRequirements"), &Z_Registration_Info_UScriptStruct_AtomGameplayRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomGameplayRequirements), 2177221430U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRequirementPreset, UAtomRequirementPreset::StaticClass, TEXT("UAtomRequirementPreset"), &Z_Registration_Info_UClass_UAtomRequirementPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRequirementPreset), 3702384018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_4246748519(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayRequirements_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
