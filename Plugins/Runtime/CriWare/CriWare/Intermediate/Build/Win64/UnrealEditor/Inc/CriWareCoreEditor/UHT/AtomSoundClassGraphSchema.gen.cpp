// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Graphs/AtomSoundClassGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundClassGraphSchema() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundClassGraphSchema();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundClassGraphSchema_NoRegister();
	CRIWARECOREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomSoundClassGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAtomSoundClassGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode;
class UScriptStruct* FAtomSoundClassGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_CriWareCoreEditor(), TEXT("AtomSoundClassGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode.OuterSingleton;
}
template<> CRIWARECOREEDITOR_API UScriptStruct* StaticStruct<FAtomSoundClassGraphSchemaAction_NewNode>()
{
	return FAtomSoundClassGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/Graphs/AtomSoundClassGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundClassGraphSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AtomSoundClassGraphSchemaAction_NewNode",
		sizeof(FAtomSoundClassGraphSchemaAction_NewNode),
		alignof(FAtomSoundClassGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode.InnerSingleton;
	}
	void UAtomSoundClassGraphSchema::StaticRegisterNativesUAtomSoundClassGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundClassGraphSchema);
	UClass* Z_Construct_UClass_UAtomSoundClassGraphSchema_NoRegister()
	{
		return UAtomSoundClassGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/AtomSoundClassGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/AtomSoundClassGraphSchema.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundClassGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics::ClassParams = {
		&UAtomSoundClassGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundClassGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundClassGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundClassGraphSchema.OuterSingleton, Z_Construct_UClass_UAtomSoundClassGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundClassGraphSchema.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundClassGraphSchema>()
	{
		return UAtomSoundClassGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundClassGraphSchema);
	UAtomSoundClassGraphSchema::~UAtomSoundClassGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FAtomSoundClassGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundClassGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("AtomSoundClassGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_AtomSoundClassGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundClassGraphSchemaAction_NewNode), 959397257U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundClassGraphSchema, UAtomSoundClassGraphSchema::StaticClass, TEXT("UAtomSoundClassGraphSchema"), &Z_Registration_Info_UClass_UAtomSoundClassGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundClassGraphSchema), 2674350050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_232250958(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Graphs_AtomSoundClassGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
