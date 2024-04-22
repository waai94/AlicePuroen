// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/BlueprintGraph/AtomSoundGraphPinObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundGraphPinObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundGraphPinObject();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundGraphPinObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundGraphPinObject::StaticRegisterNativesUAtomSoundGraphPinObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundGraphPinObject);
	UClass* Z_Construct_UClass_UAtomSoundGraphPinObject_NoRegister()
	{
		return UAtomSoundGraphPinObject::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundGraphPinObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** class to hold a Sound property to permit a Sound selection. (Local Use only) */" },
		{ "IncludePath", "BlueprintGraph/AtomSoundGraphPinObject.h" },
		{ "ModuleRelativePath", "Private/BlueprintGraph/AtomSoundGraphPinObject.h" },
		{ "ToolTip", "class to hold a Sound property to permit a Sound selection. (Local Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Private/BlueprintGraph/AtomSoundGraphPinObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundGraphPinObject, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::NewProp_Sound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundGraphPinObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::ClassParams = {
		&UAtomSoundGraphPinObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundGraphPinObject()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundGraphPinObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundGraphPinObject.OuterSingleton, Z_Construct_UClass_UAtomSoundGraphPinObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundGraphPinObject.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundGraphPinObject>()
	{
		return UAtomSoundGraphPinObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundGraphPinObject);
	UAtomSoundGraphPinObject::~UAtomSoundGraphPinObject() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomSoundGraphPinObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomSoundGraphPinObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundGraphPinObject, UAtomSoundGraphPinObject::StaticClass, TEXT("UAtomSoundGraphPinObject"), &Z_Registration_Info_UClass_UAtomSoundGraphPinObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundGraphPinObject), 1661056039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomSoundGraphPinObject_h_562618002(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomSoundGraphPinObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomSoundGraphPinObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
