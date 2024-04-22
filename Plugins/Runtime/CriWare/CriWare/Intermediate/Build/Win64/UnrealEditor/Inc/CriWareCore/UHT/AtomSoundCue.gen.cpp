// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundCue.h"
#include "CriWareCore/Public/Atom/AtomAttenuation.h"
#include "CriWareCore/Public/Atom/AtomCueSheet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundCue() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomCueSheet_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundCue();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundCue_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomCueType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomCueType;
	static UEnum* EAtomCueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomCueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomCueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomCueType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomCueType"));
		}
		return Z_Registration_Info_UEnum_EAtomCueType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomCueType>()
	{
		return EAtomCueType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::Enumerators[] = {
		{ "EAtomCueType::Polyphonic", (int64)EAtomCueType::Polyphonic },
		{ "EAtomCueType::Sequential", (int64)EAtomCueType::Sequential },
		{ "EAtomCueType::Shuffle", (int64)EAtomCueType::Shuffle },
		{ "EAtomCueType::Random", (int64)EAtomCueType::Random },
		{ "EAtomCueType::RandomNoRepeat", (int64)EAtomCueType::RandomNoRepeat },
		{ "EAtomCueType::SwitchGameVariable", (int64)EAtomCueType::SwitchGameVariable },
		{ "EAtomCueType::ComboSequential", (int64)EAtomCueType::ComboSequential },
		{ "EAtomCueType::SwitchSelector", (int64)EAtomCueType::SwitchSelector },
		{ "EAtomCueType::TrackTransitionBySelector", (int64)EAtomCueType::TrackTransitionBySelector },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::Enum_MetaDataParams[] = {
		{ "ComboSequential.Comment", "/** Combo Sequential (Sequential if a continuous combo is determined within the \"combo time\", returns to the \"combo loopback\" point when it reaches the end.) */" },
		{ "ComboSequential.Name", "EAtomCueType::ComboSequential" },
		{ "ComboSequential.ToolTip", "Combo Sequential (Sequential if a continuous combo is determined within the \"combo time\", returns to the \"combo loopback\" point when it reaches the end.)" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "Polyphonic.Comment", "/** Polyphonic. */" },
		{ "Polyphonic.Name", "EAtomCueType::Polyphonic" },
		{ "Polyphonic.ToolTip", "Polyphonic." },
		{ "Random.Comment", "/** Random. */" },
		{ "Random.Name", "EAtomCueType::Random" },
		{ "Random.ToolTip", "Random." },
		{ "RandomNoRepeat.Comment", "/** Random but not repeated. (sounds played randomly other than the last played sound.) */" },
		{ "RandomNoRepeat.Name", "EAtomCueType::RandomNoRepeat" },
		{ "RandomNoRepeat.ToolTip", "Random but not repeated. (sounds played randomly other than the last played sound.)" },
		{ "Sequential.Comment", "/** Sequential. */" },
		{ "Sequential.Name", "EAtomCueType::Sequential" },
		{ "Sequential.ToolTip", "Sequential." },
		{ "Shuffle.Comment", "/** Shuffle. */" },
		{ "Shuffle.Name", "EAtomCueType::Shuffle" },
		{ "Shuffle.ToolTip", "Shuffle." },
		{ "SwitchGameVariable.Comment", "/** Switch playback (referring to game variables to switch playback tracks.) */" },
		{ "SwitchGameVariable.Name", "EAtomCueType::SwitchGameVariable" },
		{ "SwitchGameVariable.ToolTip", "Switch playback (referring to game variables to switch playback tracks.)" },
		{ "SwitchSelector.Comment", "/** Switch playback (Referring to the selector to switch playback tracks.) */" },
		{ "SwitchSelector.Name", "EAtomCueType::SwitchSelector" },
		{ "SwitchSelector.ToolTip", "Switch playback (Referring to the selector to switch playback tracks.)" },
		{ "TrackTransitionBySelector.Comment", "/** Track transition playback (referring to the selector to switch playback tracks.) */" },
		{ "TrackTransitionBySelector.Name", "EAtomCueType::TrackTransitionBySelector" },
		{ "TrackTransitionBySelector.ToolTip", "Track transition playback (referring to the selector to switch playback tracks.)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomCueType",
		"EAtomCueType",
		Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomCueType()
	{
		if (!Z_Registration_Info_UEnum_EAtomCueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomCueType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomCueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomCueType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam;
class UScriptStruct* FAtomAttenuationDistanceParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAttenuationDistanceParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAttenuationDistanceParam>()
{
	return FAtomAttenuationDistanceParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeInsideAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeInsideAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeOutsideAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeOutsideAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DopplerFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DopplerFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "AtomAttenuationDistanceParam structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationDistanceParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Minimal Distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Maximal Distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeInsideAngle_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Inner Cone Angle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeInsideAngle = { "ConeInsideAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, ConeInsideAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeInsideAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeInsideAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeOutsideAngle_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Outter Cone Angle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeOutsideAngle = { "ConeOutsideAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, ConeOutsideAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeOutsideAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeOutsideAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Source Radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, SourceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_InteriorDistance_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Interior Panning." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_InteriorDistance = { "InteriorDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, InteriorDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_InteriorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_InteriorDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_DopplerFactor_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Doppler Intensity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_DopplerFactor = { "DopplerFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationDistanceParam, DopplerFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_DopplerFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_DopplerFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeInsideAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_ConeOutsideAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_SourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_InteriorDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_DopplerFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomAttenuationDistanceParam",
		sizeof(FAtomAttenuationDistanceParam),
		alignof(FAtomAttenuationDistanceParam),
		Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfo;
class UScriptStruct* FAtomCueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomCueInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomCueInfo>()
{
	return FAtomCueInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCueInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualizationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIs3D_MetaData[];
#endif
		static void NewProp_bIs3D_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeaderVisibility_MetaData[];
#endif
		static void NewProp_bHeaderVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeaderVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePlayerParameters_MetaData[];
#endif
		static void NewProp_bIgnorePlayerParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePlayerParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParameterPalletAssigned_MetaData[];
#endif
		static void NewProp_bIsParameterPalletAssigned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParameterPalletAssigned;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AisacControlNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControlNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVariable_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GameVariable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "AtomCueInfo structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Cue identifier is used internaly to identify and play the cue. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Cue identifier is used internaly to identify and play the cue." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The cue name. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The cue name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The cue type. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The cue type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, Type), Z_Construct_UEnum_CriWareCore_EAtomCueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Type_MetaData)) }; // 1311709187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The cue duration. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The cue duration." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, Duration), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The default volume applied to the cue in dB. */" },
		{ "DisplayName", "Volume (dB)" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The default volume applied to the cue in dB." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The playback probability of this cue. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The playback probability of this cue." },
		{ "Units", "%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Probability_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_VirtualizationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_VirtualizationMode_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The cue virtualization mode (Voice Behaviour).*/" },
		{ "DisplayAfter", "bLooping" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The cue virtualization mode (Voice Behaviour)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_VirtualizationMode = { "VirtualizationMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, VirtualizationMode), Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_VirtualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_VirtualizationMode_MetaData)) }; // 4130482596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The playback priority of this cue. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The playback priority of this cue." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Whether this cue is looping. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Whether this cue is looping." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FAtomCueInfo*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIs3D_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Whether this cue is using 3d positioning (Spatialization and volume attenuation). */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Whether this cue is using 3d positioning (Spatialization and volume attenuation)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIs3D_SetBit(void* Obj)
	{
		((FAtomCueInfo*)Obj)->bIs3D = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIs3D = { "bIs3D", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIs3D_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIs3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIs3D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bHeaderVisibility_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Whether this cue is public accessible or used privately by another cue. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Whether this cue is public accessible or used privately by another cue." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bHeaderVisibility_SetBit(void* Obj)
	{
		((FAtomCueInfo*)Obj)->bHeaderVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bHeaderVisibility = { "bHeaderVisibility", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bHeaderVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bHeaderVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bHeaderVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIgnorePlayerParameters_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Whether parameter can be changed while playing or is locked to data settings. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Whether parameter can be changed while playing or is locked to data settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIgnorePlayerParameters_SetBit(void* Obj)
	{
		((FAtomCueInfo*)Obj)->bIgnorePlayerParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIgnorePlayerParameters = { "bIgnorePlayerParameters", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIgnorePlayerParameters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIgnorePlayerParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIgnorePlayerParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Whether this cue is using parameter pallet. */" },
		{ "DisplayAfter", "AttenuationDistance" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Whether this cue is using parameter pallet." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_SetBit(void* Obj)
	{
		((FAtomCueInfo*)Obj)->bIsParameterPalletAssigned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned = { "bIsParameterPalletAssigned", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_Inner = { "CategoryNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The categories in which this cue is associated. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The categories in which this cue is associated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames = { "CategoryNames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, CategoryNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_Inner = { "AisacControlNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The AISAC control names this cue is bound to. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The AISAC control names this cue is bound to." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames = { "AisacControlNames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, AisacControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The cue volume attenuation distance parameters if using 3d positioning. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The cue volume attenuation distance parameters if using 3d positioning." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance = { "AttenuationDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, AttenuationDistance), Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance_MetaData)) }; // 4160279802
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_GameVariable_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** The name of the game variable to use when this cue is of type SwitchGameVariable. */" },
		{ "EditCondition", "Type == EAtomCueType::SwitchGameVariable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "The name of the game variable to use when this cue is of type SwitchGameVariable." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_GameVariable = { "GameVariable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfo, GameVariable), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_GameVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_GameVariable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Probability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_VirtualizationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_VirtualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIs3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bHeaderVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIgnorePlayerParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_GameVariable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomCueInfo",
		sizeof(FAtomCueInfo),
		alignof(FAtomCueInfo),
		Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCueInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCueInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomSoundCue::execGetCueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCueName();
		P_NATIVE_END;
	}
	void UAtomSoundCue::StaticRegisterNativesUAtomSoundCue()
	{
		UClass* Class = UAtomSoundCue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCueName", &UAtomSoundCue::execGetCueName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics
	{
		struct AtomSoundCue_eventGetCueName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSoundCue_eventGetCueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Helper that returns the name of this cue. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Helper that returns the name of this cue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSoundCue, nullptr, "GetCueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::AtomSoundCue_eventGetCueName_Parms), Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSoundCue_GetCueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSoundCue_GetCueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundCue);
	UClass* Z_Construct_UClass_UAtomSoundCue_NoRegister()
	{
		return UAtomSoundCue::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomSoundCue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSoundCue_GetCueName, "GetCueName" }, // 3150587283
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AtomSoundCue.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueSheet_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** CueSheet holding this sound cue. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "CueSheet holding this sound cue." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundCue, CueSheet), Z_Construct_UClass_UAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueSheet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset" },
	};
#endif
	void Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAtomSoundCue*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundCue), &Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueInfo_MetaData[] = {
		{ "Category", "Cue" },
		{ "Comment", "/** Cached cue information from cue sheet. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Cached cue information from cue sheet." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundCue, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueInfo_MetaData)) }; // 2426682085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Base volume multiplier */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Base volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundCue, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Base pitch multiplier */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Base pitch multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundCue, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Attenuation settings to use if Override Attenuation is set to true */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundCue.h" },
		{ "ToolTip", "Attenuation settings to use if Override Attenuation is set to true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundCue, AttenuationOverrides), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 1019755818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_CueInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundCue_Statics::NewProp_AttenuationOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundCue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundCue_Statics::ClassParams = {
		&UAtomSoundCue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomSoundCue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundCue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundCue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundCue()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundCue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundCue.OuterSingleton, Z_Construct_UClass_UAtomSoundCue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundCue.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundCue>()
	{
		return UAtomSoundCue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundCue);
	UAtomSoundCue::~UAtomSoundCue() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::EnumInfo[] = {
		{ EAtomCueType_StaticEnum, TEXT("EAtomCueType"), &Z_Registration_Info_UEnum_EAtomCueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1311709187U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::ScriptStructInfo[] = {
		{ FAtomAttenuationDistanceParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewStructOps, TEXT("AtomAttenuationDistanceParam"), &Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAttenuationDistanceParam), 4160279802U) },
		{ FAtomCueInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewStructOps, TEXT("AtomCueInfo"), &Z_Registration_Info_UScriptStruct_AtomCueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfo), 2426682085U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundCue, UAtomSoundCue::StaticClass, TEXT("UAtomSoundCue"), &Z_Registration_Info_UClass_UAtomSoundCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundCue), 3111191410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_1548970031(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundCue_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
