// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectReverb() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectReverbPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectReverbPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectReverbStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectReverbStatics_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings;
class UScriptStruct* FAtomBusEffectReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectReverbSettings>()
{
	return FAtomBusEffectReverbSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPreDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPreDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectReverbSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "* FAtomBusEffectReverbSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectReverbSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_ReverbTime_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Specifies the reverb time in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Specifies the reverb time in milliseconds." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_ReverbTime = { "ReverbTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectReverbSettings, ReverbTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_ReverbTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_ReverbTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_RoomSize_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Specifies the room size of the reverb in meters. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Specifies the room size of the reverb in meters." },
		{ "UIMax", "100.0" },
		{ "UIMin", "1.0" },
		{ "Units", "m" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectReverbSettings, RoomSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_RoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_RoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_PreDelayTime_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Specifies the reverb pre-delay time in milliseconds. */" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Specifies the reverb pre-delay time in milliseconds." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_PreDelayTime = { "PreDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectReverbSettings, PreDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_PreDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_PreDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_LowCutoff_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the low cutoff frequency of the reverb output in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the low cutoff frequency of the reverb output in hertz." },
		{ "UIMax", "24000.0" },
		{ "UIMin", "0.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_LowCutoff = { "LowCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectReverbSettings, LowCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_LowCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_LowCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_HighCutoff_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "24000.0" },
		{ "ClampMin", "8000.0" },
		{ "Comment", "/** Specifies the high cutoff frequency of the reverb output in hertz. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "SliderExponent", "10.0" },
		{ "ToolTip", "Specifies the high cutoff frequency of the reverb output in hertz." },
		{ "UIMax", "24000.0" },
		{ "UIMin", "8000.0" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_HighCutoff = { "HighCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectReverbSettings, HighCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_HighCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_HighCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumRoomSize_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "//~ End effect parameters\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "1.0" },
		{ "Units", "m" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumRoomSize = { "MaximumRoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectReverbSettings, MaximumRoomSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumRoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumRoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumPreDelayTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "10.0" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumPreDelayTime = { "MaximumPreDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectReverbSettings, MaximumPreDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumPreDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumPreDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectReverbSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectReverbSettings), &Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_ReverbTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_RoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_PreDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_LowCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_HighCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumRoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_MaximumPreDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectReverbSettings",
		sizeof(FAtomBusEffectReverbSettings),
		alignof(FAtomBusEffectReverbSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetBypass(Z_Param_Out_ReverbSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetMaximumPreDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumPreDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetMaximumPreDelayTime(Z_Param_Out_ReverbSettings,Z_Param_MaximumPreDelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetMaximumRoomSize)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumRoomSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetMaximumRoomSize(Z_Param_Out_ReverbSettings,Z_Param_MaximumRoomSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetHighCutoff)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HighCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetHighCutoff(Z_Param_Out_ReverbSettings,Z_Param_HighCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetLowCutoff)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LowCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetLowCutoff(Z_Param_Out_ReverbSettings,Z_Param_LowCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetPreDelayTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PreDelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetPreDelayTime(Z_Param_Out_ReverbSettings,Z_Param_PreDelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetRoomSize)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RoomSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetRoomSize(Z_Param_Out_ReverbSettings,Z_Param_RoomSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbStatics::execSetReverbTime)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_ReverbSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReverbTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectReverbSettings*)Z_Param__Result=UAtomBusEffectReverbStatics::SetReverbTime(Z_Param_Out_ReverbSettings,Z_Param_ReverbTime);
		P_NATIVE_END;
	}
	void UAtomBusEffectReverbStatics::StaticRegisterNativesUAtomBusEffectReverbStatics()
	{
		UClass* Class = UAtomBusEffectReverbStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectReverbStatics::execSetBypass },
			{ "SetHighCutoff", &UAtomBusEffectReverbStatics::execSetHighCutoff },
			{ "SetLowCutoff", &UAtomBusEffectReverbStatics::execSetLowCutoff },
			{ "SetMaximumPreDelayTime", &UAtomBusEffectReverbStatics::execSetMaximumPreDelayTime },
			{ "SetMaximumRoomSize", &UAtomBusEffectReverbStatics::execSetMaximumRoomSize },
			{ "SetPreDelayTime", &UAtomBusEffectReverbStatics::execSetPreDelayTime },
			{ "SetReverbTime", &UAtomBusEffectReverbStatics::execSetReverbTime },
			{ "SetRoomSize", &UAtomBusEffectReverbStatics::execSetRoomSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetBypass_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			bool bBypass;
			FAtomBusEffectReverbSettings ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetBypass_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	void Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectReverbStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectReverbStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::AtomBusEffectReverbStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetHighCutoff_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			float HighCutoff;
			FAtomBusEffectReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighCutoff;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetHighCutoff_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::NewProp_HighCutoff = { "HighCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetHighCutoff_Parms, HighCutoff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetHighCutoff_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::NewProp_HighCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetHighCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::AtomBusEffectReverbStatics_eventSetHighCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetLowCutoff_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			float LowCutoff;
			FAtomBusEffectReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowCutoff;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetLowCutoff_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::NewProp_LowCutoff = { "LowCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetLowCutoff_Parms, LowCutoff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetLowCutoff_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::NewProp_LowCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetLowCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::AtomBusEffectReverbStatics_eventSetLowCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetMaximumPreDelayTime_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			float MaximumPreDelayTime;
			FAtomBusEffectReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPreDelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetMaximumPreDelayTime_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::NewProp_MaximumPreDelayTime = { "MaximumPreDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetMaximumPreDelayTime_Parms, MaximumPreDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetMaximumPreDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::NewProp_MaximumPreDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetMaximumPreDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::AtomBusEffectReverbStatics_eventSetMaximumPreDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetMaximumRoomSize_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			float MaximumRoomSize;
			FAtomBusEffectReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRoomSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetMaximumRoomSize_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::NewProp_MaximumRoomSize = { "MaximumRoomSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetMaximumRoomSize_Parms, MaximumRoomSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetMaximumRoomSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::NewProp_MaximumRoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetMaximumRoomSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::AtomBusEffectReverbStatics_eventSetMaximumRoomSize_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetPreDelayTime_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			float PreDelayTime;
			FAtomBusEffectReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreDelayTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetPreDelayTime_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::NewProp_PreDelayTime = { "PreDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetPreDelayTime_Parms, PreDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetPreDelayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::NewProp_PreDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetPreDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::AtomBusEffectReverbStatics_eventSetPreDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetReverbTime_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			float ReverbTime;
			FAtomBusEffectReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetReverbTime_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::NewProp_ReverbTime = { "ReverbTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetReverbTime_Parms, ReverbTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetReverbTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::NewProp_ReverbTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetReverbTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::AtomBusEffectReverbStatics_eventSetReverbTime_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics
	{
		struct AtomBusEffectReverbStatics_eventSetRoomSize_Parms
		{
			FAtomBusEffectReverbSettings ReverbSettings;
			float RoomSize;
			FAtomBusEffectReverbSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::NewProp_ReverbSettings = { "ReverbSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetRoomSize_Parms, ReverbSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetRoomSize_Parms, RoomSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbStatics_eventSetRoomSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(nullptr, 0) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::NewProp_ReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::NewProp_RoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbStatics, nullptr, "SetRoomSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::AtomBusEffectReverbStatics_eventSetRoomSize_Parms), Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectReverbStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectReverbStatics_NoRegister()
	{
		return UAtomBusEffectReverbStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetBypass, "SetBypass" }, // 3872823496
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetHighCutoff, "SetHighCutoff" }, // 3170191159
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetLowCutoff, "SetLowCutoff" }, // 4211809224
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumPreDelayTime, "SetMaximumPreDelayTime" }, // 1811133736
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetMaximumRoomSize, "SetMaximumRoomSize" }, // 2469705022
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetPreDelayTime, "SetPreDelayTime" }, // 930194139
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetReverbTime, "SetReverbTime" }, // 1055587588
		{ &Z_Construct_UFunction_UAtomBusEffectReverbStatics_SetRoomSize, "SetRoomSize" }, // 1279458003
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectReverbStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectReverb.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "* UAtomBusEffectReverbStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectReverbStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::ClassParams = {
		&UAtomBusEffectReverbStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectReverbStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectReverbStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectReverbStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectReverbStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectReverbStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectReverbStatics>()
	{
		return UAtomBusEffectReverbStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectReverbStatics);
	UAtomBusEffectReverbStatics::~UAtomBusEffectReverbStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execGetMaxPreDelayInMilliseconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxPreDelayInMilliseconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execGetMaxRoomSizeInMeters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxRoomSizeInMeters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execSetHighCutoff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frenquency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHighCutoff(Z_Param_Frenquency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execSetLowCutoff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frenquency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowCutoff(Z_Param_Frenquency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execSetPreDelayTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreDelayTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execSetRoomSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Meters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomSize(Z_Param_Meters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execSetReverbTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectReverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectReverbPreset::StaticRegisterNativesUAtomBusEffectReverbPreset()
	{
		UClass* Class = UAtomBusEffectReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxPreDelayInMilliseconds", &UAtomBusEffectReverbPreset::execGetMaxPreDelayInMilliseconds },
			{ "GetMaxRoomSizeInMeters", &UAtomBusEffectReverbPreset::execGetMaxRoomSizeInMeters },
			{ "SetDefaultSettings", &UAtomBusEffectReverbPreset::execSetDefaultSettings },
			{ "SetHighCutoff", &UAtomBusEffectReverbPreset::execSetHighCutoff },
			{ "SetLowCutoff", &UAtomBusEffectReverbPreset::execSetLowCutoff },
			{ "SetPreDelayTime", &UAtomBusEffectReverbPreset::execSetPreDelayTime },
			{ "SetReverbTime", &UAtomBusEffectReverbPreset::execSetReverbTime },
			{ "SetRoomSize", &UAtomBusEffectReverbPreset::execSetRoomSize },
			{ "SetSettings", &UAtomBusEffectReverbPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics
	{
		struct AtomBusEffectReverbPreset_eventGetMaxPreDelayInMilliseconds_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventGetMaxPreDelayInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Get the maximum pre delay time possible.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Get the maximum pre delay time possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "GetMaxPreDelayInMilliseconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::AtomBusEffectReverbPreset_eventGetMaxPreDelayInMilliseconds_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics
	{
		struct AtomBusEffectReverbPreset_eventGetMaxRoomSizeInMeters_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventGetMaxRoomSizeInMeters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Get the maximum room size possible.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Get the maximum room size possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "GetMaxRoomSizeInMeters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::AtomBusEffectReverbPreset_eventGetMaxRoomSizeInMeters_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectReverbPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectReverbSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::AtomBusEffectReverbPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics
	{
		struct AtomBusEffectReverbPreset_eventSetHighCutoff_Parms
		{
			float Frenquency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frenquency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::NewProp_Frenquency = { "Frenquency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventSetHighCutoff_Parms, Frenquency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::NewProp_Frenquency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Set the high cutoff frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Set the high cutoff frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "SetHighCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::AtomBusEffectReverbPreset_eventSetHighCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics
	{
		struct AtomBusEffectReverbPreset_eventSetLowCutoff_Parms
		{
			float Frenquency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frenquency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::NewProp_Frenquency = { "Frenquency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventSetLowCutoff_Parms, Frenquency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::NewProp_Frenquency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Set the low cutoff frequency, in hertz.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Set the low cutoff frequency, in hertz." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "SetLowCutoff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::AtomBusEffectReverbPreset_eventSetLowCutoff_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics
	{
		struct AtomBusEffectReverbPreset_eventSetPreDelayTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventSetPreDelayTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Set the pre delay time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Set the pre delay time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "SetPreDelayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::AtomBusEffectReverbPreset_eventSetPreDelayTime_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics
	{
		struct AtomBusEffectReverbPreset_eventSetReverbTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventSetReverbTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Set the reverb time, in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Set the reverb time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "SetReverbTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::AtomBusEffectReverbPreset_eventSetReverbTime_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics
	{
		struct AtomBusEffectReverbPreset_eventSetRoomSize_Parms
		{
			float Meters;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Meters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::NewProp_Meters = { "Meters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventSetRoomSize_Parms, Meters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::NewProp_Meters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Set the room size, in meters.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Set the room size, in meters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "SetRoomSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::AtomBusEffectReverbPreset_eventSetRoomSize_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics
	{
		struct AtomBusEffectReverbPreset_eventSetSettings_Parms
		{
			FAtomBusEffectReverbSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Reverb" },
		{ "Comment", "// Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ToolTip", "Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectReverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::AtomBusEffectReverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectReverbPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectReverbPreset_NoRegister()
	{
		return UAtomBusEffectReverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxPreDelayInMilliseconds, "GetMaxPreDelayInMilliseconds" }, // 2065130381
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_GetMaxRoomSizeInMeters, "GetMaxRoomSizeInMeters" }, // 2309367491
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetDefaultSettings, "SetDefaultSettings" }, // 3144647095
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetHighCutoff, "SetHighCutoff" }, // 3549545753
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetLowCutoff, "SetLowCutoff" }, // 723191036
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetPreDelayTime, "SetPreDelayTime" }, // 3461708404
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetReverbTime, "SetReverbTime" }, // 553345986
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetRoomSize, "SetRoomSize" }, // 3998742406
		{ &Z_Construct_UFunction_UAtomBusEffectReverbPreset_SetSettings, "SetSettings" }, // 1011278995
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectReverbPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectReverb.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectReverbPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The reverb preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The reverb preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectReverbPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_Settings_MetaData)) }; // 1155758861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectReverb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectReverbPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 1155758861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectReverbPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::ClassParams = {
		&UAtomBusEffectReverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectReverbPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectReverbPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectReverbPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectReverbPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectReverbPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectReverbPreset>()
	{
		return UAtomBusEffectReverbPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectReverbPreset);
	UAtomBusEffectReverbPreset::~UAtomBusEffectReverbPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectReverbSettings_Statics::NewStructOps, TEXT("AtomBusEffectReverbSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectReverbSettings), 1155758861U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectReverbStatics, UAtomBusEffectReverbStatics::StaticClass, TEXT("UAtomBusEffectReverbStatics"), &Z_Registration_Info_UClass_UAtomBusEffectReverbStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectReverbStatics), 2878638445U) },
		{ Z_Construct_UClass_UAtomBusEffectReverbPreset, UAtomBusEffectReverbPreset::StaticClass, TEXT("UAtomBusEffectReverbPreset"), &Z_Registration_Info_UClass_UAtomBusEffectReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectReverbPreset), 989361527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_3081215544(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectReverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
