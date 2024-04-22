// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomEffectPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomEffectPreset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEffectPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEffectPreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomEffectPreset::StaticRegisterNativesUAtomEffectPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomEffectPreset);
	UClass* Z_Construct_UClass_UAtomEffectPreset_NoRegister()
	{
		return UAtomEffectPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomEffectPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PluginName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EffectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumParameters_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomEffectPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEffectPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * UAtomEffectPreset Class\n *****************************************************************************/" },
		{ "IncludePath", "Atom/AtomEffectPreset.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPreset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomEffectPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_PluginName_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/** The Atom effect plugin from this effect belongs. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPreset.h" },
		{ "ToolTip", "The Atom effect plugin from this effect belongs." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomEffectPreset, PluginName), METADATA_PARAMS(Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_PluginName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_EffectName_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/** The full name that identifies the effect in Atom. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPreset.h" },
		{ "ToolTip", "The full name that identifies the effect in Atom." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_EffectName = { "EffectName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomEffectPreset, EffectName), METADATA_PARAMS(Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_EffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_EffectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_NumParameters_MetaData[] = {
		{ "Comment", "/** The number of parameters of the effect. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPreset.h" },
		{ "ToolTip", "The number of parameters of the effect." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_NumParameters = { "NumParameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomEffectPreset, NumParameters), METADATA_PARAMS(Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_NumParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_NumParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_EffectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEffectPreset_Statics::NewProp_NumParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomEffectPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomEffectPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomEffectPreset_Statics::ClassParams = {
		&UAtomEffectPreset::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomEffectPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEffectPreset_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomEffectPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEffectPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomEffectPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomEffectPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomEffectPreset.OuterSingleton, Z_Construct_UClass_UAtomEffectPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomEffectPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomEffectPreset>()
	{
		return UAtomEffectPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomEffectPreset);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomEffectPreset, UAtomEffectPreset::StaticClass, TEXT("UAtomEffectPreset"), &Z_Registration_Info_UClass_UAtomEffectPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomEffectPreset), 4093565452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPreset_h_284072514(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
