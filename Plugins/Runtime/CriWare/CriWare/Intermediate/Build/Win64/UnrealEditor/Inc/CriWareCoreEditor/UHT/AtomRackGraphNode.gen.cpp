// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Graphs/AtomRackGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomRackGraphNode() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackGraphNode();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomRackGraphNode::StaticRegisterNativesUAtomRackGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRackGraphNode);
	UClass* Z_Construct_UClass_UAtomRackGraphNode_NoRegister()
	{
		return UAtomRackGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRackGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomRack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomRack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRackGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/AtomRackGraphNode.h" },
		{ "ModuleRelativePath", "Private/Graphs/AtomRackGraphNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackGraphNode_Statics::NewProp_AtomRack_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** The AtomRack this represents */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Graphs/AtomRackGraphNode.h" },
		{ "ToolTip", "The AtomRack this represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRackGraphNode_Statics::NewProp_AtomRack = { "AtomRack", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRackGraphNode, AtomRack), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomRackGraphNode_Statics::NewProp_AtomRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraphNode_Statics::NewProp_AtomRack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomRackGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackGraphNode_Statics::NewProp_AtomRack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRackGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRackGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRackGraphNode_Statics::ClassParams = {
		&UAtomRackGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomRackGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRackGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRackGraphNode()
	{
		if (!Z_Registration_Info_UClass_UAtomRackGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRackGraphNode.OuterSingleton, Z_Construct_UClass_UAtomRackGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRackGraphNode.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomRackGraphNode>()
	{
		return UAtomRackGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRackGraphNode);
	UAtomRackGraphNode::~UAtomRackGraphNode() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRackGraphNode, UAtomRackGraphNode::StaticClass, TEXT("UAtomRackGraphNode"), &Z_Registration_Info_UClass_UAtomRackGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRackGraphNode), 1236049147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphNode_h_409867359(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
