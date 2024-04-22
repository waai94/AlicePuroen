// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationValue() {}
// Cross Module References
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationMixValue();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomModulationMixValue;
class UScriptStruct* FAtomModulationMixValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomModulationMixValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomModulationMixValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomModulationMixValue, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomModulationMixValue"));
	}
	return Z_Registration_Info_UScriptStruct_AtomModulationMixValue.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomModulationMixValue>()
{
	return FAtomModulationMixValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUnitValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetUnitValue;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomModulationMixValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Target value of the modulator. */" },
		{ "DisplayName", "Value" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationValue.h" },
		{ "ToolTip", "Target value of the modulator." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationMixValue, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetUnitValue_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Target value of the modulator (in units if provided). */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationValue.h" },
		{ "ToolTip", "Target value of the modulator (in units if provided)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetUnitValue = { "TargetUnitValue", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationMixValue, TargetUnitValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetUnitValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetUnitValue_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time it takes (in sec) to interpolate from the parameter's default value to the mix value. */" },
		{ "DisplayName", "Attack Time (sec)" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationValue.h" },
		{ "ToolTip", "Time it takes (in sec) to interpolate from the parameter's default value to the mix value." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationMixValue, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time it takes (in sec) to interpolate from the current mix value to the parameter's default value. */" },
		{ "DisplayName", "Release Time (sec)" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationValue.h" },
		{ "ToolTip", "Time it takes (in sec) to interpolate from the current mix value to the parameter's default value." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationMixValue, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_ReleaseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_TargetUnitValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewProp_ReleaseTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomModulationMixValue",
		sizeof(FAtomModulationMixValue),
		alignof(FAtomModulationMixValue),
		Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationMixValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomModulationMixValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomModulationMixValue.InnerSingleton, Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomModulationMixValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationValue_h_Statics::ScriptStructInfo[] = {
		{ FAtomModulationMixValue::StaticStruct, Z_Construct_UScriptStruct_FAtomModulationMixValue_Statics::NewStructOps, TEXT("AtomModulationMixValue"), &Z_Registration_Info_UScriptStruct_AtomModulationMixValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomModulationMixValue), 1521900124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationValue_h_4209792520(TEXT("/Script/CriWareCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
