// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditorSettings/Public/CriWareCoreEditorAtomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareCoreEditorAtomSettings() {}
// Cross Module References
	CRIWARECOREEDITORSETTINGS_API UClass* Z_Construct_UClass_UCriWareCoreEditorAtomSettings();
	CRIWARECOREEDITORSETTINGS_API UClass* Z_Construct_UClass_UCriWareCoreEditorAtomSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditorSettings();
// End Cross Module References
	void UCriWareCoreEditorAtomSettings::StaticRegisterNativesUCriWareCoreEditorAtomSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareCoreEditorAtomSettings);
	UClass* Z_Construct_UClass_UCriWareCoreEditorAtomSettings_NoRegister()
	{
		return UCriWareCoreEditorAtomSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinAtomSoundAttenuationInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinAtomSoundAttenuationInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinAtomSoundAttenuationInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinAtomSoundConcurrencyInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinAtomSoundConcurrencyInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinAtomSoundConcurrencyInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinAtomSoundClassInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinAtomSoundClassInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinAtomSoundClassInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinAtomSoundSimpleInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinAtomSoundSimpleInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinAtomSoundSimpleInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateNewAtomRuntimeForPlayInEditor_MetaData[];
#endif
		static void NewProp_bCreateNewAtomRuntimeForPlayInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateNewAtomRuntimeForPlayInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfAdditionalPlayerHandles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfAdditionalPlayerHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditorSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure Atom settings for the Editor.\n */" },
		{ "DisplayName", "Atom" },
		{ "IncludePath", "CriWareCoreEditorAtomSettings.h" },
		{ "ModuleRelativePath", "Public/CriWareCoreEditorAtomSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Configure Atom settings for the Editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundAttenuationInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Atom Attenuation asset type when creating new assets. Requires editor restart to take effect. */" },
		{ "DisplayName", "Pin Atom Attenuation In Asset Menu" },
		{ "ModuleRelativePath", "Public/CriWareCoreEditorAtomSettings.h" },
		{ "ToolTip", "Whether to pin the Atom Attenuation asset type when creating new assets. Requires editor restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundAttenuationInAssetMenu_SetBit(void* Obj)
	{
		((UCriWareCoreEditorAtomSettings*)Obj)->bPinAtomSoundAttenuationInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundAttenuationInAssetMenu = { "bPinAtomSoundAttenuationInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreEditorAtomSettings), &Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundAttenuationInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundAttenuationInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundAttenuationInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundConcurrencyInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Atom Concurrency asset type when creating new assets. Requires editor restart to take effect. */" },
		{ "DisplayName", "Pin Atom Concurrency In Asset Menu" },
		{ "ModuleRelativePath", "Public/CriWareCoreEditorAtomSettings.h" },
		{ "ToolTip", "Whether to pin the Atom Concurrency asset type when creating new assets. Requires editor restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundConcurrencyInAssetMenu_SetBit(void* Obj)
	{
		((UCriWareCoreEditorAtomSettings*)Obj)->bPinAtomSoundConcurrencyInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundConcurrencyInAssetMenu = { "bPinAtomSoundConcurrencyInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreEditorAtomSettings), &Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundConcurrencyInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundConcurrencyInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundConcurrencyInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundClassInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Atom Sound Class asset type when creating new assets. Requires editor restart to take effect. */" },
		{ "ModuleRelativePath", "Public/CriWareCoreEditorAtomSettings.h" },
		{ "ToolTip", "Whether to pin the Atom Sound Class asset type when creating new assets. Requires editor restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundClassInAssetMenu_SetBit(void* Obj)
	{
		((UCriWareCoreEditorAtomSettings*)Obj)->bPinAtomSoundClassInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundClassInAssetMenu = { "bPinAtomSoundClassInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreEditorAtomSettings), &Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundClassInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundClassInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundClassInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundSimpleInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Atom Sound Simple asset type when creating new assets. Requires editor restart to take effect. */" },
		{ "ModuleRelativePath", "Public/CriWareCoreEditorAtomSettings.h" },
		{ "ToolTip", "Whether to pin the Atom Sound Simple asset type when creating new assets. Requires editor restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundSimpleInAssetMenu_SetBit(void* Obj)
	{
		((UCriWareCoreEditorAtomSettings*)Obj)->bPinAtomSoundSimpleInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundSimpleInAssetMenu = { "bPinAtomSoundSimpleInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCriWareCoreEditorAtomSettings), &Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundSimpleInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundSimpleInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundSimpleInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bCreateNewAtomRuntimeForPlayInEditor_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** If checked, will create a new Atom runtime instance for the play-in-editor window. Otherwise, will re-use the Atom runtime used in content browser. */" },
		{ "ModuleRelativePath", "Public/CriWareCoreEditorAtomSettings.h" },
		{ "ToolTip", "If checked, will create a new Atom runtime instance for the play-in-editor window. Otherwise, will re-use the Atom runtime used in content browser." },
	};
#endif
	void Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bCreateNewAtomRuntimeForPlayInEditor_SetBit(void* Obj)
	{
		((UCriWareCoreEditorAtomSettings*)Obj)->bCreateNewAtomRuntimeForPlayInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bCreateNewAtomRuntimeForPlayInEditor = { "bCreateNewAtomRuntimeForPlayInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCriWareCoreEditorAtomSettings), &Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bCreateNewAtomRuntimeForPlayInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bCreateNewAtomRuntimeForPlayInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bCreateNewAtomRuntimeForPlayInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_NumOfAdditionalPlayerHandles_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** The number of additional handles to use when from Atom runtime used in content browser. Apply also to PIE if 'Create New Atom Runtime For Play In Editor' is not checked. */" },
		{ "DisplayName", "Number of Additional Player Handles" },
		{ "ModuleRelativePath", "Public/CriWareCoreEditorAtomSettings.h" },
		{ "ToolTip", "The number of additional handles to use when from Atom runtime used in content browser. Apply also to PIE if 'Create New Atom Runtime For Play In Editor' is not checked." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_NumOfAdditionalPlayerHandles = { "NumOfAdditionalPlayerHandles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareCoreEditorAtomSettings, NumOfAdditionalPlayerHandles), METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_NumOfAdditionalPlayerHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_NumOfAdditionalPlayerHandles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundAttenuationInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundConcurrencyInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundClassInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bPinAtomSoundSimpleInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_bCreateNewAtomRuntimeForPlayInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::NewProp_NumOfAdditionalPlayerHandles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareCoreEditorAtomSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::ClassParams = {
		&UCriWareCoreEditorAtomSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareCoreEditorAtomSettings()
	{
		if (!Z_Registration_Info_UClass_UCriWareCoreEditorAtomSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareCoreEditorAtomSettings.OuterSingleton, Z_Construct_UClass_UCriWareCoreEditorAtomSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareCoreEditorAtomSettings.OuterSingleton;
	}
	template<> CRIWARECOREEDITORSETTINGS_API UClass* StaticClass<UCriWareCoreEditorAtomSettings>()
	{
		return UCriWareCoreEditorAtomSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareCoreEditorAtomSettings);
	UCriWareCoreEditorAtomSettings::~UCriWareCoreEditorAtomSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditorSettings_Public_CriWareCoreEditorAtomSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditorSettings_Public_CriWareCoreEditorAtomSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareCoreEditorAtomSettings, UCriWareCoreEditorAtomSettings::StaticClass, TEXT("UCriWareCoreEditorAtomSettings"), &Z_Registration_Info_UClass_UCriWareCoreEditorAtomSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareCoreEditorAtomSettings), 984476903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditorSettings_Public_CriWareCoreEditorAtomSettings_h_942222077(TEXT("/Script/CriWareCoreEditorSettings"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditorSettings_Public_CriWareCoreEditorAtomSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditorSettings_Public_CriWareCoreEditorAtomSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
