// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Graphs/AtomRackGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomRackGraphSchema() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackGraphSchema();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackGraphSchema_NoRegister();
	CRIWARECOREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomRackGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAtomRackGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode;
class UScriptStruct* FAtomRackGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_CriWareCoreEditor(), TEXT("AtomRackGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode.OuterSingleton;
}
template<> CRIWARECOREEDITOR_API UScriptStruct* StaticStruct<FAtomRackGraphSchemaAction_NewNode>()
{
	return FAtomRackGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/Graphs/AtomRackGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomRackGraphSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AtomRackGraphSchemaAction_NewNode",
		sizeof(FAtomRackGraphSchemaAction_NewNode),
		alignof(FAtomRackGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode.InnerSingleton;
	}
	void UAtomRackGraphSchema::StaticRegisterNativesUAtomRackGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRackGraphSchema);
	UClass* Z_Construct_UClass_UAtomRackGraphSchema_NoRegister()
	{
		return UAtomRackGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRackGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRackGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/AtomRackGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/AtomRackGraphSchema.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRackGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRackGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRackGraphSchema_Statics::ClassParams = {
		&UAtomRackGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomRackGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRackGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UAtomRackGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRackGraphSchema.OuterSingleton, Z_Construct_UClass_UAtomRackGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRackGraphSchema.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomRackGraphSchema>()
	{
		return UAtomRackGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRackGraphSchema);
	UAtomRackGraphSchema::~UAtomRackGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FAtomRackGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FAtomRackGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("AtomRackGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_AtomRackGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomRackGraphSchemaAction_NewNode), 1251487168U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRackGraphSchema, UAtomRackGraphSchema::StaticClass, TEXT("UAtomRackGraphSchema"), &Z_Registration_Info_UClass_UAtomRackGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRackGraphSchema), 1695464438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_3987702652(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomRackGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
