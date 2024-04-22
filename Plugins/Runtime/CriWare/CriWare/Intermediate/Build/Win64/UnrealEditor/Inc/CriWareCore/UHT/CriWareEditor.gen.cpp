// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/CriWareEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareEditor() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundCue_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWare();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareEditor();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWareEditor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UCriWareEditor::StaticRegisterNativesUCriWareEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareEditor);
	UClass* Z_Construct_UClass_UCriWareEditor_NoRegister()
	{
		return UCriWareEditor::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAtomSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewAtomSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewAtomComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCriWare,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * CriWareCore that drives the Editor.\n * Separate from UCriWare because it may have much different functionality than desired for an instance of a game itself.\n */" },
		{ "IncludePath", "CriWareEditor.h" },
		{ "ModuleRelativePath", "Public/CriWareEditor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "CriWareCore that drives the Editor.\nSeparate from UCriWare because it may have much different functionality than desired for an instance of a game itself." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomSoundCue_MetaData[] = {
		{ "Comment", "// Atom\n" },
		{ "ModuleRelativePath", "Public/CriWareEditor.h" },
		{ "ToolTip", "Atom" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomSoundCue = { "PreviewAtomSoundCue", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareEditor, PreviewAtomSoundCue), Z_Construct_UClass_UAtomSoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CriWareEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomComponent = { "PreviewAtomComponent", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareEditor, PreviewAtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareEditor_Statics::NewProp_PreviewAtomComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareEditor_Statics::ClassParams = {
		&UCriWareEditor::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCriWareEditor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditor_Statics::PropPointers), 0),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareEditor()
	{
		if (!Z_Registration_Info_UClass_UCriWareEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareEditor.OuterSingleton, Z_Construct_UClass_UCriWareEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareEditor.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UCriWareEditor>()
	{
		return UCriWareEditor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareEditor);
	UCriWareEditor::~UCriWareEditor() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareEditor, UCriWareEditor::StaticClass, TEXT("UCriWareEditor"), &Z_Registration_Info_UClass_UCriWareEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareEditor), 3076341304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareEditor_h_4152829886(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWareEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
