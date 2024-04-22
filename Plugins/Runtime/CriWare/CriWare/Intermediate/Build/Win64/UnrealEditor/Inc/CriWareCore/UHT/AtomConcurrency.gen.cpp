// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomConcurrency.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomConcurrency() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConcurrencySettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule;
	static UEnum* EAtomMaxConcurrentResolutionRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomMaxConcurrentResolutionRule"));
		}
		return Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomMaxConcurrentResolutionRule>()
	{
		return EAtomMaxConcurrentResolutionRule_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::Enumerators[] = {
		{ "EAtomMaxConcurrentResolutionRule::PreventNew", (int64)EAtomMaxConcurrentResolutionRule::PreventNew },
		{ "EAtomMaxConcurrentResolutionRule::StopOldest", (int64)EAtomMaxConcurrentResolutionRule::StopOldest },
		{ "EAtomMaxConcurrentResolutionRule::StopFarthestThenPreventNew", (int64)EAtomMaxConcurrentResolutionRule::StopFarthestThenPreventNew },
		{ "EAtomMaxConcurrentResolutionRule::StopFarthestThenOldest", (int64)EAtomMaxConcurrentResolutionRule::StopFarthestThenOldest },
		{ "EAtomMaxConcurrentResolutionRule::StopLowestPriority", (int64)EAtomMaxConcurrentResolutionRule::StopLowestPriority },
		{ "EAtomMaxConcurrentResolutionRule::StopQuietest", (int64)EAtomMaxConcurrentResolutionRule::StopQuietest },
		{ "EAtomMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew", (int64)EAtomMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew },
		{ "EAtomMaxConcurrentResolutionRule::Count", (int64)EAtomMaxConcurrentResolutionRule::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::Enum_MetaDataParams[] = {
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAtomMaxConcurrentResolutionRule::Count" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "PreventNew.Comment", "/** When Max Concurrent sounds are active do not start a new sound. */" },
		{ "PreventNew.Name", "EAtomMaxConcurrentResolutionRule::PreventNew" },
		{ "PreventNew.ToolTip", "When Max Concurrent sounds are active do not start a new sound." },
		{ "StopFarthestThenOldest.Comment", "/** When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then stop the oldest. */" },
		{ "StopFarthestThenOldest.Name", "EAtomMaxConcurrentResolutionRule::StopFarthestThenOldest" },
		{ "StopFarthestThenOldest.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then stop the oldest." },
		{ "StopFarthestThenPreventNew.Comment", "/** When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then do not start a new sound. */" },
		{ "StopFarthestThenPreventNew.Name", "EAtomMaxConcurrentResolutionRule::StopFarthestThenPreventNew" },
		{ "StopFarthestThenPreventNew.ToolTip", "When Max Concurrent sounds are active stop the furthest sound.  If all sounds are the same distance then do not start a new sound." },
		{ "StopLowestPriority.Comment", "/** Stop the lowest priority sound in the group. If all sounds are the same priority, then it will stop the oldest sound in the group. */" },
		{ "StopLowestPriority.Name", "EAtomMaxConcurrentResolutionRule::StopLowestPriority" },
		{ "StopLowestPriority.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it will stop the oldest sound in the group." },
		{ "StopLowestPriorityThenPreventNew.Comment", "/** Stop the lowest priority sound in the group. If all sounds are the same priority, then it won't play a new sound. */" },
		{ "StopLowestPriorityThenPreventNew.Name", "EAtomMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew" },
		{ "StopLowestPriorityThenPreventNew.ToolTip", "Stop the lowest priority sound in the group. If all sounds are the same priority, then it won't play a new sound." },
		{ "StopOldest.Comment", "/** When Max Concurrent sounds are active stop the oldest and start a new one. */" },
		{ "StopOldest.Name", "EAtomMaxConcurrentResolutionRule::StopOldest" },
		{ "StopOldest.ToolTip", "When Max Concurrent sounds are active stop the oldest and start a new one." },
		{ "StopQuietest.Comment", "/** Stop the sound that is quietest in the group. */" },
		{ "StopQuietest.Name", "EAtomMaxConcurrentResolutionRule::StopQuietest" },
		{ "StopQuietest.ToolTip", "Stop the sound that is quietest in the group." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomMaxConcurrentResolutionRule",
		"EAtomMaxConcurrentResolutionRule",
		Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule()
	{
		if (!Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode;
	static UEnum* EAtomConcurrencyVolumeScaleMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomConcurrencyVolumeScaleMode"));
		}
		return Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomConcurrencyVolumeScaleMode>()
	{
		return EAtomConcurrencyVolumeScaleMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::Enumerators[] = {
		{ "EAtomConcurrencyVolumeScaleMode::Default", (int64)EAtomConcurrencyVolumeScaleMode::Default },
		{ "EAtomConcurrencyVolumeScaleMode::Distance", (int64)EAtomConcurrencyVolumeScaleMode::Distance },
		{ "EAtomConcurrencyVolumeScaleMode::Priority", (int64)EAtomConcurrencyVolumeScaleMode::Priority },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "/* Scales volume of older sounds more than newer sounds (default) */" },
		{ "Default.Name", "EAtomConcurrencyVolumeScaleMode::Default" },
		{ "Default.ToolTip", "Scales volume of older sounds more than newer sounds (default)" },
		{ "Distance.Comment", "/* Scales distant sounds by volume scalar more than closer sounds */" },
		{ "Distance.Name", "EAtomConcurrencyVolumeScaleMode::Distance" },
		{ "Distance.ToolTip", "Scales distant sounds by volume scalar more than closer sounds" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "Priority.Comment", "/* Scales lower priority sounds by volume scalar more than closer sounds */" },
		{ "Priority.Name", "EAtomConcurrencyVolumeScaleMode::Priority" },
		{ "Priority.ToolTip", "Scales lower priority sounds by volume scalar more than closer sounds" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomConcurrencyVolumeScaleMode",
		"EAtomConcurrencyVolumeScaleMode",
		Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode()
	{
		if (!Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomConcurrencySettings;
class UScriptStruct* FAtomConcurrencySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomConcurrencySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomConcurrencySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomConcurrencySettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomConcurrencySettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomConcurrencySettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomConcurrencySettings>()
{
	return FAtomConcurrencySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitToOwner_MetaData[];
#endif
		static void NewProp_bLimitToOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitToOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVolumeScaleCanRelease_MetaData[];
#endif
		static void NewProp_bVolumeScaleCanRelease_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVolumeScaleCanRelease;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResolutionRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResolutionRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetriggerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RetriggerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeScale;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VolumeScaleMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeScaleMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleAttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeScaleAttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScaleReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeScaleReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceStealReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceStealReleaseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomConcurrencySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The max number of allowable concurrent active voices for voices playing in this concurrency group. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "The max number of allowable concurrent active voices for voices playing in this concurrency group." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bLimitToOwner_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/* Whether or not to limit the concurrency to per sound owner (i.e. the actor that plays the sound). If the sound doesn't have an owner, it falls back to global concurrency. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Whether or not to limit the concurrency to per sound owner (i.e. the actor that plays the sound). If the sound doesn't have an owner, it falls back to global concurrency." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bLimitToOwner_SetBit(void* Obj)
	{
		((FAtomConcurrencySettings*)Obj)->bLimitToOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bLimitToOwner = { "bLimitToOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomConcurrencySettings), &Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bLimitToOwner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bLimitToOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bLimitToOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "Comment", "/**\n\x09 * Whether or not volume scaling can recover volume ducking behavior when concurrency group sounds stop (default scale mode only).\n\x09 */" },
		{ "DisplayName", "Can Recover" },
		{ "EditCondition", "VolumeScaleMode == EAtomConcurrencyVolumeScaleMode::Default" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Whether or not volume scaling can recover volume ducking behavior when concurrency group sounds stop (default scale mode only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_SetBit(void* Obj)
	{
		((FAtomConcurrencySettings*)Obj)->bVolumeScaleCanRelease = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease = { "bVolumeScaleCanRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomConcurrencySettings), &Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_ResolutionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_ResolutionRule_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** Which concurrency resolution policy to use if max voice count is reached. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Which concurrency resolution policy to use if max voice count is reached." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_ResolutionRule = { "ResolutionRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, ResolutionRule), Z_Construct_UEnum_CriWareCore_EAtomMaxConcurrentResolutionRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_ResolutionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_ResolutionRule_MetaData)) }; // 3509128705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_RetriggerTime_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of time to wait (in seconds) between different sounds which play with this concurrency. Sounds rejected from this will ignore virtualization settings. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Amount of time to wait (in seconds) between different sounds which play with this concurrency. Sounds rejected from this will ignore virtualization settings." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_RetriggerTime = { "RetriggerTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, RetriggerTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_RetriggerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_RetriggerTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScale_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Ducking factor to apply per older voice instance (generation), which compounds based on scaling mode\n\x09 * and (optionally) revives them as they stop according to the provided attack/release times.\n\x09 *\n\x09 * Note: This is not applied until after StopQuietest rules are evaluated, in order to avoid thrashing sounds.\n\x09 *\n\x09 * AppliedVolumeScale = Math.Pow(DuckingScale, VoiceGeneration)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Ducking factor to apply per older voice instance (generation), which compounds based on scaling mode\nand (optionally) revives them as they stop according to the provided attack/release times.\n\nNote: This is not applied until after StopQuietest rules are evaluated, in order to avoid thrashing sounds.\n\nAppliedVolumeScale = Math.Pow(DuckingScale, VoiceGeneration)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScale = { "VolumeScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, VolumeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScale_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleMode_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "Comment", "/** Volume Scale mode designating how to scale voice volume based on number of member sounds active in group. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Volume Scale mode designating how to scale voice volume based on number of member sounds active in group." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleMode = { "VolumeScaleMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, VolumeScaleMode), Z_Construct_UEnum_CriWareCore_EAtomConcurrencyVolumeScaleMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleMode_MetaData)) }; // 3082979660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to apply duck using volume scalar.\n\x09 */" },
		{ "DisplayName", "Duck Time" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Time taken to apply duck using volume scalar." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime = { "VolumeScaleAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, VolumeScaleAttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime_MetaData[] = {
		{ "Category", "Volume Scaling" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to recover volume scalar duck.\n\x09 */" },
		{ "DisplayName", "Recover Time" },
		{ "EditCondition", "bVolumeScaleCanRelease && VolumeScaleMode == EAtomConcurrencyVolumeScaleMode::Default" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Time taken to recover volume scalar duck." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime = { "VolumeScaleReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, VolumeScaleReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime_MetaData[] = {
		{ "Category", "Voice Stealing" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Time taken to fade out if voice is evicted or culled due to another voice in the group starting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ToolTip", "Time taken to fade out if voice is evicted or culled due to another voice in the group starting." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime = { "VoiceStealReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomConcurrencySettings, VoiceStealReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_MaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bLimitToOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_ResolutionRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_ResolutionRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_RetriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VolumeScaleReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewProp_VoiceStealReleaseTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomConcurrencySettings",
		sizeof(FAtomConcurrencySettings),
		alignof(FAtomConcurrencySettings),
		Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomConcurrencySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomConcurrencySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomConcurrencySettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomConcurrencySettings.InnerSingleton;
	}
	void UAtomConcurrency::StaticRegisterNativesUAtomConcurrency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomConcurrency);
	UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister()
	{
		return UAtomConcurrency::StaticClass();
	}
	struct Z_Construct_UClass_UAtomConcurrency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Concurrency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomConcurrency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConcurrency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomConcurrency.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConcurrency_Statics::NewProp_Concurrency_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Atom/AtomConcurrency.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomConcurrency_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConcurrency, Concurrency), Z_Construct_UScriptStruct_FAtomConcurrencySettings, METADATA_PARAMS(Z_Construct_UClass_UAtomConcurrency_Statics::NewProp_Concurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConcurrency_Statics::NewProp_Concurrency_MetaData)) }; // 2581718115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomConcurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConcurrency_Statics::NewProp_Concurrency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomConcurrency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomConcurrency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomConcurrency_Statics::ClassParams = {
		&UAtomConcurrency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomConcurrency_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConcurrency_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomConcurrency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConcurrency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomConcurrency()
	{
		if (!Z_Registration_Info_UClass_UAtomConcurrency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomConcurrency.OuterSingleton, Z_Construct_UClass_UAtomConcurrency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomConcurrency.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomConcurrency>()
	{
		return UAtomConcurrency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomConcurrency);
	UAtomConcurrency::~UAtomConcurrency() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::EnumInfo[] = {
		{ EAtomMaxConcurrentResolutionRule_StaticEnum, TEXT("EAtomMaxConcurrentResolutionRule"), &Z_Registration_Info_UEnum_EAtomMaxConcurrentResolutionRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3509128705U) },
		{ EAtomConcurrencyVolumeScaleMode_StaticEnum, TEXT("EAtomConcurrencyVolumeScaleMode"), &Z_Registration_Info_UEnum_EAtomConcurrencyVolumeScaleMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3082979660U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::ScriptStructInfo[] = {
		{ FAtomConcurrencySettings::StaticStruct, Z_Construct_UScriptStruct_FAtomConcurrencySettings_Statics::NewStructOps, TEXT("AtomConcurrencySettings"), &Z_Registration_Info_UScriptStruct_AtomConcurrencySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomConcurrencySettings), 2581718115U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomConcurrency, UAtomConcurrency::StaticClass, TEXT("UAtomConcurrency"), &Z_Registration_Info_UClass_UAtomConcurrency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomConcurrency), 2652147034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_3587061757(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConcurrency_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
