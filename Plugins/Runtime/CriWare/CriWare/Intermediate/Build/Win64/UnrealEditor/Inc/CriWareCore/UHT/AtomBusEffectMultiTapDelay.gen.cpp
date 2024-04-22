// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectMultiTapDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectMultiTapDelay() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTapDelay();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomTapDelay;
class UScriptStruct* FAtomTapDelay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomTapDelay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomTapDelay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTapDelay, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomTapDelay"));
	}
	return Z_Registration_Info_UScriptStruct_AtomTapDelay.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomTapDelay>()
{
	return FAtomTapDelay::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomTapDelay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Azimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Azimuth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTapDelay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * FAtomTapDelay Structure\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "* FAtomTapDelay Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomTapDelay>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Tap Delay" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Specifies the tap delay time in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Specifies the tap delay time in milliseconds." },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomTapDelay, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Tap Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the level of this tap delay. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Specifies the level of this tap delay." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomTapDelay, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Azimuth_MetaData[] = {
		{ "Category", "Tap Delay" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "/** Specifies the horizontal 3d panning angle of this tap delay. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Specifies the horizontal 3d panning angle of this tap delay." },
		{ "UIMax", "180.0" },
		{ "UIMin", "-180.0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Azimuth = { "Azimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomTapDelay, Azimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Azimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Azimuth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "Tap Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the tap delay ouput feedback level. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Specifies the tap delay ouput feedback level." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomTapDelay, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Feedback_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomTapDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Azimuth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewProp_Feedback,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomTapDelay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomTapDelay",
		sizeof(FAtomTapDelay),
		alignof(FAtomTapDelay),
		Z_Construct_UScriptStruct_FAtomTapDelay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTapDelay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomTapDelay()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomTapDelay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomTapDelay.InnerSingleton, Z_Construct_UScriptStruct_FAtomTapDelay_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomTapDelay.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings;
class UScriptStruct* FAtomBusEffectMultiTapDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectMultiTapDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectMultiTapDelaySettings>()
{
	return FAtomBusEffectMultiTapDelaySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TapDelays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapDelays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TapDelays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectMultiTapDelaySettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "* FAtomBusEffectMultiTapDelaySettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectMultiTapDelaySettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_TapDelays_Inner = { "TapDelays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomTapDelay, METADATA_PARAMS(nullptr, 0) }; // 337859029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_TapDelays_MetaData[] = {
		{ "Category", "Multi-Tap Delay" },
		{ "Comment", "/** Specifies the tap delays of the multi-tap delay. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Specifies the tap delays of the multi-tap delay." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_TapDelays = { "TapDelays", nullptr, (EPropertyFlags)0x0020080000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectMultiTapDelaySettings, TapDelays), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_TapDelays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_TapDelays_MetaData)) }; // 337859029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_MaximumDelayTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "1.0" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectMultiTapDelaySettings, MaximumDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_MaximumDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_MaximumDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectMultiTapDelaySettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectMultiTapDelaySettings), &Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_TapDelays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_TapDelays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectMultiTapDelaySettings",
		sizeof(FAtomBusEffectMultiTapDelaySettings),
		alignof(FAtomBusEffectMultiTapDelaySettings),
		Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_MultiTapDelaySettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiTapDelaySettings*)Z_Param__Result=UAtomBusEffectMultiTapDelayStatics::SetBypass(Z_Param_Out_MultiTapDelaySettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayStatics::execSetMaximumDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_MultiTapDelaySettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiTapDelaySettings*)Z_Param__Result=UAtomBusEffectMultiTapDelayStatics::SetMaximumDelayTime(Z_Param_Out_MultiTapDelaySettings,Z_Param_MaximumDelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayStatics::execSetTapFeedback)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_MultiTapDelaySettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiTapDelaySettings*)Z_Param__Result=UAtomBusEffectMultiTapDelayStatics::SetTapFeedback(Z_Param_Out_MultiTapDelaySettings,Z_Param_TapIndex,Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayStatics::execSetTapAzimuth)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_MultiTapDelaySettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Azimuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiTapDelaySettings*)Z_Param__Result=UAtomBusEffectMultiTapDelayStatics::SetTapAzimuth(Z_Param_Out_MultiTapDelaySettings,Z_Param_TapIndex,Z_Param_Azimuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayStatics::execSetTapLevel)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_MultiTapDelaySettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiTapDelaySettings*)Z_Param__Result=UAtomBusEffectMultiTapDelayStatics::SetTapLevel(Z_Param_Out_MultiTapDelaySettings,Z_Param_TapIndex,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayStatics::execSetTapDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_MultiTapDelaySettings);
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMultiTapDelaySettings*)Z_Param__Result=UAtomBusEffectMultiTapDelayStatics::SetTapDelayTime(Z_Param_Out_MultiTapDelaySettings,Z_Param_TapIndex,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	void UAtomBusEffectMultiTapDelayStatics::StaticRegisterNativesUAtomBusEffectMultiTapDelayStatics()
	{
		UClass* Class = UAtomBusEffectMultiTapDelayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectMultiTapDelayStatics::execSetBypass },
			{ "SetMaximumDelayTime", &UAtomBusEffectMultiTapDelayStatics::execSetMaximumDelayTime },
			{ "SetTapAzimuth", &UAtomBusEffectMultiTapDelayStatics::execSetTapAzimuth },
			{ "SetTapDelayTime", &UAtomBusEffectMultiTapDelayStatics::execSetTapDelayTime },
			{ "SetTapFeedback", &UAtomBusEffectMultiTapDelayStatics::execSetTapFeedback },
			{ "SetTapLevel", &UAtomBusEffectMultiTapDelayStatics::execSetTapLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics
	{
		struct AtomBusEffectMultiTapDelayStatics_eventSetBypass_Parms
		{
			FAtomBusEffectMultiTapDelaySettings MultiTapDelaySettings;
			bool bBypass;
			FAtomBusEffectMultiTapDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiTapDelaySettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_MultiTapDelaySettings = { "MultiTapDelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetBypass_Parms, MultiTapDelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	void Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectMultiTapDelayStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectMultiTapDelayStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_MultiTapDelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::AtomBusEffectMultiTapDelayStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics
	{
		struct AtomBusEffectMultiTapDelayStatics_eventSetMaximumDelayTime_Parms
		{
			FAtomBusEffectMultiTapDelaySettings MultiTapDelaySettings;
			float MaximumDelayTime;
			FAtomBusEffectMultiTapDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiTapDelaySettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::NewProp_MultiTapDelaySettings = { "MultiTapDelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetMaximumDelayTime_Parms, MultiTapDelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime = { "MaximumDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetMaximumDelayTime_Parms, MaximumDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetMaximumDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::NewProp_MultiTapDelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::NewProp_MaximumDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics, nullptr, "SetMaximumDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::AtomBusEffectMultiTapDelayStatics_eventSetMaximumDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics
	{
		struct AtomBusEffectMultiTapDelayStatics_eventSetTapAzimuth_Parms
		{
			FAtomBusEffectMultiTapDelaySettings MultiTapDelaySettings;
			int32 TapIndex;
			float Azimuth;
			FAtomBusEffectMultiTapDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiTapDelaySettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Azimuth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_MultiTapDelaySettings = { "MultiTapDelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapAzimuth_Parms, MultiTapDelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapAzimuth_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_Azimuth = { "Azimuth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapAzimuth_Parms, Azimuth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapAzimuth_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_MultiTapDelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_Azimuth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics, nullptr, "SetTapAzimuth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::AtomBusEffectMultiTapDelayStatics_eventSetTapAzimuth_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics
	{
		struct AtomBusEffectMultiTapDelayStatics_eventSetTapDelayTime_Parms
		{
			FAtomBusEffectMultiTapDelaySettings MultiTapDelaySettings;
			int32 TapIndex;
			float DelayTime;
			FAtomBusEffectMultiTapDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiTapDelaySettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_MultiTapDelaySettings = { "MultiTapDelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapDelayTime_Parms, MultiTapDelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapDelayTime_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapDelayTime_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_MultiTapDelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics, nullptr, "SetTapDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::AtomBusEffectMultiTapDelayStatics_eventSetTapDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics
	{
		struct AtomBusEffectMultiTapDelayStatics_eventSetTapFeedback_Parms
		{
			FAtomBusEffectMultiTapDelaySettings MultiTapDelaySettings;
			int32 TapIndex;
			float Feedback;
			FAtomBusEffectMultiTapDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiTapDelaySettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_MultiTapDelaySettings = { "MultiTapDelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapFeedback_Parms, MultiTapDelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapFeedback_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapFeedback_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_MultiTapDelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics, nullptr, "SetTapFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::AtomBusEffectMultiTapDelayStatics_eventSetTapFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics
	{
		struct AtomBusEffectMultiTapDelayStatics_eventSetTapLevel_Parms
		{
			FAtomBusEffectMultiTapDelaySettings MultiTapDelaySettings;
			int32 TapIndex;
			float Level;
			FAtomBusEffectMultiTapDelaySettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiTapDelaySettings;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_MultiTapDelaySettings = { "MultiTapDelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapLevel_Parms, MultiTapDelaySettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapLevel_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayStatics_eventSetTapLevel_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(nullptr, 0) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_MultiTapDelaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics, nullptr, "SetTapLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::AtomBusEffectMultiTapDelayStatics_eventSetTapLevel_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectMultiTapDelayStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_NoRegister()
	{
		return UAtomBusEffectMultiTapDelayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetBypass, "SetBypass" }, // 2154069572
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetMaximumDelayTime, "SetMaximumDelayTime" }, // 3689065332
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapAzimuth, "SetTapAzimuth" }, // 295849097
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapDelayTime, "SetTapDelayTime" }, // 2656753984
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapFeedback, "SetTapFeedback" }, // 2880974847
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayStatics_SetTapLevel, "SetTapLevel" }, // 906211173
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectMultiTapDelayStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "* UAtomBusEffectMultiTapDelayStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectMultiTapDelayStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::ClassParams = {
		&UAtomBusEffectMultiTapDelayStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectMultiTapDelayStatics>()
	{
		return UAtomBusEffectMultiTapDelayStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectMultiTapDelayStatics);
	UAtomBusEffectMultiTapDelayStatics::~UAtomBusEffectMultiTapDelayStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayPreset::execGetMaxDelayTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDelayTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayPreset::execSetTapFeedback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTapFeedback(Z_Param_TapIndex,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayPreset::execSetTapAzimuth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTapAzimuth(Z_Param_TapIndex,Z_Param_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayPreset::execSetTapLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTapLevel(Z_Param_TapIndex,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayPreset::execSetTapDelayTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TapIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTapDelayTime(Z_Param_TapIndex,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMultiTapDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMultiTapDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectMultiTapDelayPreset::StaticRegisterNativesUAtomBusEffectMultiTapDelayPreset()
	{
		UClass* Class = UAtomBusEffectMultiTapDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxDelayTime", &UAtomBusEffectMultiTapDelayPreset::execGetMaxDelayTime },
			{ "SetDefaultSettings", &UAtomBusEffectMultiTapDelayPreset::execSetDefaultSettings },
			{ "SetSettings", &UAtomBusEffectMultiTapDelayPreset::execSetSettings },
			{ "SetTapAzimuth", &UAtomBusEffectMultiTapDelayPreset::execSetTapAzimuth },
			{ "SetTapDelayTime", &UAtomBusEffectMultiTapDelayPreset::execSetTapDelayTime },
			{ "SetTapFeedback", &UAtomBusEffectMultiTapDelayPreset::execSetTapFeedback },
			{ "SetTapLevel", &UAtomBusEffectMultiTapDelayPreset::execSetTapLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics
	{
		struct AtomBusEffectMultiTapDelayPreset_eventGetMaxDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventGetMaxDelayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "Comment", "// Get the maximum delay time possible.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Get the maximum delay time possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, nullptr, "GetMaxDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::AtomBusEffectMultiTapDelayPreset_eventGetMaxDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectMultiTapDelayPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectMultiTapDelaySettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::AtomBusEffectMultiTapDelayPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics
	{
		struct AtomBusEffectMultiTapDelayPreset_eventSetSettings_Parms
		{
			FAtomBusEffectMultiTapDelaySettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "Comment", "// Sets runtime multi-tap delay settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Sets runtime multi-tap delay settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::AtomBusEffectMultiTapDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics
	{
		struct AtomBusEffectMultiTapDelayPreset_eventSetTapAzimuth_Parms
		{
			int32 TapIndex;
			float Angle;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapAzimuth_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapAzimuth_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::NewProp_Angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "Comment", "// Set the horizontal 3d panning angle in degree [-180, 180] of the tap.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Set the horizontal 3d panning angle in degree [-180, 180] of the tap." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, nullptr, "SetTapAzimuth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::AtomBusEffectMultiTapDelayPreset_eventSetTapAzimuth_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics
	{
		struct AtomBusEffectMultiTapDelayPreset_eventSetTapDelayTime_Parms
		{
			int32 TapIndex;
			float Time;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapDelayTime_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapDelayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "Comment", "// Set the delay time of the tap in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Set the delay time of the tap in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, nullptr, "SetTapDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::AtomBusEffectMultiTapDelayPreset_eventSetTapDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics
	{
		struct AtomBusEffectMultiTapDelayPreset_eventSetTapFeedback_Parms
		{
			int32 TapIndex;
			float Level;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapFeedback_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapFeedback_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "Comment", "// Set the output feedback gain of the tap.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Set the output feedback gain of the tap." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, nullptr, "SetTapFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::AtomBusEffectMultiTapDelayPreset_eventSetTapFeedback_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics
	{
		struct AtomBusEffectMultiTapDelayPreset_eventSetTapLevel_Parms
		{
			int32 TapIndex;
			float Level;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TapIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::NewProp_TapIndex = { "TapIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapLevel_Parms, TapIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMultiTapDelayPreset_eventSetTapLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::NewProp_TapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Multi-tap Delay" },
		{ "Comment", "// Set the tap level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ToolTip", "Set the tap level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, nullptr, "SetTapLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::AtomBusEffectMultiTapDelayPreset_eventSetTapLevel_Parms), Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectMultiTapDelayPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_NoRegister()
	{
		return UAtomBusEffectMultiTapDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_GetMaxDelayTime, "GetMaxDelayTime" }, // 2389315886
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetDefaultSettings, "SetDefaultSettings" }, // 1110568488
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetSettings, "SetSettings" }, // 208328597
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapAzimuth, "SetTapAzimuth" }, // 1794181484
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapDelayTime, "SetTapDelayTime" }, // 3370841768
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapFeedback, "SetTapFeedback" }, // 1660439650
		{ &Z_Construct_UFunction_UAtomBusEffectMultiTapDelayPreset_SetTapLevel, "SetTapLevel" }, // 1927622627
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectMultiTapDelayPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectMultiTapDelayPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The MultiBandEQ preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The MultiBandEQ preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectMultiTapDelayPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_Settings_MetaData)) }; // 4002476350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMultiTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectMultiTapDelayPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 4002476350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectMultiTapDelayPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::ClassParams = {
		&UAtomBusEffectMultiTapDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectMultiTapDelayPreset>()
	{
		return UAtomBusEffectMultiTapDelayPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectMultiTapDelayPreset);
	UAtomBusEffectMultiTapDelayPreset::~UAtomBusEffectMultiTapDelayPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_Statics::ScriptStructInfo[] = {
		{ FAtomTapDelay::StaticStruct, Z_Construct_UScriptStruct_FAtomTapDelay_Statics::NewStructOps, TEXT("AtomTapDelay"), &Z_Registration_Info_UScriptStruct_AtomTapDelay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomTapDelay), 337859029U) },
		{ FAtomBusEffectMultiTapDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectMultiTapDelaySettings_Statics::NewStructOps, TEXT("AtomBusEffectMultiTapDelaySettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectMultiTapDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectMultiTapDelaySettings), 4002476350U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectMultiTapDelayStatics, UAtomBusEffectMultiTapDelayStatics::StaticClass, TEXT("UAtomBusEffectMultiTapDelayStatics"), &Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectMultiTapDelayStatics), 61717529U) },
		{ Z_Construct_UClass_UAtomBusEffectMultiTapDelayPreset, UAtomBusEffectMultiTapDelayPreset::StaticClass, TEXT("UAtomBusEffectMultiTapDelayPreset"), &Z_Registration_Info_UClass_UAtomBusEffectMultiTapDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectMultiTapDelayPreset), 1365723655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_451390255(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMultiTapDelay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
