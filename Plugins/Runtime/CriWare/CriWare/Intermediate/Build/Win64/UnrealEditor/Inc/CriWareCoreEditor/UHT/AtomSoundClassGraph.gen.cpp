// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Graphs/AtomSoundClassGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundClassGraph() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundClassGraph();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundClassGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundClassGraph::StaticRegisterNativesUAtomSoundClassGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundClassGraph);
	UClass* Z_Construct_UClass_UAtomSoundClassGraph_NoRegister()
	{
		return UAtomSoundClassGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundClassGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundClassGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClassGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/AtomSoundClassGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/AtomSoundClassGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundClassGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundClassGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundClassGraph_Statics::ClassParams = {
		&UAtomSoundClassGraph::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClassGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClassGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundClassGraph()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundClassGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundClassGraph.OuterSingleton, Z_Construct_UClass_UAtomSoundClassGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundClassGraph.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundClassGraph>()
	{
		return UAtomSoundClassGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundClassGraph);
	UAtomSoundClassGraph::~UAtomSoundClassGraph() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundClassGraph, UAtomSoundClassGraph::StaticClass, TEXT("UAtomSoundClassGraph"), &Z_Registration_Info_UClass_UAtomSoundClassGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundClassGraph), 2056663999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraph_h_3699768878(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
