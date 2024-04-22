// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundWave.h"
#include "CriWareCore/Public/Atom/AtomAttenuation.h"
#include "CriWareCore/Public/Atom/AtomWaveBank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundWave() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWave();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWave_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWaveBank_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomSoundWave::StaticRegisterNativesUAtomSoundWave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundWave);
	UClass* Z_Construct_UClass_UAtomSoundWave_NoRegister()
	{
		return UAtomSoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveBank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaveBank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaveID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AtomSoundWave.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveBank_MetaData[] = {
		{ "Category", "Atom|Wave" },
		{ "Comment", "//~ End UAtomSoundBase interface.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveBank = { "WaveBank", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundWave, WaveBank), Z_Construct_UClass_UAtomWaveBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveBank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveID_MetaData[] = {
		{ "Category", "Atom|Wave" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveID = { "WaveID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundWave, WaveID), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If set, when played directly the wave will be played looping. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
		{ "ToolTip", "If set, when played directly the wave will be played looping." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UAtomSoundWave*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundWave), &Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
		{ "ToolTip", "Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset" },
	};
#endif
	void Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAtomSoundWave*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSoundWave), &Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Playback volume of sound 0 to 1 - Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
		{ "ToolTip", "Playback volume of sound 0 to 1 - Default is 1.0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundWave, Volume), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.125" },
		{ "Comment", "/** Playback pitch for sound. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
		{ "ToolTip", "Playback pitch for sound." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundWave, Pitch), METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Attenuation settings to use if Override Attenuation is set to true */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundWave.h" },
		{ "ToolTip", "Attenuation settings to use if Override Attenuation is set to true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundWave, AttenuationOverrides), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 1019755818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveBank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_WaveID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundWave_Statics::NewProp_AttenuationOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundWave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundWave_Statics::ClassParams = {
		&UAtomSoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundWave()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundWave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundWave.OuterSingleton, Z_Construct_UClass_UAtomSoundWave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundWave.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundWave>()
	{
		return UAtomSoundWave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundWave);
	UAtomSoundWave::~UAtomSoundWave() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundWave, UAtomSoundWave::StaticClass, TEXT("UAtomSoundWave"), &Z_Registration_Info_UClass_UAtomSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundWave), 1610548427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWave_h_3534549955(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundWave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
