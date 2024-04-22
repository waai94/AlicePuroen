// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Public/Customizations/SubObjectPicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubObjectPicker() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConfig_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackWithParentBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBank_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomConfigPropertyHolder_Internal();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackPropertyHolder_Internal();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomRackPropertyHolder_Internal_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UParentObjectPropertyHolder_Base();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UParentObjectPropertyHolder_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UParentObjectPropertyHolder_Base::StaticRegisterNativesUParentObjectPropertyHolder_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParentObjectPropertyHolder_Base);
	UClass* Z_Construct_UClass_UParentObjectPropertyHolder_Base_NoRegister()
	{
		return UParentObjectPropertyHolder_Base::StaticClass();
	}
	struct Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UClass to hold the parent property and permit subobject selection. (Need to derive.) */" },
		{ "IncludePath", "Customizations/SubObjectPicker.h" },
		{ "ModuleRelativePath", "Public/Customizations/SubObjectPicker.h" },
		{ "ToolTip", "UClass to hold the parent property and permit subobject selection. (Need to derive.)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentObjectPropertyHolder_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics::ClassParams = {
		&UParentObjectPropertyHolder_Base::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParentObjectPropertyHolder_Base()
	{
		if (!Z_Registration_Info_UClass_UParentObjectPropertyHolder_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParentObjectPropertyHolder_Base.OuterSingleton, Z_Construct_UClass_UParentObjectPropertyHolder_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParentObjectPropertyHolder_Base.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UParentObjectPropertyHolder_Base>()
	{
		return UParentObjectPropertyHolder_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentObjectPropertyHolder_Base);
	UParentObjectPropertyHolder_Base::~UParentObjectPropertyHolder_Base() {}
	void UAtomConfigPropertyHolder_Internal::StaticRegisterNativesUAtomConfigPropertyHolder_Internal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomConfigPropertyHolder_Internal);
	UClass* Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_NoRegister()
	{
		return UAtomConfigPropertyHolder_Internal::StaticClass();
	}
	struct Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Config;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParentObjectPropertyHolder_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class to hold a AtomConfig property and permit config subobject selection (patches, settings ...). (Internal Use only) */" },
		{ "IncludePath", "Customizations/SubObjectPicker.h" },
		{ "ModuleRelativePath", "Public/Customizations/SubObjectPicker.h" },
		{ "ToolTip", "Class to hold a AtomConfig property and permit config subobject selection (patches, settings ...). (Internal Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::NewProp_Config_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Customizations/SubObjectPicker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0044000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfigPropertyHolder_Internal, Config), Z_Construct_UClass_UAtomConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::NewProp_Config_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::NewProp_Config,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomConfigPropertyHolder_Internal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::ClassParams = {
		&UAtomConfigPropertyHolder_Internal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomConfigPropertyHolder_Internal()
	{
		if (!Z_Registration_Info_UClass_UAtomConfigPropertyHolder_Internal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomConfigPropertyHolder_Internal.OuterSingleton, Z_Construct_UClass_UAtomConfigPropertyHolder_Internal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomConfigPropertyHolder_Internal.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomConfigPropertyHolder_Internal>()
	{
		return UAtomConfigPropertyHolder_Internal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomConfigPropertyHolder_Internal);
	UAtomConfigPropertyHolder_Internal::~UAtomConfigPropertyHolder_Internal() {}
	void UAtomRackPropertyHolder_Internal::StaticRegisterNativesUAtomRackPropertyHolder_Internal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRackPropertyHolder_Internal);
	UClass* Z_Construct_UClass_UAtomRackPropertyHolder_Internal_NoRegister()
	{
		return UAtomRackPropertyHolder_Internal::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Rack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParentObjectPropertyHolder_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class to hold a Rack property and permit inner bus selection. (Internal Use only) */" },
		{ "IncludePath", "Customizations/SubObjectPicker.h" },
		{ "ModuleRelativePath", "Public/Customizations/SubObjectPicker.h" },
		{ "ToolTip", "Class to hold a Rack property and permit inner bus selection. (Internal Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::NewProp_Rack_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Bus" },
		{ "ModuleRelativePath", "Public/Customizations/SubObjectPicker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::NewProp_Rack = { "Rack", nullptr, (EPropertyFlags)0x0044000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRackPropertyHolder_Internal, Rack), Z_Construct_UClass_UAtomRackWithParentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::NewProp_Rack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::NewProp_Rack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::NewProp_Rack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRackPropertyHolder_Internal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::ClassParams = {
		&UAtomRackPropertyHolder_Internal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRackPropertyHolder_Internal()
	{
		if (!Z_Registration_Info_UClass_UAtomRackPropertyHolder_Internal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRackPropertyHolder_Internal.OuterSingleton, Z_Construct_UClass_UAtomRackPropertyHolder_Internal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRackPropertyHolder_Internal.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomRackPropertyHolder_Internal>()
	{
		return UAtomRackPropertyHolder_Internal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRackPropertyHolder_Internal);
	UAtomRackPropertyHolder_Internal::~UAtomRackPropertyHolder_Internal() {}
	void UAtomSoundBankPropertyHolder_Internal::StaticRegisterNativesUAtomSoundBankPropertyHolder_Internal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBankPropertyHolder_Internal);
	UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_NoRegister()
	{
		return UAtomSoundBankPropertyHolder_Internal::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParentObjectPropertyHolder_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class to hold a AtomSoundBase property and inner sound selection (Cue, Waves ...). (Internal Use only) */" },
		{ "IncludePath", "Customizations/SubObjectPicker.h" },
		{ "ModuleRelativePath", "Public/Customizations/SubObjectPicker.h" },
		{ "ToolTip", "Class to hold a AtomSoundBase property and inner sound selection (Cue, Waves ...). (Internal Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::NewProp_Bank_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Customizations/SubObjectPicker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0044000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBankPropertyHolder_Internal, Bank), Z_Construct_UClass_UAtomSoundBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::NewProp_Bank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::NewProp_Bank_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::NewProp_Bank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBankPropertyHolder_Internal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::ClassParams = {
		&UAtomSoundBankPropertyHolder_Internal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Internal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Internal.OuterSingleton, Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Internal.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundBankPropertyHolder_Internal>()
	{
		return UAtomSoundBankPropertyHolder_Internal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBankPropertyHolder_Internal);
	UAtomSoundBankPropertyHolder_Internal::~UAtomSoundBankPropertyHolder_Internal() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Public_Customizations_SubObjectPicker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Public_Customizations_SubObjectPicker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParentObjectPropertyHolder_Base, UParentObjectPropertyHolder_Base::StaticClass, TEXT("UParentObjectPropertyHolder_Base"), &Z_Registration_Info_UClass_UParentObjectPropertyHolder_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParentObjectPropertyHolder_Base), 3564162628U) },
		{ Z_Construct_UClass_UAtomConfigPropertyHolder_Internal, UAtomConfigPropertyHolder_Internal::StaticClass, TEXT("UAtomConfigPropertyHolder_Internal"), &Z_Registration_Info_UClass_UAtomConfigPropertyHolder_Internal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomConfigPropertyHolder_Internal), 2333100912U) },
		{ Z_Construct_UClass_UAtomRackPropertyHolder_Internal, UAtomRackPropertyHolder_Internal::StaticClass, TEXT("UAtomRackPropertyHolder_Internal"), &Z_Registration_Info_UClass_UAtomRackPropertyHolder_Internal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRackPropertyHolder_Internal), 3318908432U) },
		{ Z_Construct_UClass_UAtomSoundBankPropertyHolder_Internal, UAtomSoundBankPropertyHolder_Internal::StaticClass, TEXT("UAtomSoundBankPropertyHolder_Internal"), &Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Internal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBankPropertyHolder_Internal), 4077934075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Public_Customizations_SubObjectPicker_h_3968197741(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Public_Customizations_SubObjectPicker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Public_Customizations_SubObjectPicker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
