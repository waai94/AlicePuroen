// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Graphs/AtomRackGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomRackGraph() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackGraph();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomRackGraph::StaticRegisterNativesUAtomRackGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRackGraph);
	UClass* Z_Construct_UClass_UAtomRackGraph_NoRegister()
	{
		return UAtomRackGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRackGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootAtomRack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootAtomRack;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaleRoots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaleRoots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaleRoots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRackGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/AtomRackGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/AtomRackGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_RootAtomRack_MetaData[] = {
		{ "Comment", "/** AtomRack which forms the root of this graph */" },
		{ "ModuleRelativePath", "Private/Graphs/AtomRackGraph.h" },
		{ "ToolTip", "AtomRack which forms the root of this graph" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_RootAtomRack = { "RootAtomRack", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRackGraph, RootAtomRack), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_RootAtomRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_RootAtomRack_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_StaleRoots_Inner = { "StaleRoots", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_StaleRoots_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/AtomRackGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_StaleRoots = { "StaleRoots", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRackGraph, StaleRoots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_StaleRoots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_StaleRoots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomRackGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_RootAtomRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_StaleRoots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackGraph_Statics::NewProp_StaleRoots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRackGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRackGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRackGraph_Statics::ClassParams = {
		&UAtomRackGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomRackGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRackGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRackGraph()
	{
		if (!Z_Registration_Info_UClass_UAtomRackGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRackGraph.OuterSingleton, Z_Construct_UClass_UAtomRackGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRackGraph.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomRackGraph>()
	{
		return UAtomRackGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRackGraph);
	UAtomRackGraph::~UAtomRackGraph() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRackGraph, UAtomRackGraph::StaticClass, TEXT("UAtomRackGraph"), &Z_Registration_Info_UClass_UAtomRackGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRackGraph), 3861961818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraph_h_3101960920(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
