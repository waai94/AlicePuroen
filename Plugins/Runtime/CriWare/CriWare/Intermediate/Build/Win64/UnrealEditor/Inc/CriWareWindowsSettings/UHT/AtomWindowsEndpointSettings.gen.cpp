// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareWindowsSettings/Public/Atom/AtomWindowsEndpointSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWindowsEndpointSettings() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEndpointSettingsBase();
	CRIWAREWINDOWSSETTINGS_API UClass* Z_Construct_UClass_UAtomWindowsEndpointSettings();
	CRIWAREWINDOWSSETTINGS_API UClass* Z_Construct_UClass_UAtomWindowsEndpointSettings_NoRegister();
	CRIWAREWINDOWSSETTINGS_API UEnum* Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices();
	UPackage* Z_Construct_UPackage__Script_CriWareWindowsSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices;
	static UEnum* EAtomWindowsHardwareDevices_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices, Z_Construct_UPackage__Script_CriWareWindowsSettings(), TEXT("EAtomWindowsHardwareDevices"));
		}
		return Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices.OuterSingleton;
	}
	template<> CRIWAREWINDOWSSETTINGS_API UEnum* StaticEnum<EAtomWindowsHardwareDevices>()
	{
		return EAtomWindowsHardwareDevices_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::Enumerators[] = {
		{ "EAtomWindowsHardwareDevices::HardwareDevice1", (int64)EAtomWindowsHardwareDevices::HardwareDevice1 },
		{ "EAtomWindowsHardwareDevices::HardwareDevice2", (int64)EAtomWindowsHardwareDevices::HardwareDevice2 },
		{ "EAtomWindowsHardwareDevices::HardwareDevice3", (int64)EAtomWindowsHardwareDevices::HardwareDevice3 },
		{ "EAtomWindowsHardwareDevices::HardwareDevice4", (int64)EAtomWindowsHardwareDevices::HardwareDevice4 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::Enum_MetaDataParams[] = {
		{ "HardwareDevice1.Name", "EAtomWindowsHardwareDevices::HardwareDevice1" },
		{ "HardwareDevice2.Name", "EAtomWindowsHardwareDevices::HardwareDevice2" },
		{ "HardwareDevice3.Name", "EAtomWindowsHardwareDevices::HardwareDevice3" },
		{ "HardwareDevice4.Name", "EAtomWindowsHardwareDevices::HardwareDevice4" },
		{ "ModuleRelativePath", "Public/Atom/AtomWindowsEndpointSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareWindowsSettings,
		nullptr,
		"EAtomWindowsHardwareDevices",
		"EAtomWindowsHardwareDevices",
		Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices()
	{
		if (!Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices.InnerSingleton, Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices.InnerSingleton;
	}
	void UAtomWindowsEndpointSettings::StaticRegisterNativesUAtomWindowsEndpointSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomWindowsEndpointSettings);
	UClass* Z_Construct_UClass_UAtomWindowsEndpointSettings_NoRegister()
	{
		return UAtomWindowsEndpointSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideHardwareDevice_MetaData[];
#endif
		static void NewProp_bOverrideHardwareDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideHardwareDevice;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HardwareDeviceOverrides_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDeviceOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HardwareDeviceOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomEndpointSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareWindowsSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atom/AtomWindowsEndpointSettings.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomWindowsEndpointSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_bOverrideHardwareDevice_MetaData[] = {
		{ "Category", "Atom|SoundRenderer" },
		{ "Comment", "/** Wheter to override the hardware device mapping set in project properties for Atom Windows. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomWindowsEndpointSettings.h" },
		{ "ToolTip", "Wheter to override the hardware device mapping set in project properties for Atom Windows." },
	};
#endif
	void Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_bOverrideHardwareDevice_SetBit(void* Obj)
	{
		((UAtomWindowsEndpointSettings*)Obj)->bOverrideHardwareDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_bOverrideHardwareDevice = { "bOverrideHardwareDevice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomWindowsEndpointSettings), &Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_bOverrideHardwareDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_bOverrideHardwareDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_bOverrideHardwareDevice_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_HardwareDeviceOverrides_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_HardwareDeviceOverrides_MetaData[] = {
		{ "Category", "Atom|SoundRenderer" },
		{ "Comment", "/** The hardware device to override mapping set in project properties for Atom Windows. */" },
		{ "EditCondition", "bOverrideHardwareDevice" },
		{ "ModuleRelativePath", "Public/Atom/AtomWindowsEndpointSettings.h" },
		{ "ToolTip", "The hardware device to override mapping set in project properties for Atom Windows." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_HardwareDeviceOverrides = { "HardwareDeviceOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWindowsEndpointSettings, HardwareDeviceOverrides), Z_Construct_UEnum_CriWareWindowsSettings_EAtomWindowsHardwareDevices, METADATA_PARAMS(Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_HardwareDeviceOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_HardwareDeviceOverrides_MetaData)) }; // 1725064265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_bOverrideHardwareDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_HardwareDeviceOverrides_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::NewProp_HardwareDeviceOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomWindowsEndpointSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::ClassParams = {
		&UAtomWindowsEndpointSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomWindowsEndpointSettings()
	{
		if (!Z_Registration_Info_UClass_UAtomWindowsEndpointSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomWindowsEndpointSettings.OuterSingleton, Z_Construct_UClass_UAtomWindowsEndpointSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomWindowsEndpointSettings.OuterSingleton;
	}
	template<> CRIWAREWINDOWSSETTINGS_API UClass* StaticClass<UAtomWindowsEndpointSettings>()
	{
		return UAtomWindowsEndpointSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomWindowsEndpointSettings);
	UAtomWindowsEndpointSettings::~UAtomWindowsEndpointSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_Statics::EnumInfo[] = {
		{ EAtomWindowsHardwareDevices_StaticEnum, TEXT("EAtomWindowsHardwareDevices"), &Z_Registration_Info_UEnum_EAtomWindowsHardwareDevices, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1725064265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomWindowsEndpointSettings, UAtomWindowsEndpointSettings::StaticClass, TEXT("UAtomWindowsEndpointSettings"), &Z_Registration_Info_UClass_UAtomWindowsEndpointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomWindowsEndpointSettings), 2783425619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_2372911053(TEXT("/Script/CriWareWindowsSettings"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareWindows_CriWareWindowsSettings_Public_Atom_AtomWindowsEndpointSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
