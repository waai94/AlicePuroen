// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectI3DL2Reverb() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings;
class UScriptStruct* FAtomBusEffectI3DL2ReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectI3DL2ReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectI3DL2ReverbSettings>()
{
	return FAtomBusEffectI3DL2ReverbSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Room;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomHF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomHF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reflections_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reverb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reverb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HFReference_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HFReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RearInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RearOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectI3DL2ReverbSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "* FAtomBusEffectI3DL2ReverbSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectI3DL2ReverbSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Room_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the final output volume of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the final output volume of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, Room), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Room_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RoomHF_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the volume of the reference frequency (high frequency) of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the volume of the reference frequency (high frequency) of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RoomHF = { "RoomHF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, RoomHF), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RoomHF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RoomHF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Specifies the decay time of the rear reverberation of the I3DL2 reverb in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Specifies the decay time of the rear reverberation of the I3DL2 reverb in milliseconds." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, DecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayHFRatio_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** specifies the ratio of high frequency attenuation to low frequency attenuation in the rear reverberation of the I3DL2 reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "specifies the ratio of high frequency attenuation to low frequency attenuation in the rear reverberation of the I3DL2 reverb." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
		{ "Units", "x" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayHFRatio = { "DecayHFRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, DecayHFRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayHFRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayHFRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reflections_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the volume of the initial reflected sound of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the volume of the initial reflected sound of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "10.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reflections = { "Reflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, Reflections), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReflectionsDelay_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.3" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the delay time of the initial reflected sound of the I3DL2 reverb in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Specifies the delay time of the initial reflected sound of the I3DL2 reverb in milliseconds." },
		{ "UIMax", "0.3" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReflectionsDelay = { "ReflectionsDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, ReflectionsDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReflectionsDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReflectionsDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reverb_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the volume of the rear reverberation of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the volume of the rear reverberation of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "20.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reverb = { "Reverb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, Reverb), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reverb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reverb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReverbDelay_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the delay time of the rear reverberation of the I3DL2 reverb in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Specifies the delay time of the rear reverberation of the I3DL2 reverb in milliseconds." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReverbDelay = { "ReverbDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, ReverbDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReverbDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReverbDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Diffusion_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the echo density of the rear reverberation of the I3DL2 reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Specifies the echo density of the rear reverberation of the I3DL2 reverb." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
		{ "Units", "%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, Diffusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Diffusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Diffusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the modal density of the rear reverberation of the I3DL2 reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Specifies the modal density of the rear reverberation of the I3DL2 reverb." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
		{ "Units", "%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_HFReference_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Specifies the reference frequency (high range) of Room HF of the I3DL2 reverb in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the reference frequency (high range) of Room HF of the I3DL2 reverb in hertz." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "20.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_HFReference = { "HFReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, HFReference), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_HFReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_HFReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontInput_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the input level of the front (L, R channels) component of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the input level of the front (L, R channels) component of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontInput = { "FrontInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, FrontInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearInput_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the input level of the rear (surround L, surround R channels) component of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the input level of the rear (surround L, surround R channels) component of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearInput = { "RearInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, RearInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterInput_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the input level of the center (C channel) component of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the input level of the center (C channel) component of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterInput = { "CenterInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, CenterInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontOutput_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the output level of the front (L, R channels) component of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the output level of the front (L, R channels) component of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontOutput = { "FrontOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, FrontOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearOutput_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the output level of the rear (surround L, surround R channels) component of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the output level of the rear (surround L, surround R channels) component of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearOutput = { "RearOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, RearOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterOutput_MetaData[] = {
		{ "Category", "I3DL2Reverb" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Specifies the output level of the center (C channel) component of the I3DL2 reverb in decibels (dB). */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "SliderExponent", "0.75" },
		{ "ToolTip", "Specifies the output level of the center (C channel) component of the I3DL2 reverb in decibels (dB)." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterOutput = { "CenterOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectI3DL2ReverbSettings, CenterOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectI3DL2ReverbSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectI3DL2ReverbSettings), &Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Room,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RoomHF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_DecayHFRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReflectionsDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Reverb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_ReverbDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Diffusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_Density,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_HFReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_FrontOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_RearOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_CenterOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectI3DL2ReverbSettings",
		sizeof(FAtomBusEffectI3DL2ReverbSettings),
		alignof(FAtomBusEffectI3DL2ReverbSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetBypass(Z_Param_Out_ReverbSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetCenterOutput)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetCenterOutput(Z_Param_Out_ReverbSettings,Z_Param_CenterOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetRearOutput)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RearOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetRearOutput(Z_Param_Out_ReverbSettings,Z_Param_RearOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetFrontOutput)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrontOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetFrontOutput(Z_Param_Out_ReverbSettings,Z_Param_FrontOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetCenterInput)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetCenterInput(Z_Param_Out_ReverbSettings,Z_Param_CenterInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetRearInput)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RearInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetRearInput(Z_Param_Out_ReverbSettings,Z_Param_RearInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetFrontInput)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrontInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetFrontInput(Z_Param_Out_ReverbSettings,Z_Param_FrontInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetHFReference)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HFReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetHFReference(Z_Param_Out_ReverbSettings,Z_Param_HFReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetDensity)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Density);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetDensity(Z_Param_Out_ReverbSettings,Z_Param_Density);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetDiffusion)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Diffusion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetDiffusion(Z_Param_Out_ReverbSettings,Z_Param_Diffusion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetReverbDelay)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReverbDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetReverbDelay(Z_Param_Out_ReverbSettings,Z_Param_ReverbDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetReverb)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Reverb);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetReverb(Z_Param_Out_ReverbSettings,Z_Param_Reverb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetReflectionsDelay)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReflectionsDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetReflectionsDelay(Z_Param_Out_ReverbSettings,Z_Param_ReflectionsDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetReflections)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Reflections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetReflections(Z_Param_Out_ReverbSettings,Z_Param_Reflections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetDecayHFRatio)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecayHFRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetDecayHFRatio(Z_Param_Out_ReverbSettings,Z_Param_DecayHFRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetDecayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetDecayTime(Z_Param_Out_ReverbSettings,Z_Param_DecayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetRoomHF)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RoomHF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetRoomHF(Z_Param_Out_ReverbSettings,Z_Param_RoomHF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbStatics::execSetRoom)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Room);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectI3DL2ReverbSettings*)Z_Param__Result=UAtomBusEffectI3DL2ReverbStatics::SetRoom(Z_Param_Out_ReverbSettings,Z_Param_Room);
		P_NATIVE_END;
	}
	void UAtomBusEffectI3DL2ReverbStatics::StaticRegisterNativesUAtomBusEffectI3DL2ReverbStatics()
	{
		UClass* Class = UAtomBusEffectI3DL2ReverbStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectI3DL2ReverbStatics::execSetBypass },
			{ "SetCenterInput", &UAtomBusEffectI3DL2ReverbStatics::execSetCenterInput },
			{ "SetCenterOutput", &UAtomBusEffectI3DL2ReverbStatics::execSetCenterOutput },
			{ "SetDecayHFRatio", &UAtomBusEffectI3DL2ReverbStatics::execSetDecayHFRatio },
			{ "SetDecayTime", &UAtomBusEffectI3DL2ReverbStatics::execSetDecayTime },
			{ "SetDensity", &UAtomBusEffectI3DL2ReverbStatics::execSetDensity },
			{ "SetDiffusion", &UAtomBusEffectI3DL2ReverbStatics::execSetDiffusion },
			{ "SetFrontInput", &UAtomBusEffectI3DL2ReverbStatics::execSetFrontInput },
			{ "SetFrontOutput", &UAtomBusEffectI3DL2ReverbStatics::execSetFrontOutput },
			{ "SetHFReference", &UAtomBusEffectI3DL2ReverbStatics::execSetHFReference },
			{ "SetRearInput", &UAtomBusEffectI3DL2ReverbStatics::execSetRearInput },
			{ "SetRearOutput", &UAtomBusEffectI3DL2ReverbStatics::execSetRearOutput },
			{ "SetReflections", &UAtomBusEffectI3DL2ReverbStatics::execSetReflections },
			{ "SetReflectionsDelay", &UAtomBusEffectI3DL2ReverbStatics::execSetReflectionsDelay },
			{ "SetReverb", &UAtomBusEffectI3DL2ReverbStatics::execSetReverb },
			{ "SetReverbDelay", &UAtomBusEffectI3DL2ReverbStatics::execSetReverbDelay },
			{ "SetRoom", &UAtomBusEffectI3DL2ReverbStatics::execSetRoom },
			{ "SetRoomHF", &UAtomBusEffectI3DL2ReverbStatics::execSetRoomHF },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetBypass_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			bool bBypass;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetBypass_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	void Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectI3DL2ReverbStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectI3DL2ReverbStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetCenterInput_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float CenterInput;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetCenterInput_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::NewProp_CenterInput = { "CenterInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetCenterInput_Parms, CenterInput), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetCenterInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::NewProp_CenterInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetCenterInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetCenterInput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetCenterOutput_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float CenterOutput;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterOutput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetCenterOutput_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::NewProp_CenterOutput = { "CenterOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetCenterOutput_Parms, CenterOutput), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetCenterOutput_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::NewProp_CenterOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetCenterOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetCenterOutput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetDecayHFRatio_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float DecayHFRatio;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDecayHFRatio_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::NewProp_DecayHFRatio = { "DecayHFRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDecayHFRatio_Parms, DecayHFRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDecayHFRatio_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::NewProp_DecayHFRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetDecayHFRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetDecayHFRatio_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetDecayTime_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float DecayTime;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDecayTime_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDecayTime_Parms, DecayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDecayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::NewProp_DecayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetDecayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetDecayTime_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetDensity_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float Density;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDensity_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDensity_Parms, Density), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDensity_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::NewProp_Density,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetDensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetDensity_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetDiffusion_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float Diffusion;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDiffusion_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDiffusion_Parms, Diffusion), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetDiffusion_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::NewProp_Diffusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetDiffusion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetDiffusion_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetFrontInput_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float FrontInput;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetFrontInput_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::NewProp_FrontInput = { "FrontInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetFrontInput_Parms, FrontInput), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetFrontInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::NewProp_FrontInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetFrontInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetFrontInput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetFrontOutput_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float FrontOutput;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontOutput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetFrontOutput_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::NewProp_FrontOutput = { "FrontOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetFrontOutput_Parms, FrontOutput), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetFrontOutput_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::NewProp_FrontOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetFrontOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetFrontOutput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetHFReference_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float HFReference;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HFReference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetHFReference_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::NewProp_HFReference = { "HFReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetHFReference_Parms, HFReference), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetHFReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::NewProp_HFReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetHFReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetHFReference_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetRearInput_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float RearInput;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRearInput_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::NewProp_RearInput = { "RearInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRearInput_Parms, RearInput), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRearInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::NewProp_RearInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetRearInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetRearInput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetRearOutput_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float RearOutput;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearOutput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRearOutput_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::NewProp_RearOutput = { "RearOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRearOutput_Parms, RearOutput), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRearOutput_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::NewProp_RearOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetRearOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetRearOutput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetReflections_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float Reflections;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reflections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReflections_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::NewProp_Reflections = { "Reflections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReflections_Parms, Reflections), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReflections_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::NewProp_Reflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetReflections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetReflections_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetReflectionsDelay_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float ReflectionsDelay;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReflectionsDelay_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::NewProp_ReflectionsDelay = { "ReflectionsDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReflectionsDelay_Parms, ReflectionsDelay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReflectionsDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::NewProp_ReflectionsDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetReflectionsDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetReflectionsDelay_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetReverb_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float Reverb;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reverb;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReverb_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::NewProp_Reverb = { "Reverb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReverb_Parms, Reverb), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReverb_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::NewProp_Reverb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetReverb", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetReverb_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetReverbDelay_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float ReverbDelay;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbDelay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReverbDelay_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::NewProp_ReverbDelay = { "ReverbDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReverbDelay_Parms, ReverbDelay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetReverbDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::NewProp_ReverbDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetReverbDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetReverbDelay_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetRoom_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float Room;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Room;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRoom_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRoom_Parms, Room), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRoom_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::NewProp_Room,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetRoom_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics
	{
		struct AtomBusEffectI3DL2ReverbStatics_eventSetRoomHF_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings ReverbSettings;
			float RoomHF;
			FAtomBusEffectI3DL2ReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomHF;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRoomHF_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::NewProp_RoomHF = { "RoomHF", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRoomHF_Parms, RoomHF), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbStatics_eventSetRoomHF_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::NewProp_RoomHF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, nullptr, "SetRoomHF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::AtomBusEffectI3DL2ReverbStatics_eventSetRoomHF_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectI3DL2ReverbStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_NoRegister()
	{
		return UAtomBusEffectI3DL2ReverbStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetBypass, "SetBypass" }, // 2606174844
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterInput, "SetCenterInput" }, // 687563134
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetCenterOutput, "SetCenterOutput" }, // 2235519872
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayHFRatio, "SetDecayHFRatio" }, // 3067154440
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDecayTime, "SetDecayTime" }, // 2171014524
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDensity, "SetDensity" }, // 874151567
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetDiffusion, "SetDiffusion" }, // 1609778195
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontInput, "SetFrontInput" }, // 1270696104
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetFrontOutput, "SetFrontOutput" }, // 1911465340
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetHFReference, "SetHFReference" }, // 186894808
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearInput, "SetRearInput" }, // 4046973987
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRearOutput, "SetRearOutput" }, // 1500534921
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflections, "SetReflections" }, // 3385926934
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReflectionsDelay, "SetReflectionsDelay" }, // 2205435819
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverb, "SetReverb" }, // 3757749605
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetReverbDelay, "SetReverbDelay" }, // 2339540277
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoom, "SetRoom" }, // 2130188471
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbStatics_SetRoomHF, "SetRoomHF" }, // 1878880575
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectI3DL2ReverbStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "* UAtomBusEffectI3DL2ReverbStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectI3DL2ReverbStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::ClassParams = {
		&UAtomBusEffectI3DL2ReverbStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectI3DL2ReverbStatics>()
	{
		return UAtomBusEffectI3DL2ReverbStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectI3DL2ReverbStatics);
	UAtomBusEffectI3DL2ReverbStatics::~UAtomBusEffectI3DL2ReverbStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetCenterOutput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterOutput(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetRearOutput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRearOutput(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetFrontOutput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrontOutput(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetCenterInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterInput(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetRearInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRearInput(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetFrontInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrontInput(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetHFReference)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHFReference(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetDensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDensity(Z_Param_Percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetDiffusion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDiffusion(Z_Param_Percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetReverbDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbDelay(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetReverb)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverb(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetReflectionsDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReflectionsDelay(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetReflections)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReflections(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetDecayHFRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecayHFRatio(Z_Param_Ratio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetDecayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecayTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetRoomHF)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomHF(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetRoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoom(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectI3DL2ReverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectI3DL2ReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectI3DL2ReverbPreset::StaticRegisterNativesUAtomBusEffectI3DL2ReverbPreset()
	{
		UClass* Class = UAtomBusEffectI3DL2ReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCenterInput", &UAtomBusEffectI3DL2ReverbPreset::execSetCenterInput },
			{ "SetCenterOutput", &UAtomBusEffectI3DL2ReverbPreset::execSetCenterOutput },
			{ "SetDecayHFRatio", &UAtomBusEffectI3DL2ReverbPreset::execSetDecayHFRatio },
			{ "SetDecayTime", &UAtomBusEffectI3DL2ReverbPreset::execSetDecayTime },
			{ "SetDefaultSettings", &UAtomBusEffectI3DL2ReverbPreset::execSetDefaultSettings },
			{ "SetDensity", &UAtomBusEffectI3DL2ReverbPreset::execSetDensity },
			{ "SetDiffusion", &UAtomBusEffectI3DL2ReverbPreset::execSetDiffusion },
			{ "SetFrontInput", &UAtomBusEffectI3DL2ReverbPreset::execSetFrontInput },
			{ "SetFrontOutput", &UAtomBusEffectI3DL2ReverbPreset::execSetFrontOutput },
			{ "SetHFReference", &UAtomBusEffectI3DL2ReverbPreset::execSetHFReference },
			{ "SetRearInput", &UAtomBusEffectI3DL2ReverbPreset::execSetRearInput },
			{ "SetRearOutput", &UAtomBusEffectI3DL2ReverbPreset::execSetRearOutput },
			{ "SetReflections", &UAtomBusEffectI3DL2ReverbPreset::execSetReflections },
			{ "SetReflectionsDelay", &UAtomBusEffectI3DL2ReverbPreset::execSetReflectionsDelay },
			{ "SetReverb", &UAtomBusEffectI3DL2ReverbPreset::execSetReverb },
			{ "SetReverbDelay", &UAtomBusEffectI3DL2ReverbPreset::execSetReverbDelay },
			{ "SetRoom", &UAtomBusEffectI3DL2ReverbPreset::execSetRoom },
			{ "SetRoomHF", &UAtomBusEffectI3DL2ReverbPreset::execSetRoomHF },
			{ "SetSettings", &UAtomBusEffectI3DL2ReverbPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetCenterInput_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetCenterInput_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the center input.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the center input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetCenterInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetCenterInput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetCenterOutput_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetCenterOutput_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the center output.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the center output." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetCenterOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetCenterOutput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetDecayHFRatio_Parms
		{
			float Ratio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetDecayHFRatio_Parms, Ratio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::NewProp_Ratio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the ratio of high frequency attenuation to low frequency attenuation in the rear reverberation. */\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the ratio of high frequency attenuation to low frequency attenuation in the rear reverberation. */" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetDecayHFRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetDecayHFRatio_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetDecayTime_Parms
		{
			float Time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetDecayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the decay time of the rear reverberation in miliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the decay time of the rear reverberation in miliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetDecayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetDecayTime_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetDensity_Parms
		{
			float Percent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetDensity_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::NewProp_Percent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the modal density of the rear reverberation.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the modal density of the rear reverberation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetDensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetDensity_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetDiffusion_Parms
		{
			float Percent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetDiffusion_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::NewProp_Percent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the echo density of the rear reverberation.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the echo density of the rear reverberation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetDiffusion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetDiffusion_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetFrontInput_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetFrontInput_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the front input.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the front input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetFrontInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetFrontInput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetFrontOutput_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetFrontOutput_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the front output.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the front output." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetFrontOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetFrontOutput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetHFReference_Parms
		{
			float Frequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetHFReference_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "/** Set the reference frequency (high range) of Room HF. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the reference frequency (high range) of Room HF." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetHFReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetHFReference_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetRearInput_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetRearInput_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the rear input.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the rear input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetRearInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetRearInput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetRearOutput_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetRearOutput_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the rear output.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the rear output." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetRearOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetRearOutput_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetReflections_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetReflections_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the relefections in miliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the relefections in miliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetReflections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetReflections_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetReflectionsDelay_Parms
		{
			float Time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetReflectionsDelay_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the delay time of the relefections in miliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the delay time of the relefections in miliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetReflectionsDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetReflectionsDelay_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetReverb_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetReverb_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the volume of the rear reverberation.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the volume of the rear reverberation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetReverb", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetReverb_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetReverbDelay_Parms
		{
			float Time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetReverbDelay_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the delay time of the rear reverberation in miliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the delay time of the rear reverberation in miliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetReverbDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetReverbDelay_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetRoom_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetRoom_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Set the final output volume.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Set the final output volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetRoom_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetRoomHF_Parms
		{
			float Gain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetRoomHF_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// the volume of the reference frequency\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "the volume of the reference frequency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetRoomHF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetRoomHF_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics
	{
		struct AtomBusEffectI3DL2ReverbPreset_eventSetSettings_Parms
		{
			FAtomBusEffectI3DL2ReverbSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectI3DL2ReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|I3DL2Reverb" },
		{ "Comment", "// Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ToolTip", "Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::AtomBusEffectI3DL2ReverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectI3DL2ReverbPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_NoRegister()
	{
		return UAtomBusEffectI3DL2ReverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterInput, "SetCenterInput" }, // 2879315450
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetCenterOutput, "SetCenterOutput" }, // 2119632736
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayHFRatio, "SetDecayHFRatio" }, // 2716004989
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDecayTime, "SetDecayTime" }, // 3109035698
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDefaultSettings, "SetDefaultSettings" }, // 4119220816
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDensity, "SetDensity" }, // 2834448880
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetDiffusion, "SetDiffusion" }, // 2167331157
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontInput, "SetFrontInput" }, // 1370350850
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetFrontOutput, "SetFrontOutput" }, // 896781761
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetHFReference, "SetHFReference" }, // 1078221866
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearInput, "SetRearInput" }, // 3493754568
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRearOutput, "SetRearOutput" }, // 3201234044
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflections, "SetReflections" }, // 3690481358
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReflectionsDelay, "SetReflectionsDelay" }, // 2291386903
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverb, "SetReverb" }, // 2911814157
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetReverbDelay, "SetReverbDelay" }, // 2058474926
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoom, "SetRoom" }, // 544873529
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetRoomHF, "SetRoomHF" }, // 1855193596
		{ &Z_Construct_UFunction_UAtomBusEffectI3DL2ReverbPreset_SetSettings, "SetSettings" }, // 545364115
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectI3DL2ReverbPreset Class\n * Interactive 3D Audio Level 2 reverberation (I3DL2)\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectI3DL2ReverbPreset Class\n* Interactive 3D Audio Level 2 reverberation (I3DL2)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The reverb preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The reverb preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectI3DL2ReverbPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_Settings_MetaData)) }; // 2853248477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectI3DL2ReverbPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 2853248477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectI3DL2ReverbPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::ClassParams = {
		&UAtomBusEffectI3DL2ReverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectI3DL2ReverbPreset>()
	{
		return UAtomBusEffectI3DL2ReverbPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectI3DL2ReverbPreset);
	UAtomBusEffectI3DL2ReverbPreset::~UAtomBusEffectI3DL2ReverbPreset() {}
	void UAtomBusEffectI3DL2Reverb2Preset::StaticRegisterNativesUAtomBusEffectI3DL2Reverb2Preset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectI3DL2Reverb2Preset);
	UClass* Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_NoRegister()
	{
		return UAtomBusEffectI3DL2Reverb2Preset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectI3DL2Reverb2Preset Class\n * Interactive 3D Audio Level 2 reverberation version 2 (I3DL2 ver. 2)\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectI3DL2Reverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectI3DL2Reverb2Preset Class\n* Interactive 3D Audio Level 2 reverberation version 2 (I3DL2 ver. 2)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectI3DL2Reverb2Preset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics::ClassParams = {
		&UAtomBusEffectI3DL2Reverb2Preset::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectI3DL2Reverb2Preset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectI3DL2Reverb2Preset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectI3DL2Reverb2Preset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectI3DL2Reverb2Preset>()
	{
		return UAtomBusEffectI3DL2Reverb2Preset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectI3DL2Reverb2Preset);
	UAtomBusEffectI3DL2Reverb2Preset::~UAtomBusEffectI3DL2Reverb2Preset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectI3DL2ReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectI3DL2ReverbSettings_Statics::NewStructOps, TEXT("AtomBusEffectI3DL2ReverbSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectI3DL2ReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectI3DL2ReverbSettings), 2853248477U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectI3DL2ReverbStatics, UAtomBusEffectI3DL2ReverbStatics::StaticClass, TEXT("UAtomBusEffectI3DL2ReverbStatics"), &Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectI3DL2ReverbStatics), 4136882211U) },
		{ Z_Construct_UClass_UAtomBusEffectI3DL2ReverbPreset, UAtomBusEffectI3DL2ReverbPreset::StaticClass, TEXT("UAtomBusEffectI3DL2ReverbPreset"), &Z_Registration_Info_UClass_UAtomBusEffectI3DL2ReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectI3DL2ReverbPreset), 191047734U) },
		{ Z_Construct_UClass_UAtomBusEffectI3DL2Reverb2Preset, UAtomBusEffectI3DL2Reverb2Preset::StaticClass, TEXT("UAtomBusEffectI3DL2Reverb2Preset"), &Z_Registration_Info_UClass_UAtomBusEffectI3DL2Reverb2Preset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectI3DL2Reverb2Preset), 2237978553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_3347741638(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectI3DL2Reverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
