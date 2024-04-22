// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomAisacModulation.h"
#include "CriWareCore/Public/Atom/AtomAisacPatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacModulation() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacPatch_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControl();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomAisacControlSettings>() == std::is_polymorphic<FAtomSoundModulationSettings>(), "USTRUCT FAtomAisacControlSettings cannot be polymorphic unless super FAtomSoundModulationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacControlSettings;
class UScriptStruct* FAtomAisacControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAisacControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacControlSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAisacControlSettings>()
{
	return FAtomAisacControlSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Control;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure allowing modulation AISAC control override. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomAisacModulation.h" },
		{ "ToolTip", "Structure allowing modulation AISAC control override." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::NewProp_Control_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** The destination AISAC control to modulate. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomAisacModulation.h" },
		{ "ToolTip", "The destination AISAC control to modulate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlSettings, Control), Z_Construct_UScriptStruct_FAtomAisacControl, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::NewProp_Control_MetaData)) }; // 2456867995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::NewProp_Control,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		Z_Construct_UScriptStruct_FAtomSoundModulationSettings,
		&NewStructOps,
		"AtomAisacControlSettings",
		sizeof(FAtomAisacControlSettings),
		alignof(FAtomAisacControlSettings),
		Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAisacControlSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAisacControlSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings;
class UScriptStruct* FAtomAisacModulationDefaultSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAisacModulationDefaultSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAisacModulationDefaultSettings>()
{
	return FAtomAisacModulationDefaultSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AisacPatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacPatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacPatches;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalAisacPatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalAisacPatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalAisacPatches;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControlModulations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlModulations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControlModulations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure allowing AISAC setup. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomAisacModulation.h" },
		{ "ToolTip", "Structure allowing AISAC setup." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacModulationDefaultSettings>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacPatches_Inner = { "AisacPatches", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomAisacPatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacPatches_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** List of available AISAC patches for this sound. Can be from Cue or Categories. */" },
		{ "DisplayName", "Patches" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomAisacModulation.h" },
		{ "ToolTip", "List of available AISAC patches for this sound. Can be from Cue or Categories." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacPatches = { "AisacPatches", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacModulationDefaultSettings, AisacPatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacPatches_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AdditionalAisacPatches_Inner = { "AdditionalAisacPatches", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomAisacPatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AdditionalAisacPatches_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** List of additional global AISAC patches from current AtomConfig to attach to this sound. */" },
		{ "DisplayName", "Additional Patches" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomAisacModulation.h" },
		{ "ToolTip", "List of additional global AISAC patches from current AtomConfig to attach to this sound." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AdditionalAisacPatches = { "AdditionalAisacPatches", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacModulationDefaultSettings, AdditionalAisacPatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AdditionalAisacPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AdditionalAisacPatches_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacControlModulations_Inner = { "AisacControlModulations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlSettings, METADATA_PARAMS(nullptr, 0) }; // 1581297063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacControlModulations_MetaData[] = {
		{ "AtomParam", "AISAC" },
		{ "AtomParamClass", "AtomModulationParameter" },
		{ "Category", "AISAC" },
		{ "Comment", "/** List of controls to modulate for this sound. */" },
		{ "DisplayName", "Control Modulations" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomAisacModulation.h" },
		{ "ToolTip", "List of controls to modulate for this sound." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacControlModulations = { "AisacControlModulations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacModulationDefaultSettings, AisacControlModulations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacControlModulations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacControlModulations_MetaData)) }; // 1581297063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacPatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AdditionalAisacPatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AdditionalAisacPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacControlModulations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewProp_AisacControlModulations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomAisacModulationDefaultSettings",
		sizeof(FAtomAisacModulationDefaultSettings),
		alignof(FAtomAisacModulationDefaultSettings),
		Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomAisacModulation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomAisacModulation_h_Statics::ScriptStructInfo[] = {
		{ FAtomAisacControlSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacControlSettings_Statics::NewStructOps, TEXT("AtomAisacControlSettings"), &Z_Registration_Info_UScriptStruct_AtomAisacControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacControlSettings), 1581297063U) },
		{ FAtomAisacModulationDefaultSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacModulationDefaultSettings_Statics::NewStructOps, TEXT("AtomAisacModulationDefaultSettings"), &Z_Registration_Info_UScriptStruct_AtomAisacModulationDefaultSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacModulationDefaultSettings), 838418316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomAisacModulation_h_1201543289(TEXT("/Script/CriWareCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomAisacModulation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomAisacModulation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
