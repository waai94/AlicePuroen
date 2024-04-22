// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneAtomSection.h"
#include "CriWareCore/Public/Atom/AtomAttenuation.h"
#include "CriWareCore/Public/Atom/AtomParameter.h"
#include "MovieScene/Public/Channels/MovieSceneAudioTriggerChannel.h"
#include "MovieScene/Public/Channels/MovieSceneBoolChannel.h"
#include "MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
#include "MovieSceneTracks/Public/Channels/MovieSceneStringChannel.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneAtomSection::execGetStartOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAtomSection::execSetStartOffset)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_InStartOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartOffset(Z_Param_InStartOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAtomSection::execGetSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomSoundBase**)Z_Param__Result=P_THIS->GetSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAtomSection::execSetSound)
	{
		P_GET_OBJECT(UAtomSoundBase,Z_Param_InSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSound(Z_Param_InSound);
		P_NATIVE_END;
	}
	void UMovieSceneAtomSection::StaticRegisterNativesUMovieSceneAtomSection()
	{
		UClass* Class = UMovieSceneAtomSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSound", &UMovieSceneAtomSection::execGetSound },
			{ "GetStartOffset", &UMovieSceneAtomSection::execGetStartOffset },
			{ "SetSound", &UMovieSceneAtomSection::execSetSound },
			{ "SetStartOffset", &UMovieSceneAtomSection::execSetStartOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics
	{
		struct MovieSceneAtomSection_eventGetSound_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAtomSection_eventGetSound_Parms, ReturnValue), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the sound for this section */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Gets the sound for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "GetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::MovieSceneAtomSection_eventGetSound_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_GetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_GetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics
	{
		struct MovieSceneAtomSection_eventGetStartOffset_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAtomSection_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Get the offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Get the offset into the beginning of the audio clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "GetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::MovieSceneAtomSection_eventGetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics
	{
		struct MovieSceneAtomSection_eventSetSound_Parms
		{
			UAtomSoundBase* InSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAtomSection_eventSetSound_Parms, InSound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::NewProp_InSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets this section's sound */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Sets this section's sound" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "SetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::MovieSceneAtomSection_eventSetSound_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics
	{
		struct MovieSceneAtomSection_eventSetStartOffset_Parms
		{
			FFrameNumber InStartOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStartOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset = { "InStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAtomSection_eventSetStartOffset_Parms, InStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set the offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Set the offset into the beginning of the audio clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "SetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::MovieSceneAtomSection_eventSetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAtomSection);
	UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAtomSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Float_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Float_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Float_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Float;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_String_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_String_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_String_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_String;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Bool_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Bool_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Bool_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Bool;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Int_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Int_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Int_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Int;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Trigger_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Trigger_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachActorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachActorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundWhenSequenceIsEnd_MetaData[];
#endif
		static void NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundWhenSequenceIsEnd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorLabels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorLabels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectorLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstBlockIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstBlockIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundPlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundPlaybackPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAtomSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneAtomSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_GetSound, "GetSound" }, // 842901373
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset, "GetStartOffset" }, // 3885920071
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_SetSound, "SetSound" }, // 3328483221
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset, "SetStartOffset" }, // 1903018807
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Atom section, for use in the master audio, or by attached audio objects\n */" },
		{ "IncludePath", "MovieSceneAtomSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Atom section, for use in the master audio, or by attached audio objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** The sound cue or wave that this section plays. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "The sound cue or wave that this section plays." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** The offset into the beginning of the audio clip. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "The offset into the beginning of the audio clip." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData[] = {
		{ "Comment", "/** The volume the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, SoundVolume), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Comment", "/** The pitch multiplier the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "The pitch multiplier the sound will be played with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, PitchMultiplier), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float_ValueProp = { "Inputs_Float", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) }; // 3942748414
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float_Key_KeyProp = { "Inputs_Float_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float_MetaData[] = {
		{ "Comment", "/** Generic inputs for the sound  */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Generic inputs for the sound" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float = { "Inputs_Float", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Inputs_Float), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String_ValueProp = { "Inputs_String", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(nullptr, 0) }; // 1425564024
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String_Key_KeyProp = { "Inputs_String_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String = { "Inputs_String", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Inputs_String), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String_MetaData)) }; // 1425564024
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool_ValueProp = { "Inputs_Bool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(nullptr, 0) }; // 3483262711
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool_Key_KeyProp = { "Inputs_Bool_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool = { "Inputs_Bool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Inputs_Bool), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool_MetaData)) }; // 3483262711
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int_ValueProp = { "Inputs_Int", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(nullptr, 0) }; // 1999530015
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int_Key_KeyProp = { "Inputs_Int_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int = { "Inputs_Int", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Inputs_Int), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int_MetaData)) }; // 1999530015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger_ValueProp = { "Inputs_Trigger", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel, METADATA_PARAMS(nullptr, 0) }; // 431799758
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger_Key_KeyProp = { "Inputs_Trigger_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger = { "Inputs_Trigger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Inputs_Trigger), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger_MetaData)) }; // 431799758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData = { "AttachActorData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, AttachActorData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData)) }; // 2755989385
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3082588753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The scalar parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "The scalar parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, ScalarParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData)) }; // 3082588753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/* Allow looping if the section length is greater than the sound duration */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Allow looping if the section length is greater than the sound duration" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bSuppressSubtitles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the attenuation settings on this section be used. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Should the attenuation settings on this section be used." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The attenuation settings to use. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "The attenuation settings to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, AttenuationSettings), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "DisplayAfter", "bOverrideAttenuation" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, AttenuationOverrides), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 1019755818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** If playback to continue after sequencer ends. */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "If playback to continue after sequencer ends." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bContinueSoundWhenSequenceIsEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd = { "bContinueSoundWhenSequenceIsEnd", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner = { "SelectorLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) }; // 3545014898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Selector label to set when playing sound (Sound Cue Only) */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Selector label to set when playing sound (Sound Cue Only)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels = { "SelectorLabels", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, SelectorLabels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData)) }; // 3545014898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_FirstBlockIndex_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Block index to set when playing sound (Sound Cue Only) */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "Block index to set when playing sound (Sound Cue Only)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_FirstBlockIndex = { "FirstBlockIndex", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, FirstBlockIndex), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_FirstBlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_FirstBlockIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundFinished = { "OnAtomSoundFinished", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, OnAtomSoundFinished), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundFinished_MetaData)) }; // 39780742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundPlaybackPercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundPlaybackPercent = { "OnAtomSoundPlaybackPercent", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, OnAtomSoundPlaybackPercent), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundPlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundPlaybackPercent_MetaData)) }; // 1664219217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Inputs_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_FirstBlockIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_OnAtomSoundPlaybackPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAtomSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAtomSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams = {
		&UMovieSceneAtomSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAtomSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAtomSection.OuterSingleton;
	}
	template<> CRIWAREMOVIESCENES_API UClass* StaticClass<UMovieSceneAtomSection>()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAtomSection);
	UMovieSceneAtomSection::~UMovieSceneAtomSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneAtomSection)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAtomSection, UMovieSceneAtomSection::StaticClass, TEXT("UMovieSceneAtomSection"), &Z_Registration_Info_UClass_UMovieSceneAtomSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAtomSection), 3232880006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_987571619(TEXT("/Script/CriWareMovieScenes"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
