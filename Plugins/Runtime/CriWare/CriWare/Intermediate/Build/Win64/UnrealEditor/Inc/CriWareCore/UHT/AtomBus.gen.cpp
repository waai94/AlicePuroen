// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomBus.h"
#include "CriWareCore/Public/Atom/Modulation/AtomSoundModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBus() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpatializationType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpeaker();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusSend();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomChannelLevelMatrix();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomPanning();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSpatializationType;
	static UEnum* EAtomSpatializationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpatializationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSpatializationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSpatializationType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSpatializationType"));
		}
		return Z_Registration_Info_UEnum_EAtomSpatializationType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSpatializationType>()
	{
		return EAtomSpatializationType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::Enumerators[] = {
		{ "EAtomSpatializationType::Panning", (int64)EAtomSpatializationType::Panning },
		{ "EAtomSpatializationType::SendToChannel", (int64)EAtomSpatializationType::SendToChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "Panning.Name", "EAtomSpatializationType::Panning" },
		{ "SendToChannel.Name", "EAtomSpatializationType::SendToChannel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSpatializationType",
		"EAtomSpatializationType",
		Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpatializationType()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpatializationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSpatializationType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSpatializationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSpatializationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomBusSendType;
	static UEnum* EAtomBusSendType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomBusSendType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomBusSendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomBusSendType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomBusSendType"));
		}
		return Z_Registration_Info_UEnum_EAtomBusSendType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomBusSendType>()
	{
		return EAtomBusSendType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::Enumerators[] = {
		{ "EAtomBusSendType::PreVolume", (int64)EAtomBusSendType::PreVolume },
		{ "EAtomBusSendType::PostVolume", (int64)EAtomBusSendType::PostVolume },
		{ "EAtomBusSendType::PostPanning", (int64)EAtomBusSendType::PostPanning },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "PostPanning.Name", "EAtomBusSendType::PostPanning" },
		{ "PostVolume.Name", "EAtomBusSendType::PostVolume" },
		{ "PreVolume.Name", "EAtomBusSendType::PreVolume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomBusSendType",
		"EAtomBusSendType",
		Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendType()
	{
		if (!Z_Registration_Info_UEnum_EAtomBusSendType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomBusSendType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomBusSendType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomBusSendType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix;
class UScriptStruct* FAtomChannelLevelMatrix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomChannelLevelMatrix, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomChannelLevelMatrix"));
	}
	return Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomChannelLevelMatrix>()
{
	return FAtomChannelLevelMatrix::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelMatrix_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMatrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * FAtomChannelLevelMatrix structure\n *****************************************************************************/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "* FAtomChannelLevelMatrix structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomChannelLevelMatrix>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewProp_LevelMatrix_Inner = { "LevelMatrix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewProp_LevelMatrix_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "Comment", "// Values\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "Values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewProp_LevelMatrix = { "LevelMatrix", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomChannelLevelMatrix, LevelMatrix), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewProp_LevelMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewProp_LevelMatrix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewProp_LevelMatrix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewProp_LevelMatrix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomChannelLevelMatrix",
		sizeof(FAtomChannelLevelMatrix),
		alignof(FAtomChannelLevelMatrix),
		Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomChannelLevelMatrix()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix.InnerSingleton, Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomPanning;
class UScriptStruct* FAtomPanning::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomPanning.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomPanning.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomPanning, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomPanning"));
	}
	return Z_Registration_Info_UScriptStruct_AtomPanning.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomPanning>()
{
	return FAtomPanning::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomPanning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wideness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Wideness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPanning_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * FAtomPan structure\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "* FAtomPan structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomPanning_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomPanning>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "SliderExponent", "5" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomPanning, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "-180.000000" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "SliderExponent", "1" },
		{ "UIMax", "180.000000" },
		{ "UIMin", "-180.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomPanning, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "SliderExponent", "5" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomPanning, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Wideness_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "SliderExponent", "5" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Wideness = { "Wideness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomPanning, Wideness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Wideness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Wideness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "SliderExponent", "5" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomPanning, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Spread_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomPanning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Wideness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPanning_Statics::NewProp_Spread,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomPanning_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomPanning",
		sizeof(FAtomPanning),
		alignof(FAtomPanning),
		Z_Construct_UScriptStruct_FAtomPanning_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPanning_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPanning_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPanning_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomPanning()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomPanning.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomPanning.InnerSingleton, Z_Construct_UScriptStruct_FAtomPanning_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomPanning.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusSend;
class UScriptStruct* FAtomBusSend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusSend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusSend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusSend, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusSend"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusSend.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusSend>()
{
	return FAtomBusSend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusSend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DestinationBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_SendType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SendType;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSend_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * FAtomBusSend structure\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "* FAtomBusSend structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusSend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_DestinationBus_MetaData[] = {
		{ "Category", "Send Level" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_DestinationBus = { "DestinationBus", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusSend, DestinationBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_DestinationBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_DestinationBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Send Level" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "SliderExponent", "5" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusSend, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_Level_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_SendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_SendType_MetaData[] = {
		{ "Category", "Send Level" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_SendType = { "SendType", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusSend, SendType), Z_Construct_UEnum_CriWareCore_EAtomBusSendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_SendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_SendType_MetaData)) }; // 1357895610
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusSend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_DestinationBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_Level,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_SendType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewProp_SendType,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusSend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusSend",
		sizeof(FAtomBusSend),
		alignof(FAtomBusSend),
		Z_Construct_UScriptStruct_FAtomBusSend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusSend()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusSend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusSend.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusSend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusSend.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBus::execGetRack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomRackBase**)Z_Param__Result=P_THIS->GetRack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execFindEffectPreset)
	{
		P_GET_OBJECT(UAtomBusEffectPreset,Z_Param_InEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindEffectPreset(Z_Param_InEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execGetNumEffectPresets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEffectPresets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execGetEffectPreset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomBusEffectPreset**)Z_Param__Result=P_THIS->GetEffectPreset(Z_Param_InEffectIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execSetDefaultEffectPreset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDefaultEffectPreset(Z_Param_InEffectIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execRemoveEffectPreset)
	{
		P_GET_OBJECT(UAtomBusEffectPreset,Z_Param_InEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveEffectPreset(Z_Param_InEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execSetEffectPreset)
	{
		P_GET_OBJECT(UAtomBusEffectPreset,Z_Param_InEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEffectPreset(Z_Param_InEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execGetSendLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SendIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSendLevel(Z_Param_SendIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execSetSendLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SendIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSendLevel(Z_Param_SendIndex,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execResetChannelLevelMatrix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetChannelLevelMatrix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execGetChannelLevel)
	{
		P_GET_ENUM(EAtomSpeaker,Z_Param_InChannel);
		P_GET_ENUM(EAtomSpeaker,Z_Param_OutChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChannelLevel(EAtomSpeaker(Z_Param_InChannel),EAtomSpeaker(Z_Param_OutChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execSetChannelLevel)
	{
		P_GET_ENUM(EAtomSpeaker,Z_Param_InChannel);
		P_GET_ENUM(EAtomSpeaker,Z_Param_OutChannel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChannelLevel(EAtomSpeaker(Z_Param_InChannel),EAtomSpeaker(Z_Param_OutChannel),Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execGetPanning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomPanning*)Z_Param__Result=P_THIS->GetPanning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execSetPanning)
	{
		P_GET_STRUCT_REF(FAtomPanning,Z_Param_Out_PanningSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPanning(Z_Param_Out_PanningSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execGetBusOutputVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBusOutputVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBus::execSetBusOutputVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOutputVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusOutputVolume(Z_Param_WorldContextObject,Z_Param_InOutputVolume);
		P_NATIVE_END;
	}
	void UAtomBus::StaticRegisterNativesUAtomBus()
	{
		UClass* Class = UAtomBus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindEffectPreset", &UAtomBus::execFindEffectPreset },
			{ "GetBusOutputVolume", &UAtomBus::execGetBusOutputVolume },
			{ "GetChannelLevel", &UAtomBus::execGetChannelLevel },
			{ "GetEffectPreset", &UAtomBus::execGetEffectPreset },
			{ "GetNumEffectPresets", &UAtomBus::execGetNumEffectPresets },
			{ "GetPanning", &UAtomBus::execGetPanning },
			{ "GetRack", &UAtomBus::execGetRack },
			{ "GetSendLevel", &UAtomBus::execGetSendLevel },
			{ "RemoveEffectPreset", &UAtomBus::execRemoveEffectPreset },
			{ "ResetChannelLevelMatrix", &UAtomBus::execResetChannelLevelMatrix },
			{ "SetBusOutputVolume", &UAtomBus::execSetBusOutputVolume },
			{ "SetChannelLevel", &UAtomBus::execSetChannelLevel },
			{ "SetDefaultEffectPreset", &UAtomBus::execSetDefaultEffectPreset },
			{ "SetEffectPreset", &UAtomBus::execSetEffectPreset },
			{ "SetPanning", &UAtomBus::execSetPanning },
			{ "SetSendLevel", &UAtomBus::execSetSendLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics
	{
		struct AtomBus_eventFindEffectPreset_Parms
		{
			UAtomBusEffectPreset* InEffectPreset;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectPreset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::NewProp_InEffectPreset = { "InEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventFindEffectPreset_Parms, InEffectPreset), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventFindEffectPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::NewProp_InEffectPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Finds the given preset if it is actualy used in this bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "Finds the given preset if it is actualy used in this bus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "FindEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::AtomBus_eventFindEffectPreset_Parms), Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_FindEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_FindEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics
	{
		struct AtomBus_eventGetBusOutputVolume_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetBusOutputVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Level Mixer" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "GetBusOutputVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::AtomBus_eventGetBusOutputVolume_Parms), Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_GetBusOutputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_GetBusOutputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics
	{
		struct AtomBus_eventGetChannelLevel_Parms
		{
			EAtomSpeaker InChannel;
			EAtomSpeaker OutChannel;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InChannel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutChannel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_InChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetChannelLevel_Parms, InChannel), Z_Construct_UEnum_CriWareCore_EAtomSpeaker, METADATA_PARAMS(nullptr, 0) }; // 3354578248
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_OutChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_OutChannel = { "OutChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetChannelLevel_Parms, OutChannel), Z_Construct_UEnum_CriWareCore_EAtomSpeaker, METADATA_PARAMS(nullptr, 0) }; // 3354578248
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetChannelLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_InChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_OutChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_OutChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Level Mixer" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "GetChannelLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::AtomBus_eventGetChannelLevel_Parms), Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_GetChannelLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_GetChannelLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics
	{
		struct AtomBus_eventGetEffectPreset_Parms
		{
			int32 InEffectIndex;
			UAtomBusEffectPreset* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetEffectPreset_Parms, InEffectIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetEffectPreset_Parms, ReturnValue), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "GetEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::AtomBus_eventGetEffectPreset_Parms), Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_GetEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_GetEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics
	{
		struct AtomBus_eventGetNumEffectPresets_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetNumEffectPresets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "GetNumEffectPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::AtomBus_eventGetNumEffectPresets_Parms), Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_GetNumEffectPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_GetNumEffectPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_GetPanning_Statics
	{
		struct AtomBus_eventGetPanning_Parms
		{
			FAtomPanning ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBus_GetPanning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetPanning_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomPanning, METADATA_PARAMS(nullptr, 0) }; // 1261092419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_GetPanning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetPanning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_GetPanning_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Atom|Level Mixer" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_GetPanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "GetPanning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_GetPanning_Statics::AtomBus_eventGetPanning_Parms), Z_Construct_UFunction_UAtomBus_GetPanning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetPanning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_GetPanning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetPanning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_GetPanning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_GetPanning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_GetRack_Statics
	{
		struct AtomBus_eventGetRack_Parms
		{
			UAtomRackBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomBus_GetRack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetRack_Parms, ReturnValue), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_GetRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetRack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_GetRack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Bus" },
		{ "Comment", "/** Gets the Parent holder rack of this bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "Gets the Parent holder rack of this bus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_GetRack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "GetRack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_GetRack_Statics::AtomBus_eventGetRack_Parms), Z_Construct_UFunction_UAtomBus_GetRack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetRack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_GetRack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetRack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_GetRack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_GetRack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics
	{
		struct AtomBus_eventGetSendLevel_Parms
		{
			int32 SendIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SendIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::NewProp_SendIndex = { "SendIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetSendLevel_Parms, SendIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventGetSendLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::NewProp_SendIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Level Mixer" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "GetSendLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::AtomBus_eventGetSendLevel_Parms), Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_GetSendLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_GetSendLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics
	{
		struct AtomBus_eventRemoveEffectPreset_Parms
		{
			UAtomBusEffectPreset* InEffectPreset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectPreset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::NewProp_InEffectPreset = { "InEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventRemoveEffectPreset_Parms, InEffectPreset), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBus_eventRemoveEffectPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBus_eventRemoveEffectPreset_Parms), &Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::NewProp_InEffectPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Removes preset to corresponding bus effect, default bus effect settings will be restored. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "Removes preset to corresponding bus effect, default bus effect settings will be restored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "RemoveEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::AtomBus_eventRemoveEffectPreset_Parms), Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_RemoveEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_RemoveEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Level Mixer" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "ResetChannelLevelMatrix", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics
	{
		struct AtomBus_eventSetBusOutputVolume_Parms
		{
			const UObject* WorldContextObject;
			float InOutputVolume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOutputVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetBusOutputVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::NewProp_InOutputVolume = { "InOutputVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetBusOutputVolume_Parms, InOutputVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::NewProp_InOutputVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Level Mixer" },
		{ "Comment", "/** Sets the output volume of the bus in linear gain. This dynamic volume acts as a multiplier on the OutputVolume property of this bus.  */" },
		{ "DisplayName", "SetBusOutputVolume (linear gain)" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "Sets the output volume of the bus in linear gain. This dynamic volume acts as a multiplier on the OutputVolume property of this bus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "SetBusOutputVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::AtomBus_eventSetBusOutputVolume_Parms), Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_SetBusOutputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_SetBusOutputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics
	{
		struct AtomBus_eventSetChannelLevel_Parms
		{
			EAtomSpeaker InChannel;
			EAtomSpeaker OutChannel;
			float Level;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InChannel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutChannel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_InChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetChannelLevel_Parms, InChannel), Z_Construct_UEnum_CriWareCore_EAtomSpeaker, METADATA_PARAMS(nullptr, 0) }; // 3354578248
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_OutChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_OutChannel = { "OutChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetChannelLevel_Parms, OutChannel), Z_Construct_UEnum_CriWareCore_EAtomSpeaker, METADATA_PARAMS(nullptr, 0) }; // 3354578248
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetChannelLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_InChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_OutChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_OutChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Level Mixer" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "SetChannelLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::AtomBus_eventSetChannelLevel_Parms), Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_SetChannelLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_SetChannelLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics
	{
		struct AtomBus_eventSetDefaultEffectPreset_Parms
		{
			int32 InEffectIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetDefaultEffectPreset_Parms, InEffectIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBus_eventSetDefaultEffectPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBus_eventSetDefaultEffectPreset_Parms), &Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "SetDefaultEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::AtomBus_eventSetDefaultEffectPreset_Parms), Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics
	{
		struct AtomBus_eventSetEffectPreset_Parms
		{
			UAtomBusEffectPreset* InEffectPreset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectPreset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::NewProp_InEffectPreset = { "InEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetEffectPreset_Parms, InEffectPreset), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBus_eventSetEffectPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBus_eventSetEffectPreset_Parms), &Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::NewProp_InEffectPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Sets preset to corresponding bus effect, overriding previous preset if present and retrun false when effect type is not valid with this bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "Sets preset to corresponding bus effect, overriding previous preset if present and retrun false when effect type is not valid with this bus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "SetEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::AtomBus_eventSetEffectPreset_Parms), Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_SetEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_SetEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_SetPanning_Statics
	{
		struct AtomBus_eventSetPanning_Parms
		{
			FAtomPanning PanningSetting;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanningSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PanningSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetPanning_Statics::NewProp_PanningSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBus_SetPanning_Statics::NewProp_PanningSetting = { "PanningSetting", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetPanning_Parms, PanningSetting), Z_Construct_UScriptStruct_FAtomPanning, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetPanning_Statics::NewProp_PanningSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetPanning_Statics::NewProp_PanningSetting_MetaData)) }; // 1261092419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_SetPanning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetPanning_Statics::NewProp_PanningSetting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetPanning_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Level Mixer" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_SetPanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "SetPanning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_SetPanning_Statics::AtomBus_eventSetPanning_Parms), Z_Construct_UFunction_UAtomBus_SetPanning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetPanning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetPanning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetPanning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_SetPanning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_SetPanning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics
	{
		struct AtomBus_eventSetSendLevel_Parms
		{
			int32 SendIndex;
			float Level;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SendIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::NewProp_SendIndex = { "SendIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetSendLevel_Parms, SendIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBus_eventSetSendLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::NewProp_SendIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Level Mixer" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBus, nullptr, "SetSendLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::AtomBus_eventSetSendLevel_Parms), Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBus_SetSendLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBus_SetSendLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBus);
	UClass* Z_Construct_UClass_UAtomBus_NoRegister()
	{
		return UAtomBus::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputVolumeModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputVolumeModulation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatializationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatializationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelLevelMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelLevelMatrix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panning_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Panning;
		static const UECodeGen_Private::FClassPropertyParams NewProp_BusEffectChainClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusEffectChainClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusEffectChainClasses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BusEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusEffectChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBus_FindEffectPreset, "FindEffectPreset" }, // 2442719685
		{ &Z_Construct_UFunction_UAtomBus_GetBusOutputVolume, "GetBusOutputVolume" }, // 764801448
		{ &Z_Construct_UFunction_UAtomBus_GetChannelLevel, "GetChannelLevel" }, // 1297394765
		{ &Z_Construct_UFunction_UAtomBus_GetEffectPreset, "GetEffectPreset" }, // 3287030616
		{ &Z_Construct_UFunction_UAtomBus_GetNumEffectPresets, "GetNumEffectPresets" }, // 565058367
		{ &Z_Construct_UFunction_UAtomBus_GetPanning, "GetPanning" }, // 3166012683
		{ &Z_Construct_UFunction_UAtomBus_GetRack, "GetRack" }, // 2577603360
		{ &Z_Construct_UFunction_UAtomBus_GetSendLevel, "GetSendLevel" }, // 3249840896
		{ &Z_Construct_UFunction_UAtomBus_RemoveEffectPreset, "RemoveEffectPreset" }, // 2782290961
		{ &Z_Construct_UFunction_UAtomBus_ResetChannelLevelMatrix, "ResetChannelLevelMatrix" }, // 2747482954
		{ &Z_Construct_UFunction_UAtomBus_SetBusOutputVolume, "SetBusOutputVolume" }, // 2267898658
		{ &Z_Construct_UFunction_UAtomBus_SetChannelLevel, "SetChannelLevel" }, // 1732067048
		{ &Z_Construct_UFunction_UAtomBus_SetDefaultEffectPreset, "SetDefaultEffectPreset" }, // 1153311306
		{ &Z_Construct_UFunction_UAtomBus_SetEffectPreset, "SetEffectPreset" }, // 103985630
		{ &Z_Construct_UFunction_UAtomBus_SetPanning, "SetPanning" }, // 3761573230
		{ &Z_Construct_UFunction_UAtomBus_SetSendLevel, "SetSendLevel" }, // 3433299438
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomBus.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_OutputVolumeModulation_MetaData[] = {
		{ "AtomParam", "Volume" },
		{ "AtomParamClass", "AtomModulationParameterVolume" },
		{ "Category", "Level Mixer" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** The output volume of the bus in Decibels. Applied after buses effects and analysis are performed. */" },
		{ "DisplayName", "Output Volume (dB)" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "The output volume of the bus in Decibels. Applied after buses effects and analysis are performed." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_OutputVolumeModulation = { "OutputVolumeModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, OutputVolumeModulation), Z_Construct_UScriptStruct_FAtomSoundModulationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_OutputVolumeModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_OutputVolumeModulation_MetaData)) }; // 1207854738
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_SpatializationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_SpatializationType_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "Comment", "/** The type of spatialization of the multi-channels for this bus. */" },
		{ "DisplayAfter", "OutputVolumeModulation" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "The type of spatialization of the multi-channels for this bus." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_SpatializationType = { "SpatializationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, SpatializationType), Z_Construct_UEnum_CriWareCore_EAtomSpatializationType, METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_SpatializationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_SpatializationType_MetaData)) }; // 1407156470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_ChannelLevelMatrix_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "Comment", "/** The level matrix for each channels for this bus. */" },
		{ "DisplayAfter", "Panning" },
		{ "EditCondition", "SpatializationType == EAtomSpatializationType::SendToChannel" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The level matrix for each channels for this bus." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_ChannelLevelMatrix = { "ChannelLevelMatrix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, ChannelLevelMatrix), Z_Construct_UScriptStruct_FAtomChannelLevelMatrix, METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_ChannelLevelMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_ChannelLevelMatrix_MetaData)) }; // 1712673019
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_Sends_Inner = { "Sends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBusSend, METADATA_PARAMS(nullptr, 0) }; // 2723279748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_Sends_MetaData[] = {
		{ "Category", "Level Mixer" },
		{ "DisplayAfter", "ChannelLevelMatrix" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_Sends = { "Sends", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, Sends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_Sends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_Sends_MetaData)) }; // 2723279748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_BusName_MetaData[] = {
		{ "Category", "Bus" },
		{ "Comment", "/** Name that identifies this bus.*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "Name that identifies this bus." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, BusName), METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_BusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_Panning_MetaData[] = {
		{ "BlueprintGetter", "GetPanning" },
		{ "BlueprintSetter", "SetPanning" },
		{ "Category", "Level Mixer" },
		{ "Comment", "/** The panning settings for this bus. */" },
		{ "DisplayAfter", "SpatializationType" },
		{ "DisplayName", "Spatial Panning" },
		{ "EditCondition", "SpatializationType == EAtomSpatializationType::Panning" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "The panning settings for this bus." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_Panning = { "Panning", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, Panning), Z_Construct_UScriptStruct_FAtomPanning, METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_Panning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_Panning_MetaData)) }; // 1261092419
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChainClasses_Inner = { "BusEffectChainClasses", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChainClasses_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** The presets classes used by this bus. (Hidden by Customization.) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "The presets classes used by this bus. (Hidden by Customization.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChainClasses = { "BusEffectChainClasses", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, BusEffectChainClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChainClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChainClasses_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChain_Inner = { "BusEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChain_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** The presets to apply to bus. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomBus.h" },
		{ "ToolTip", "The presets to apply to bus." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChain = { "BusEffectChain", nullptr, (EPropertyFlags)0x0024080000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBus, BusEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_OutputVolumeModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_SpatializationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_SpatializationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_ChannelLevelMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_Sends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_Sends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_Panning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChainClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChainClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBus_Statics::NewProp_BusEffectChain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBus_Statics::ClassParams = {
		&UAtomBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBus()
	{
		if (!Z_Registration_Info_UClass_UAtomBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBus.OuterSingleton, Z_Construct_UClass_UAtomBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBus.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBus>()
	{
		return UAtomBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBus);
	UAtomBus::~UAtomBus() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::EnumInfo[] = {
		{ EAtomSpatializationType_StaticEnum, TEXT("EAtomSpatializationType"), &Z_Registration_Info_UEnum_EAtomSpatializationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1407156470U) },
		{ EAtomBusSendType_StaticEnum, TEXT("EAtomBusSendType"), &Z_Registration_Info_UEnum_EAtomBusSendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1357895610U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::ScriptStructInfo[] = {
		{ FAtomChannelLevelMatrix::StaticStruct, Z_Construct_UScriptStruct_FAtomChannelLevelMatrix_Statics::NewStructOps, TEXT("AtomChannelLevelMatrix"), &Z_Registration_Info_UScriptStruct_AtomChannelLevelMatrix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomChannelLevelMatrix), 1712673019U) },
		{ FAtomPanning::StaticStruct, Z_Construct_UScriptStruct_FAtomPanning_Statics::NewStructOps, TEXT("AtomPanning"), &Z_Registration_Info_UScriptStruct_AtomPanning, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomPanning), 1261092419U) },
		{ FAtomBusSend::StaticStruct, Z_Construct_UScriptStruct_FAtomBusSend_Statics::NewStructOps, TEXT("AtomBusSend"), &Z_Registration_Info_UScriptStruct_AtomBusSend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusSend), 2723279748U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBus, UAtomBus::StaticClass, TEXT("UAtomBus"), &Z_Registration_Info_UClass_UAtomBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBus), 1813282892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_1866877124(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
