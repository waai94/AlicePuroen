// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/ThumbnailRendering/AtomSoundBaseThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundBaseThumbnailRenderer() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundBaseThumbnailRenderer::StaticRegisterNativesUAtomSoundBaseThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBaseThumbnailRenderer);
	UClass* Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_NoRegister()
	{
		return UAtomSoundBaseThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This thumbnail renderer generates a render of a waveform from a cue.\n */" },
		{ "IncludePath", "ThumbnailRendering/AtomSoundBaseThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/ThumbnailRendering/AtomSoundBaseThumbnailRenderer.h" },
		{ "ToolTip", "This thumbnail renderer generates a render of a waveform from a cue." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBaseThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics::ClassParams = {
		&UAtomSoundBaseThumbnailRenderer::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBaseThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBaseThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBaseThumbnailRenderer.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundBaseThumbnailRenderer>()
	{
		return UAtomSoundBaseThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBaseThumbnailRenderer);
	UAtomSoundBaseThumbnailRenderer::~UAtomSoundBaseThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ThumbnailRendering_AtomSoundBaseThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ThumbnailRendering_AtomSoundBaseThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundBaseThumbnailRenderer, UAtomSoundBaseThumbnailRenderer::StaticClass, TEXT("UAtomSoundBaseThumbnailRenderer"), &Z_Registration_Info_UClass_UAtomSoundBaseThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBaseThumbnailRenderer), 135978078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ThumbnailRendering_AtomSoundBaseThumbnailRenderer_h_3093469179(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ThumbnailRendering_AtomSoundBaseThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ThumbnailRendering_AtomSoundBaseThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
