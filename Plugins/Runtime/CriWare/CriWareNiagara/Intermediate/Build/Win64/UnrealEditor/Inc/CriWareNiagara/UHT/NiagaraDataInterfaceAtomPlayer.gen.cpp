// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareNiagara/Public/NiagaraDataInterfaceAtomPlayer.h"
#include "CriWareCore/Public/Atom/Modulation/AtomAisacModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAtomPlayer() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacPatch_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettings();
	CRIWARENIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer();
	CRIWARENIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_CriWareNiagara();
// End Cross Module References
	void UNiagaraDataInterfaceAtomPlayer::StaticRegisterNativesUNiagaraDataInterfaceAtomPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAtomPlayer);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_NoRegister()
	{
		return UNiagaraDataInterfaceAtomPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Attenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Concurrency;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalAisacPatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalAisacPatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalAisacPatches;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[];
#endif
		static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLoopingOneShotSounds_MetaData[];
#endif
		static void NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLoopingOneShotSounds;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActiveDuringGameplay_MetaData[];
#endif
		static void NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActiveDuringGameplay;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareNiagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::Class_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** This Data Interface can be used to play one-shot audio effects driven by particle data using CriWare ADX. */" },
		{ "DisplayName", "Atom Player" },
		{ "IncludePath", "NiagaraDataInterfaceAtomPlayer.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This Data Interface can be used to play one-shot audio effects driven by particle data using CriWare ADX." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Reference to the Atom audio asset to play */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "Reference to the Atom audio asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, SoundToPlay), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_SoundToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_SoundToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Optional sound attenuation setting to use */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "Optional sound attenuation setting to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, Attenuation), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Attenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Concurrency_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Optional sound concurrency setting to use */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "Optional sound concurrency setting to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, Concurrency), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Concurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Concurrency_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AdditionalAisacPatches_Inner = { "AdditionalAisacPatches", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomAisacPatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AdditionalAisacPatches_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** A set of global ASIAC patches to add that can be used when setting the value on persistent Atom. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "A set of global ASIAC patches to add that can be used when setting the value on persistent Atom." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AdditionalAisacPatches = { "AdditionalAisacPatches", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, AdditionalAisacPatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AdditionalAisacPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AdditionalAisacPatches_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AisacControls_Inner = { "AisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlSettings, METADATA_PARAMS(nullptr, 0) }; // 1581297063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AisacControls_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** A set of ASIAC controls setting that can be referenced via the control name when setting the value on persistent Atom. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "A set of ASIAC controls setting that can be referenced via the control name when setting the value on persistent Atom." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AisacControls = { "AisacControls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, AisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AisacControls_MetaData)) }; // 1581297063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "Category", "Sound" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAtomPlayer*)Obj)->bLimitPlaysPerTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAtomPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** This sets the max number of sounds played each tick.\n\x09 *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\n\x09 *  The particles to discard when over the limit are *not* chosen in a deterministic way. */" },
		{ "EditCondition", "bLimitPlaysPerTick" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "This sets the max number of sounds played each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\nThe particles to discard when over the limit are *not* chosen in a deterministic way." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAtomPlayer, MaxPlaysPerTick), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If false then it the Atom component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "If false then it the Atom component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAtomPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAtomPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Playing looping sounds as persistent Atom audio is not a problem, as the sound is stopped when a particle dies, but one-shot audio outlives the niagara system and can never be stopped. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "Playing looping sounds as persistent Atom audio is not a problem, as the sound is stopped when a particle dies, but one-shot audio outlives the niagara system and can never be stopped." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAtomPlayer*)Obj)->bAllowLoopingOneShotSounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds = { "bAllowLoopingOneShotSounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAtomPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceAtomPlayer.h" },
		{ "ToolTip", "If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAtomPlayer*)Obj)->bOnlyActiveDuringGameplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bOnlyActiveDuringGameplay = { "bOnlyActiveDuringGameplay", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAtomPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_SoundToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_Concurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AdditionalAisacPatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AdditionalAisacPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_AisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bLimitPlaysPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_MaxPlaysPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bAllowLoopingOneShotSounds,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::NewProp_bOnlyActiveDuringGameplay,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAtomPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::ClassParams = {
		&UNiagaraDataInterfaceAtomPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer.OuterSingleton;
	}
	template<> CRIWARENIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAtomPlayer>()
	{
		return UNiagaraDataInterfaceAtomPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAtomPlayer);
	UNiagaraDataInterfaceAtomPlayer::~UNiagaraDataInterfaceAtomPlayer() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAtomPlayer, UNiagaraDataInterfaceAtomPlayer::StaticClass, TEXT("UNiagaraDataInterfaceAtomPlayer"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAtomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAtomPlayer), 2550716780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_2472798199(TEXT("/Script/CriWareNiagara"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareNiagara_Source_CriWareNiagara_Public_NiagaraDataInterfaceAtomPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
