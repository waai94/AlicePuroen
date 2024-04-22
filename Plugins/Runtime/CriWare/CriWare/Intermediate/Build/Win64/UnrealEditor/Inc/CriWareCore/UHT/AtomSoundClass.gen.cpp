// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundClass.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationDestination.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRack_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategory();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundClassProperties();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCategory;
class UScriptStruct* FAtomCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCategory, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomCategory"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCategory.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomCategory>()
{
	return FAtomCategory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCategory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCategory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategory, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategory_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomCategory",
		sizeof(FAtomCategory),
		alignof(FAtomCategory),
		Z_Construct_UScriptStruct_FAtomCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCategory()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCategory.InnerSingleton, Z_Construct_UScriptStruct_FAtomCategory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCategory.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundClassProperties;
class UScriptStruct* FAtomSoundClassProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundClassProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundClassProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundClassProperties, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundClassProperties"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundClassProperties.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundClassProperties>()
{
	return FAtomSoundClassProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPlay_MetaData[];
#endif
		static void NewProp_bAlwaysPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAmbientVolumes_MetaData[];
#endif
		static void NewProp_bApplyAmbientVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAmbientVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultRack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing configurable properties of a sound category.\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Structure containing configurable properties of a sound category." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundClassProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Volume multiplier. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Volume multiplier." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundClassProperties, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Pitch multiplier. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Pitch multiplier." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundClassProperties, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Lowpass filter cutoff frequency */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Lowpass filter cutoff frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundClassProperties, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_HighPassFilterFrequency_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Hipass filter cutoff frequency */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Hipass filter cutoff frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_HighPassFilterFrequency = { "HighPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundClassProperties, HighPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_HighPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_HighPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Distance scale to apply to sounds that play with this sound class.\n\x09 * Sounds will have their attenuation distance scaled by this amount.\n\x09 * Allows adjusting attenuation settings dynamically. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Distance scale to apply to sounds that play with this sound class.\nSounds will have their attenuation distance scaled by this amount.\nAllows adjusting attenuation settings dynamically." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_AttenuationDistanceScale = { "AttenuationDistanceScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundClassProperties, AttenuationDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to inflate referencing sound's priority to always play. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Whether to inflate referencing sound's priority to always play." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit(void* Obj)
	{
		((FAtomSoundClassProperties*)Obj)->bAlwaysPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bAlwaysPlay = { "bAlwaysPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomSoundClassProperties), &Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether the Interior/Exterior volume and LPF modifiers should be applied */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Whether the Interior/Exterior volume and LPF modifiers should be applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit(void* Obj)
	{
		((FAtomSoundClassProperties*)Obj)->bApplyAmbientVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes = { "bApplyAmbientVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomSoundClassProperties), &Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_ModulationSettings_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Default modulation settings for sounds directly referencing this class */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Default modulation settings for sounds directly referencing this class" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundClassProperties, ModulationSettings), Z_Construct_UScriptStruct_FAtomSoundModulationDefaultSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_ModulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_ModulationSettings_MetaData)) }; // 1168924160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_DefaultRack_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Default output rack of referencing sounds. If unset, falls back to the 'Master Rack' as set in the 'Atom' category of Project Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ToolTip", "Default output rack of referencing sounds. If unset, falls back to the 'Master Rack' as set in the 'Atom' category of Project Settings." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_DefaultRack = { "DefaultRack", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundClassProperties, DefaultRack), Z_Construct_UClass_UAtomRack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_DefaultRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_DefaultRack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_LowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_HighPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_AttenuationDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bAlwaysPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_ModulationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewProp_DefaultRack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSoundClassProperties",
		sizeof(FAtomSoundClassProperties),
		alignof(FAtomSoundClassProperties),
		Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundClassProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundClassProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundClassProperties.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundClassProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomSoundClass::execPauseAllSounds)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseAllSounds(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSoundClass::execStopAllSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllSounds();
		P_NATIVE_END;
	}
	void UAtomSoundClass::StaticRegisterNativesUAtomSoundClass()
	{
		UClass* Class = UAtomSoundClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PauseAllSounds", &UAtomSoundClass::execPauseAllSounds },
			{ "StopAllSounds", &UAtomSoundClass::execStopAllSounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics
	{
		struct AtomSoundClass_eventPauseAllSounds_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomSoundClass_eventPauseAllSounds_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomSoundClass_eventPauseAllSounds_Parms), &Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Class" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSoundClass, nullptr, "PauseAllSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::AtomSoundClass_eventPauseAllSounds_Parms), Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSoundClass_StopAllSounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSoundClass_StopAllSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Class" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSoundClass_StopAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSoundClass, nullptr, "StopAllSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSoundClass_StopAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundClass_StopAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSoundClass_StopAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSoundClass_StopAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundClass);
	UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister()
	{
		return UAtomSoundClass::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCategory_MetaData[];
#endif
		static void NewProp_bOverrideCategory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomSoundClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSoundClass_PauseAllSounds, "PauseAllSounds" }, // 1618184575
		{ &Z_Construct_UFunction_UAtomSoundClass_StopAllSounds, "StopAllSounds" }, // 2030946935
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomSoundClass.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_bOverrideCategory_MetaData[] = {
		{ "Category", "Category" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	void Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_bOverrideCategory_SetBit(void* Obj)
	{
		((UAtomSoundClass*)Obj)->bOverrideCategory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_bOverrideCategory = { "bOverrideCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundClass), &Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_bOverrideCategory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_bOverrideCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_bOverrideCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Configurable properties like volume and priority. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Configurable properties like volume and priority." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundClass, Properties), Z_Construct_UScriptStruct_FAtomSoundClassProperties, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_Properties_MetaData)) }; // 187857995
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ChildClasses_Inner = { "ChildClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ChildClasses_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ChildClasses = { "ChildClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundClass, ChildClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ChildClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ChildClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundClass, ParentClass), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_bOverrideCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ChildClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ChildClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundClass_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundClass_Statics::ClassParams = {
		&UAtomSoundClass::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomSoundClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundClass()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundClass.OuterSingleton, Z_Construct_UClass_UAtomSoundClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundClass.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundClass>()
	{
		return UAtomSoundClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundClass);
	UAtomSoundClass::~UAtomSoundClass() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_Statics::ScriptStructInfo[] = {
		{ FAtomCategory::StaticStruct, Z_Construct_UScriptStruct_FAtomCategory_Statics::NewStructOps, TEXT("AtomCategory"), &Z_Registration_Info_UScriptStruct_AtomCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCategory), 1457963253U) },
		{ FAtomSoundClassProperties::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundClassProperties_Statics::NewStructOps, TEXT("AtomSoundClassProperties"), &Z_Registration_Info_UScriptStruct_AtomSoundClassProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundClassProperties), 187857995U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundClass, UAtomSoundClass::StaticClass, TEXT("UAtomSoundClass"), &Z_Registration_Info_UClass_UAtomSoundClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundClass), 1500512736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_4198201198(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
