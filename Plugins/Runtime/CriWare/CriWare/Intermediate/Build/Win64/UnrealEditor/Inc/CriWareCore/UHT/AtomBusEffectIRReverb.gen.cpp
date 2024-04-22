// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectIRReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectIRReverb() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectIRReverbPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectIRReverbPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectIRReverbStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectIRReverbStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings;
class UScriptStruct* FAtomBusEffectIRReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectIRReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectIRReverbSettings>()
{
	return FAtomBusEffectIRReverbSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSeparationRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputSeparationRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontInputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontInputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterInputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterInputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundInputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundInputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundBackInputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundBackInputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontOutputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontOutputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterOutputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterOutputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundOutputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundOutputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundBackOutputGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundBackOutputGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IRIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IRIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectIRReverbSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "* FAtomBusEffectIRReverbSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectIRReverbSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_DryGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mix gain of the dry component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the mix gain of the dry component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_DryGain = { "DryGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, DryGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_DryGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_DryGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_WetGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the mix gain of the wet component of the IR reverb. \n\x09 * Applies to all wet components output by the effect, including reverberation that is already reverberating.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the mix gain of the wet component of the IR reverb.\nApplies to all wet components output by the effect, including reverberation that is already reverberating." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_WetGain = { "WetGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, WetGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_WetGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_WetGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_ReverbGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the gain applied when generating reverberation. \n\x09 * Unlike wet gain, it applies only to subsequent reverberations.\n\x09 * Does not apply to reverberations that are already echoing. \n\x09 * You can adjust the thickness of the reverberation for each IR by updating it when switching IRs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the gain applied when generating reverberation.\nUnlike wet gain, it applies only to subsequent reverberations.\nDoes not apply to reverberations that are already echoing.\nYou can adjust the thickness of the reverberation for each IR by updating it when switching IRs." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_ReverbGain = { "ReverbGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, ReverbGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_ReverbGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_ReverbGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_InputSeparationRatio_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the left-right separation when input signal is stereo-mixed. (0.0 is monoaural, 1.0 is fully spread between respective left and right channels.) */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the left-right separation when input signal is stereo-mixed. (0.0 is monoaural, 1.0 is fully spread between respective left and right channels.)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_InputSeparationRatio = { "InputSeparationRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, InputSeparationRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_InputSeparationRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_InputSeparationRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontInputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the input gain of the front (L, R channels) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the input gain of the front (L, R channels) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontInputGain = { "FrontInputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, FrontInputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontInputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontInputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterInputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the intput gain of the center (C channel) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the intput gain of the center (C channel) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterInputGain = { "CenterInputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, CenterInputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterInputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterInputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundInputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the input gain of the surround (surround L, surround R channels) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the input gain of the surround (surround L, surround R channels) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundInputGain = { "SurroundInputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, SurroundInputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundInputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundInputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackInputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the input gain of the surround Back (surround back L, surround back R channels) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the input gain of the surround Back (surround back L, surround back R channels) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackInputGain = { "SurroundBackInputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, SurroundBackInputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackInputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackInputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontOutputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the output gain of the front (L, R channels) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the output gain of the front (L, R channels) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontOutputGain = { "FrontOutputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, FrontOutputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontOutputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontOutputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterOutputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the output gain of the center (C channel) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the output gain of the center (C channel) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterOutputGain = { "CenterOutputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, CenterOutputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterOutputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterOutputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundOutputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the output gain of the surround (surround L, surround R channels) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the output gain of the surround (surround L, surround R channels) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundOutputGain = { "SurroundOutputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, SurroundOutputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundOutputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundOutputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackOutputGain_MetaData[] = {
		{ "Category", "IRReverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the output gain of the surround Back (surround back L, surround back R channels) component of the IR reverb. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the output gain of the surround Back (surround back L, surround back R channels) component of the IR reverb." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackOutputGain = { "SurroundBackOutputGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, SurroundBackOutputGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackOutputGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackOutputGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_IRIndex_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Specifies the index number of IR used for convolution from the saved list of IRs. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Specifies the index number of IR used for convolution from the saved list of IRs." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_IRIndex = { "IRIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectIRReverbSettings, IRIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_IRIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_IRIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectIRReverbSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectIRReverbSettings), &Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_DryGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_WetGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_ReverbGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_InputSeparationRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_FrontOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_CenterOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_SurroundBackOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_IRIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectIRReverbSettings",
		sizeof(FAtomBusEffectIRReverbSettings),
		alignof(FAtomBusEffectIRReverbSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetBypass(Z_Param_Out_ReverbSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetIRIndex)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_IRIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetIRIndex(Z_Param_Out_ReverbSettings,Z_Param_IRIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetSurroundBackOutputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurroundBackOutputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetSurroundBackOutputGain(Z_Param_Out_ReverbSettings,Z_Param_SurroundBackOutputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetSurroundOutputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurroundOutputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetSurroundOutputGain(Z_Param_Out_ReverbSettings,Z_Param_SurroundOutputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetCenterOutputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterOutputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetCenterOutputGain(Z_Param_Out_ReverbSettings,Z_Param_CenterOutputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetFrontOutputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrontOutputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetFrontOutputGain(Z_Param_Out_ReverbSettings,Z_Param_FrontOutputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetSurroundBackInputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurroundBackInputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetSurroundBackInputGain(Z_Param_Out_ReverbSettings,Z_Param_SurroundBackInputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetSurroundInputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SurroundInputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetSurroundInputGain(Z_Param_Out_ReverbSettings,Z_Param_SurroundInputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetCenterInputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterInputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetCenterInputGain(Z_Param_Out_ReverbSettings,Z_Param_CenterInputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetFrontInputGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrontInputGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetFrontInputGain(Z_Param_Out_ReverbSettings,Z_Param_FrontInputGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetInputSeparationRatio)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputSeparationRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetInputSeparationRatio(Z_Param_Out_ReverbSettings,Z_Param_InputSeparationRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetReverbGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReverbGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetReverbGain(Z_Param_Out_ReverbSettings,Z_Param_ReverbGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetWetGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetWetGain(Z_Param_Out_ReverbSettings,Z_Param_WetGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbStatics::execSetDryGain)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectIRReverbSettings*)Z_Param__Result=UAtomBusEffectIRReverbStatics::SetDryGain(Z_Param_Out_ReverbSettings,Z_Param_DryGain);
		P_NATIVE_END;
	}
	void UAtomBusEffectIRReverbStatics::StaticRegisterNativesUAtomBusEffectIRReverbStatics()
	{
		UClass* Class = UAtomBusEffectIRReverbStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectIRReverbStatics::execSetBypass },
			{ "SetCenterInputGain", &UAtomBusEffectIRReverbStatics::execSetCenterInputGain },
			{ "SetCenterOutputGain", &UAtomBusEffectIRReverbStatics::execSetCenterOutputGain },
			{ "SetDryGain", &UAtomBusEffectIRReverbStatics::execSetDryGain },
			{ "SetFrontInputGain", &UAtomBusEffectIRReverbStatics::execSetFrontInputGain },
			{ "SetFrontOutputGain", &UAtomBusEffectIRReverbStatics::execSetFrontOutputGain },
			{ "SetInputSeparationRatio", &UAtomBusEffectIRReverbStatics::execSetInputSeparationRatio },
			{ "SetIRIndex", &UAtomBusEffectIRReverbStatics::execSetIRIndex },
			{ "SetReverbGain", &UAtomBusEffectIRReverbStatics::execSetReverbGain },
			{ "SetSurroundBackInputGain", &UAtomBusEffectIRReverbStatics::execSetSurroundBackInputGain },
			{ "SetSurroundBackOutputGain", &UAtomBusEffectIRReverbStatics::execSetSurroundBackOutputGain },
			{ "SetSurroundInputGain", &UAtomBusEffectIRReverbStatics::execSetSurroundInputGain },
			{ "SetSurroundOutputGain", &UAtomBusEffectIRReverbStatics::execSetSurroundOutputGain },
			{ "SetWetGain", &UAtomBusEffectIRReverbStatics::execSetWetGain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetBypass_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			bool bBypass;
			FAtomBusEffectIRReverbSettings ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetBypass_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	void Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectIRReverbStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectIRReverbStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::AtomBusEffectIRReverbStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetCenterInputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float CenterInputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterInputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetCenterInputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::NewProp_CenterInputGain = { "CenterInputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetCenterInputGain_Parms, CenterInputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetCenterInputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::NewProp_CenterInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetCenterInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::AtomBusEffectIRReverbStatics_eventSetCenterInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetCenterOutputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float CenterOutputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterOutputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetCenterOutputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::NewProp_CenterOutputGain = { "CenterOutputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetCenterOutputGain_Parms, CenterOutputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetCenterOutputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::NewProp_CenterOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetCenterOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::AtomBusEffectIRReverbStatics_eventSetCenterOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetDryGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float DryGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetDryGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::NewProp_DryGain = { "DryGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetDryGain_Parms, DryGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetDryGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::NewProp_DryGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetDryGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::AtomBusEffectIRReverbStatics_eventSetDryGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetFrontInputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float FrontInputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontInputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetFrontInputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::NewProp_FrontInputGain = { "FrontInputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetFrontInputGain_Parms, FrontInputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetFrontInputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::NewProp_FrontInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetFrontInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::AtomBusEffectIRReverbStatics_eventSetFrontInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetFrontOutputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float FrontOutputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontOutputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetFrontOutputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::NewProp_FrontOutputGain = { "FrontOutputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetFrontOutputGain_Parms, FrontOutputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetFrontOutputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::NewProp_FrontOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetFrontOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::AtomBusEffectIRReverbStatics_eventSetFrontOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetInputSeparationRatio_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float InputSeparationRatio;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputSeparationRatio;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetInputSeparationRatio_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::NewProp_InputSeparationRatio = { "InputSeparationRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetInputSeparationRatio_Parms, InputSeparationRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetInputSeparationRatio_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::NewProp_InputSeparationRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetInputSeparationRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::AtomBusEffectIRReverbStatics_eventSetInputSeparationRatio_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetIRIndex_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			int32 IRIndex;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IRIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetIRIndex_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::NewProp_IRIndex = { "IRIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetIRIndex_Parms, IRIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetIRIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::NewProp_IRIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetIRIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::AtomBusEffectIRReverbStatics_eventSetIRIndex_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetReverbGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float ReverbGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetReverbGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::NewProp_ReverbGain = { "ReverbGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetReverbGain_Parms, ReverbGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetReverbGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::NewProp_ReverbGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetReverbGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::AtomBusEffectIRReverbStatics_eventSetReverbGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetSurroundBackInputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float SurroundBackInputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundBackInputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundBackInputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::NewProp_SurroundBackInputGain = { "SurroundBackInputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundBackInputGain_Parms, SurroundBackInputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundBackInputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::NewProp_SurroundBackInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetSurroundBackInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::AtomBusEffectIRReverbStatics_eventSetSurroundBackInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetSurroundBackOutputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float SurroundBackOutputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundBackOutputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundBackOutputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::NewProp_SurroundBackOutputGain = { "SurroundBackOutputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundBackOutputGain_Parms, SurroundBackOutputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundBackOutputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::NewProp_SurroundBackOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetSurroundBackOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::AtomBusEffectIRReverbStatics_eventSetSurroundBackOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetSurroundInputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float SurroundInputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundInputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundInputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::NewProp_SurroundInputGain = { "SurroundInputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundInputGain_Parms, SurroundInputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundInputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::NewProp_SurroundInputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetSurroundInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::AtomBusEffectIRReverbStatics_eventSetSurroundInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetSurroundOutputGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float SurroundOutputGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundOutputGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundOutputGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::NewProp_SurroundOutputGain = { "SurroundOutputGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundOutputGain_Parms, SurroundOutputGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetSurroundOutputGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::NewProp_SurroundOutputGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetSurroundOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::AtomBusEffectIRReverbStatics_eventSetSurroundOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics
	{
		struct AtomBusEffectIRReverbStatics_eventSetWetGain_Parms
		{
			FAtomBusEffectIRReverbSettings ReverbSettings;
			float WetGain;
			FAtomBusEffectIRReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetGain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetWetGain_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::NewProp_WetGain = { "WetGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetWetGain_Parms, WetGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbStatics_eventSetWetGain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::NewProp_WetGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbStatics, nullptr, "SetWetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::AtomBusEffectIRReverbStatics_eventSetWetGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectIRReverbStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectIRReverbStatics_NoRegister()
	{
		return UAtomBusEffectIRReverbStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetBypass, "SetBypass" }, // 864895274
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterInputGain, "SetCenterInputGain" }, // 2551775829
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetCenterOutputGain, "SetCenterOutputGain" }, // 1869274115
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetDryGain, "SetDryGain" }, // 1037402222
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontInputGain, "SetFrontInputGain" }, // 295587120
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetFrontOutputGain, "SetFrontOutputGain" }, // 2588147594
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetInputSeparationRatio, "SetInputSeparationRatio" }, // 2133208476
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetIRIndex, "SetIRIndex" }, // 838201281
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetReverbGain, "SetReverbGain" }, // 3016108262
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackInputGain, "SetSurroundBackInputGain" }, // 500235772
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundBackOutputGain, "SetSurroundBackOutputGain" }, // 2969171205
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundInputGain, "SetSurroundInputGain" }, // 2823807795
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetSurroundOutputGain, "SetSurroundOutputGain" }, // 2309294133
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbStatics_SetWetGain, "SetWetGain" }, // 489675326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectIRReverbStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "* UAtomBusEffectIRReverbStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectIRReverbStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::ClassParams = {
		&UAtomBusEffectIRReverbStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectIRReverbStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectIRReverbStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectIRReverbStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectIRReverbStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectIRReverbStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectIRReverbStatics>()
	{
		return UAtomBusEffectIRReverbStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectIRReverbStatics);
	UAtomBusEffectIRReverbStatics::~UAtomBusEffectIRReverbStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execGetIRIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIRIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetSurroundBackOutputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurroundBackOutputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetSurroundOutputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurroundOutputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetCenterOutputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterOutputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetFrontOutputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrontOutputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetSurroundBackInputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurroundBackInputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetSurroundInputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurroundInputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetCenterInputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterInputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetFrontInputGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrontInputGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetInputSeparationRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputSeparationRatio(Z_Param_Ratio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetReverbGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetWetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetDryGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryGain(Z_Param_Gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectIRReverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectIRReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectIRReverbPreset::StaticRegisterNativesUAtomBusEffectIRReverbPreset()
	{
		UClass* Class = UAtomBusEffectIRReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIRIndex", &UAtomBusEffectIRReverbPreset::execGetIRIndex },
			{ "SetCenterInputGain", &UAtomBusEffectIRReverbPreset::execSetCenterInputGain },
			{ "SetCenterOutputGain", &UAtomBusEffectIRReverbPreset::execSetCenterOutputGain },
			{ "SetDefaultSettings", &UAtomBusEffectIRReverbPreset::execSetDefaultSettings },
			{ "SetDryGain", &UAtomBusEffectIRReverbPreset::execSetDryGain },
			{ "SetFrontInputGain", &UAtomBusEffectIRReverbPreset::execSetFrontInputGain },
			{ "SetFrontOutputGain", &UAtomBusEffectIRReverbPreset::execSetFrontOutputGain },
			{ "SetInputSeparationRatio", &UAtomBusEffectIRReverbPreset::execSetInputSeparationRatio },
			{ "SetReverbGain", &UAtomBusEffectIRReverbPreset::execSetReverbGain },
			{ "SetSettings", &UAtomBusEffectIRReverbPreset::execSetSettings },
			{ "SetSurroundBackInputGain", &UAtomBusEffectIRReverbPreset::execSetSurroundBackInputGain },
			{ "SetSurroundBackOutputGain", &UAtomBusEffectIRReverbPreset::execSetSurroundBackOutputGain },
			{ "SetSurroundInputGain", &UAtomBusEffectIRReverbPreset::execSetSurroundInputGain },
			{ "SetSurroundOutputGain", &UAtomBusEffectIRReverbPreset::execSetSurroundOutputGain },
			{ "SetWetGain", &UAtomBusEffectIRReverbPreset::execSetWetGain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventGetIRIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventGetIRIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Get the maximum pre delay time possible.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Get the maximum pre delay time possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "GetIRIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::AtomBusEffectIRReverbPreset_eventGetIRIndex_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetCenterInputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetCenterInputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the input gain of the center channel.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the input gain of the center channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetCenterInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::AtomBusEffectIRReverbPreset_eventSetCenterInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetCenterOutputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetCenterOutputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the output gain of the center channel.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the output gain of the center channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetCenterOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::AtomBusEffectIRReverbPreset_eventSetCenterOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectIRReverbSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::AtomBusEffectIRReverbPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetDryGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetDryGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the mix gain of the dry component.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the mix gain of the dry component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetDryGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::AtomBusEffectIRReverbPreset_eventSetDryGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetFrontInputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetFrontInputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the input gain of the front channels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the input gain of the front channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetFrontInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::AtomBusEffectIRReverbPreset_eventSetFrontInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetFrontOutputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetFrontOutputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the output gain of the front channels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the output gain of the front channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetFrontOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::AtomBusEffectIRReverbPreset_eventSetFrontOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetInputSeparationRatio_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetInputSeparationRatio_Parms, Ratio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::NewProp_Ratio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the left-right separation when input signal is stereo-mixed.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the left-right separation when input signal is stereo-mixed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetInputSeparationRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::AtomBusEffectIRReverbPreset_eventSetInputSeparationRatio_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetReverbGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetReverbGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the gain applied when generating reverberation.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the gain applied when generating reverberation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetReverbGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::AtomBusEffectIRReverbPreset_eventSetReverbGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetSettings_Parms
		{
			FAtomBusEffectIRReverbSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::AtomBusEffectIRReverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetSurroundBackInputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetSurroundBackInputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the input gain of the surround back channels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the input gain of the surround back channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetSurroundBackInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::AtomBusEffectIRReverbPreset_eventSetSurroundBackInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetSurroundBackOutputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetSurroundBackOutputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the output gain of the surround back channels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the output gain of the surround back channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetSurroundBackOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::AtomBusEffectIRReverbPreset_eventSetSurroundBackOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetSurroundInputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetSurroundInputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the input gain of the surround channels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the input gain of the surround channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetSurroundInputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::AtomBusEffectIRReverbPreset_eventSetSurroundInputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetSurroundOutputGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetSurroundOutputGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the output gain of the surround channels.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the output gain of the surround channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetSurroundOutputGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::AtomBusEffectIRReverbPreset_eventSetSurroundOutputGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics
	{
		struct AtomBusEffectIRReverbPreset_eventSetWetGain_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectIRReverbPreset_eventSetWetGain_Parms, Gain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::NewProp_Gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|IRReverb" },
		{ "Comment", "// Set the mix gain of the wet component.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ToolTip", "Set the mix gain of the wet component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectIRReverbPreset, nullptr, "SetWetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::AtomBusEffectIRReverbPreset_eventSetWetGain_Parms), Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectIRReverbPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectIRReverbPreset_NoRegister()
	{
		return UAtomBusEffectIRReverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_GetIRIndex, "GetIRIndex" }, // 2731927006
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterInputGain, "SetCenterInputGain" }, // 1860795376
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetCenterOutputGain, "SetCenterOutputGain" }, // 2396207688
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDefaultSettings, "SetDefaultSettings" }, // 3197826608
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetDryGain, "SetDryGain" }, // 362303814
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontInputGain, "SetFrontInputGain" }, // 1051739140
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetFrontOutputGain, "SetFrontOutputGain" }, // 1273602976
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetInputSeparationRatio, "SetInputSeparationRatio" }, // 466141291
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetReverbGain, "SetReverbGain" }, // 308919831
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSettings, "SetSettings" }, // 3570990607
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackInputGain, "SetSurroundBackInputGain" }, // 1431273926
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundBackOutputGain, "SetSurroundBackOutputGain" }, // 3566517216
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundInputGain, "SetSurroundInputGain" }, // 1112941252
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetSurroundOutputGain, "SetSurroundOutputGain" }, // 3864867947
		{ &Z_Construct_UFunction_UAtomBusEffectIRReverbPreset_SetWetGain, "SetWetGain" }, // 2324328096
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectIRReverbPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectIRReverbPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The reverb preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The reverb preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectIRReverbPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_Settings_MetaData)) }; // 741904732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectIRReverb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectIRReverbPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 741904732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectIRReverbPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::ClassParams = {
		&UAtomBusEffectIRReverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectIRReverbPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectIRReverbPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectIRReverbPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectIRReverbPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectIRReverbPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectIRReverbPreset>()
	{
		return UAtomBusEffectIRReverbPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectIRReverbPreset);
	UAtomBusEffectIRReverbPreset::~UAtomBusEffectIRReverbPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectIRReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectIRReverbSettings_Statics::NewStructOps, TEXT("AtomBusEffectIRReverbSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectIRReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectIRReverbSettings), 741904732U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectIRReverbStatics, UAtomBusEffectIRReverbStatics::StaticClass, TEXT("UAtomBusEffectIRReverbStatics"), &Z_Registration_Info_UClass_UAtomBusEffectIRReverbStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectIRReverbStatics), 2658447634U) },
		{ Z_Construct_UClass_UAtomBusEffectIRReverbPreset, UAtomBusEffectIRReverbPreset::StaticClass, TEXT("UAtomBusEffectIRReverbPreset"), &Z_Registration_Info_UClass_UAtomBusEffectIRReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectIRReverbPreset), 295078951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_832739263(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectIRReverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
