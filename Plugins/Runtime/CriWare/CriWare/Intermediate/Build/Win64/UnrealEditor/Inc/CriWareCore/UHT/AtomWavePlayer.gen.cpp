// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomWavePlayer.h"
#include "CriWareCore/Public/Atom/Atom.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWavePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBank_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundCue_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWave_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWaveBank_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWavePlayer();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomWavePlayState();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomWavePlayState;
	static UEnum* EAtomWavePlayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomWavePlayState, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomWavePlayState"));
		}
		return Z_Registration_Info_UEnum_EAtomWavePlayState.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomWavePlayState>()
	{
		return EAtomWavePlayState_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::Enumerators[] = {
		{ "EAtomWavePlayState::Playing", (int64)EAtomWavePlayState::Playing },
		{ "EAtomWavePlayState::Stopped", (int64)EAtomWavePlayState::Stopped },
		{ "EAtomWavePlayState::Paused", (int64)EAtomWavePlayState::Paused },
		{ "EAtomWavePlayState::FadingIn", (int64)EAtomWavePlayState::FadingIn },
		{ "EAtomWavePlayState::FadingOut", (int64)EAtomWavePlayState::FadingOut },
		{ "EAtomWavePlayState::Count", (int64)EAtomWavePlayState::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enum describing the audio component play state\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAtomWavePlayState::Count" },
		{ "FadingIn.Comment", "// If the sound is playing and fading in\n" },
		{ "FadingIn.Name", "EAtomWavePlayState::FadingIn" },
		{ "FadingIn.ToolTip", "If the sound is playing and fading in" },
		{ "FadingOut.Comment", "// If the sound is playing and fading out\n" },
		{ "FadingOut.Name", "EAtomWavePlayState::FadingOut" },
		{ "FadingOut.ToolTip", "If the sound is playing and fading out" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "Paused.Comment", "// If the sound is playing but paused\n" },
		{ "Paused.Name", "EAtomWavePlayState::Paused" },
		{ "Paused.ToolTip", "If the sound is playing but paused" },
		{ "Playing.Comment", "// If the sound is playing (i.e. not fading in, not fading out, not paused)\n" },
		{ "Playing.Name", "EAtomWavePlayState::Playing" },
		{ "Playing.ToolTip", "If the sound is playing (i.e. not fading in, not fading out, not paused)" },
		{ "Stopped.Comment", "// If the sound is not playing\n" },
		{ "Stopped.Name", "EAtomWavePlayState::Stopped" },
		{ "Stopped.ToolTip", "If the sound is not playing" },
		{ "ToolTip", "Enum describing the audio component play state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomWavePlayState",
		"EAtomWavePlayState",
		Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomWavePlayState()
	{
		if (!Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomWavePlayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomWavePlayState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnWaveFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnWavePlaybackPercent_Parms
		{
			const UAtomWaveBank* PlayingWaveBank;
			int32 PlayingWaveId;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingWaveBank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingWaveBank;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingWaveId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingWaveBank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingWaveBank = { "PlayingWaveBank", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnWavePlaybackPercent_Parms, PlayingWaveBank), Z_Construct_UClass_UAtomWaveBank_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingWaveBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingWaveBank_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingWaveId = { "PlayingWaveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnWavePlaybackPercent_Parms, PlayingWaveId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnWavePlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingWaveBank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingWaveId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\n * Computed as samples played divided by total samples, taking into account pitch.\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnWavePlaybackPercent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::_Script_CriWareCore_eventOnWavePlaybackPercent_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a state changed occurred in the player. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a state changed occurred in the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomWavePlayerStateChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetPlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAtomWavePlayState*)Z_Param__Result=P_THIS->GetPlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_Looping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execHasError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execStopDelayed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDelayed(Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetWaveInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomWaveInfo*)Z_Param__Result=P_THIS->GetWaveInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetSoundBank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomSoundBank**)Z_Param__Result=P_THIS->GetSoundBank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomSoundBase**)Z_Param__Result=P_THIS->GetSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetCue)
	{
		P_GET_OBJECT(UAtomSoundCue,Z_Param_InSoundCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCue(Z_Param_InSoundCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetWave)
	{
		P_GET_OBJECT(UAtomSoundWave,Z_Param_InSoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWave(Z_Param_InSoundWave);
		P_NATIVE_END;
	}
	void UAtomWavePlayer::StaticRegisterNativesUAtomWavePlayer()
	{
		UClass* Class = UAtomWavePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVolume", &UAtomWavePlayer::execAdjustVolume },
			{ "GetPlayState", &UAtomWavePlayer::execGetPlayState },
			{ "GetSound", &UAtomWavePlayer::execGetSound },
			{ "GetSoundBank", &UAtomWavePlayer::execGetSoundBank },
			{ "GetTime", &UAtomWavePlayer::execGetTime },
			{ "GetWaveInfo", &UAtomWavePlayer::execGetWaveInfo },
			{ "HasError", &UAtomWavePlayer::execHasError },
			{ "IsLooping", &UAtomWavePlayer::execIsLooping },
			{ "IsPaused", &UAtomWavePlayer::execIsPaused },
			{ "IsPlaying", &UAtomWavePlayer::execIsPlaying },
			{ "Play", &UAtomWavePlayer::execPlay },
			{ "SetCue", &UAtomWavePlayer::execSetCue },
			{ "SetLooping", &UAtomWavePlayer::execSetLooping },
			{ "SetPaused", &UAtomWavePlayer::execSetPaused },
			{ "SetWave", &UAtomWavePlayer::execSetWave },
			{ "Stop", &UAtomWavePlayer::execStop },
			{ "StopDelayed", &UAtomWavePlayer::execStopDelayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics
	{
		struct AtomWavePlayer_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/*, const EAudioFaderCurve FadeCurve = EAudioFaderCurve::Linear*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", ", const EAudioFaderCurve FadeCurve = EAudioFaderCurve::Linear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::AtomWavePlayer_eventAdjustVolume_Parms), Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics
	{
		struct AtomWavePlayer_eventGetPlayState_Parms
		{
			EAtomWavePlayState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetPlayState_Parms, ReturnValue), Z_Construct_UEnum_CriWareCore_EAtomWavePlayState, METADATA_PARAMS(nullptr, 0) }; // 1194593626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Returns the enumerated play states of the audio component. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Returns the enumerated play states of the audio component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetPlayState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::AtomWavePlayer_eventGetPlayState_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics
	{
		struct AtomWavePlayer_eventGetSound_Parms
		{
			UAtomSoundBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetSound_Parms, ReturnValue), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Atom|AtomWavePlayer\")\n//UAtomSoundCue* GetCue() const { return SoundAtomCue; }\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Atom|AtomWavePlayer\")\nUAtomSoundCue* GetCue() const { return SoundAtomCue; }" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::AtomWavePlayer_eventGetSound_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics
	{
		struct AtomWavePlayer_eventGetSoundBank_Parms
		{
			UAtomSoundBank* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetSoundBank_Parms, ReturnValue), Z_Construct_UClass_UAtomSoundBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetSoundBank", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::AtomWavePlayer_eventGetSoundBank_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics
	{
		struct AtomWavePlayer_eventGetTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mana|ManaPlayer" },
		{ "Comment", "/**\n\x09 * Get the Mana current total playback time.\n\x09 *\n\x09 * @return Playback time.\n\x09 * @see GetMovieTime, GetDuration, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Get the Mana current total playback time.\n\n@return Playback time.\n@see GetMovieTime, GetDuration, Seek" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::AtomWavePlayer_eventGetTime_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics
	{
		struct AtomWavePlayer_eventGetWaveInfo_Parms
		{
			FAtomWaveInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventGetWaveInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(nullptr, 0) }; // 2079236216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetWaveInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::AtomWavePlayer_eventGetWaveInfo_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics
	{
		struct AtomWavePlayer_eventHasError_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventHasError_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventHasError_Parms), &Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether the player is in an error state.\n\x09 *\n\x09 * When the player is in an error state, no further operations are possible.\n\x09 * The current wave must be stopped, and a new wave source must be set\n\x09 * before the player can be used again. Errors are usually caused by faulty\n\x09 * sound files or interrupted network connections.\n\x09 *\n\x09 * @return true if player is in an error state, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether the player is in an error state.\n\nWhen the player is in an error state, no further operations are possible.\nThe current wave must be stopped, and a new wave source must be set\nbefore the player can be used again. Errors are usually caused by faulty\nsound files or interrupted network connections.\n\n@return true if player is in an error state, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "HasError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::AtomWavePlayer_eventHasError_Parms), Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_HasError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics
	{
		struct AtomWavePlayer_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback is looping.\n\x09 *\n\x09 * @return true if looping, false otherwise.\n\x09 * @see IsPaused, IsPlaying, SetLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether playback is looping.\n\n@return true if looping, false otherwise.\n@see IsPaused, IsPlaying, SetLooping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::AtomWavePlayer_eventIsLooping_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics
	{
		struct AtomWavePlayer_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback is currently paused.\n\x09 *\n\x09 * @return true if playback is paused, false otherwise.\n\x09 * @see IsLooping, IsPaused, IsPlaying, Pause\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether playback is currently paused.\n\n@return true if playback is paused, false otherwise.\n@see IsLooping, IsPaused, IsPlaying, Pause" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::AtomWavePlayer_eventIsPaused_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics
	{
		struct AtomWavePlayer_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback has started.\n\x09 *\n\x09 * @return true if playback has started, false otherwise.\n\x09 * @see IsLooping, IsPaused, IsPlaying, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether playback has started.\n\n@return true if playback has started, false otherwise.\n@see IsLooping, IsPaused, IsPlaying, Play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::AtomWavePlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_Play_Statics
	{
		struct AtomWavePlayer_eventPlay_Parms
		{
			float StartTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Start a sound playing on an audio component */" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Start a sound playing on an audio component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::AtomWavePlayer_eventPlay_Parms), Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics
	{
		struct AtomWavePlayer_eventSetCue_Parms
		{
			UAtomSoundCue* InSoundCue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::NewProp_InSoundCue = { "InSoundCue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventSetCue_Parms, InSoundCue), Z_Construct_UClass_UAtomSoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::NewProp_InSoundCue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Play the 1st wave of a cue */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Play the 1st wave of a cue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::AtomWavePlayer_eventSetCue_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics
	{
		struct AtomWavePlayer_eventSetLooping_Parms
		{
			bool Looping;
			bool ReturnValue;
		};
		static void NewProp_Looping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetLooping_Parms*)Obj)->Looping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Enables or disables playback looping.\n\x09 *\n\x09 * @param Looping Whether playback should be looped.\n\x09 * @return true on success, false otherwise.\n\x09 * @see IsLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Enables or disables playback looping.\n\n@param Looping Whether playback should be looped.\n@return true on success, false otherwise.\n@see IsLooping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::AtomWavePlayer_eventSetLooping_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics
	{
		struct AtomWavePlayer_eventSetPaused_Parms
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
	void Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetPaused_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWavePlayer_eventSetPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Pause sound playing, issue any delegates if needed */" },
		{ "CPP_Default_bPause", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Pause sound playing, issue any delegates if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::AtomWavePlayer_eventSetPaused_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics
	{
		struct AtomWavePlayer_eventSetWave_Parms
		{
			UAtomSoundWave* InSoundWave;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventSetWave_Parms, InSoundWave), Z_Construct_UClass_UAtomSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InSoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "//~ Settings\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::AtomWavePlayer_eventSetWave_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Stop sound, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Stop sound, issue any delegates if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics
	{
		struct AtomWavePlayer_eventStopDelayed_Parms
		{
			float DelayTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWavePlayer_eventStopDelayed_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "StopDelayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::AtomWavePlayer_eventStopDelayed_Parms), Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_StopDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomWavePlayer);
	UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister()
	{
		return UAtomWavePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomWavePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWaveFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaveFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWavePlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWavePlaybackPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomRack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomWavePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomWavePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume, "AdjustVolume" }, // 2082648382
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetPlayState, "GetPlayState" }, // 1365050998
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetSound, "GetSound" }, // 3608720229
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetSoundBank, "GetSoundBank" }, // 2302186107
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetTime, "GetTime" }, // 395090430
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo, "GetWaveInfo" }, // 397656215
		{ &Z_Construct_UFunction_UAtomWavePlayer_HasError, "HasError" }, // 80506717
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsLooping, "IsLooping" }, // 1410975174
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPaused, "IsPaused" }, // 1530320856
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying, "IsPlaying" }, // 4194488175
		{ &Z_Construct_UFunction_UAtomWavePlayer_Play, "Play" }, // 3304001880
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetCue, "SetCue" }, // 641067091
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetLooping, "SetLooping" }, // 3580934282
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetPaused, "SetPaused" }, // 2491299425
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetWave, "SetWave" }, // 164736948
		{ &Z_Construct_UFunction_UAtomWavePlayer_Stop, "Stop" }, // 3097999784
		{ &Z_Construct_UFunction_UAtomWavePlayer_StopDelayed, "StopDelayed" }, // 2765956404
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an Atom wave player asset that can play Atom waves.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomWavePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements an Atom wave player asset that can play Atom waves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAtomWavePlayer*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished = { "OnWaveFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, OnWaveFinished), Z_Construct_UDelegateFunction_CriWareCore_OnWaveFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData)) }; // 3010526392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData[] = {
		{ "Comment", "/** Called as a sound plays on the player to allow BP to perform actions based on playback percentage.\n\x09* Computed as samples played divided by total samples, taking into account pitch.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Called as a sound plays on the player to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent = { "OnWavePlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, OnWavePlaybackPercent), Z_Construct_UDelegateFunction_CriWareCore_OnWavePlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData)) }; // 1373685645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Sound to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Wave info from the selected wave." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo = { "WaveInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, WaveInfo), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData)) }; // 2079236216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_AtomRack_MetaData[] = {
		{ "Category", "Atom|Submix" },
		{ "Comment", "/** Rack to route sound output to. If unset, falls back to the 'Master Submix' \n\x09 * as set in the 'Atom' category of CriWare Plugin in Project Settings'. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Rack to route sound output to. If unset, falls back to the 'Master Submix'\nas set in the 'Atom' category of CriWare Plugin in Project Settings'." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_AtomRack = { "AtomRack", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWavePlayer, AtomRack), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_AtomRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_AtomRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * Whether the player should loop when media playback reaches the end.\n\x09 *\n\x09 * Use the SetLooping function to change this value at runtime.\n\x09 *\n\x09 * @see IsLooping, SetLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWavePlayer.h" },
		{ "ToolTip", "Whether the player should loop when media playback reaches the end.\n\nUse the SetLooping function to change this value at runtime.\n\n@see IsLooping, SetLooping" },
	};
#endif
	void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UAtomWavePlayer*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_AtomRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomWavePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomWavePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams = {
		&UAtomWavePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomWavePlayer()
	{
		if (!Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton, Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomWavePlayer.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomWavePlayer>()
	{
		return UAtomWavePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomWavePlayer);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomWavePlayer)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_Statics::EnumInfo[] = {
		{ EAtomWavePlayState_StaticEnum, TEXT("EAtomWavePlayState"), &Z_Registration_Info_UEnum_EAtomWavePlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1194593626U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomWavePlayer, UAtomWavePlayer::StaticClass, TEXT("UAtomWavePlayer"), &Z_Registration_Info_UClass_UAtomWavePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomWavePlayer), 352579748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_3267134553(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
