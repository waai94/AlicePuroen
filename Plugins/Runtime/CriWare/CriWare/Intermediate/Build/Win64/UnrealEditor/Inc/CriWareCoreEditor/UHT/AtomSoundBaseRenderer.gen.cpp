// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/AtomSoundBaseRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundBaseRenderer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBaseRendererInterface_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBaseRenderer();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBaseRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	DEFINE_FUNCTION(UAtomSoundBaseRenderer::execOnPlaybackEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlaybackEnded();
		P_NATIVE_END;
	}
	void UAtomSoundBaseRenderer::StaticRegisterNativesUAtomSoundBaseRenderer()
	{
		UClass* Class = UAtomSoundBaseRenderer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlaybackEnded", &UAtomSoundBaseRenderer::execOnPlaybackEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Callback when the playback is done.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AtomSoundBaseRenderer.h" },
		{ "ToolTip", "Callback when the playback is done." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSoundBaseRenderer, nullptr, "OnPlaybackEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBaseRenderer);
	UClass* Z_Construct_UClass_UAtomSoundBaseRenderer_NoRegister()
	{
		return UAtomSoundBaseRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBaseRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSoundBaseRenderer_OnPlaybackEnded, "OnPlaybackEnded" }, // 1956430981
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Renders a Atom sound to a byte bulk data in editor builds. */" },
		{ "IncludePath", "AtomSoundBaseRenderer.h" },
		{ "ModuleRelativePath", "Private/AtomSoundBaseRenderer.h" },
		{ "ToolTip", "Renders a Atom sound to a byte bulk data in editor builds." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::NewProp_AtomSound_MetaData[] = {
		{ "Comment", "/** Holds the Atom sound we are using. */" },
		{ "ModuleRelativePath", "Private/AtomSoundBaseRenderer.h" },
		{ "ToolTip", "Holds the Atom sound we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::NewProp_AtomSound = { "AtomSound", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBaseRenderer, AtomSound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::NewProp_AtomSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::NewProp_AtomSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::NewProp_AtomSound,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAtomSoundBaseRendererInterface_NoRegister, (int32)VTABLE_OFFSET(UAtomSoundBaseRenderer, IAtomSoundBaseRendererInterface), false },  // 1281993091
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBaseRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::ClassParams = {
		&UAtomSoundBaseRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBaseRenderer()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBaseRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBaseRenderer.OuterSingleton, Z_Construct_UClass_UAtomSoundBaseRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBaseRenderer.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundBaseRenderer>()
	{
		return UAtomSoundBaseRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBaseRenderer);
	UAtomSoundBaseRenderer::~UAtomSoundBaseRenderer() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_AtomSoundBaseRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_AtomSoundBaseRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundBaseRenderer, UAtomSoundBaseRenderer::StaticClass, TEXT("UAtomSoundBaseRenderer"), &Z_Registration_Info_UClass_UAtomSoundBaseRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBaseRenderer), 797600191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_AtomSoundBaseRenderer_h_690469365(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_AtomSoundBaseRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_AtomSoundBaseRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
