// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomEnvelope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomEnvelope() {}
// Cross Module References
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomEnvelope();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomEnvelope;
class UScriptStruct* FAtomEnvelope::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomEnvelope.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomEnvelope.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomEnvelope, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomEnvelope"));
	}
	return Z_Registration_Info_UScriptStruct_AtomEnvelope.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomEnvelope>()
{
	return FAtomEnvelope::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomEnvelope_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SustainLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SustainLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomEnvelope_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomEnvelope.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomEnvelope>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Envelope" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The envelope attack time in miliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/AtomEnvelope.h" },
		{ "ToolTip", "The envelope attack time in miliseconds." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomEnvelope, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_HoldTime_MetaData[] = {
		{ "Category", "Envelope" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The envelope Hold time in miliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/AtomEnvelope.h" },
		{ "ToolTip", "The envelope Hold time in miliseconds." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_HoldTime = { "HoldTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomEnvelope, HoldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_HoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_HoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "Envelope" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The envelope decay time in miliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/AtomEnvelope.h" },
		{ "ToolTip", "The envelope decay time in miliseconds." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomEnvelope, DecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_DecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_SustainLevel_MetaData[] = {
		{ "Category", "Envelope" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The envelope sustain level. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomEnvelope.h" },
		{ "ToolTip", "The envelope sustain level." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_SustainLevel = { "SustainLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomEnvelope, SustainLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_SustainLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_SustainLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Envelope" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The envelope release time in miliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/AtomEnvelope.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "The envelope release time in miliseconds." },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomEnvelope, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_ReleaseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomEnvelope_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_HoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_DecayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_SustainLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewProp_ReleaseTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomEnvelope_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomEnvelope",
		sizeof(FAtomEnvelope),
		alignof(FAtomEnvelope),
		Z_Construct_UScriptStruct_FAtomEnvelope_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomEnvelope_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomEnvelope()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomEnvelope.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomEnvelope.InnerSingleton, Z_Construct_UScriptStruct_FAtomEnvelope_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomEnvelope.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEnvelope_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEnvelope_h_Statics::ScriptStructInfo[] = {
		{ FAtomEnvelope::StaticStruct, Z_Construct_UScriptStruct_FAtomEnvelope_Statics::NewStructOps, TEXT("AtomEnvelope"), &Z_Registration_Info_UScriptStruct_AtomEnvelope, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomEnvelope), 104035063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEnvelope_h_1194552453(TEXT("/Script/CriWareCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEnvelope_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEnvelope_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
