// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundBase.h"
#include "CriWareCore/Public/Atom/Atom.h"
#include "CriWareCore/Public/Atom/AtomConcurrency.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationDestination.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackWithParentBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundAsset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConcurrencySettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundToBusSend();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomVirtualizationMode;
	static UEnum* EAtomVirtualizationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomVirtualizationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomVirtualizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomVirtualizationMode"));
		}
		return Z_Registration_Info_UEnum_EAtomVirtualizationMode.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomVirtualizationMode>()
	{
		return EAtomVirtualizationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::Enumerators[] = {
		{ "EAtomVirtualizationMode::Normal", (int64)EAtomVirtualizationMode::Normal },
		{ "EAtomVirtualizationMode::StopWhenSilent", (int64)EAtomVirtualizationMode::StopWhenSilent },
		{ "EAtomVirtualizationMode::PlayWhenSilent", (int64)EAtomVirtualizationMode::PlayWhenSilent },
		{ "EAtomVirtualizationMode::Retrigger", (int64)EAtomVirtualizationMode::Retrigger },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Method of virtualization when an Atom sound is stopped due to playback constraints\n * (i.e. by concurrency, priority, and/or MaxChannelCount)\n * for a given sound.\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "Normal.Comment", "/** Virtualization is disabled and sound continue to use a voice when silent. */" },
		{ "Normal.DisplayName", "Normal - [Normal]" },
		{ "Normal.Name", "EAtomVirtualizationMode::Normal" },
		{ "Normal.ToolTip", "Virtualization is disabled and sound continue to use a voice when silent." },
		{ "PlayWhenSilent.Comment", "/** Sound continues to play when silent, using an Atom virtual voice. */" },
		{ "PlayWhenSilent.DisplayName", "Play When Silent - [Virtual]" },
		{ "PlayWhenSilent.Name", "EAtomVirtualizationMode::PlayWhenSilent" },
		{ "PlayWhenSilent.ToolTip", "Sound continues to play when silent, using an Atom virtual voice." },
		{ "Retrigger.Comment", "/** Sound will restarts from beginning upon realization from being virtual, using an Atom virtual voice. */" },
		{ "Retrigger.DisplayName", "Retrigger - [Virtual Retrigger]" },
		{ "Retrigger.Name", "EAtomVirtualizationMode::Retrigger" },
		{ "Retrigger.ToolTip", "Sound will restarts from beginning upon realization from being virtual, using an Atom virtual voice." },
		{ "StopWhenSilent.Comment", "/** Virtualization is disabled and sound is stopped when silent. */" },
		{ "StopWhenSilent.DisplayName", "Stop When Silent - [Stop]" },
		{ "StopWhenSilent.Name", "EAtomVirtualizationMode::StopWhenSilent" },
		{ "StopWhenSilent.ToolTip", "Virtualization is disabled and sound is stopped when silent." },
		{ "ToolTip", "Method of virtualization when an Atom sound is stopped due to playback constraints\n(i.e. by concurrency, priority, and/or MaxChannelCount)\nfor a given sound." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomVirtualizationMode",
		"EAtomVirtualizationMode",
		Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode()
	{
		if (!Z_Registration_Info_UEnum_EAtomVirtualizationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomVirtualizationMode.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomVirtualizationMode.InnerSingleton;
	}
	void UAtomSoundBase::StaticRegisterNativesUAtomSoundBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBase);
	UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister()
	{
		return UAtomSoundBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClassObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVirtualizationMode_MetaData[];
#endif
		static void NewProp_bOverrideVirtualizationMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVirtualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideConcurrency_MetaData[];
#endif
		static void NewProp_bOverrideConcurrency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideConcurrency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualizationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualizationMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConcurrencySet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConcurrencyOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBaseRack_MetaData[];
#endif
		static void NewProp_bEnableBaseRack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBaseRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBusSends_MetaData[];
#endif
		static void NewProp_bEnableBusSends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBusSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomRack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomRack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtomBusSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomBusSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AtomBusSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomSoundBaseRenderer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomSoundBaseRenderer;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * The base class for a playable sound object\n  */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomSoundBase.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class for a playable sound object" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundClassObject_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound class this sound belongs to */" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundClassObject = { "SoundClassObject", nullptr, (EPropertyFlags)0x0014010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, SoundClassObject), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundClassObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundClassObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** When \"atom.3dVisualize.Attenuation\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purpose only. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "When \"atom.3dVisualize.Attenuation\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purpose only." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UAtomSoundBase*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundBase), &Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideVirtualizationMode_MetaData[] = {
		{ "Category", "Voice Management" },
		{ "Comment", "/** Whether or not to override the sound virtualization behavior with local settings. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Whether or not to override the sound virtualization behavior with local settings." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideVirtualizationMode_SetBit(void* Obj)
	{
		((UAtomSoundBase*)Obj)->bOverrideVirtualizationMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideVirtualizationMode = { "bOverrideVirtualizationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundBase), &Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideVirtualizationMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideVirtualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideVirtualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideConcurrency_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** Whether or not to override the sound concurrency object with local concurrency settings. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Whether or not to override the sound concurrency object with local concurrency settings." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideConcurrency_SetBit(void* Obj)
	{
		((UAtomSoundBase*)Obj)->bOverrideConcurrency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideConcurrency = { "bOverrideConcurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundBase), &Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideConcurrency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideConcurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideConcurrency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_VirtualizationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_VirtualizationMode_MetaData[] = {
		{ "Category", "Voice Management" },
		{ "Comment", "/** Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted. */" },
		{ "EditCondition", "bOverrideVirtualizationMode" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_VirtualizationMode = { "VirtualizationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, VirtualizationMode), Z_Construct_UEnum_CriWareCore_EAtomVirtualizationMode, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_VirtualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_VirtualizationMode_MetaData)) }; // 4130482596
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play. */" },
		{ "EditCondition", "!bOverrideConcurrency" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencySet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** If Override Concurrency is true, concurrency settings to use. */" },
		{ "EditCondition", "bOverrideConcurrency" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "If Override Concurrency is true, concurrency settings to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencyOverrides = { "ConcurrencyOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, ConcurrencyOverrides), Z_Construct_UScriptStruct_FAtomConcurrencySettings, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData)) }; // 2581718115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBaseRack_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** If enabled, sound will route to the Master Rack by default or to the Base Rack if defined. If disabled, sound will route ONLY to the Bus Sends of Master Rack. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "If enabled, sound will route to the Master Rack by default or to the Base Rack if defined. If disabled, sound will route ONLY to the Bus Sends of Master Rack." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBaseRack_SetBit(void* Obj)
	{
		((UAtomSoundBase*)Obj)->bEnableBaseRack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBaseRack = { "bEnableBaseRack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundBase), &Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBaseRack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBaseRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBaseRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBusSends_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** Whether or not to enable Bus Sends other than the Base Rack Master Bus. */" },
		{ "DisplayAfter", "AtomRack" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Whether or not to enable Bus Sends other than the Base Rack Master Bus." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBusSends_SetBit(void* Obj)
	{
		((UAtomSoundBase*)Obj)->bEnableBusSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBusSends = { "bEnableBusSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundBase), &Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBusSends_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBusSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** Duration of sound in seconds. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Duration of sound in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, Duration), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** The max distance of the asset, as determined by attenuation settings. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "The max distance of the asset, as determined by attenuation settings." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Voice Management|Priority" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority\n\x09  * (see platform's Atom Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the\n\x09  * sound to produce final runtime priority value.\n\x09  */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority\n(see platform's Atom Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the\nsound to produce final runtime priority value." },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, Priority), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Attenuation settings package for the sound */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Attenuation settings package for the sound" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, AttenuationSettings), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomRack_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** Submix to route sound output to. If unset, falls back to referenced SoundClass submix.\n\x09  * If SoundClass rack is unset, sends to the 'Master Rack' as set in the 'Atom' category of Project Settings'. */" },
		{ "DisplayName", "Rack" },
		{ "EditCondition", "bEnableBaseRack" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Submix to route sound output to. If unset, falls back to referenced SoundClass submix.\nIf SoundClass rack is unset, sends to the 'Master Rack' as set in the 'Atom' category of Project Settings'." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomRack = { "AtomRack", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, AtomRack), Z_Construct_UClass_UAtomRackWithParentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomRack_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomBusSends_Inner = { "AtomBusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSoundToBusSend, METADATA_PARAMS(nullptr, 0) }; // 1321788406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomBusSends_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent. */" },
		{ "DisplayName", "Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomBusSends = { "AtomBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, AtomBusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomBusSends_MetaData)) }; // 1321788406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ModulationSettings_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Modulation Settings for sound parameters and AISAC. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Modulation Settings for sound parameters and AISAC." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, ModulationSettings), Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ModulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ModulationSettings_MetaData)) }; // 2169846499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_WaveInfo_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_WaveInfo = { "WaveInfo", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, WaveInfo), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_WaveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_WaveInfo_MetaData)) }; // 2079236216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0014048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundColor_MetaData[] = {
		{ "Category", "Developer" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "A color to identify this sound in editor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundColor = { "SoundColor", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, SoundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomSoundBaseRenderer_MetaData[] = {
		{ "Comment", "/** Renders thumnbnails for us. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBase.h" },
		{ "ToolTip", "Renders thumnbnails for us." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomSoundBaseRenderer = { "AtomSoundBaseRenderer", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBase, AtomSoundBaseRenderer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomSoundBaseRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomSoundBaseRenderer_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundClassObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideVirtualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bOverrideConcurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_VirtualizationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_VirtualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ConcurrencyOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBaseRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_bEnableBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomBusSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_ModulationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_WaveInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_SoundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBase_Statics::NewProp_AtomSoundBaseRenderer,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomSoundBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAtomSoundAsset_NoRegister, (int32)VTABLE_OFFSET(UAtomSoundBase, IAtomSoundAsset), false },  // 1060465604
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UAtomSoundBase, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBase_Statics::ClassParams = {
		&UAtomSoundBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBase()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBase.OuterSingleton, Z_Construct_UClass_UAtomSoundBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundBase>()
	{
		return UAtomSoundBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBase);
	UAtomSoundBase::~UAtomSoundBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomSoundBase)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_Statics::EnumInfo[] = {
		{ EAtomVirtualizationMode_StaticEnum, TEXT("EAtomVirtualizationMode"), &Z_Registration_Info_UEnum_EAtomVirtualizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4130482596U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundBase, UAtomSoundBase::StaticClass, TEXT("UAtomSoundBase"), &Z_Registration_Info_UClass_UAtomSoundBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBase), 1506782445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_910027430(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
