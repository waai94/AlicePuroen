// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/BlueprintGraph/AtomAisacPatchGraphPinObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacPatchGraphPinObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacPatch_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomAisacPatchGraphPinObject();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomAisacPatchGraphPinObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomAisacPatchGraphPinObject::StaticRegisterNativesUAtomAisacPatchGraphPinObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAisacPatchGraphPinObject);
	UClass* Z_Construct_UClass_UAtomAisacPatchGraphPinObject_NoRegister()
	{
		return UAtomAisacPatchGraphPinObject::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacPatch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AisacPatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** class to hold an AtomAisacPatch property to permit a AisacPatch selection. (Local use only) */" },
		{ "IncludePath", "BlueprintGraph/AtomAisacPatchGraphPinObject.h" },
		{ "ModuleRelativePath", "Private/BlueprintGraph/AtomAisacPatchGraphPinObject.h" },
		{ "ToolTip", "class to hold an AtomAisacPatch property to permit a AisacPatch selection. (Local use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::NewProp_AisacPatch_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Private/BlueprintGraph/AtomAisacPatchGraphPinObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::NewProp_AisacPatch = { "AisacPatch", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAisacPatchGraphPinObject, AisacPatch), Z_Construct_UClass_UAtomAisacPatch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::NewProp_AisacPatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::NewProp_AisacPatch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::NewProp_AisacPatch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAisacPatchGraphPinObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::ClassParams = {
		&UAtomAisacPatchGraphPinObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAisacPatchGraphPinObject()
	{
		if (!Z_Registration_Info_UClass_UAtomAisacPatchGraphPinObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAisacPatchGraphPinObject.OuterSingleton, Z_Construct_UClass_UAtomAisacPatchGraphPinObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAisacPatchGraphPinObject.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomAisacPatchGraphPinObject>()
	{
		return UAtomAisacPatchGraphPinObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAisacPatchGraphPinObject);
	UAtomAisacPatchGraphPinObject::~UAtomAisacPatchGraphPinObject() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomAisacPatchGraphPinObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomAisacPatchGraphPinObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAisacPatchGraphPinObject, UAtomAisacPatchGraphPinObject::StaticClass, TEXT("UAtomAisacPatchGraphPinObject"), &Z_Registration_Info_UClass_UAtomAisacPatchGraphPinObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAisacPatchGraphPinObject), 2459562536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomAisacPatchGraphPinObject_h_4140867913(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomAisacPatchGraphPinObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomAisacPatchGraphPinObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
