// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationParameter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameter();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameter_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterBipolar();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterBipolar_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterFilterFrequency();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterFilterFrequency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterFrequency();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterFrequency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterFrequencyBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterFrequencyBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterHPFFrequency();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterHPFFrequency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterLPFFrequency();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterLPFFrequency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterScaled();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterScaled_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterVolume();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameterVolume_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationParameterSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings;
class UScriptStruct* FAtomModulationParameterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomModulationParameterSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomModulationParameterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomModulationParameterSettings>()
{
	return FAtomModulationParameterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueNormalized_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueNormalized;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UnitDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueUnit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueUnit;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomModulationParameterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueNormalized_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09\x09* Normalized, unitless default value of modulator. To ensure bypass functionality of mixing, patching, and modulating\n\x09\x09* functions as anticipated, value should be selected such that GetMixFunction (see USoundModulationParameter)\n\x09\x09* reduces to an identity function (i.e. function acts as a \"pass-through\" for all values in the range [0.0, 1.0]).\n\x09\x09* If GetMixFunction performs the mathematical operation f(x1, x2), then the default ValueNormalized should result in\n\x09\x09* f(x1, d) = x1 where d is ValueNormalized.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Normalized, unitless default value of modulator. To ensure bypass functionality of mixing, patching, and modulating\nfunctions as anticipated, value should be selected such that GetMixFunction (see USoundModulationParameter)\nreduces to an identity function (i.e. function acts as a \"pass-through\" for all values in the range [0.0, 1.0]).\nIf GetMixFunction performs the mathematical operation f(x1, x2), then the default ValueNormalized should result in\nf(x1, d) = x1 where d is ValueNormalized." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueNormalized = { "ValueNormalized", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationParameterSettings, ValueNormalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueNormalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueNormalized_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_UnitDisplayName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** (Optional) Text name of parameter's unit */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "(Optional) Text name of parameter's unit" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_UnitDisplayName = { "UnitDisplayName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationParameterSettings, UnitDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_UnitDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_UnitDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueUnit_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Default value of modulator in units (editor only) */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Default value of modulator in units (editor only)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueUnit = { "ValueUnit", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationParameterSettings, ValueUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueUnit_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueNormalized,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_UnitDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewProp_ValueUnit,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomModulationParameterSettings",
		sizeof(FAtomModulationParameterSettings),
		alignof(FAtomModulationParameterSettings),
		Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationParameterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings.InnerSingleton;
	}
	void UAtomModulationParameter::StaticRegisterNativesUAtomModulationParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameter);
	UClass* Z_Construct_UClass_UAtomModulationParameter_NoRegister()
	{
		return UAtomModulationParameter::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameter_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Parameter" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomModulationParameter_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameter, Settings), Z_Construct_UScriptStruct_FAtomModulationParameterSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameter_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameter_Statics::NewProp_Settings_MetaData)) }; // 1486448112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameter_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameter_Statics::ClassParams = {
		&UAtomModulationParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameter()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameter.OuterSingleton, Z_Construct_UClass_UAtomModulationParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameter.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameter>()
	{
		return UAtomModulationParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameter);
	UAtomModulationParameter::~UAtomModulationParameter() {}
	void UAtomModulationParameterScaled::StaticRegisterNativesUAtomModulationParameterScaled()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterScaled);
	UClass* Z_Construct_UClass_UAtomModulationParameterScaled_NoRegister()
	{
		return UAtomModulationParameterScaled::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterScaled_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterScaled_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterScaled_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Linearly scaled value between unit minimum and maximum.\n" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Linearly scaled value between unit minimum and maximum." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMin_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit minimum of modulator. Minimum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Unit minimum of modulator. Minimum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMin = { "UnitMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameterScaled, UnitMin), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMax_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit maximum of modulator. Maximum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Unit maximum of modulator. Maximum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMax = { "UnitMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameterScaled, UnitMax), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationParameterScaled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameterScaled_Statics::NewProp_UnitMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterScaled_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterScaled>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterScaled_Statics::ClassParams = {
		&UAtomModulationParameterScaled::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationParameterScaled_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterScaled_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterScaled_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterScaled_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterScaled()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterScaled.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterScaled.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterScaled_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterScaled.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterScaled>()
	{
		return UAtomModulationParameterScaled::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterScaled);
	UAtomModulationParameterScaled::~UAtomModulationParameterScaled() {}
	void UAtomModulationParameterFrequencyBase::StaticRegisterNativesUAtomModulationParameterFrequencyBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterFrequencyBase);
	UClass* Z_Construct_UClass_UAtomModulationParameterFrequencyBase_NoRegister()
	{
		return UAtomModulationParameterFrequencyBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space.\n" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterFrequencyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics::ClassParams = {
		&UAtomModulationParameterFrequencyBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterFrequencyBase()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterFrequencyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterFrequencyBase.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterFrequencyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterFrequencyBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterFrequencyBase>()
	{
		return UAtomModulationParameterFrequencyBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterFrequencyBase);
	UAtomModulationParameterFrequencyBase::~UAtomModulationParameterFrequencyBase() {}
	void UAtomModulationParameterFrequency::StaticRegisterNativesUAtomModulationParameterFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterFrequency);
	UClass* Z_Construct_UClass_UAtomModulationParameterFrequency_NoRegister()
	{
		return UAtomModulationParameterFrequency::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameterFrequencyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with provided minimum and maximum.\n" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with provided minimum and maximum." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMin_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit minimum of modulator. Minimum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Unit minimum of modulator. Minimum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMin = { "UnitMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameterFrequency, UnitMin), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMax_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit maximum of modulator. Maximum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Unit maximum of modulator. Maximum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMax = { "UnitMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameterFrequency, UnitMax), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::NewProp_UnitMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::ClassParams = {
		&UAtomModulationParameterFrequency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterFrequency()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterFrequency.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterFrequency.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterFrequency>()
	{
		return UAtomModulationParameterFrequency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterFrequency);
	UAtomModulationParameterFrequency::~UAtomModulationParameterFrequency() {}
	void UAtomModulationParameterFilterFrequency::StaticRegisterNativesUAtomModulationParameterFilterFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterFilterFrequency);
	UClass* Z_Construct_UClass_UAtomModulationParameterFilterFrequency_NoRegister()
	{
		return UAtomModulationParameterFilterFrequency::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameterFrequencyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\n" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterFilterFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics::ClassParams = {
		&UAtomModulationParameterFilterFrequency::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterFilterFrequency()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterFilterFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterFilterFrequency.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterFilterFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterFilterFrequency.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterFilterFrequency>()
	{
		return UAtomModulationParameterFilterFrequency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterFilterFrequency);
	UAtomModulationParameterFilterFrequency::~UAtomModulationParameterFilterFrequency() {}
	void UAtomModulationParameterLPFFrequency::StaticRegisterNativesUAtomModulationParameterLPFFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterLPFFrequency);
	UClass* Z_Construct_UClass_UAtomModulationParameterLPFFrequency_NoRegister()
	{
		return UAtomModulationParameterLPFFrequency::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameterFilterFrequency,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\n// Mixes by taking the minimum (i.e. aggressive) filter frequency of all active modulators.\n" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\nMixes by taking the minimum (i.e. aggressive) filter frequency of all active modulators." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterLPFFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics::ClassParams = {
		&UAtomModulationParameterLPFFrequency::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterLPFFrequency()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterLPFFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterLPFFrequency.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterLPFFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterLPFFrequency.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterLPFFrequency>()
	{
		return UAtomModulationParameterLPFFrequency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterLPFFrequency);
	UAtomModulationParameterLPFFrequency::~UAtomModulationParameterLPFFrequency() {}
	void UAtomModulationParameterHPFFrequency::StaticRegisterNativesUAtomModulationParameterHPFFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterHPFFrequency);
	UClass* Z_Construct_UClass_UAtomModulationParameterHPFFrequency_NoRegister()
	{
		return UAtomModulationParameterHPFFrequency::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameterFilterFrequency,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\n// Mixes by taking the maximum (i.e. aggressive) filter frequency of all active modulators.\n" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\nMixes by taking the maximum (i.e. aggressive) filter frequency of all active modulators." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterHPFFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics::ClassParams = {
		&UAtomModulationParameterHPFFrequency::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterHPFFrequency()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterHPFFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterHPFFrequency.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterHPFFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterHPFFrequency.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterHPFFrequency>()
	{
		return UAtomModulationParameterHPFFrequency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterHPFFrequency);
	UAtomModulationParameterHPFFrequency::~UAtomModulationParameterHPFFrequency() {}
	void UAtomModulationParameterBipolar::StaticRegisterNativesUAtomModulationParameterBipolar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterBipolar);
	UClass* Z_Construct_UClass_UAtomModulationParameterBipolar_NoRegister()
	{
		return UAtomModulationParameterBipolar::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterBipolar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to bipolar range. Mixes multiplicatively.\n" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to bipolar range. Mixes multiplicatively." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::NewProp_UnitRange_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Unit range of modulator. Range is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Unit range of modulator. Range is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::NewProp_UnitRange = { "UnitRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameterBipolar, UnitRange), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::NewProp_UnitRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::NewProp_UnitRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::NewProp_UnitRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterBipolar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::ClassParams = {
		&UAtomModulationParameterBipolar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterBipolar()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterBipolar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterBipolar.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterBipolar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterBipolar.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterBipolar>()
	{
		return UAtomModulationParameterBipolar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterBipolar);
	UAtomModulationParameterBipolar::~UAtomModulationParameterBipolar() {}
	void UAtomModulationParameterVolume::StaticRegisterNativesUAtomModulationParameterVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationParameterVolume);
	UClass* Z_Construct_UClass_UAtomModulationParameterVolume_NoRegister()
	{
		return UAtomModulationParameterVolume::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationParameterVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationParameterVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Atom/Modulation/AtomModulationParameter.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationParameterVolume_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "0.000000" },
		{ "Comment", "/** Minimum volume of parameter. Only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationParameter.h" },
		{ "ToolTip", "Minimum volume of parameter. Only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomModulationParameterVolume_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationParameterVolume, MinVolume), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterVolume_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterVolume_Statics::NewProp_MinVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationParameterVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationParameterVolume_Statics::NewProp_MinVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationParameterVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationParameterVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationParameterVolume_Statics::ClassParams = {
		&UAtomModulationParameterVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationParameterVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterVolume_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationParameterVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationParameterVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationParameterVolume()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationParameterVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationParameterVolume.OuterSingleton, Z_Construct_UClass_UAtomModulationParameterVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationParameterVolume.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationParameterVolume>()
	{
		return UAtomModulationParameterVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationParameterVolume);
	UAtomModulationParameterVolume::~UAtomModulationParameterVolume() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_Statics::ScriptStructInfo[] = {
		{ FAtomModulationParameterSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomModulationParameterSettings_Statics::NewStructOps, TEXT("AtomModulationParameterSettings"), &Z_Registration_Info_UScriptStruct_AtomModulationParameterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomModulationParameterSettings), 1486448112U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationParameter, UAtomModulationParameter::StaticClass, TEXT("UAtomModulationParameter"), &Z_Registration_Info_UClass_UAtomModulationParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameter), 3507103277U) },
		{ Z_Construct_UClass_UAtomModulationParameterScaled, UAtomModulationParameterScaled::StaticClass, TEXT("UAtomModulationParameterScaled"), &Z_Registration_Info_UClass_UAtomModulationParameterScaled, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterScaled), 573419080U) },
		{ Z_Construct_UClass_UAtomModulationParameterFrequencyBase, UAtomModulationParameterFrequencyBase::StaticClass, TEXT("UAtomModulationParameterFrequencyBase"), &Z_Registration_Info_UClass_UAtomModulationParameterFrequencyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterFrequencyBase), 3650343686U) },
		{ Z_Construct_UClass_UAtomModulationParameterFrequency, UAtomModulationParameterFrequency::StaticClass, TEXT("UAtomModulationParameterFrequency"), &Z_Registration_Info_UClass_UAtomModulationParameterFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterFrequency), 1337532798U) },
		{ Z_Construct_UClass_UAtomModulationParameterFilterFrequency, UAtomModulationParameterFilterFrequency::StaticClass, TEXT("UAtomModulationParameterFilterFrequency"), &Z_Registration_Info_UClass_UAtomModulationParameterFilterFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterFilterFrequency), 2163821655U) },
		{ Z_Construct_UClass_UAtomModulationParameterLPFFrequency, UAtomModulationParameterLPFFrequency::StaticClass, TEXT("UAtomModulationParameterLPFFrequency"), &Z_Registration_Info_UClass_UAtomModulationParameterLPFFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterLPFFrequency), 2569611840U) },
		{ Z_Construct_UClass_UAtomModulationParameterHPFFrequency, UAtomModulationParameterHPFFrequency::StaticClass, TEXT("UAtomModulationParameterHPFFrequency"), &Z_Registration_Info_UClass_UAtomModulationParameterHPFFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterHPFFrequency), 760167305U) },
		{ Z_Construct_UClass_UAtomModulationParameterBipolar, UAtomModulationParameterBipolar::StaticClass, TEXT("UAtomModulationParameterBipolar"), &Z_Registration_Info_UClass_UAtomModulationParameterBipolar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterBipolar), 379200421U) },
		{ Z_Construct_UClass_UAtomModulationParameterVolume, UAtomModulationParameterVolume::StaticClass, TEXT("UAtomModulationParameterVolume"), &Z_Registration_Info_UClass_UAtomModulationParameterVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationParameterVolume), 3739455525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_1267575012(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
