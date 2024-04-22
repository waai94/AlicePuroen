// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/BlueprintGraph/AtomBusGraphPinObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusGraphPinObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomBusGraphPinObject();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomBusGraphPinObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomBusGraphPinObject::StaticRegisterNativesUAtomBusGraphPinObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusGraphPinObject);
	UClass* Z_Construct_UClass_UAtomBusGraphPinObject_NoRegister()
	{
		return UAtomBusGraphPinObject::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusGraphPinObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusGraphPinObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusGraphPinObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** class to hold an AtomBus property to permit a Bus selection. (Local use only) */" },
		{ "IncludePath", "BlueprintGraph/AtomBusGraphPinObject.h" },
		{ "ModuleRelativePath", "Private/BlueprintGraph/AtomBusGraphPinObject.h" },
		{ "ToolTip", "class to hold an AtomBus property to permit a Bus selection. (Local use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusGraphPinObject_Statics::NewProp_Bus_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Private/BlueprintGraph/AtomBusGraphPinObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomBusGraphPinObject_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusGraphPinObject, Bus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomBusGraphPinObject_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusGraphPinObject_Statics::NewProp_Bus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusGraphPinObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusGraphPinObject_Statics::NewProp_Bus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusGraphPinObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusGraphPinObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusGraphPinObject_Statics::ClassParams = {
		&UAtomBusGraphPinObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomBusGraphPinObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusGraphPinObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusGraphPinObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusGraphPinObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusGraphPinObject()
	{
		if (!Z_Registration_Info_UClass_UAtomBusGraphPinObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusGraphPinObject.OuterSingleton, Z_Construct_UClass_UAtomBusGraphPinObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusGraphPinObject.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomBusGraphPinObject>()
	{
		return UAtomBusGraphPinObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusGraphPinObject);
	UAtomBusGraphPinObject::~UAtomBusGraphPinObject() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomBusGraphPinObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomBusGraphPinObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusGraphPinObject, UAtomBusGraphPinObject::StaticClass, TEXT("UAtomBusGraphPinObject"), &Z_Registration_Info_UClass_UAtomBusGraphPinObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusGraphPinObject), 2588104749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomBusGraphPinObject_h_559637702(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomBusGraphPinObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_BlueprintGraph_AtomBusGraphPinObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
