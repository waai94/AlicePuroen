// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomVolume.h"
#include "CriWareCore/Public/Atom/Atom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomVolume() {}
// Cross Module References
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomInteriorSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundToBusSend();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomVolumeLocationState;
	static UEnum* EAtomVolumeLocationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomVolumeLocationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomVolumeLocationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomVolumeLocationState"));
		}
		return Z_Registration_Info_UEnum_EAtomVolumeLocationState.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomVolumeLocationState>()
	{
		return EAtomVolumeLocationState_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::Enumerators[] = {
		{ "EAtomVolumeLocationState::InsideTheVolume", (int64)EAtomVolumeLocationState::InsideTheVolume },
		{ "EAtomVolumeLocationState::OutsideTheVolume", (int64)EAtomVolumeLocationState::OutsideTheVolume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enum describing the state of checking Atom gameplay volume location\n" },
		{ "InsideTheVolume.Comment", "// Used for when the listener is located inside the Atom gameplay Volume\n" },
		{ "InsideTheVolume.Name", "EAtomVolumeLocationState::InsideTheVolume" },
		{ "InsideTheVolume.ToolTip", "Used for when the listener is located inside the Atom gameplay Volume" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "OutsideTheVolume.Comment", "// Used for when the listener is located outside the Atom gameplay Volume\n" },
		{ "OutsideTheVolume.Name", "EAtomVolumeLocationState::OutsideTheVolume" },
		{ "OutsideTheVolume.ToolTip", "Used for when the listener is located outside the Atom gameplay Volume" },
		{ "ToolTip", "Enum describing the state of checking Atom gameplay volume location" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomVolumeLocationState",
		"EAtomVolumeLocationState",
		Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState()
	{
		if (!Z_Registration_Info_UEnum_EAtomVolumeLocationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomVolumeLocationState.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomVolumeLocationState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings;
class UScriptStruct* FAtomVolumeBusSendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomVolumeBusSendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomVolumeBusSendSettings>()
{
	return FAtomVolumeBusSendSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ListenerLocationState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerLocationState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ListenerLocationState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSends;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct to determine dynamic bus send data for use with Atom gameplay volumes. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "Struct to determine dynamic bus send data for use with Atom gameplay volumes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomVolumeBusSendSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_ListenerLocationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_ListenerLocationState_MetaData[] = {
		{ "Category", "Atom Volume Bus Sends" },
		{ "Comment", "/** The state the listener needs to be in, relative to the Atom volume, for this bus send list to be used for a given sound. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The state the listener needs to be in, relative to the Atom volume, for this bus send list to be used for a given sound." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_ListenerLocationState = { "ListenerLocationState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomVolumeBusSendSettings, ListenerLocationState), Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_ListenerLocationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_ListenerLocationState_MetaData)) }; // 2718168638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_BusSends_Inner = { "BusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSoundToBusSend, METADATA_PARAMS(nullptr, 0) }; // 1321788406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_BusSends_MetaData[] = {
		{ "Category", "Atom Volume Bus Sends" },
		{ "Comment", "/** Bus send array for sounds that are in the AtomListenerLocationState at the same time as the listener. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "Bus send array for sounds that are in the AtomListenerLocationState at the same time as the listener." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_BusSends = { "BusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomVolumeBusSendSettings, BusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_BusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_BusSends_MetaData)) }; // 1321788406
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_ListenerLocationState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_ListenerLocationState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_BusSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewProp_BusSends,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomVolumeBusSendSettings",
		sizeof(FAtomVolumeBusSendSettings),
		alignof(FAtomVolumeBusSendSettings),
		Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomInteriorSettings;
class UScriptStruct* FAtomInteriorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomInteriorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomInteriorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomInteriorSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomInteriorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomInteriorSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomInteriorSettings>()
{
	return FAtomInteriorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldSettings_MetaData[];
#endif
		static void NewProp_bIsWorldSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPFTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPFTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPFTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPFTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct encapsulating settings for interior areas. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "Struct encapsulating settings for interior areas." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomInteriorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData[] = {
		{ "Comment", "// Whether these interior settings are the default values for the world\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "Whether these interior settings are the default values for the world" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit(void* Obj)
	{
		((FAtomInteriorSettings*)Obj)->bIsWorldSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_bIsWorldSettings = { "bIsWorldSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomInteriorSettings), &Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired volume of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The desired volume of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorVolume = { "ExteriorVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, ExteriorVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume." },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorTime = { "ExteriorTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, ExteriorTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired LPF frequency cutoff in hertz of sounds outside the volume when the player is inside the volume.\n" },
		{ "MaxClamp", "24000" },
		{ "MaxUI", "24000" },
		{ "MinClamp", "24" },
		{ "MinUI", "24" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds outside the volume when the player is inside the volume." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPF = { "ExteriorLPF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, ExteriorLPF), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume." },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPFTime = { "ExteriorLPFTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, ExteriorLPFTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired volume of sounds inside the volume when the player is outside the volume.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The desired volume of sounds inside the volume when the player is outside the volume." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorVolume = { "InteriorVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, InteriorVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player exits the volume.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player exits the volume." },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorTime = { "InteriorTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, InteriorTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The desired LPF frequency cutoff in hertz of sounds inside the volume when the player is outside the volume.\n" },
		{ "MaxClamp", "24000" },
		{ "MaxUI", "24000" },
		{ "MinClamp", "24" },
		{ "MinUI", "24" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds inside the volume when the player is outside the volume." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPF = { "InteriorLPF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, InteriorLPF), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player exits the volume.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player exits the volume." },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPFTime = { "InteriorLPFTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomInteriorSettings, InteriorLPFTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_bIsWorldSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_ExteriorLPFTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewProp_InteriorLPFTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomInteriorSettings",
		sizeof(FAtomInteriorSettings),
		alignof(FAtomInteriorSettings),
		Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomInteriorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomInteriorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomInteriorSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomInteriorSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_Statics::EnumInfo[] = {
		{ EAtomVolumeLocationState_StaticEnum, TEXT("EAtomVolumeLocationState"), &Z_Registration_Info_UEnum_EAtomVolumeLocationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2718168638U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_Statics::ScriptStructInfo[] = {
		{ FAtomVolumeBusSendSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings_Statics::NewStructOps, TEXT("AtomVolumeBusSendSettings"), &Z_Registration_Info_UScriptStruct_AtomVolumeBusSendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomVolumeBusSendSettings), 3129683858U) },
		{ FAtomInteriorSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomInteriorSettings_Statics::NewStructOps, TEXT("AtomInteriorSettings"), &Z_Registration_Info_UScriptStruct_AtomInteriorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomInteriorSettings), 4264886077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_3551347895(TEXT("/Script/CriWareCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomVolume_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
