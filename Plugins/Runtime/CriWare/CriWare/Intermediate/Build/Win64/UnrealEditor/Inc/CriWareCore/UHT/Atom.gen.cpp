// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Atom.h"
#include "Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundAsset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundAsset_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendStage();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomFormat();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpeaker();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSequencerEventInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundToBusSend();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundToRackSend();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomFormat;
	static UEnum* EAtomFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomFormat, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomFormat"));
		}
		return Z_Registration_Info_UEnum_EAtomFormat.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomFormat>()
	{
		return EAtomFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::Enumerators[] = {
		{ "EAtomFormat::None", (int64)EAtomFormat::None },
		{ "EAtomFormat::ADX", (int64)EAtomFormat::ADX },
		{ "EAtomFormat::HCA", (int64)EAtomFormat::HCA },
		{ "EAtomFormat::HCAMX", (int64)EAtomFormat::HCAMX },
		{ "EAtomFormat::AIFF", (int64)EAtomFormat::AIFF },
		{ "EAtomFormat::Wave", (int64)EAtomFormat::Wave },
		{ "EAtomFormat::RawPCM", (int64)EAtomFormat::RawPCM },
		{ "EAtomFormat::Vibration", (int64)EAtomFormat::Vibration },
		{ "EAtomFormat::AudioBuffer", (int64)EAtomFormat::AudioBuffer },
		{ "EAtomFormat::Instrument", (int64)EAtomFormat::Instrument },
		{ "EAtomFormat::Hardware1", (int64)EAtomFormat::Hardware1 },
		{ "EAtomFormat::Hardware2", (int64)EAtomFormat::Hardware2 },
		{ "EAtomFormat::Num", (int64)EAtomFormat::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::Enum_MetaDataParams[] = {
		{ "ADX.Comment", "/** CRI's Adaptive Differential Extended sound. */" },
		{ "ADX.Name", "EAtomFormat::ADX" },
		{ "ADX.ToolTip", "CRI's Adaptive Differential Extended sound." },
		{ "AIFF.Comment", "/** AIFF format sound */" },
		{ "AIFF.Name", "EAtomFormat::AIFF" },
		{ "AIFF.ToolTip", "AIFF format sound" },
		{ "AudioBuffer.Comment", "/** Audio buffer */" },
		{ "AudioBuffer.DisplayName", "Audio Buffer" },
		{ "AudioBuffer.Name", "EAtomFormat::AudioBuffer" },
		{ "AudioBuffer.ToolTip", "Audio buffer" },
		{ "BlueprintType", "true" },
		{ "Hardware1.Comment", "/** Hardware 1 sound (VAG or OPUS) */" },
		{ "Hardware1.Name", "EAtomFormat::Hardware1" },
		{ "Hardware1.ToolTip", "Hardware 1 sound (VAG or OPUS)" },
		{ "Hardware2.Comment", "/** Hardware 2 sound (ATRAC) */" },
		{ "Hardware2.Name", "EAtomFormat::Hardware2" },
		{ "Hardware2.ToolTip", "Hardware 2 sound (ATRAC)" },
		{ "HCA.Comment", "/** CRI's High Compression Audio sound. */" },
		{ "HCA.Name", "EAtomFormat::HCA" },
		{ "HCA.ToolTip", "CRI's High Compression Audio sound." },
		{ "HCAMX.Comment", "/** CRI's High Compression Audio Mix sound. */" },
		{ "HCAMX.DisplayName", "HCA-MX" },
		{ "HCAMX.Name", "EAtomFormat::HCAMX" },
		{ "HCAMX.ToolTip", "CRI's High Compression Audio Mix sound." },
		{ "Instrument.Comment", "/** Synthesizer */" },
		{ "Instrument.Name", "EAtomFormat::Instrument" },
		{ "Instrument.ToolTip", "Synthesizer" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "None.Comment", "/** No Format */" },
		{ "None.Name", "EAtomFormat::None" },
		{ "None.ToolTip", "No Format" },
		{ "Num.hidden", "" },
		{ "Num.Name", "EAtomFormat::Num" },
		{ "RawPCM.Comment", "/** Raw PCM sound */" },
		{ "RawPCM.DisplayName", "Raw PCM" },
		{ "RawPCM.Name", "EAtomFormat::RawPCM" },
		{ "RawPCM.ToolTip", "Raw PCM sound" },
		{ "Vibration.Comment", "/** Haptic vibrations */" },
		{ "Vibration.Name", "EAtomFormat::Vibration" },
		{ "Vibration.ToolTip", "Haptic vibrations" },
		{ "Wave.Comment", "/** Wave format sound */" },
		{ "Wave.Name", "EAtomFormat::Wave" },
		{ "Wave.ToolTip", "Wave format sound" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomFormat",
		"EAtomFormat",
		Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomFormat()
	{
		if (!Z_Registration_Info_UEnum_EAtomFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomFormat.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSpeaker;
	static UEnum* EAtomSpeaker_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpeaker.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSpeaker.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSpeaker, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSpeaker"));
		}
		return Z_Registration_Info_UEnum_EAtomSpeaker.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSpeaker>()
	{
		return EAtomSpeaker_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::Enumerators[] = {
		{ "EAtomSpeaker::FrontLeft", (int64)EAtomSpeaker::FrontLeft },
		{ "EAtomSpeaker::FrontRight", (int64)EAtomSpeaker::FrontRight },
		{ "EAtomSpeaker::FrontCenter", (int64)EAtomSpeaker::FrontCenter },
		{ "EAtomSpeaker::LowFrequency", (int64)EAtomSpeaker::LowFrequency },
		{ "EAtomSpeaker::SurroundLeft", (int64)EAtomSpeaker::SurroundLeft },
		{ "EAtomSpeaker::SurroundRight", (int64)EAtomSpeaker::SurroundRight },
		{ "EAtomSpeaker::SurroundBackLeft", (int64)EAtomSpeaker::SurroundBackLeft },
		{ "EAtomSpeaker::SurroundBackRight", (int64)EAtomSpeaker::SurroundBackRight },
		{ "EAtomSpeaker::TopFrontLeft", (int64)EAtomSpeaker::TopFrontLeft },
		{ "EAtomSpeaker::TopFrontRight", (int64)EAtomSpeaker::TopFrontRight },
		{ "EAtomSpeaker::TopRearLeft", (int64)EAtomSpeaker::TopRearLeft },
		{ "EAtomSpeaker::TopRearRight", (int64)EAtomSpeaker::TopRearRight },
		{ "EAtomSpeaker::Count", (int64)EAtomSpeaker::Count },
		{ "EAtomSpeaker::Unknown", (int64)EAtomSpeaker::Unknown },
		{ "EAtomSpeaker::DefaultChannel", (int64)EAtomSpeaker::DefaultChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Channel definitions for multistream waves\n *\n * These are in the sample order Atom expects for a 7.1.4 sound.\n *\n */" },
		{ "Count.Name", "EAtomSpeaker::Count" },
		{ "DefaultChannel.Name", "EAtomSpeaker::DefaultChannel" },
		{ "FrontCenter.Name", "EAtomSpeaker::FrontCenter" },
		{ "FrontLeft.Name", "EAtomSpeaker::FrontLeft" },
		{ "FrontRight.Name", "EAtomSpeaker::FrontRight" },
		{ "LowFrequency.Name", "EAtomSpeaker::LowFrequency" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "SurroundBackLeft.Name", "EAtomSpeaker::SurroundBackLeft" },
		{ "SurroundBackRight.Name", "EAtomSpeaker::SurroundBackRight" },
		{ "SurroundLeft.Name", "EAtomSpeaker::SurroundLeft" },
		{ "SurroundRight.Name", "EAtomSpeaker::SurroundRight" },
		{ "ToolTip", "Channel definitions for multistream waves\n\nThese are in the sample order Atom expects for a 7.1.4 sound." },
		{ "TopFrontLeft.Name", "EAtomSpeaker::TopFrontLeft" },
		{ "TopFrontRight.Name", "EAtomSpeaker::TopFrontRight" },
		{ "TopRearLeft.Name", "EAtomSpeaker::TopRearLeft" },
		{ "TopRearRight.Name", "EAtomSpeaker::TopRearRight" },
		{ "Unknown.Name", "EAtomSpeaker::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSpeaker",
		"EAtomSpeaker",
		Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpeaker()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpeaker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSpeaker.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSpeaker_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSpeaker.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomBusSendStage;
	static UEnum* EAtomBusSendStage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomBusSendStage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomBusSendStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomBusSendStage, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomBusSendStage"));
		}
		return Z_Registration_Info_UEnum_EAtomBusSendStage.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomBusSendStage>()
	{
		return EAtomBusSendStage_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::Enumerators[] = {
		{ "EAtomBusSendStage::PreEffect", (int64)EAtomBusSendStage::PreEffect },
		{ "EAtomBusSendStage::PostEffect", (int64)EAtomBusSendStage::PostEffect },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** DSP Bus send Stage */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "PostEffect.Name", "EAtomBusSendStage::PostEffect" },
		{ "PreEffect.Name", "EAtomBusSendStage::PreEffect" },
		{ "ToolTip", "DSP Bus send Stage" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomBusSendStage",
		"EAtomBusSendStage",
		Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendStage()
	{
		if (!Z_Registration_Info_UEnum_EAtomBusSendStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomBusSendStage.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomBusSendStage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomBusSendStage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomPcmBitDepth;
	static UEnum* EAtomPcmBitDepth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomPcmBitDepth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomPcmBitDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomPcmBitDepth"));
		}
		return Z_Registration_Info_UEnum_EAtomPcmBitDepth.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomPcmBitDepth>()
	{
		return EAtomPcmBitDepth_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::Enumerators[] = {
		{ "EAtomPcmBitDepth::Int16", (int64)EAtomPcmBitDepth::Int16 },
		{ "EAtomPcmBitDepth::Float32", (int64)EAtomPcmBitDepth::Float32 },
		{ "EAtomPcmBitDepth::Num", (int64)EAtomPcmBitDepth::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Float32.Comment", "/** Float 32-bits */" },
		{ "Float32.Name", "EAtomPcmBitDepth::Float32" },
		{ "Float32.ToolTip", "Float 32-bits" },
		{ "Int16.Comment", "/** Signed Integer 16-bits */" },
		{ "Int16.Name", "EAtomPcmBitDepth::Int16" },
		{ "Int16.ToolTip", "Signed Integer 16-bits" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "Num.hidden", "" },
		{ "Num.Name", "EAtomPcmBitDepth::Num" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomPcmBitDepth",
		"EAtomPcmBitDepth",
		Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth()
	{
		if (!Z_Registration_Info_UEnum_EAtomPcmBitDepth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomPcmBitDepth.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomPcmBitDepth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomPcmBitDepth.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomWaveInfo;
class UScriptStruct* FAtomWaveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomWaveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomWaveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomWaveInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomWaveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomWaveInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomWaveInfo>()
{
	return FAtomWaveInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomWaveInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaveID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStreamed_MetaData[];
#endif
		static void NewProp_bIsStreamed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStreamed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomWaveInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_WaveID_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_WaveID = { "WaveID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, WaveID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_WaveID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_WaveID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, Format), Z_Construct_UEnum_CriWareCore_EAtomFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData)) }; // 517077341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomWaveInfo, NumFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit(void* Obj)
	{
		((FAtomWaveInfo*)Obj)->bIsStreamed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed = { "bIsStreamed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomWaveInfo), &Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_WaveID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomWaveInfo",
		sizeof(FAtomWaveInfo),
		alignof(FAtomWaveInfo),
		Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomWaveInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomWaveInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomWaveInfo.InnerSingleton;
	}
	void UAtomSoundAsset::StaticRegisterNativesUAtomSoundAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundAsset);
	UClass* Z_Construct_UClass_UAtomSoundAsset_NoRegister()
	{
		return UAtomSoundAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundAsset_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomSoundAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundAsset_Statics::ClassParams = {
		&UAtomSoundAsset::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundAsset()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundAsset.OuterSingleton, Z_Construct_UClass_UAtomSoundAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundAsset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundAsset>()
	{
		return UAtomSoundAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundAsset);
	UAtomSoundAsset::~UAtomSoundAsset() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSoundRendererType;
	static UEnum* EAtomSoundRendererType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSoundRendererType"));
		}
		return Z_Registration_Info_UEnum_EAtomSoundRendererType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSoundRendererType>()
	{
		return EAtomSoundRendererType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::Enumerators[] = {
		{ "EAtomSoundRendererType::Default", (int64)EAtomSoundRendererType::Default },
		{ "EAtomSoundRendererType::Main", (int64)EAtomSoundRendererType::Main },
		{ "EAtomSoundRendererType::BGM", (int64)EAtomSoundRendererType::BGM },
		{ "EAtomSoundRendererType::Voice", (int64)EAtomSoundRendererType::Voice },
		{ "EAtomSoundRendererType::Pad", (int64)EAtomSoundRendererType::Pad },
		{ "EAtomSoundRendererType::Haptic", (int64)EAtomSoundRendererType::Haptic },
		{ "EAtomSoundRendererType::User", (int64)EAtomSoundRendererType::User },
		{ "EAtomSoundRendererType::Aux", (int64)EAtomSoundRendererType::Aux },
		{ "EAtomSoundRendererType::Asr", (int64)EAtomSoundRendererType::Asr },
		{ "EAtomSoundRendererType::Muted", (int64)EAtomSoundRendererType::Muted },
		{ "EAtomSoundRendererType::Num", (int64)EAtomSoundRendererType::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::Enum_MetaDataParams[] = {
		{ "Asr.Comment", "/* Output to another sound renderer. */" },
		{ "Asr.Hidden", "" },
		{ "Asr.Name", "EAtomSoundRendererType::Asr" },
		{ "Asr.ToolTip", "Output to another sound renderer." },
		{ "Aux.Comment", "/* Auxiliary virtual output */" },
		{ "Aux.DisplayName", "Aux" },
		{ "Aux.Name", "EAtomSoundRendererType::Aux" },
		{ "Aux.ToolTip", "Auxiliary virtual output" },
		{ "BGM.Comment", "/* BGM virtual output */" },
		{ "BGM.DisplayName", "BGM" },
		{ "BGM.Name", "EAtomSoundRendererType::BGM" },
		{ "BGM.ToolTip", "BGM virtual output" },
		{ "Comment", "/** Native Sound Renderer Type */" },
		{ "Default.Comment", "/* Default output */" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EAtomSoundRendererType::Default" },
		{ "Default.ToolTip", "Default output" },
		{ "Haptic.Comment", "/* Haptic pad/device output */" },
		{ "Haptic.DisplayName", "Haptic/Vibrations" },
		{ "Haptic.Name", "EAtomSoundRendererType::Haptic" },
		{ "Haptic.ToolTip", "Haptic pad/device output" },
		{ "Main.Comment", "/* Main virtual output */" },
		{ "Main.DisplayName", "Main" },
		{ "Main.Name", "EAtomSoundRendererType::Main" },
		{ "Main.ToolTip", "Main virtual output" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "Muted.Comment", "/* Do not output. */" },
		{ "Muted.Hidden", "" },
		{ "Muted.Name", "EAtomSoundRendererType::Muted" },
		{ "Muted.ToolTip", "Do not output." },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EAtomSoundRendererType::Num" },
		{ "Pad.Comment", "/* Pad Speaker output */" },
		{ "Pad.DisplayName", "Pad/Controller Speaker" },
		{ "Pad.Name", "EAtomSoundRendererType::Pad" },
		{ "Pad.ToolTip", "Pad Speaker output" },
		{ "ToolTip", "Native Sound Renderer Type" },
		{ "User.Comment", "/* User virtual output */" },
		{ "User.DisplayName", "User" },
		{ "User.Name", "EAtomSoundRendererType::User" },
		{ "User.ToolTip", "User virtual output" },
		{ "Voice.Comment", "/* Voice virtual output */" },
		{ "Voice.DisplayName", "Voice" },
		{ "Voice.Name", "EAtomSoundRendererType::Voice" },
		{ "Voice.ToolTip", "Voice virtual output" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSoundRendererType",
		"EAtomSoundRendererType",
		Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSoundRendererType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSoundfieldRendererType;
	static UEnum* EAtomSoundfieldRendererType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundfieldRendererType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSoundfieldRendererType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSoundfieldRendererType"));
		}
		return Z_Registration_Info_UEnum_EAtomSoundfieldRendererType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSoundfieldRendererType>()
	{
		return EAtomSoundfieldRendererType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::Enumerators[] = {
		{ "EAtomSoundfieldRendererType::Default", (int64)EAtomSoundfieldRendererType::Default },
		{ "EAtomSoundfieldRendererType::Spatializer", (int64)EAtomSoundfieldRendererType::Spatializer },
		{ "EAtomSoundfieldRendererType::Ambisonics", (int64)EAtomSoundfieldRendererType::Ambisonics },
		{ "EAtomSoundfieldRendererType::SoundObject", (int64)EAtomSoundfieldRendererType::SoundObject },
		{ "EAtomSoundfieldRendererType::Num", (int64)EAtomSoundfieldRendererType::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::Enum_MetaDataParams[] = {
		{ "Ambisonics.Comment", "/* Ambisonics based spatialization. Encode to HRTF spatialization when binauralizer is enabled. */" },
		{ "Ambisonics.DisplayName", "Ambisonics" },
		{ "Ambisonics.Name", "EAtomSoundfieldRendererType::Ambisonics" },
		{ "Ambisonics.ToolTip", "Ambisonics based spatialization. Encode to HRTF spatialization when binauralizer is enabled." },
		{ "Comment", "/** Native Soundfield Renderer Type */" },
		{ "Default.Comment", "/* Default channel spatialization without any soundfield encoding. Same as a default Rack with default settings. */" },
		{ "Default.DisplayName", "Default - No Encoding" },
		{ "Default.Name", "EAtomSoundfieldRendererType::Default" },
		{ "Default.ToolTip", "Default channel spatialization without any soundfield encoding. Same as a default Rack with default settings." },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EAtomSoundfieldRendererType::Num" },
		{ "SoundObject.Comment", "/* Object based spatialization (Experimental: limited to 16 monaural sources). Encode to HRTF spatialization when binauralizer is enabled. */" },
		{ "SoundObject.DisplayName", "Sound Object (Experimental)" },
		{ "SoundObject.Name", "EAtomSoundfieldRendererType::SoundObject" },
		{ "SoundObject.ToolTip", "Object based spatialization (Experimental: limited to 16 monaural sources). Encode to HRTF spatialization when binauralizer is enabled." },
		{ "Spatializer.Comment", "/* Channel based spatialization. Encode to HRTF spatialization when binauralizer is enabled. */" },
		{ "Spatializer.DisplayName", "Channel Spatialization" },
		{ "Spatializer.Name", "EAtomSoundfieldRendererType::Spatializer" },
		{ "Spatializer.ToolTip", "Channel based spatialization. Encode to HRTF spatialization when binauralizer is enabled." },
		{ "ToolTip", "Native Soundfield Renderer Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSoundfieldRendererType",
		"EAtomSoundfieldRendererType",
		Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundfieldRendererType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSoundfieldRendererType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSoundfieldRendererType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomVoicePoolType;
	static UEnum* EAtomVoicePoolType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomVoicePoolType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomVoicePoolType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomVoicePoolType"));
		}
		return Z_Registration_Info_UEnum_EAtomVoicePoolType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomVoicePoolType>()
	{
		return EAtomVoicePoolType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::Enumerators[] = {
		{ "EAtomVoicePoolType::StandardMemory", (int64)EAtomVoicePoolType::StandardMemory },
		{ "EAtomVoicePoolType::StandardStreaming", (int64)EAtomVoicePoolType::StandardStreaming },
		{ "EAtomVoicePoolType::HcaMxMemory", (int64)EAtomVoicePoolType::HcaMxMemory },
		{ "EAtomVoicePoolType::HcaMxStreaming", (int64)EAtomVoicePoolType::HcaMxStreaming },
		{ "EAtomVoicePoolType::WaveMemory", (int64)EAtomVoicePoolType::WaveMemory },
		{ "EAtomVoicePoolType::WaveStreaming", (int64)EAtomVoicePoolType::WaveStreaming },
		{ "EAtomVoicePoolType::AiffMemory", (int64)EAtomVoicePoolType::AiffMemory },
		{ "EAtomVoicePoolType::AiffStreaming", (int64)EAtomVoicePoolType::AiffStreaming },
		{ "EAtomVoicePoolType::RawPcm", (int64)EAtomVoicePoolType::RawPcm },
		{ "EAtomVoicePoolType::InputPort", (int64)EAtomVoicePoolType::InputPort },
		{ "EAtomVoicePoolType::External", (int64)EAtomVoicePoolType::External },
		{ "EAtomVoicePoolType::Audio3dMemory", (int64)EAtomVoicePoolType::Audio3dMemory },
		{ "EAtomVoicePoolType::Audio3dStreaming", (int64)EAtomVoicePoolType::Audio3dStreaming },
		{ "EAtomVoicePoolType::OpusMemory", (int64)EAtomVoicePoolType::OpusMemory },
		{ "EAtomVoicePoolType::OpusStreaming", (int64)EAtomVoicePoolType::OpusStreaming },
		{ "EAtomVoicePoolType::Undefined", (int64)EAtomVoicePoolType::Undefined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::Enum_MetaDataParams[] = {
		{ "AiffMemory.Name", "EAtomVoicePoolType::AiffMemory" },
		{ "AiffStreaming.Name", "EAtomVoicePoolType::AiffStreaming" },
		{ "Audio3dMemory.Name", "EAtomVoicePoolType::Audio3dMemory" },
		{ "Audio3dStreaming.Name", "EAtomVoicePoolType::Audio3dStreaming" },
		{ "Comment", "/** Enumeration for each voices pool type. */" },
		{ "External.Name", "EAtomVoicePoolType::External" },
		{ "HcaMxMemory.Name", "EAtomVoicePoolType::HcaMxMemory" },
		{ "HcaMxStreaming.Name", "EAtomVoicePoolType::HcaMxStreaming" },
		{ "InputPort.Name", "EAtomVoicePoolType::InputPort" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "OpusMemory.Name", "EAtomVoicePoolType::OpusMemory" },
		{ "OpusStreaming.Name", "EAtomVoicePoolType::OpusStreaming" },
		{ "RawPcm.Name", "EAtomVoicePoolType::RawPcm" },
		{ "StandardMemory.Name", "EAtomVoicePoolType::StandardMemory" },
		{ "StandardStreaming.Name", "EAtomVoicePoolType::StandardStreaming" },
		{ "ToolTip", "Enumeration for each voices pool type." },
		{ "Undefined.Name", "EAtomVoicePoolType::Undefined" },
		{ "WaveMemory.Name", "EAtomVoicePoolType::WaveMemory" },
		{ "WaveStreaming.Name", "EAtomVoicePoolType::WaveStreaming" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomVoicePoolType",
		"EAtomVoicePoolType",
		Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType()
	{
		if (!Z_Registration_Info_UEnum_EAtomVoicePoolType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomVoicePoolType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomVoicePoolType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomVoicePoolType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior;
	static UEnum* EAtomSoundWaveLoadingBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSoundWaveLoadingBehavior"));
		}
		return Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSoundWaveLoadingBehavior>()
	{
		return EAtomSoundWaveLoadingBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::Enumerators[] = {
		{ "EAtomSoundWaveLoadingBehavior::Inherited", (int64)EAtomSoundWaveLoadingBehavior::Inherited },
		{ "EAtomSoundWaveLoadingBehavior::RetainOnLoad", (int64)EAtomSoundWaveLoadingBehavior::RetainOnLoad },
		{ "EAtomSoundWaveLoadingBehavior::PrimeOnLoad", (int64)EAtomSoundWaveLoadingBehavior::PrimeOnLoad },
		{ "EAtomSoundWaveLoadingBehavior::LoadOnDemand", (int64)EAtomSoundWaveLoadingBehavior::LoadOnDemand },
		{ "EAtomSoundWaveLoadingBehavior::ForceInline", (int64)EAtomSoundWaveLoadingBehavior::ForceInline },
		{ "EAtomSoundWaveLoadingBehavior::Uninitialized", (int64)EAtomSoundWaveLoadingBehavior::Uninitialized },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Note: not yet usable per AtomSoundWave -> only AtomSoundBank currently.  \n * //Only used when stream caching is enabled. Determines how we are going to load or retain a given Atom asset.\n * //A UAtomSoundWave's loading behavior can be overridden in the UAtomSoundWave itself, the sound wave's UAtomWaveBank, or by cvars.\n * //The order of priority is defined as:\n * //1) The loading behavior set on the UAtomSoundWave\n * //2) The loading behavior set on the UAtomSoundWave's UAtomWaveBank.\n * //3) The loading behavior set on the nearest parent of a UAtomSoundWave's UAtomWaveBank.\n * //4) The loading behavior set via the atom.streamcache cvars.\n */" },
		{ "ForceInline.Comment", "// Force all audio data for this asset to live outside Atom cache and use the non-streaming decode pathways. May not be usable outisde the Editor actually.\n" },
		{ "ForceInline.DisplayName", "Force Inline" },
		{ "ForceInline.Name", "EAtomSoundWaveLoadingBehavior::ForceInline" },
		{ "ForceInline.ToolTip", "Force all audio data for this asset to live outside Atom cache and use the non-streaming decode pathways. May not be usable outisde the Editor actually." },
		{ "Inherited.Comment", "// If set use the default behavior defined via the atom.streamcache cvars.\n" },
		{ "Inherited.Name", "EAtomSoundWaveLoadingBehavior::Inherited" },
		{ "Inherited.ToolTip", "If set use the default behavior defined via the atom.streamcache cvars." },
		{ "LoadOnDemand.Comment", "// The first chunk of audio data for this asset will not be loaded until this asset is played or primed.\n" },
		{ "LoadOnDemand.Name", "EAtomSoundWaveLoadingBehavior::LoadOnDemand" },
		{ "LoadOnDemand.ToolTip", "The first chunk of audio data for this asset will not be loaded until this asset is played or primed." },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "PrimeOnLoad.Comment", "// The first chunk of audio data for this asset will be loaded into Atom cache from disk when this asset is loaded, but may be evicted to make room for other audio if it isn't played for a while.\n" },
		{ "PrimeOnLoad.Name", "EAtomSoundWaveLoadingBehavior::PrimeOnLoad" },
		{ "PrimeOnLoad.ToolTip", "The first chunk of audio data for this asset will be loaded into Atom cache from disk when this asset is loaded, but may be evicted to make room for other audio if it isn't played for a while." },
		{ "RetainOnLoad.Comment", "// The first chunk of audio data for this asset will be retained by Atom cache until a given UAtomWaveBank or UAtomCueSheet is either destroyed or UAtomSoundBank::Release() is called.\n" },
		{ "RetainOnLoad.Name", "EAtomSoundWaveLoadingBehavior::RetainOnLoad" },
		{ "RetainOnLoad.ToolTip", "The first chunk of audio data for this asset will be retained by Atom cache until a given UAtomWaveBank or UAtomCueSheet is either destroyed or UAtomSoundBank::Release() is called." },
		{ "ToolTip", "Note: not yet usable per AtomSoundWave -> only AtomSoundBank currently.\n//Only used when stream caching is enabled. Determines how we are going to load or retain a given Atom asset.\n//A UAtomSoundWave's loading behavior can be overridden in the UAtomSoundWave itself, the sound wave's UAtomWaveBank, or by cvars.\n//The order of priority is defined as:\n//1) The loading behavior set on the UAtomSoundWave\n//2) The loading behavior set on the UAtomSoundWave's UAtomWaveBank.\n//3) The loading behavior set on the nearest parent of a UAtomSoundWave's UAtomWaveBank.\n//4) The loading behavior set via the atom.streamcache cvars." },
		{ "Uninitialized.Comment", "// This value is used to delineate when the value of EAtomSoundWaveLoadingBehavior hasn't been cached on a UAtomSoundBank yet.\n" },
		{ "Uninitialized.Hidden", "" },
		{ "Uninitialized.Name", "EAtomSoundWaveLoadingBehavior::Uninitialized" },
		{ "Uninitialized.ToolTip", "This value is used to delineate when the value of EAtomSoundWaveLoadingBehavior hasn't been cached on a UAtomSoundBank yet." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSoundWaveLoadingBehavior",
		"EAtomSoundWaveLoadingBehavior",
		Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior()
	{
		if (!Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSendLevelControlMethod;
	static UEnum* EAtomSendLevelControlMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSendLevelControlMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSendLevelControlMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSendLevelControlMethod"));
		}
		return Z_Registration_Info_UEnum_EAtomSendLevelControlMethod.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSendLevelControlMethod>()
	{
		return EAtomSendLevelControlMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::Enumerators[] = {
		{ "EAtomSendLevelControlMethod::Linear", (int64)EAtomSendLevelControlMethod::Linear },
		{ "EAtomSendLevelControlMethod::CustomCurve", (int64)EAtomSendLevelControlMethod::CustomCurve },
		{ "EAtomSendLevelControlMethod::Manual", (int64)EAtomSendLevelControlMethod::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A send based on a supplied curve\n" },
		{ "CustomCurve.Name", "EAtomSendLevelControlMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A send based on a supplied curve" },
		{ "Linear.Comment", "// A send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "EAtomSendLevelControlMethod::Linear" },
		{ "Linear.ToolTip", "A send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "EAtomSendLevelControlMethod::Manual" },
		{ "Manual.ToolTip", "A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSendLevelControlMethod",
		"EAtomSendLevelControlMethod",
		Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod()
	{
		if (!Z_Registration_Info_UEnum_EAtomSendLevelControlMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSendLevelControlMethod.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSendLevelControlMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundToRackSend;
class UScriptStruct* FAtomSoundToRackSend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundToRackSend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundToRackSend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundToRackSend, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundToRackSend"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundToRackSend.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundToRackSend>()
{
	return FAtomSoundToRackSend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Rack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class used to send audio to rack from UAtomSoundBase\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "Class used to send audio to rack from UAtomSoundBase" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundToRackSend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_Rack_MetaData[] = {
		{ "Category", "RackSend" },
		{ "Comment", "// The rack to send the audio to\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The rack to send the audio to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_Rack = { "Rack", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToRackSend, Rack), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_Rack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_Rack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "RackSend" },
		{ "Comment", "// The amount of audio to send\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The amount of audio to send" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToRackSend, SendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_SendLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_Rack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewProp_SendLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSoundToRackSend",
		sizeof(FAtomSoundToRackSend),
		alignof(FAtomSoundToRackSend),
		Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundToRackSend()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundToRackSend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundToRackSend.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundToRackSend.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundToBusSend;
class UScriptStruct* FAtomSoundToBusSend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundToBusSend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundToBusSend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundToBusSend, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundToBusSend"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundToBusSend.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundToBusSend>()
{
	return FAtomSoundToBusSend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SendLevelControlMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevelControlMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SendLevelControlMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableManualSendClamp_MetaData[];
#endif
		static void NewProp_DisableManualSendClamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableManualSendClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSendLevelCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSendLevelCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class used to send audio to bus from UAtomSoundBase\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "Class used to send audio to bus from UAtomSoundBase" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundToBusSend>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevelControlMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevelControlMethod_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "/*\n\x09\x09Manual: Use Send Level only\n\x09\x09Linear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\n\x09\x09""Custom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "Manual: Use Send Level only\nLinear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\nCustom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevelControlMethod = { "SendLevelControlMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, SendLevelControlMethod), Z_Construct_UEnum_CriWareCore_EAtomSendLevelControlMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevelControlMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevelControlMethod_MetaData)) }; // 3119489794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_Bus_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The bus to send the audio to\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The bus to send the audio to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, Bus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_Bus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The amount of audio to send\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The amount of audio to send" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, SendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_DisableManualSendClamp_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// Whether to disable the 0-1 clamp for manual SendLevel control\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "Whether to disable the 0-1 clamp for manual SendLevel control" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_DisableManualSendClamp_SetBit(void* Obj)
	{
		((FAtomSoundToBusSend*)Obj)->DisableManualSendClamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_DisableManualSendClamp = { "DisableManualSendClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomSoundToBusSend), &Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_DisableManualSendClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_DisableManualSendClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_DisableManualSendClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendLevel_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the min send distance.\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the min send distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendLevel = { "MinSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, MinSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendLevel_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the max send distance.\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the max send distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendLevel = { "MaxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, MaxSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendDistance_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The min distance to send to the master\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The min distance to send to the master" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendDistance = { "MinSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, MinSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendDistance_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The max distance to send to the master\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The max distance to send to the master" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendDistance = { "MaxSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, MaxSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_CustomSendLevelCurve_MetaData[] = {
		{ "Category", "BusSend" },
		{ "Comment", "// The custom reverb send curve to use for distance-based send level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_CustomSendLevelCurve = { "CustomSendLevelCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundToBusSend, CustomSendLevelCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_CustomSendLevelCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_CustomSendLevelCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevelControlMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevelControlMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_SendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_DisableManualSendClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MinSendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_MaxSendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewProp_CustomSendLevelCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSoundToBusSend",
		sizeof(FAtomSoundToBusSend),
		alignof(FAtomSoundToBusSend),
		Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundToBusSend()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundToBusSend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundToBusSend.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundToBusSend.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo;
class UScriptStruct* FAtomBeatSyncInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBeatSyncInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBeatSyncInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBeatSyncInfo>()
{
	return FAtomBeatSyncInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BarCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeatCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BeatCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeatProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBeatsPerBar_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBeatsPerBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A structure with beat information from cue sequence's BeatSync when a beat appends while playing. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "A structure with beat information from cue sequence's BeatSync when a beat appends while playing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBeatSyncInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BarCount_MetaData[] = {
		{ "Category", "Atom|Sequencer|BeatSync" },
		{ "Comment", "/** The current bar count .*/" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The current bar count ." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BarCount = { "BarCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBeatSyncInfo, BarCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BarCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BarCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatCount_MetaData[] = {
		{ "Category", "Atom|Sequencer|BeatSync" },
		{ "Comment", "/** The current beat count in current bar. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The current beat count in current bar." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatCount = { "BeatCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBeatSyncInfo, BeatCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatProgress_MetaData[] = {
		{ "Category", "Atom|Sequencer|BeatSync" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The current beat progression before next beat if offsetted. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The current beat progression before next beat if offsetted." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatProgress = { "BeatProgress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBeatSyncInfo, BeatProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BPM_MetaData[] = {
		{ "Category", "Atom|Sequencer|BeatSync" },
		{ "ClampMax", "980" },
		{ "ClampMin", "20" },
		{ "Comment", "/** The currently used BPM (Beats Per Minute) value. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The currently used BPM (Beats Per Minute) value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BPM = { "BPM", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBeatSyncInfo, BPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Atom|Sequencer|BeatSync" },
		{ "Comment", "/** The used BeatSync Offset value. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The used BeatSync Offset value." },
		{ "Units", "ms" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBeatSyncInfo, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_NumBeatsPerBar_MetaData[] = {
		{ "Category", "Atom|Sequencer|BeatSync" },
		{ "Comment", "/** The number of beats per bar. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "The number of beats per bar." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_NumBeatsPerBar = { "NumBeatsPerBar", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBeatSyncInfo, NumBeatsPerBar), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_NumBeatsPerBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_NumBeatsPerBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BarCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BeatProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_BPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewProp_NumBeatsPerBar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBeatSyncInfo",
		sizeof(FAtomBeatSyncInfo),
		alignof(FAtomBeatSyncInfo),
		Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo;
class UScriptStruct* FAtomSequencerEventInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSequencerEventInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSequencerEventInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSequencerEventInfo>()
{
	return FAtomSequencerEventInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A structure with event information from cue's sequencer when a marker with callback is reached while playing. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "A structure with event information from cue's sequencer when a marker with callback is reached while playing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSequencerEventInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Atom|Sequencer|Event" },
		{ "Comment", "/** Marker's Time in sequence. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "Marker's Time in sequence." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSequencerEventInfo, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Atom|Sequencer|Event" },
		{ "Comment", "/** Marker's Id. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "Marker's Id." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSequencerEventInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Atom|Sequencer|Event" },
		{ "Comment", "/** Marker's Tag. */" },
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
		{ "ToolTip", "Marker's Tag." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSequencerEventInfo, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSequencerEventInfo",
		sizeof(FAtomSequencerEventInfo),
		alignof(FAtomSequencerEventInfo),
		Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSequencerEventInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo.InnerSingleton;
	}
	void UAtomPlaybackFinishedNotifiedObject::StaticRegisterNativesUAtomPlaybackFinishedNotifiedObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomPlaybackFinishedNotifiedObject);
	UClass* Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_NoRegister()
	{
		return UAtomPlaybackFinishedNotifiedObject::StaticClass();
	}
	struct Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/Atom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomPlaybackFinishedNotifiedObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics::ClassParams = {
		&UAtomPlaybackFinishedNotifiedObject::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject()
	{
		if (!Z_Registration_Info_UClass_UAtomPlaybackFinishedNotifiedObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomPlaybackFinishedNotifiedObject.OuterSingleton, Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomPlaybackFinishedNotifiedObject.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomPlaybackFinishedNotifiedObject>()
	{
		return UAtomPlaybackFinishedNotifiedObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomPlaybackFinishedNotifiedObject);
	UAtomPlaybackFinishedNotifiedObject::~UAtomPlaybackFinishedNotifiedObject() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::EnumInfo[] = {
		{ EAtomFormat_StaticEnum, TEXT("EAtomFormat"), &Z_Registration_Info_UEnum_EAtomFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 517077341U) },
		{ EAtomSpeaker_StaticEnum, TEXT("EAtomSpeaker"), &Z_Registration_Info_UEnum_EAtomSpeaker, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3354578248U) },
		{ EAtomBusSendStage_StaticEnum, TEXT("EAtomBusSendStage"), &Z_Registration_Info_UEnum_EAtomBusSendStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2714685404U) },
		{ EAtomPcmBitDepth_StaticEnum, TEXT("EAtomPcmBitDepth"), &Z_Registration_Info_UEnum_EAtomPcmBitDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 570396756U) },
		{ EAtomSoundRendererType_StaticEnum, TEXT("EAtomSoundRendererType"), &Z_Registration_Info_UEnum_EAtomSoundRendererType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1762093159U) },
		{ EAtomSoundfieldRendererType_StaticEnum, TEXT("EAtomSoundfieldRendererType"), &Z_Registration_Info_UEnum_EAtomSoundfieldRendererType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2800865008U) },
		{ EAtomVoicePoolType_StaticEnum, TEXT("EAtomVoicePoolType"), &Z_Registration_Info_UEnum_EAtomVoicePoolType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 149917250U) },
		{ EAtomSoundWaveLoadingBehavior_StaticEnum, TEXT("EAtomSoundWaveLoadingBehavior"), &Z_Registration_Info_UEnum_EAtomSoundWaveLoadingBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 553665384U) },
		{ EAtomSendLevelControlMethod_StaticEnum, TEXT("EAtomSendLevelControlMethod"), &Z_Registration_Info_UEnum_EAtomSendLevelControlMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3119489794U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::ScriptStructInfo[] = {
		{ FAtomWaveInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewStructOps, TEXT("AtomWaveInfo"), &Z_Registration_Info_UScriptStruct_AtomWaveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomWaveInfo), 2079236216U) },
		{ FAtomSoundToRackSend::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundToRackSend_Statics::NewStructOps, TEXT("AtomSoundToRackSend"), &Z_Registration_Info_UScriptStruct_AtomSoundToRackSend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundToRackSend), 2497956160U) },
		{ FAtomSoundToBusSend::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundToBusSend_Statics::NewStructOps, TEXT("AtomSoundToBusSend"), &Z_Registration_Info_UScriptStruct_AtomSoundToBusSend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundToBusSend), 1321788406U) },
		{ FAtomBeatSyncInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewStructOps, TEXT("AtomBeatSyncInfo"), &Z_Registration_Info_UScriptStruct_AtomBeatSyncInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBeatSyncInfo), 3547717785U) },
		{ FAtomSequencerEventInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomSequencerEventInfo_Statics::NewStructOps, TEXT("AtomSequencerEventInfo"), &Z_Registration_Info_UScriptStruct_AtomSequencerEventInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSequencerEventInfo), 3701221165U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundAsset, UAtomSoundAsset::StaticClass, TEXT("UAtomSoundAsset"), &Z_Registration_Info_UClass_UAtomSoundAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundAsset), 1060465604U) },
		{ Z_Construct_UClass_UAtomPlaybackFinishedNotifiedObject, UAtomPlaybackFinishedNotifiedObject::StaticClass, TEXT("UAtomPlaybackFinishedNotifiedObject"), &Z_Registration_Info_UClass_UAtomPlaybackFinishedNotifiedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomPlaybackFinishedNotifiedObject), 3362524225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_4272023223(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Atom_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
