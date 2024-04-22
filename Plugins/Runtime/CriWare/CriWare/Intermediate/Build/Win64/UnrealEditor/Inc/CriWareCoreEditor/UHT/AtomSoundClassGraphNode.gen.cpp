// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Graphs/AtomSoundClassGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundClassGraphNode() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundClassGraphNode();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundClassGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundClassGraphNode::StaticRegisterNativesUAtomSoundClassGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundClassGraphNode);
	UClass* Z_Construct_UClass_UAtomSoundClassGraphNode_NoRegister()
	{
		return UAtomSoundClassGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundClassGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/AtomSoundClassGraphNode.h" },
		{ "ModuleRelativePath", "Private/Graphs/AtomSoundClassGraphNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::NewProp_SoundClass_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** The SoundNode this represents */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Graphs/AtomSoundClassGraphNode.h" },
		{ "ToolTip", "The SoundNode this represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundClassGraphNode, SoundClass), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::NewProp_SoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::NewProp_SoundClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::NewProp_SoundClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundClassGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::ClassParams = {
		&UAtomSoundClassGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundClassGraphNode()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundClassGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundClassGraphNode.OuterSingleton, Z_Construct_UClass_UAtomSoundClassGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundClassGraphNode.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundClassGraphNode>()
	{
		return UAtomSoundClassGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundClassGraphNode);
	UAtomSoundClassGraphNode::~UAtomSoundClassGraphNode() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundClassGraphNode, UAtomSoundClassGraphNode::StaticClass, TEXT("UAtomSoundClassGraphNode"), &Z_Registration_Info_UClass_UAtomSoundClassGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundClassGraphNode), 4210341968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphNode_h_2060688518(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
