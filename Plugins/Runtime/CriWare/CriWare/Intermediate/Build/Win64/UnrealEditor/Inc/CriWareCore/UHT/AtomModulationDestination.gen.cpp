// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationDestination.h"
#include "CriWareCore/Public/Atom/Modulation/AtomAisacModulation.h"
#include "CriWareCore/Public/Atom/Modulation/AtomSoundModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationDestination() {}
// Cross Module References
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationRouting();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomModulationRouting;
	static UEnum* EAtomModulationRouting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomModulationRouting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomModulationRouting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomModulationRouting, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomModulationRouting"));
		}
		return Z_Registration_Info_UEnum_EAtomModulationRouting.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomModulationRouting>()
	{
		return EAtomModulationRouting_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::Enumerators[] = {
		{ "EAtomModulationRouting::Disable", (int64)EAtomModulationRouting::Disable },
		{ "EAtomModulationRouting::Inherit", (int64)EAtomModulationRouting::Inherit },
		{ "EAtomModulationRouting::Override", (int64)EAtomModulationRouting::Override },
		{ "EAtomModulationRouting::Union", (int64)EAtomModulationRouting::Union },
		{ "EAtomModulationRouting::DAW", (int64)EAtomModulationRouting::DAW },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumeration for diffent moduation routing for a modulation destination of Atom sound. */" },
		{ "DAW.Comment", "/* Ignores modulations and values in UnrealEngine and use the original settings from DAW (CRI Atom Craft) set by sound designer. */" },
		{ "DAW.DisplayName", "DAW - Atom Craft" },
		{ "DAW.Name", "EAtomModulationRouting::DAW" },
		{ "DAW.ToolTip", "Ignores modulations and values in UnrealEngine and use the original settings from DAW (CRI Atom Craft) set by sound designer." },
		{ "Disable.Comment", "/* Disables modulation routing. */" },
		{ "Disable.Name", "EAtomModulationRouting::Disable" },
		{ "Disable.ToolTip", "Disables modulation routing." },
		{ "Inherit.Comment", "/* Inherits modulation routing (AtomComponent inherits from Sound, Sound inherits from SoundClass). */" },
		{ "Inherit.Name", "EAtomModulationRouting::Inherit" },
		{ "Inherit.ToolTip", "Inherits modulation routing (AtomComponent inherits from Sound, Sound inherits from SoundClass)." },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
		{ "Override.Comment", "/* Ignores inherited settings and uses modulation settings on this object. */" },
		{ "Override.Name", "EAtomModulationRouting::Override" },
		{ "Override.ToolTip", "Ignores inherited settings and uses modulation settings on this object." },
		{ "ToolTip", "Enumeration for diffent moduation routing for a modulation destination of Atom sound." },
		{ "Union.Comment", "/* Performs set union on local modulation sources with those inherited (AtomComponent inherits from Sound, Sound inherits from SoundClass). */" },
		{ "Union.Name", "EAtomModulationRouting::Union" },
		{ "Union.ToolTip", "Performs set union on local modulation sources with those inherited (AtomComponent inherits from Sound, Sound inherits from SoundClass)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomModulationRouting",
		"EAtomModulationRouting",
		Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationRouting()
	{
		if (!Z_Registration_Info_UEnum_EAtomModulationRouting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomModulationRouting.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomModulationRouting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomModulationRouting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings;
class UScriptStruct* FAtomSoundModulationDefaultSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundModulationDefaultSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundModulationDefaultSettings>()
{
	return FAtomSoundModulationDefaultSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacModulations_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacModulations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighpassModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HighpassModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowpassModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowpassModulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure allowing modulation override for Atom sound. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
		{ "ToolTip", "Structure allowing modulation override for Atom sound." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundModulationDefaultSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_AisacModulations_MetaData[] = {
		{ "Category", "Modulation" },
		{ "DisplayName", "AISAC" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_AisacModulations = { "AisacModulations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationDefaultSettings, AisacModulations), Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_AisacModulations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_AisacModulations_MetaData)) }; // 838418316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_VolumeModulation_MetaData[] = {
		{ "AtomParam", "Volume" },
		{ "AtomParamClass", "AtomModulationParameterVolume" },
		{ "Category", "Modulation" },
		{ "DisplayName", "Volume" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_VolumeModulation = { "VolumeModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationDefaultSettings, VolumeModulation), Z_Construct_UScriptStruct_FAtomSoundModulationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_VolumeModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_VolumeModulation_MetaData)) }; // 1207854738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_PitchModulation_MetaData[] = {
		{ "AtomParam", "Pitch" },
		{ "AtomParamClass", "AtomModulationParameterBipolar" },
		{ "Category", "Modulation" },
		{ "DisplayName", "Pitch" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_PitchModulation = { "PitchModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationDefaultSettings, PitchModulation), Z_Construct_UScriptStruct_FAtomSoundModulationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_PitchModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_PitchModulation_MetaData)) }; // 1207854738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_HighpassModulation_MetaData[] = {
		{ "AtomParam", "HPFCutoffFrequency" },
		{ "AtomParamClass", "AtomModulationParameterHPFFrequency" },
		{ "Category", "Modulation" },
		{ "DisplayName", "Highpass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_HighpassModulation = { "HighpassModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationDefaultSettings, HighpassModulation), Z_Construct_UScriptStruct_FAtomSoundModulationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_HighpassModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_HighpassModulation_MetaData)) }; // 1207854738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_LowpassModulation_MetaData[] = {
		{ "AtomParam", "LPFCutoffFrequency" },
		{ "AtomParamClass", "AtomModulationParameterLPFFrequency" },
		{ "Category", "Modulation" },
		{ "DisplayName", "Lowpass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_LowpassModulation = { "LowpassModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationDefaultSettings, LowpassModulation), Z_Construct_UScriptStruct_FAtomSoundModulationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_LowpassModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_LowpassModulation_MetaData)) }; // 1207854738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_AisacModulations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_VolumeModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_PitchModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_HighpassModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewProp_LowpassModulation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSoundModulationDefaultSettings",
		sizeof(FAtomSoundModulationDefaultSettings),
		alignof(FAtomSoundModulationDefaultSettings),
		Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAtomSoundModulationRoutingSettings>() == std::is_polymorphic<FAtomSoundModulationDefaultSettings>(), "USTRUCT FAtomSoundModulationRoutingSettings cannot be polymorphic unless super FAtomSoundModulationDefaultSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings;
class UScriptStruct* FAtomSoundModulationRoutingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundModulationRoutingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundModulationRoutingSettings>()
{
	return FAtomSoundModulationRoutingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_VolumeRouting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRouting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeRouting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PitchRouting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRouting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PitchRouting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LowpassRouting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowpassRouting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LowpassRouting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HighpassRouting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighpassRouting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HighpassRouting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure allowing modulation routing and override for source Atom sound. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
		{ "ToolTip", "Structure allowing modulation routing and override for source Atom sound." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundModulationRoutingSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_VolumeRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_VolumeRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What volume modulation settings to use */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
		{ "ToolTip", "What volume modulation settings to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_VolumeRouting = { "VolumeRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationRoutingSettings, VolumeRouting), Z_Construct_UEnum_CriWareCore_EAtomModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_VolumeRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_VolumeRouting_MetaData)) }; // 2968889505
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_PitchRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_PitchRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What pitch modulation settings to use */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
		{ "ToolTip", "What pitch modulation settings to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_PitchRouting = { "PitchRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationRoutingSettings, PitchRouting), Z_Construct_UEnum_CriWareCore_EAtomModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_PitchRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_PitchRouting_MetaData)) }; // 2968889505
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_LowpassRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_LowpassRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What low-pass modulation settings to use */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
		{ "ToolTip", "What low-pass modulation settings to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_LowpassRouting = { "LowpassRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationRoutingSettings, LowpassRouting), Z_Construct_UEnum_CriWareCore_EAtomModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_LowpassRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_LowpassRouting_MetaData)) }; // 2968889505
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_HighpassRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_HighpassRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** What high-pass modulation settings to use */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationDestination.h" },
		{ "ToolTip", "What high-pass modulation settings to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_HighpassRouting = { "HighpassRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationRoutingSettings, HighpassRouting), Z_Construct_UEnum_CriWareCore_EAtomModulationRouting, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_HighpassRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_HighpassRouting_MetaData)) }; // 2968889505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_VolumeRouting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_VolumeRouting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_PitchRouting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_PitchRouting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_LowpassRouting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_LowpassRouting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_HighpassRouting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewProp_HighpassRouting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings,
		&NewStructOps,
		"AtomSoundModulationRoutingSettings",
		sizeof(FAtomSoundModulationRoutingSettings),
		alignof(FAtomSoundModulationRoutingSettings),
		Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_Statics::EnumInfo[] = {
		{ EAtomModulationRouting_StaticEnum, TEXT("EAtomModulationRouting"), &Z_Registration_Info_UEnum_EAtomModulationRouting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2968889505U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_Statics::ScriptStructInfo[] = {
		{ FAtomSoundModulationDefaultSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings_Statics::NewStructOps, TEXT("AtomSoundModulationDefaultSettings"), &Z_Registration_Info_UScriptStruct_AtomSoundModulationDefaultSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundModulationDefaultSettings), 1168924160U) },
		{ FAtomSoundModulationRoutingSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings_Statics::NewStructOps, TEXT("AtomSoundModulationRoutingSettings"), &Z_Registration_Info_UScriptStruct_AtomSoundModulationRoutingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundModulationRoutingSettings), 2169846499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_2027491071(TEXT("/Script/CriWareCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationDestination_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
