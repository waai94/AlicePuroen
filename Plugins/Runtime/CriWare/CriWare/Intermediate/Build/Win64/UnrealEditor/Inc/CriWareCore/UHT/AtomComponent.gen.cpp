// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomComponent.h"
#include "CriWareCore/Public/Atom/Atom.h"
#include "CriWareCore/Public/Atom/AtomAisacPatch.h"
#include "CriWareCore/Public/Atom/AtomAttenuation.h"
#include "CriWareCore/Public/Atom/AtomEnvelope.h"
#include "CriWareCore/Public/Atom/AtomParameter.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationDestination.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomFaderCurve();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationDestination();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationRouting();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControl();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomEnvelope();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomParameter();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSequencerEventInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomComponentPlayState;
	static UEnum* EAtomComponentPlayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomComponentPlayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomComponentPlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomComponentPlayState"));
		}
		return Z_Registration_Info_UEnum_EAtomComponentPlayState.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomComponentPlayState>()
	{
		return EAtomComponentPlayState_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::Enumerators[] = {
		{ "EAtomComponentPlayState::Playing", (int64)EAtomComponentPlayState::Playing },
		{ "EAtomComponentPlayState::Stopped", (int64)EAtomComponentPlayState::Stopped },
		{ "EAtomComponentPlayState::Paused", (int64)EAtomComponentPlayState::Paused },
		{ "EAtomComponentPlayState::FadingIn", (int64)EAtomComponentPlayState::FadingIn },
		{ "EAtomComponentPlayState::FadingOut", (int64)EAtomComponentPlayState::FadingOut },
		{ "EAtomComponentPlayState::Count", (int64)EAtomComponentPlayState::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enum describing the Atom component play state\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAtomComponentPlayState::Count" },
		{ "FadingIn.Comment", "// If the sound is playing and fading in\n" },
		{ "FadingIn.Name", "EAtomComponentPlayState::FadingIn" },
		{ "FadingIn.ToolTip", "If the sound is playing and fading in" },
		{ "FadingOut.Comment", "// If the sound is playing and fading out\n" },
		{ "FadingOut.Name", "EAtomComponentPlayState::FadingOut" },
		{ "FadingOut.ToolTip", "If the sound is playing and fading out" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "Paused.Comment", "// If the sound is playing but paused\n" },
		{ "Paused.Name", "EAtomComponentPlayState::Paused" },
		{ "Paused.ToolTip", "If the sound is playing but paused" },
		{ "Playing.Comment", "// If the sound is playing (i.e. not fading in, not fading out, not paused)\n" },
		{ "Playing.Name", "EAtomComponentPlayState::Playing" },
		{ "Playing.ToolTip", "If the sound is playing (i.e. not fading in, not fading out, not paused)" },
		{ "Stopped.Comment", "// If the sound is not playing\n" },
		{ "Stopped.Name", "EAtomComponentPlayState::Stopped" },
		{ "Stopped.ToolTip", "If the sound is not playing" },
		{ "ToolTip", "Enum describing the Atom component play state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomComponentPlayState",
		"EAtomComponentPlayState",
		Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState()
	{
		if (!Z_Registration_Info_UEnum_EAtomComponentPlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomComponentPlayState.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomComponentPlayState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundPlayStateChanged_Parms
		{
			EAtomComponentPlayState PlayState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState = { "PlayState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundPlayStateChanged_Parms, PlayState), Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState, METADATA_PARAMS(nullptr, 0) }; // 2876488347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when sound's PlayState changes. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when sound's PlayState changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundPlayStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundPlayStateChanged_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundVirtualizationChanged_Parms
		{
			bool bIsVirtualized;
		};
		static void NewProp_bIsVirtualized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVirtualized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized_SetBit(void* Obj)
	{
		((_Script_CriWareCore_eventOnAtomSoundVirtualizationChanged_Parms*)Obj)->bIsVirtualized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized = { "bIsVirtualized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CriWareCore_eventOnAtomSoundVirtualizationChanged_Parms), &Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when sound becomes virtualized or realized (resumes playback from virtualization). */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when sound becomes virtualized or realized (resumes playback from virtualization)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundVirtualizationChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundVirtualizationChanged_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundPlaybackPercent_Parms
		{
			const UAtomSoundBase* PlayingSoundBase;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundBase;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundBase = { "PlayingSoundBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundPlaybackPercent_Parms, PlayingSoundBase), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundPlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called as a sound plays on the Atom component to allow BP to perform actions based on playback percentage.\n * Computed as samples played divided by total samples, taking into account pitch.\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called as a sound plays on the Atom component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundPlaybackPercent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundPlaybackPercent_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundCueBlockIndexChanged_Parms
		{
			int32 BlockIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundCueBlockIndexChanged_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::NewProp_BlockIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when sound cue block index is reached. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when sound cue block index is reached." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundCueBlockIndexChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundCueBlockIndexChanged_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundCueBeatSync_Parms
		{
			FAtomBeatSyncInfo BeatSyncInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeatSyncInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::NewProp_BeatSyncInfo = { "BeatSyncInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundCueBeatSync_Parms, BeatSyncInfo), Z_Construct_UScriptStruct_FAtomBeatSyncInfo, METADATA_PARAMS(nullptr, 0) }; // 3547717785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::NewProp_BeatSyncInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when a beat occurs from cue sequence's BeatSync. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when a beat occurs from cue sequence's BeatSync." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundCueBeatSync__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundCueBeatSync_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundCueSequencerEvent_Parms
		{
			FAtomSequencerEventInfo EventInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundCueSequencerEvent_Parms, EventInfo), Z_Construct_UScriptStruct_FAtomSequencerEventInfo, METADATA_PARAMS(nullptr, 0) }; // 3701221165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when an event or a marker with a callback is reached in by cue sequencer. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when an event or a marker with a callback is reached in by cue sequencer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundCueSequencerEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundCueSequencerEvent_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundCueBeatSyncInfo_Parms
		{
			FAtomBeatSyncInfo BeatSyncInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeatSyncInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::NewProp_BeatSyncInfo = { "BeatSyncInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundCueBeatSyncInfo_Parms, BeatSyncInfo), Z_Construct_UScriptStruct_FAtomBeatSyncInfo, METADATA_PARAMS(nullptr, 0) }; // 3547717785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::NewProp_BeatSyncInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called by Atom when request cue sequence's BeatSync information from blueprint. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called by Atom when request cue sequence's BeatSync information from blueprint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundCueBeatSyncInfo__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundCueBeatSyncInfo_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSyncInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomModulationDestination;
	static UEnum* EAtomModulationDestination_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomModulationDestination.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomModulationDestination.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomModulationDestination, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomModulationDestination"));
		}
		return Z_Registration_Info_UEnum_EAtomModulationDestination.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomModulationDestination>()
	{
		return EAtomModulationDestination_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::Enumerators[] = {
		{ "EAtomModulationDestination::Volume", (int64)EAtomModulationDestination::Volume },
		{ "EAtomModulationDestination::Pitch", (int64)EAtomModulationDestination::Pitch },
		{ "EAtomModulationDestination::Lowpass", (int64)EAtomModulationDestination::Lowpass },
		{ "EAtomModulationDestination::Highpass", (int64)EAtomModulationDestination::Highpass },
		{ "EAtomModulationDestination::Count", (int64)EAtomModulationDestination::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAtomModulationDestination::Count" },
		{ "Highpass.Comment", "/* Cutoff Frequency of a highpass filter */" },
		{ "Highpass.Name", "EAtomModulationDestination::Highpass" },
		{ "Highpass.ToolTip", "Cutoff Frequency of a highpass filter" },
		{ "Lowpass.Comment", "/* Cutoff Frequency of a lowpass filter */" },
		{ "Lowpass.Name", "EAtomModulationDestination::Lowpass" },
		{ "Lowpass.ToolTip", "Cutoff Frequency of a lowpass filter" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "Pitch.Comment", "/* Pitch modulation */" },
		{ "Pitch.Name", "EAtomModulationDestination::Pitch" },
		{ "Pitch.ToolTip", "Pitch modulation" },
		{ "Volume.Comment", "/* Volume modulation */" },
		{ "Volume.Name", "EAtomModulationDestination::Volume" },
		{ "Volume.ToolTip", "Volume modulation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomModulationDestination",
		"EAtomModulationDestination",
		Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationDestination()
	{
		if (!Z_Registration_Info_UEnum_EAtomModulationDestination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomModulationDestination.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomModulationDestination_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomModulationDestination.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomComponent::execBP_GetAttenuationSettingsToApply)
	{
		P_GET_STRUCT_REF(FAtomAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetCueBeatSyncOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCueBeatSyncOffset(Z_Param_TimeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCueBeatSyncInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBeatSyncInfo*)Z_Param__Result=P_THIS->GetCueBeatSyncInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCueBlockIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCueBlockIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetCueNextBlockIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BlockIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCueNextBlockIndex(Z_Param_BlockIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execClearAllCueSelectorLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllCueSelectorLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execRemoveCueSelectorLabel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SelectorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCueSelectorLabel(Z_Param_SelectorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetCueSelectorLabel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SelectorName);
		P_GET_PROPERTY(FNameProperty,Z_Param_SelectorLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCueSelectorLabel(Z_Param_SelectorName,Z_Param_SelectorLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAisacControlValue)
	{
		P_GET_STRUCT(FAtomAisacControl,Z_Param_AisacControl);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAisacControlValue(Z_Param_AisacControl,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetMultiplePositions)
	{
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(EAtomMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMultiplePositions(Z_Param_Positions,EAtomMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetModulators)
	{
		P_GET_ENUM(EAtomModulationDestination,Z_Param_Destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UAtomModulatorBase*>*)Z_Param__Result=P_THIS->GetModulators(EAtomModulationDestination(Z_Param_Destination));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetModulationRouting)
	{
		P_GET_TSET_REF(UAtomModulatorBase*,Z_Param_Out_Modulators);
		P_GET_ENUM(EAtomModulationDestination,Z_Param_Destination);
		P_GET_ENUM(EAtomModulationRouting,Z_Param_RoutingMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModulationRouting(Z_Param_Out_Modulators,EAtomModulationDestination(Z_Param_Destination),EAtomModulationRouting(Z_Param_RoutingMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAtomBusSendPreEffect)
	{
		P_GET_OBJECT(UAtomBus,Z_Param_AtomBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AtomBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtomBusSendPreEffect(Z_Param_AtomBus,Z_Param_AtomBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetRackSend)
	{
		P_GET_OBJECT(UAtomRackBase,Z_Param_Rack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRackSend(Z_Param_Rack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execAdjustAttenuation)
	{
		P_GET_STRUCT_REF(FAtomAttenuationSettings,Z_Param_Out_InAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttenuation(Z_Param_Out_InAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetUISound)
	{
		P_GET_UBOOL(Z_Param_bInUISound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUISound(Z_Param_bInUISound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetLowPassFilterFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLowPassFilterFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetLowPassFilterEnabled)
	{
		P_GET_UBOOL(Z_Param_InLowPassFilterEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetPitchMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitchMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchMultiplier(Z_Param_NewPitchMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetVolumeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeMultiplier(Z_Param_NewVolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_GET_ENUM(EAtomFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel,EAtomFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetPlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAtomComponentPlayState*)Z_Param__Result=P_THIS->GetPlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsVirtualized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVirtualized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execStopDelayed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDelayed(Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_ENUM(EAtomFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel,EAtomFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_ENUM(EAtomFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime,EAtomFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetSound)
	{
		P_GET_OBJECT(UAtomSoundBase,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	void UAtomComponent::StaticRegisterNativesUAtomComponent()
	{
		UClass* Class = UAtomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UAtomComponent::execAdjustAttenuation },
			{ "AdjustVolume", &UAtomComponent::execAdjustVolume },
			{ "BP_GetAttenuationSettingsToApply", &UAtomComponent::execBP_GetAttenuationSettingsToApply },
			{ "ClearAllCueSelectorLabels", &UAtomComponent::execClearAllCueSelectorLabels },
			{ "FadeIn", &UAtomComponent::execFadeIn },
			{ "FadeOut", &UAtomComponent::execFadeOut },
			{ "GetCueBeatSyncInfo", &UAtomComponent::execGetCueBeatSyncInfo },
			{ "GetCueBlockIndex", &UAtomComponent::execGetCueBlockIndex },
			{ "GetModulators", &UAtomComponent::execGetModulators },
			{ "GetPlayState", &UAtomComponent::execGetPlayState },
			{ "IsPlaying", &UAtomComponent::execIsPlaying },
			{ "IsVirtualized", &UAtomComponent::execIsVirtualized },
			{ "Play", &UAtomComponent::execPlay },
			{ "RemoveCueSelectorLabel", &UAtomComponent::execRemoveCueSelectorLabel },
			{ "SetAisacControlValue", &UAtomComponent::execSetAisacControlValue },
			{ "SetAtomBusSendPreEffect", &UAtomComponent::execSetAtomBusSendPreEffect },
			{ "SetCueBeatSyncOffset", &UAtomComponent::execSetCueBeatSyncOffset },
			{ "SetCueNextBlockIndex", &UAtomComponent::execSetCueNextBlockIndex },
			{ "SetCueSelectorLabel", &UAtomComponent::execSetCueSelectorLabel },
			{ "SetLowPassFilterEnabled", &UAtomComponent::execSetLowPassFilterEnabled },
			{ "SetLowPassFilterFrequency", &UAtomComponent::execSetLowPassFilterFrequency },
			{ "SetModulationRouting", &UAtomComponent::execSetModulationRouting },
			{ "SetMultiplePositions", &UAtomComponent::execSetMultiplePositions },
			{ "SetPaused", &UAtomComponent::execSetPaused },
			{ "SetPitchMultiplier", &UAtomComponent::execSetPitchMultiplier },
			{ "SetRackSend", &UAtomComponent::execSetRackSend },
			{ "SetSound", &UAtomComponent::execSetSound },
			{ "SetUISound", &UAtomComponent::execSetUISound },
			{ "SetVolumeMultiplier", &UAtomComponent::execSetVolumeMultiplier },
			{ "Stop", &UAtomComponent::execStop },
			{ "StopDelayed", &UAtomComponent::execStopDelayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics
	{
		struct AtomComponent_eventAdjustAttenuation_Parms
		{
			FAtomAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) }; // 1019755818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** This function is used to modify the Attenuation Settings on the targeted Atom Component instance. \n\x09 * It is worth noting that Attenuation Settings are only passed to new Active Sounds on start, so modified Attenuation data should be set before sound playback. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "This function is used to modify the Attenuation Settings on the targeted Atom Component instance.\nIt is worth noting that Attenuation Settings are only passed to new Active Sounds on start, so modified Attenuation data should be set before sound playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AdjustAttenuation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::AtomComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics
	{
		struct AtomComponent_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
			EAtomFaderCurve FadeCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventAdjustVolume_Parms, FadeCurve), Z_Construct_UEnum_CriWareCore_EAtomFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData)) }; // 3302795458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** This function allows designers to trigger an adjustment to the sound instance's playback Volume with options for smoothly applying a curve over time.\n\x09 * @param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n\x09 * @param AdjustVolumeLevel The new volume to set the AtomComponent to.\n\x09 * @param FadeCurve The curve used when interpolating between the old and new volume.\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "This function allows designers to trigger an adjustment to the sound instance's playback Volume with options for smoothly applying a curve over time.\n@param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n@param AdjustVolumeLevel The new volume to set the AtomComponent to.\n@param FadeCurve The curve used when interpolating between the old and new volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::AtomComponent_eventAdjustVolume_Parms), Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FAtomAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(nullptr, 0) }; // 1019755818
	void Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Sound" },
		{ "Comment", "/** Retrieves Attenuation Settings data on the targeted Atom Component. Returns false if no settings were found.\n\x09 *  Because the Attenuation Settings data structure is copied, false returns will return default values.\n\x09 */" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
		{ "ToolTip", "Retrieves Attenuation Settings data on the targeted Atom Component. Returns false if no settings were found.\nBecause the Attenuation Settings data structure is copied, false returns will return default values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound|Cue" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "ClearAllCueSelectorLabels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_FadeIn_Statics
	{
		struct AtomComponent_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
			float StartTime;
			EAtomFaderCurve FadeCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, FadeCurve), Z_Construct_UEnum_CriWareCore_EAtomFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData)) }; // 3302795458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/**\n\x09 * This function allows designers to call Play on an AtomComponent instance while applying a volume curve over time.\n\x09 * Parameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\x09 *\n\x09 * @param FadeInDuration How long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel The percentage of the AtomComponents's calculated volume to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "This function allows designers to call Play on an AtomComponent instance while applying a volume curve over time.\nParameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\n@param FadeInDuration How long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel The percentage of the AtomComponents's calculated volume to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "FadeIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::AtomComponent_eventFadeIn_Parms), Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_FadeOut_Statics
	{
		struct AtomComponent_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
			EAtomFaderCurve FadeCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventFadeOut_Parms, FadeCurve), Z_Construct_UEnum_CriWareCore_EAtomFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData)) }; // 3302795458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/**\n\x09 * This function allows designers to call a delayed Stop on an Atom Component instance while applying a\n\x09 * volume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\x09 *\n\x09 * @param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel the percentage of the AtomComponents's calculated volume in which to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "This function allows designers to call a delayed Stop on an Atom Component instance while applying a\nvolume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AtomComponents's calculated volume in which to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "FadeOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::AtomComponent_eventFadeOut_Parms), Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics
	{
		struct AtomComponent_eventGetCueBeatSyncInfo_Parms
		{
			FAtomBeatSyncInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCueBeatSyncInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBeatSyncInfo, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::NewProp_ReturnValue_MetaData)) }; // 3547717785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound|Cue" },
		{ "Comment", "/** Gets the current cue's BeatSync information. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Gets the current cue's BeatSync information." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCueBeatSyncInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::AtomComponent_eventGetCueBeatSyncInfo_Parms), Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics
	{
		struct AtomComponent_eventGetCueBlockIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetCueBlockIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound|Cue" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCueBlockIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::AtomComponent_eventGetCueBlockIndex_Parms), Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetModulators_Statics
	{
		struct AtomComponent_eventGetModulators_Parms
		{
			EAtomModulationDestination Destination;
			TSet<UAtomModulatorBase*> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetModulators_Parms, Destination), Z_Construct_UEnum_CriWareCore_EAtomModulationDestination, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_Destination_MetaData)) }; // 101930103
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Modulators" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetModulators_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_Destination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * Gets the set of currently active modulators for a given Modulation Destination.\n\x09 * @param Destination The Destination to retrieve the Modulators from.\n\x09 * @return The set of of Modulators applied to this component for the given Destination.\n\x09 */" },
		{ "DisplayName", "Get Modulators" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Gets the set of currently active modulators for a given Modulation Destination.\n@param Destination The Destination to retrieve the Modulators from.\n@return The set of of Modulators applied to this component for the given Destination." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::AtomComponent_eventGetModulators_Parms), Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics
	{
		struct AtomComponent_eventGetPlayState_Parms
		{
			EAtomComponentPlayState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventGetPlayState_Parms, ReturnValue), Z_Construct_UEnum_CriWareCore_EAtomComponentPlayState, METADATA_PARAMS(nullptr, 0) }; // 2876488347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Returns the enumerated play states of the Atom component. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Returns the enumerated play states of the Atom component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetPlayState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::AtomComponent_eventGetPlayState_Parms), Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics
	{
		struct AtomComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Returns true if the targeted AtomComponent's sound is playing.\n\x09 *  Doesn't indicate if the sound is paused or fading in/out. Use GetPlayState() to get the full play state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Returns true if the targeted AtomComponent's sound is playing.\nDoesn't indicate if the sound is paused or fading in/out. Use GetPlayState() to get the full play state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::AtomComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics
	{
		struct AtomComponent_eventIsVirtualized_Parms
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
	void Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsVirtualized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventIsVirtualized_Parms), &Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Returns if the sound is virtualized. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Returns if the sound is virtualized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsVirtualized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::AtomComponent_eventIsVirtualized_Parms), Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsVirtualized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsVirtualized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Play_Statics
	{
		struct AtomComponent_eventPlay_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Begins playing the targeted Atom Component's sound at the designated Start Time, seeking into a sound.\n\x09 * @param StartTime The offset, in seconds, to begin reading the sound at\n\x09 */" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Begins playing the targeted Atom Component's sound at the designated Start Time, seeking into a sound.\n@param StartTime The offset, in seconds, to begin reading the sound at" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_Play_Statics::AtomComponent_eventPlay_Parms), Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics
	{
		struct AtomComponent_eventRemoveCueSelectorLabel_Parms
		{
			FName SelectorName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectorName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::NewProp_SelectorName = { "SelectorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventRemoveCueSelectorLabel_Parms, SelectorName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::NewProp_SelectorName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound|Cue" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "RemoveCueSelectorLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::AtomComponent_eventRemoveCueSelectorLabel_Parms), Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics
	{
		struct AtomComponent_eventSetAisacControlValue_Parms
		{
			FAtomAisacControl AisacControl;
			float Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControl;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAisacControlValue_Parms, AisacControl), Z_Construct_UScriptStruct_FAtomAisacControl, METADATA_PARAMS(nullptr, 0) }; // 2456867995
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAisacControlValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::NewProp_AisacControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Modulates in realtime the desired AISAC control value.\n\x09 * This multiply with the base control value and with any routed modulation.\n\x09 * @param AisacControl The AISAC control to modulate.\n\x09 * @param Value The value used to modulate the base value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Modulates in realtime the desired AISAC control value.\nThis multiply with the base control value and with any routed modulation.\n@param AisacControl The AISAC control to modulate.\n@param Value The value used to modulate the base value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAisacControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::AtomComponent_eventSetAisacControlValue_Parms), Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAisacControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAisacControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics
	{
		struct AtomComponent_eventSetAtomBusSendPreEffect_Parms
		{
			UAtomBus* AtomBus;
			float AtomBusSendLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomBus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AtomBusSendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBus = { "AtomBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAtomBusSendPreEffect_Parms, AtomBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBusSendLevel = { "AtomBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAtomBusSendPreEffect_Parms, AtomBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBusSendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Sets how much audio the sound should send to the given Atom Bus (PRE Source Effects).\n\x09 *  if the Bus Send doesn't already exist, it will be added to the overrides on the active sound. \n\x09 * @param AtomBus The Bus to send the signal to\n\x09 * @param AtomBusSendLevel The scalar used to alter the volume of the copied signal\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given Atom Bus (PRE Source Effects).\nif the Bus Send doesn't already exist, it will be added to the overrides on the active sound.\n@param AtomBus The Bus to send the signal to\n@param AtomBusSendLevel The scalar used to alter the volume of the copied signal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAtomBusSendPreEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::AtomComponent_eventSetAtomBusSendPreEffect_Parms), Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics
	{
		struct AtomComponent_eventSetCueBeatSyncOffset_Parms
		{
			int32 TimeOffset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetCueBeatSyncOffset_Parms, TimeOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::NewProp_TimeOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound|Cue" },
		{ "Comment", "/** Sets the cue's BeatSync time offset in milliseconds. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Sets the cue's BeatSync time offset in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetCueBeatSyncOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::AtomComponent_eventSetCueBeatSyncOffset_Parms), Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics
	{
		struct AtomComponent_eventSetCueNextBlockIndex_Parms
		{
			int32 BlockIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetCueNextBlockIndex_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::NewProp_BlockIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound|Cue" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetCueNextBlockIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::AtomComponent_eventSetCueNextBlockIndex_Parms), Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics
	{
		struct AtomComponent_eventSetCueSelectorLabel_Parms
		{
			FName SelectorName;
			FName SelectorLabel;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectorName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectorLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::NewProp_SelectorName = { "SelectorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetCueSelectorLabel_Parms, SelectorName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::NewProp_SelectorLabel = { "SelectorLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetCueSelectorLabel_Parms, SelectorLabel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::NewProp_SelectorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::NewProp_SelectorLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound|Cue" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetCueSelectorLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::AtomComponent_eventSetCueSelectorLabel_Parms), Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics
	{
		struct AtomComponent_eventSetLowPassFilterEnabled_Parms
		{
			bool InLowPassFilterEnabled;
		};
		static void NewProp_InLowPassFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InLowPassFilterEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit(void* Obj)
	{
		((AtomComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled = { "InLowPassFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventSetLowPassFilterEnabled_Parms), &Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** When set to TRUE, enables an additional Low Pass Filter Frequency to be calculated in with the\n\x09 *  sound instance's LPF total, allowing designers to set filter settings for the targeted Atom Component's\n\x09 *  sound instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "When set to TRUE, enables an additional Low Pass Filter Frequency to be calculated in with the\nsound instance's LPF total, allowing designers to set filter settings for the targeted Atom Component's\nsound instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetLowPassFilterEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::AtomComponent_eventSetLowPassFilterEnabled_Parms), Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics
	{
		struct AtomComponent_eventSetLowPassFilterFrequency_Parms
		{
			float InLowPassFilterFrequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLowPassFilterFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency = { "InLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Sets a cutoff frequency, in Hz, for the targeted Atom Component's sound's Low Pass Filter calculation.\n\x09 *  The lowest cutoff frequency from all of the sound instance's possible LPF calculations wins.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Sets a cutoff frequency, in Hz, for the targeted Atom Component's sound's Low Pass Filter calculation.\nThe lowest cutoff frequency from all of the sound instance's possible LPF calculations wins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetLowPassFilterFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::AtomComponent_eventSetLowPassFilterFrequency_Parms), Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics
	{
		struct AtomComponent_eventSetModulationRouting_Parms
		{
			TSet<UAtomModulatorBase*> Modulators;
			EAtomModulationDestination Destination;
			EAtomModulationRouting RoutingMethod;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoutingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoutingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoutingMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetModulationRouting_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetModulationRouting_Parms, Destination), Z_Construct_UEnum_CriWareCore_EAtomModulationDestination, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData)) }; // 101930103
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_RoutingMethod = { "RoutingMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetModulationRouting_Parms, RoutingMethod), Z_Construct_UEnum_CriWareCore_EAtomModulationRouting, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData)) }; // 2968889505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Modulators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::NewProp_RoutingMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * Sets the routing for one of the given Audio component's Modulation Destinations.\n\x09 * @param Modulators The set of modulators to apply to the given destination on the component.\n\x09 * @param Destination The destination to assign the modulators to.\n\x09 * @param RoutingMethod The routing method to use for the given modulator.\n\x09 */" },
		{ "CPP_Default_RoutingMethod", "Inherit" },
		{ "DisplayName", "Set Modulation Routing" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Sets the routing for one of the given Audio component's Modulation Destinations.\n@param Modulators The set of modulators to apply to the given destination on the component.\n@param Destination The destination to assign the modulators to.\n@param RoutingMethod The routing method to use for the given modulator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetModulationRouting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::AtomComponent_eventSetModulationRouting_Parms), Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetModulationRouting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetModulationRouting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics
	{
		struct AtomComponent_eventSetMultiplePositions_Parms
		{
			TArray<FTransform> Positions;
			EAtomMultiPositionType MultiPositionType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetMultiplePositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetMultiplePositions_Parms, MultiPositionType), Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType, METADATA_PARAMS(nullptr, 0) }; // 1812021839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/**\n\x09 * Sets multiple source attenuation positions if spatialization is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Sets multiple source attenuation positions if spatialization is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetMultiplePositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::AtomComponent_eventSetMultiplePositions_Parms), Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetMultiplePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetMultiplePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetPaused_Statics
	{
		struct AtomComponent_eventSetPaused_Parms
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
	void Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomComponent_eventSetPaused_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Pause sound playing, issue any delegates if needed */" },
		{ "CPP_Default_bPause", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Pause sound playing, issue any delegates if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::AtomComponent_eventSetPaused_Parms), Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics
	{
		struct AtomComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier = { "NewPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Set a new pitch multiplier */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Set a new pitch multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetPitchMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::AtomComponent_eventSetPitchMultiplier_Parms), Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics
	{
		struct AtomComponent_eventSetRackSend_Parms
		{
			UAtomRackBase* Rack;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::NewProp_Rack = { "Rack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetRackSend_Parms, Rack), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::NewProp_Rack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/*, float SendLevel*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", ", float SendLevel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetRackSend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::AtomComponent_eventSetRackSend_Parms), Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetRackSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetRackSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetSound_Statics
	{
		struct AtomComponent_eventSetSound_Parms
		{
			UAtomSoundBase* NewSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "// Set what sound is played by this component\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Set what sound is played by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::AtomComponent_eventSetSound_Parms), Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetUISound_Statics
	{
		struct AtomComponent_eventSetUISound_Parms
		{
			bool bInUISound;
		};
		static void NewProp_bInUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUISound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::NewProp_bInUISound_SetBit(void* Obj)
	{
		((AtomComponent_eventSetUISound_Parms*)Obj)->bInUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::NewProp_bInUISound = { "bInUISound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomComponent_eventSetUISound_Parms), &Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::NewProp_bInUISound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::NewProp_bInUISound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Set whether sounds generated by this Atom component should be considered UI sounds */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Set whether sounds generated by this Atom component should be considered UI sounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetUISound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::AtomComponent_eventSetUISound_Parms), Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetUISound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetUISound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics
	{
		struct AtomComponent_eventSetVolumeMultiplier_Parms
		{
			float NewVolumeMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolumeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier = { "NewVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventSetVolumeMultiplier_Parms, NewVolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Set a new volume multiplier */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Set a new volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetVolumeMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::AtomComponent_eventSetVolumeMultiplier_Parms), Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Stop sound, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Stop sound, issue any delegates if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics
	{
		struct AtomComponent_eventStopDelayed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomComponent_eventStopDelayed_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Sound" },
		{ "Comment", "/** Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "StopDelayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::AtomComponent_eventStopDelayed_Parms), Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_StopDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomComponent_StopDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomComponent);
	UClass* Z_Construct_UClass_UAtomComponent_NoRegister()
	{
		return UAtomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomComponent_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClassOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRemainActiveIfDropped_MetaData[];
#endif
		static void NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRemainActiveIfDropped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpatialization_MetaData[];
#endif
		static void NewProp_bAllowSpatialization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpatialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLowPassFilter_MetaData[];
#endif
		static void NewProp_bEnableLowPassFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLowPassFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAmplitudeEnvelope_MetaData[];
#endif
		static void NewProp_bEnableAmplitudeEnvelope_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAmplitudeEnvelope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePriority_MetaData[];
#endif
		static void NewProp_bOverridePriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPlayMultipleInstances_MetaData[];
#endif
		static void NewProp_bCanPlayMultipleInstances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPlayMultipleInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableParameterUpdatesWhilePlaying_MetaData[];
#endif
		static void NewProp_bDisableParameterUpdatesWhilePlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableParameterUpdatesWhilePlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[];
#endif
		static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponentUserID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AtomComponentUserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeEnvelope_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmplitudeEnvelope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConcurrencySet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationRouting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationRouting;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueSelectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSelectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CueSelectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueFirstBlockIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CueFirstBlockIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundPlayStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundPlayStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundVirtualizationChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundVirtualizationChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundPlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundPlaybackPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundCueBlockIndexChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundCueBlockIndexChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundCueBeatSync_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundCueBeatSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAtomSoundCueSequencerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSoundCueSequencerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomComponent_AdjustAttenuation, "AdjustAttenuation" }, // 2151392204
		{ &Z_Construct_UFunction_UAtomComponent_AdjustVolume, "AdjustVolume" }, // 1585300279
		{ &Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 3261703705
		{ &Z_Construct_UFunction_UAtomComponent_ClearAllCueSelectorLabels, "ClearAllCueSelectorLabels" }, // 2577818360
		{ &Z_Construct_UFunction_UAtomComponent_FadeIn, "FadeIn" }, // 3585372681
		{ &Z_Construct_UFunction_UAtomComponent_FadeOut, "FadeOut" }, // 873986379
		{ &Z_Construct_UFunction_UAtomComponent_GetCueBeatSyncInfo, "GetCueBeatSyncInfo" }, // 2015304357
		{ &Z_Construct_UFunction_UAtomComponent_GetCueBlockIndex, "GetCueBlockIndex" }, // 3095984645
		{ &Z_Construct_UFunction_UAtomComponent_GetModulators, "GetModulators" }, // 3040371504
		{ &Z_Construct_UFunction_UAtomComponent_GetPlayState, "GetPlayState" }, // 298682844
		{ &Z_Construct_UFunction_UAtomComponent_IsPlaying, "IsPlaying" }, // 1503893016
		{ &Z_Construct_UFunction_UAtomComponent_IsVirtualized, "IsVirtualized" }, // 2360808180
		{ &Z_Construct_UFunction_UAtomComponent_Play, "Play" }, // 756803531
		{ &Z_Construct_UFunction_UAtomComponent_RemoveCueSelectorLabel, "RemoveCueSelectorLabel" }, // 2014741739
		{ &Z_Construct_UFunction_UAtomComponent_SetAisacControlValue, "SetAisacControlValue" }, // 1511152736
		{ &Z_Construct_UFunction_UAtomComponent_SetAtomBusSendPreEffect, "SetAtomBusSendPreEffect" }, // 1111436087
		{ &Z_Construct_UFunction_UAtomComponent_SetCueBeatSyncOffset, "SetCueBeatSyncOffset" }, // 1790342949
		{ &Z_Construct_UFunction_UAtomComponent_SetCueNextBlockIndex, "SetCueNextBlockIndex" }, // 636629300
		{ &Z_Construct_UFunction_UAtomComponent_SetCueSelectorLabel, "SetCueSelectorLabel" }, // 1071787312
		{ &Z_Construct_UFunction_UAtomComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 4200485322
		{ &Z_Construct_UFunction_UAtomComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 2002473956
		{ &Z_Construct_UFunction_UAtomComponent_SetModulationRouting, "SetModulationRouting" }, // 471454486
		{ &Z_Construct_UFunction_UAtomComponent_SetMultiplePositions, "SetMultiplePositions" }, // 784776664
		{ &Z_Construct_UFunction_UAtomComponent_SetPaused, "SetPaused" }, // 3362095818
		{ &Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 2501236243
		{ &Z_Construct_UFunction_UAtomComponent_SetRackSend, "SetRackSend" }, // 317269259
		{ &Z_Construct_UFunction_UAtomComponent_SetSound, "SetSound" }, // 2559648318
		{ &Z_Construct_UFunction_UAtomComponent_SetUISound, "SetUISound" }, // 2385573433
		{ &Z_Construct_UFunction_UAtomComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 594813137
		{ &Z_Construct_UFunction_UAtomComponent_Stop, "Stop" }, // 862746158
		{ &Z_Construct_UFunction_UAtomComponent_StopDelayed, "StopDelayed" }, // 1198497640
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Atom" },
		{ "Comment", "/**\n * AtomComponent is used to play a Sound\n *\n * @see https://docs.unrealengine.com/WorkingWithAudio/Overview\n * @see UAtomSoundBase\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Atom/AtomComponent.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AtomComponent is used to play a Sound\n\n@see https://docs.unrealengine.com/WorkingWithAudio/Overview\n@see UAtomSoundBase" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The sound asset to be played. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "The sound asset to be played." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultParameters_Inner = { "DefaultParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomParameter, METADATA_PARAMS(nullptr, 0) }; // 1610218692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultParameters_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Array of parameters for this AtomComponent. Changes to this array directly will\n\x09  * not be forwarded to the sound if the component is actively playing, and will be superseded\n\x09  * by parameters set via the actor interface if set, or the instance parameters.\n\x09  */" },
		{ "DisplayAfter", "bDisableParameterUpdatesWhilePlaying" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Array of parameters for this AtomComponent. Changes to this array directly will\nnot be forwarded to the sound if the component is actively playing, and will be superseded\nby parameters set via the actor interface if set, or the instance parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultParameters = { "DefaultParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultParameters_MetaData)) }; // 1610218692
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_InstanceParameters_Inner = { "InstanceParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomParameter, METADATA_PARAMS(nullptr, 0) }; // 1610218692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_InstanceParameters_MetaData[] = {
		{ "Comment", "/** Array of transient parameters for this AtomComponent instance. Not serialized and can be set by code or BP.\n\x09  * Changes to this array directly will not be forwarded to the sound if the component is actively playing.\n\x09  * This should be done via the 'SetParameterX' calls implemented by the IAtomParameterControllerInterface.\n\x09  * Instance parameter values superseded the parameters set by the actor interface & the component's default\n\x09  * parameters.\n\x09  */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Array of transient parameters for this AtomComponent instance. Not serialized and can be set by code or BP.\nChanges to this array directly will not be forwarded to the sound if the component is actively playing.\nThis should be done via the 'SetParameterX' calls implemented by the IAtomParameterControllerInterface.\nInstance parameter values superseded the parameters set by the actor interface & the component's default\nparameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_InstanceParameters = { "InstanceParameters", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, InstanceParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_InstanceParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_InstanceParameters_MetaData)) }; // 1610218692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundClassOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** SoundClass that overrides that set on the referenced SoundBase when component is played. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "SoundClass that overrides that set on the referenced SoundBase when component is played." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundClassOverride = { "SoundClassOverride", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, SoundClassOverride), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundClassOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundClassOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData[] = {
		{ "Comment", "/** Whether the plaback instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Whether the plaback instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bShouldRemainActiveIfDropped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bShouldRemainActiveIfDropped = { "bShouldRemainActiveIfDropped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Overrides spatialization enablement in either the attenuation asset or on this Atom component's attenuation settings override. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Overrides spatialization enablement in either the attenuation asset or on this Atom component's attenuation settings override." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bAllowSpatialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAllowSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Allows defining attenuation settings directly on this Atom component without using an attenuation settings asset. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Allows defining attenuation settings directly on this Atom component without using an attenuation settings asset." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableLowPassFilter_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not to apply a low-pass filter to the sound that plays in this Atom component. */" },
		{ "DisplayAfter", "PitchMultiplier" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Whether or not to apply a low-pass filter to the sound that plays in this Atom component." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableLowPassFilter_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bEnableLowPassFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableLowPassFilter = { "bEnableLowPassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableLowPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableLowPassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableLowPassFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableAmplitudeEnvelope_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not to apply an amplitude envelope to the sound that plays in this Atom component. */" },
		{ "DisplayAfter", "LowPassFilterFrequency" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Whether or not to apply an amplitude envelope to the sound that plays in this Atom component." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableAmplitudeEnvelope_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bEnableAmplitudeEnvelope = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableAmplitudeEnvelope = { "bEnableAmplitudeEnvelope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableAmplitudeEnvelope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableAmplitudeEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableAmplitudeEnvelope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverridePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not to override the priority of the given sound with the value provided. */" },
		{ "DisplayAfter", "AmplitudeEnvelope" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Whether or not to override the priority of the given sound with the value provided." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverridePriority_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bOverridePriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverridePriority = { "bOverridePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverridePriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverridePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverridePriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanPlayMultipleInstances_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If true, the Atom Component will play multiple sound instances at once. Switching sounds or calling play while already playing\n\x09  * will not stop already active instances. Disabling while sound(s) are playing\n\x09  * will not take effect until the AtomComponent is stopped and restarted. */" },
		{ "DisplayAfter", "Priority" },
		{ "DisplayName", "Play Multiple Instances" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "If true, the Atom Component will play multiple sound instances at once. Switching sounds or calling play while already playing\nwill not stop already active instances. Disabling while sound(s) are playing\nwill not take effect until the AtomComponent is stopped and restarted." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanPlayMultipleInstances_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bCanPlayMultipleInstances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanPlayMultipleInstances = { "bCanPlayMultipleInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanPlayMultipleInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanPlayMultipleInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanPlayMultipleInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** If true, the Audio Component will ignore parameter updates for already-playing sound(s). */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "If true, the Audio Component will ignore parameter updates for already-playing sound(s)." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bDisableParameterUpdatesWhilePlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying = { "bDisableParameterUpdatesWhilePlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed.\n\x09 * This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09 * If enabled, this AtomComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be\n\x09 * detached/attached along with it.\n\x09 * When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09 * This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09 * @see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nIf enabled, this AtomComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be\ndetached/attached along with it.\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bAutoManageAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoManageAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AtomComponentUserID_MetaData[] = {
		{ "Comment", "/** Configurable, serialized ID for plugins */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Configurable, serialized ID for plugins" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AtomComponentUserID = { "AtomComponentUserID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AtomComponentUserID), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AtomComponentUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AtomComponentUserID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMin_MetaData[] = {
		{ "Category", "Randomization|Pitch" },
		{ "Comment", "/** The lower bound to use when randomly determining a pitch multiplier */" },
		{ "DisplayName", "Pitch (Min)" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMin = { "PitchModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, PitchModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMax_MetaData[] = {
		{ "Category", "Randomization|Pitch" },
		{ "Comment", "/** The upper bound to use when randomly determining a pitch multiplier */" },
		{ "DisplayName", "Pitch (Max)" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMax = { "PitchModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, PitchModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMin_MetaData[] = {
		{ "Category", "Randomization|Volume" },
		{ "Comment", "/** The lower bound to use when randomly determining a volume multiplier */" },
		{ "DisplayName", "Volume (Min)" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMin = { "VolumeModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, VolumeModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMax_MetaData[] = {
		{ "Category", "Randomization|Volume" },
		{ "Comment", "/** The upper bound to use when randomly determining a volume multiplier */" },
		{ "DisplayName", "Volume (Max)" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMax = { "VolumeModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, VolumeModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** A volume multiplier to apply to sounds generated by this component */" },
		{ "DisplayAfter", "Sound" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "A volume multiplier to apply to sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** A pitch multiplier to apply to sounds generated by this component */" },
		{ "DisplayAfter", "VolumeMultiplier" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "A pitch multiplier to apply to sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If enabled, the frequency of the Lowpass Filter (in Hz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter. */" },
		{ "DisplayAfter", "PitchMultiplier" },
		{ "EditCondition", "bEnableLowPassFilter" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "If enabled, the frequency of the Lowpass Filter (in Hz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AmplitudeEnvelope_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If enabled, override the envelope parameters to apply to voices. */" },
		{ "DisplayAfter", "LowPassFilterFrequency" },
		{ "EditCondition", "bEnableAmplitudeEnvelope" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "If enabled, override the envelope parameters to apply to voices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AmplitudeEnvelope = { "AmplitudeEnvelope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AmplitudeEnvelope), Z_Construct_UScriptStruct_FAtomEnvelope, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AmplitudeEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AmplitudeEnvelope_MetaData)) }; // 104035063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If enabled, overrides the priority of the selected sound with the value provided. */" },
		{ "DisplayAfter", "AmplitudeEnvelope" },
		{ "EditCondition", "bOverridePriority" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "If enabled, overrides the priority of the selected sound with the value provided." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component */" },
		{ "DisplayAfter", "bOverrideAttenuation" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AttenuationSettings), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "DisplayAfter", "bOverrideAttenuation" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 1019755818
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** What sound concurrency rules to use for sounds generated by this Atom component */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "What sound concurrency rules to use for sounds generated by this Atom component" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_ConcurrencySet_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachLocationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachRotationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachScaleRule_MetaData)) }; // 1532071077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Component we automatically attach to when activated, if bAutoManageAttachment is true.\n\x09 * If null during registration, we assign the existing AttachParent and defer attachment until we activate.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, AutoAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_ModulationRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* Modulation for sound parameters. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Modulation for sound parameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_ModulationRouting = { "ModulationRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, ModulationRouting), Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_ModulationRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_ModulationRouting_MetaData)) }; // 2169846499
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSelectors_Inner = { "CueSelectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) }; // 3545014898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSelectors_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "Comment", "/** When sound is a SoundCue, this defines the selectors to use. Possible selector name and labels are defined by the currently used AtomConfig. */" },
		{ "DisplayName", "Selectors" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "When sound is a SoundCue, this defines the selectors to use. Possible selector name and labels are defined by the currently used AtomConfig." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSelectors = { "CueSelectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, CueSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSelectors_MetaData)) }; // 3545014898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueFirstBlockIndex_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "Comment", "/** When sound is a SoundCue, this defines the index of the first block to playback at start. */" },
		{ "DisplayName", "First Block Index" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "When sound is a SoundCue, this defines the index of the first block to playback at start." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueFirstBlockIndex = { "CueFirstBlockIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, CueFirstBlockIndex), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueFirstBlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueFirstBlockIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundFinished_MetaData[] = {
		{ "Comment", "/** Called when we finish playing sound, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when we finish playing sound, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundFinished = { "OnAtomSoundFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundFinished), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundFinished_MetaData)) }; // 39780742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlayStateChanged_MetaData[] = {
		{ "Comment", "/** This function returns the Targeted Atom Component's current Play State.\n\x09  * Playing, if the sound is currently playing.\n\x09  * Stopped, if the sound is stopped.\n\x09  * Paused, if the sound is currently playing, but paused.\n\x09  * Fading In, if the sound is in the process of Fading In.\n\x09  * Fading Out, if the sound is in the process of Fading Out.\n\x09  */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "This function returns the Targeted Atom Component's current Play State.\nPlaying, if the sound is currently playing.\nStopped, if the sound is stopped.\nPaused, if the sound is currently playing, but paused.\nFading In, if the sound is in the process of Fading In.\nFading Out, if the sound is in the process of Fading Out." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlayStateChanged = { "OnAtomSoundPlayStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundPlayStateChanged), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlayStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlayStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlayStateChanged_MetaData)) }; // 217614378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundVirtualizationChanged_MetaData[] = {
		{ "Comment", "/** Called when virtualization state changes. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when virtualization state changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundVirtualizationChanged = { "OnAtomSoundVirtualizationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundVirtualizationChanged), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundVirtualizationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundVirtualizationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundVirtualizationChanged_MetaData)) }; // 188852730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlaybackPercent_MetaData[] = {
		{ "Comment", "/** Called as a sound plays on the Atom component to allow BP to perform actions based on playback percentage.\n\x09 *  Computed as samples played divided by total samples, taking into account pitch.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called as a sound plays on the Atom component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlaybackPercent = { "OnAtomSoundPlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundPlaybackPercent), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlaybackPercent_MetaData)) }; // 1664219217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged_MetaData[] = {
		{ "Comment", "/** Called when sound is a cue and a block index is reached. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when sound is a cue and a block index is reached." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged = { "OnAtomSoundCueBlockIndexChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundCueBlockIndexChanged), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBlockIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged_MetaData)) }; // 2273616550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBeatSync_MetaData[] = {
		{ "Comment", "/** Called when  . */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when  ." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBeatSync = { "OnAtomSoundCueBeatSync", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundCueBeatSync), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueBeatSync__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBeatSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBeatSync_MetaData)) }; // 3675039801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueSequencerEvent_MetaData[] = {
		{ "Comment", "/** Called when  . */" },
		{ "ModuleRelativePath", "Public/Atom/AtomComponent.h" },
		{ "ToolTip", "Called when  ." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueSequencerEvent = { "OnAtomSoundCueSequencerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponent, OnAtomSoundCueSequencerEvent), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundCueSequencerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueSequencerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueSequencerEvent_MetaData)) }; // 3601974548
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_InstanceParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_InstanceParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundClassOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bShouldRemainActiveIfDropped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAllowSpatialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableLowPassFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableAmplitudeEnvelope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverridePriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanPlayMultipleInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoManageAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AtomComponentUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchModulationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeModulationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_LowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AmplitudeEnvelope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_ConcurrencySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachLocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachRotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AutoAttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_ModulationRouting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSelectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSelectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueFirstBlockIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlayStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundVirtualizationChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundPlaybackPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBlockIndexChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueBeatSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSoundCueSequencerEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomComponent_Statics::ClassParams = {
		&UAtomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomComponent.OuterSingleton, Z_Construct_UClass_UAtomComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomComponent>()
	{
		return UAtomComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponent);
	UAtomComponent::~UAtomComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomComponent)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_Statics::EnumInfo[] = {
		{ EAtomComponentPlayState_StaticEnum, TEXT("EAtomComponentPlayState"), &Z_Registration_Info_UEnum_EAtomComponentPlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2876488347U) },
		{ EAtomModulationDestination_StaticEnum, TEXT("EAtomModulationDestination"), &Z_Registration_Info_UEnum_EAtomModulationDestination, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 101930103U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomComponent, UAtomComponent::StaticClass, TEXT("UAtomComponent"), &Z_Registration_Info_UClass_UAtomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomComponent), 2393082166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_4028956576(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
