// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomGameplayWorldSettings.h"
#include "CriWareCore/Public/Atom/AtomVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGameplayWorldSettings() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_AAtomGameplayWorldSettings();
	CRIWARECORE_API UClass* Z_Construct_UClass_AAtomGameplayWorldSettings_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomInteriorSettings();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void AAtomGameplayWorldSettings::StaticRegisterNativesAAtomGameplayWorldSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomGameplayWorldSettings);
	UClass* Z_Construct_UClass_AAtomGameplayWorldSettings_NoRegister()
	{
		return AAtomGameplayWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_AAtomGameplayWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAtomAmbientZoneSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAtomAmbientZoneSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayWorldSettings.h" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayWorldSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::NewProp_DefaultAtomAmbientZoneSettings_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Default interior settings applied to sounds that have \"apply ambient volumes\" set to true on their AtomSoundCategory. */" },
		{ "DisplayName", "DefaultAmbientZoneSettings" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayWorldSettings.h" },
		{ "ToolTip", "Default interior settings applied to sounds that have \"apply ambient volumes\" set to true on their AtomSoundCategory." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::NewProp_DefaultAtomAmbientZoneSettings = { "DefaultAtomAmbientZoneSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomGameplayWorldSettings, DefaultAtomAmbientZoneSettings), Z_Construct_UScriptStruct_FAtomInteriorSettings, METADATA_PARAMS(Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::NewProp_DefaultAtomAmbientZoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::NewProp_DefaultAtomAmbientZoneSettings_MetaData)) }; // 4264886077
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::NewProp_DefaultAtomAmbientZoneSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomGameplayWorldSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::ClassParams = {
		&AAtomGameplayWorldSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomGameplayWorldSettings()
	{
		if (!Z_Registration_Info_UClass_AAtomGameplayWorldSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomGameplayWorldSettings.OuterSingleton, Z_Construct_UClass_AAtomGameplayWorldSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtomGameplayWorldSettings.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<AAtomGameplayWorldSettings>()
	{
		return AAtomGameplayWorldSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomGameplayWorldSettings);
	AAtomGameplayWorldSettings::~AAtomGameplayWorldSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayWorldSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayWorldSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtomGameplayWorldSettings, AAtomGameplayWorldSettings::StaticClass, TEXT("AAtomGameplayWorldSettings"), &Z_Registration_Info_UClass_AAtomGameplayWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomGameplayWorldSettings), 1797008467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayWorldSettings_h_3707933797(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayWorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayWorldSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
