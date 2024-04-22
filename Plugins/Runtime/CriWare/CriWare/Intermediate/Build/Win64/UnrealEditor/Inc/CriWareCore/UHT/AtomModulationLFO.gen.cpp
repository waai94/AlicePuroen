// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/Generators/AtomModulationLFO.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationLFO() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGenerator();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGeneratorLFO();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGeneratorLFO_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationLFOParams();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomModulationLFOShape;
	static UEnum* EAtomModulationLFOShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomModulationLFOShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomModulationLFOShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomModulationLFOShape"));
		}
		return Z_Registration_Info_UEnum_EAtomModulationLFOShape.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomModulationLFOShape>()
	{
		return EAtomModulationLFOShape_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::Enumerators[] = {
		{ "EAtomModulationLFOShape::Sine", (int64)EAtomModulationLFOShape::Sine },
		{ "EAtomModulationLFOShape::UpSaw", (int64)EAtomModulationLFOShape::UpSaw },
		{ "EAtomModulationLFOShape::DownSaw", (int64)EAtomModulationLFOShape::DownSaw },
		{ "EAtomModulationLFOShape::Square", (int64)EAtomModulationLFOShape::Square },
		{ "EAtomModulationLFOShape::Triangle", (int64)EAtomModulationLFOShape::Triangle },
		{ "EAtomModulationLFOShape::Exponential", (int64)EAtomModulationLFOShape::Exponential },
		{ "EAtomModulationLFOShape::RandomSampleHold", (int64)EAtomModulationLFOShape::RandomSampleHold },
		{ "EAtomModulationLFOShape::COUNT", (int64)EAtomModulationLFOShape::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EAtomModulationLFOShape::COUNT" },
		{ "DownSaw.DisplayName", "Saw (Down)" },
		{ "DownSaw.Name", "EAtomModulationLFOShape::DownSaw" },
		{ "Exponential.DisplayName", "Exponential" },
		{ "Exponential.Name", "EAtomModulationLFOShape::Exponential" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "RandomSampleHold.DisplayName", "Random" },
		{ "RandomSampleHold.Name", "EAtomModulationLFOShape::RandomSampleHold" },
		{ "Sine.DisplayName", "Sine" },
		{ "Sine.Name", "EAtomModulationLFOShape::Sine" },
		{ "Square.DisplayName", "Square" },
		{ "Square.Name", "EAtomModulationLFOShape::Square" },
		{ "Triangle.DisplayName", "Triangle" },
		{ "Triangle.Name", "EAtomModulationLFOShape::Triangle" },
		{ "UpSaw.DisplayName", "Saw (Up)" },
		{ "UpSaw.Name", "EAtomModulationLFOShape::UpSaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomModulationLFOShape",
		"EAtomModulationLFOShape",
		Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape()
	{
		if (!Z_Registration_Info_UEnum_EAtomModulationLFOShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomModulationLFOShape.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomModulationLFOShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomModulationLFOParams;
class UScriptStruct* FAtomModulationLFOParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomModulationLFOParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomModulationLFOParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomModulationLFOParams, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomModulationLFOParams"));
	}
	return Z_Registration_Info_UScriptStruct_AtomModulationLFOParams.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomModulationLFOParams>()
{
	return FAtomModulationLFOParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExponentialFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomModulationLFOParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Shape of oscillating waveform */" },
		{ "DisplayPriority", "20" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Shape of oscillating waveform" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationLFOParams, Shape), Z_Construct_UEnum_CriWareCore_EAtomModulationLFOShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Shape_MetaData)) }; // 3581355096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_ExponentialFactor_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** Factor increasing/decreasing curvature of exponential LFO shape. */" },
		{ "DisplayPriority", "21" },
		{ "EditCondition", "!bBypass && Shape == EAtomModulationLFOShape::Exponential" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Factor increasing/decreasing curvature of exponential LFO shape." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_ExponentialFactor = { "ExponentialFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationLFOParams, ExponentialFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_ExponentialFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_ExponentialFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Pulse width of square LFO shape. */" },
		{ "DisplayPriority", "21" },
		{ "EditCondition", "!bBypass && Shape == EAtomModulationLFOShape::Square" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Pulse width of square LFO shape." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationLFOParams, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amplitude of oscillator */" },
		{ "DisplayPriority", "30" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Amplitude of oscillator" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationLFOParams, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Frequency of oscillator */" },
		{ "DisplayPriority", "40" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Frequency of oscillator" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
		{ "Unit", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationLFOParams, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amplitude offset of oscillator */" },
		{ "DisplayPriority", "50" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Amplitude offset of oscillator" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationLFOParams, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Unit phase offset of oscillator */" },
		{ "DisplayPriority", "60" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Unit phase offset of oscillator" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationLFOParams, Phase), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Phase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Whether or not to loop the oscillation more than once */" },
		{ "DisplayPriority", "70" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "Whether or not to loop the oscillation more than once" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FAtomModulationLFOParams*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomModulationLFOParams), &Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** If true, bypasses LFO bus from being modulated by parameters, patches, or mixed (LFO remains active and computed). */" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ToolTip", "If true, bypasses LFO bus from being modulated by parameters, patches, or mixed (LFO remains active and computed)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomModulationLFOParams*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomModulationLFOParams), &Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Shape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_ExponentialFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_Phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomModulationLFOParams",
		sizeof(FAtomModulationLFOParams),
		alignof(FAtomModulationLFOParams),
		Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationLFOParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomModulationLFOParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomModulationLFOParams.InnerSingleton, Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomModulationLFOParams.InnerSingleton;
	}
	void UAtomModulationGeneratorLFO::StaticRegisterNativesUAtomModulationGeneratorLFO()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationGeneratorLFO);
	UClass* Z_Construct_UClass_UAtomModulationGeneratorLFO_NoRegister()
	{
		return UAtomModulationGeneratorLFO::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulationGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/Generators/AtomModulationLFO.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationGeneratorLFO, Params), Z_Construct_UScriptStruct_FAtomModulationLFOParams, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::NewProp_Params_MetaData)) }; // 2216584199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationGeneratorLFO>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::ClassParams = {
		&UAtomModulationGeneratorLFO::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationGeneratorLFO()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationGeneratorLFO.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationGeneratorLFO.OuterSingleton, Z_Construct_UClass_UAtomModulationGeneratorLFO_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationGeneratorLFO.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationGeneratorLFO>()
	{
		return UAtomModulationGeneratorLFO::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationGeneratorLFO);
	UAtomModulationGeneratorLFO::~UAtomModulationGeneratorLFO() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::EnumInfo[] = {
		{ EAtomModulationLFOShape_StaticEnum, TEXT("EAtomModulationLFOShape"), &Z_Registration_Info_UEnum_EAtomModulationLFOShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3581355096U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::ScriptStructInfo[] = {
		{ FAtomModulationLFOParams::StaticStruct, Z_Construct_UScriptStruct_FAtomModulationLFOParams_Statics::NewStructOps, TEXT("AtomModulationLFOParams"), &Z_Registration_Info_UScriptStruct_AtomModulationLFOParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomModulationLFOParams), 2216584199U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationGeneratorLFO, UAtomModulationGeneratorLFO::StaticClass, TEXT("UAtomModulationGeneratorLFO"), &Z_Registration_Info_UClass_UAtomModulationGeneratorLFO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationGeneratorLFO), 3310455856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_1141266335(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_Generators_AtomModulationLFO_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
