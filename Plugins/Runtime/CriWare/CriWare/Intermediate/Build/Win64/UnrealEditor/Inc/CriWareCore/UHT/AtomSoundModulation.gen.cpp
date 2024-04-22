// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomSoundModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundModulation() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings;
class UScriptStruct* FAtomSoundModulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundModulationSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundModulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundModulationSettings>()
{
	return FAtomSoundModulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableModulation_MetaData[];
#endif
		static void NewProp_bEnableModulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableModulation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure allowing modulation override for a sound parameter. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomSoundModulation.h" },
		{ "ToolTip", "Structure allowing modulation override for a sound parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundModulationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Value Modulation" },
		{ "Comment", "/** The base value to assign to the destination control if modulable. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomSoundModulation.h" },
		{ "ToolTip", "The base value to assign to the destination control if modulable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationSettings, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Value_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_bEnableModulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Base value of parameter */" },
		{ "DisplayName", "Modulate" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomSoundModulation.h" },
		{ "ToolTip", "Base value of parameter" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_bEnableModulation_SetBit(void* Obj)
	{
		((FAtomSoundModulationSettings*)Obj)->bEnableModulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_bEnableModulation = { "bEnableModulation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomSoundModulationSettings), &Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_bEnableModulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_bEnableModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_bEnableModulation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Modulators_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Modulation source, which provides value to mix with base value. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomSoundModulation.h" },
		{ "ToolTip", "Modulation source, which provides value to mix with base value." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundModulationSettings, Modulators), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Value,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_bEnableModulation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewProp_Modulators,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSoundModulationSettings",
		sizeof(FAtomSoundModulationSettings),
		alignof(FAtomSoundModulationSettings),
		Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomSoundModulation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomSoundModulation_h_Statics::ScriptStructInfo[] = {
		{ FAtomSoundModulationSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundModulationSettings_Statics::NewStructOps, TEXT("AtomSoundModulationSettings"), &Z_Registration_Info_UScriptStruct_AtomSoundModulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundModulationSettings), 1207854738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomSoundModulation_h_442634993(TEXT("/Script/CriWareCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomSoundModulation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomSoundModulation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
