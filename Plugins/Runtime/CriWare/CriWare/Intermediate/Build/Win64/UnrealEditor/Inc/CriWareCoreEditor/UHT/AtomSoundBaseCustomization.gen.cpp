// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/Customizations/AtomSoundBaseCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundBaseCustomization() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomCueSheet_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundAsset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWaveBank_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomCueSheetPropertyHolder();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomCueSheetPropertyHolder_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_NoRegister();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomWaveBankPropertyHolder();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UAtomWaveBankPropertyHolder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UAtomSoundBankPropertyHolder_Base::StaticRegisterNativesUAtomSoundBankPropertyHolder_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBankPropertyHolder_Base);
	UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_NoRegister()
	{
		return UAtomSoundBankPropertyHolder_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class to hold a SoundBank property and permit SoundBank type selection. (Internal Use only) */" },
		{ "IncludePath", "Customizations/AtomSoundBaseCustomization.h" },
		{ "ModuleRelativePath", "Private/Customizations/AtomSoundBaseCustomization.h" },
		{ "ToolTip", "Base class to hold a SoundBank property and permit SoundBank type selection. (Internal Use only)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBankPropertyHolder_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics::ClassParams = {
		&UAtomSoundBankPropertyHolder_Base::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Base.OuterSingleton, Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Base.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundBankPropertyHolder_Base>()
	{
		return UAtomSoundBankPropertyHolder_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBankPropertyHolder_Base);
	UAtomSoundBankPropertyHolder_Base::~UAtomSoundBankPropertyHolder_Base() {}
	void UAtomSoundBankPropertyHolder::StaticRegisterNativesUAtomSoundBankPropertyHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBankPropertyHolder);
	UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder_NoRegister()
	{
		return UAtomSoundBankPropertyHolder::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundAsset_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_SoundAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** class to hold a SoundBank property to permit any SoundBank or SoundAsset type selection. (Internal Use only) */" },
		{ "IncludePath", "Customizations/AtomSoundBaseCustomization.h" },
		{ "ModuleRelativePath", "Private/Customizations/AtomSoundBaseCustomization.h" },
		{ "ToolTip", "class to hold a SoundBank property to permit any SoundBank or SoundAsset type selection. (Internal Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::NewProp_SoundAsset_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Private/Customizations/AtomSoundBaseCustomization.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0044000000002001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBankPropertyHolder, SoundAsset), Z_Construct_UClass_UAtomSoundAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::NewProp_SoundAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::NewProp_SoundAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::NewProp_SoundAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBankPropertyHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::ClassParams = {
		&UAtomSoundBankPropertyHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBankPropertyHolder()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder.OuterSingleton, Z_Construct_UClass_UAtomSoundBankPropertyHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomSoundBankPropertyHolder>()
	{
		return UAtomSoundBankPropertyHolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBankPropertyHolder);
	UAtomSoundBankPropertyHolder::~UAtomSoundBankPropertyHolder() {}
	void UAtomWaveBankPropertyHolder::StaticRegisterNativesUAtomWaveBankPropertyHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomWaveBankPropertyHolder);
	UClass* Z_Construct_UClass_UAtomWaveBankPropertyHolder_NoRegister()
	{
		return UAtomWaveBankPropertyHolder::StaticClass();
	}
	struct Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** class to hold a WaveBank property to permit a WaveBank selection. (Internal Use only) */" },
		{ "IncludePath", "Customizations/AtomSoundBaseCustomization.h" },
		{ "ModuleRelativePath", "Private/Customizations/AtomSoundBaseCustomization.h" },
		{ "ToolTip", "class to hold a WaveBank property to permit a WaveBank selection. (Internal Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::NewProp_SoundAsset_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sound" },
		{ "Comment", "/** A WaveBank to select a sound wave from. */" },
		{ "ModuleRelativePath", "Private/Customizations/AtomSoundBaseCustomization.h" },
		{ "ToolTip", "A WaveBank to select a sound wave from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0044000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWaveBankPropertyHolder, SoundAsset), Z_Construct_UClass_UAtomWaveBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::NewProp_SoundAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::NewProp_SoundAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::NewProp_SoundAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomWaveBankPropertyHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::ClassParams = {
		&UAtomWaveBankPropertyHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomWaveBankPropertyHolder()
	{
		if (!Z_Registration_Info_UClass_UAtomWaveBankPropertyHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomWaveBankPropertyHolder.OuterSingleton, Z_Construct_UClass_UAtomWaveBankPropertyHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomWaveBankPropertyHolder.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomWaveBankPropertyHolder>()
	{
		return UAtomWaveBankPropertyHolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomWaveBankPropertyHolder);
	UAtomWaveBankPropertyHolder::~UAtomWaveBankPropertyHolder() {}
	void UAtomCueSheetPropertyHolder::StaticRegisterNativesUAtomCueSheetPropertyHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomCueSheetPropertyHolder);
	UClass* Z_Construct_UClass_UAtomCueSheetPropertyHolder_NoRegister()
	{
		return UAtomCueSheetPropertyHolder::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** class to hold a CueSheet property to permit a CueSheet selection. (Internal Use only) */" },
		{ "IncludePath", "Customizations/AtomSoundBaseCustomization.h" },
		{ "ModuleRelativePath", "Private/Customizations/AtomSoundBaseCustomization.h" },
		{ "ToolTip", "class to hold a CueSheet property to permit a CueSheet selection. (Internal Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::NewProp_SoundAsset_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Private/Customizations/AtomSoundBaseCustomization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0044000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheetPropertyHolder, SoundAsset), Z_Construct_UClass_UAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::NewProp_SoundAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::NewProp_SoundAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::NewProp_SoundAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCueSheetPropertyHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::ClassParams = {
		&UAtomCueSheetPropertyHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCueSheetPropertyHolder()
	{
		if (!Z_Registration_Info_UClass_UAtomCueSheetPropertyHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomCueSheetPropertyHolder.OuterSingleton, Z_Construct_UClass_UAtomCueSheetPropertyHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomCueSheetPropertyHolder.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UAtomCueSheetPropertyHolder>()
	{
		return UAtomCueSheetPropertyHolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCueSheetPropertyHolder);
	UAtomCueSheetPropertyHolder::~UAtomCueSheetPropertyHolder() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Customizations_AtomSoundBaseCustomization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Customizations_AtomSoundBaseCustomization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundBankPropertyHolder_Base, UAtomSoundBankPropertyHolder_Base::StaticClass, TEXT("UAtomSoundBankPropertyHolder_Base"), &Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBankPropertyHolder_Base), 1042475997U) },
		{ Z_Construct_UClass_UAtomSoundBankPropertyHolder, UAtomSoundBankPropertyHolder::StaticClass, TEXT("UAtomSoundBankPropertyHolder"), &Z_Registration_Info_UClass_UAtomSoundBankPropertyHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBankPropertyHolder), 1304617630U) },
		{ Z_Construct_UClass_UAtomWaveBankPropertyHolder, UAtomWaveBankPropertyHolder::StaticClass, TEXT("UAtomWaveBankPropertyHolder"), &Z_Registration_Info_UClass_UAtomWaveBankPropertyHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomWaveBankPropertyHolder), 3622257131U) },
		{ Z_Construct_UClass_UAtomCueSheetPropertyHolder, UAtomCueSheetPropertyHolder::StaticClass, TEXT("UAtomCueSheetPropertyHolder"), &Z_Registration_Info_UClass_UAtomCueSheetPropertyHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomCueSheetPropertyHolder), 2779219164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Customizations_AtomSoundBaseCustomization_h_2879400934(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Customizations_AtomSoundBaseCustomization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_Customizations_AtomSoundBaseCustomization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
