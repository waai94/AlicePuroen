// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Components/AtomSynthComponent.h"
#include "CriWareCore/Public/Atom/Atom.h"
#include "CriWareCore/Public/Atom/AtomAisacPatch.h"
#include "CriWareCore/Public/Atom/AtomAttenuation.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationDestination.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSynthComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackWithParentBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWaveProcedural();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSynthComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSynthComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSynthSound();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSynthSound_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomFaderCurve();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationDestination();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomModulationRouting();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControl();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundToBusSend();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomSynthSound::StaticRegisterNativesUAtomSynthSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSynthSound);
	UClass* Z_Construct_UClass_UAtomSynthSound_NoRegister()
	{
		return UAtomSynthSound::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSynthSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSynthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningSynthComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSynthSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthSound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Forward Definitions\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Components/AtomSynthComponent.h" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Forward Definitions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthSound_Statics::NewProp_OwningSynthComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAtomSynthSound_Statics::NewProp_OwningSynthComponent = { "OwningSynthComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthSound, OwningSynthComponent), Z_Construct_UClass_UAtomSynthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthSound_Statics::NewProp_OwningSynthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthSound_Statics::NewProp_OwningSynthComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSynthSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthSound_Statics::NewProp_OwningSynthComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSynthSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSynthSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSynthSound_Statics::ClassParams = {
		&UAtomSynthSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSynthSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthSound_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSynthSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSynthSound()
	{
		if (!Z_Registration_Info_UClass_UAtomSynthSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSynthSound.OuterSingleton, Z_Construct_UClass_UAtomSynthSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSynthSound.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSynthSound>()
	{
		return UAtomSynthSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSynthSound);
	UAtomSynthSound::~UAtomSynthSound() {}
	DEFINE_FUNCTION(UAtomSynthComponent::execSetAisacControlValue)
	{
		P_GET_STRUCT_REF(FAtomAisacControl,Z_Param_Out_AisacControl);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAisacControlValue(Z_Param_Out_AisacControl,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execSetMultiplePositions)
	{
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(EAtomMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMultiplePositions(Z_Param_Positions,EAtomMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execGetModulators)
	{
		P_GET_ENUM(EAtomModulationDestination,Z_Param_Destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UAtomModulatorBase*>*)Z_Param__Result=P_THIS->GetModulators(EAtomModulationDestination(Z_Param_Destination));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execSetModulationRouting)
	{
		P_GET_TSET_REF(UAtomModulatorBase*,Z_Param_Out_Modulators);
		P_GET_ENUM(EAtomModulationDestination,Z_Param_Destination);
		P_GET_ENUM(EAtomModulationRouting,Z_Param_RoutingMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModulationRouting(Z_Param_Out_Modulators,EAtomModulationDestination(Z_Param_Destination),EAtomModulationRouting(Z_Param_RoutingMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_GET_ENUM(EAtomFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel,EAtomFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_ENUM(EAtomFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel,EAtomFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execFadeIn)
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
	DEFINE_FUNCTION(UAtomSynthComponent::execSetLowPassFilterFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLowPassFilterFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execSetLowPassFilterEnabled)
	{
		P_GET_UBOOL(Z_Param_InLowPassFilterEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execSetAtomBusSendPreEffect)
	{
		P_GET_OBJECT(UAtomBus,Z_Param_AtomBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AtomBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtomBusSendPreEffect(Z_Param_AtomBus,Z_Param_AtomBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execSetRackSend)
	{
		P_GET_OBJECT(UAtomRackBase,Z_Param_Rack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRackSend(Z_Param_Rack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execSetVolumeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeMultiplier(Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSynthComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void UAtomSynthComponent::StaticRegisterNativesUAtomSynthComponent()
	{
		UClass* Class = UAtomSynthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVolume", &UAtomSynthComponent::execAdjustVolume },
			{ "FadeIn", &UAtomSynthComponent::execFadeIn },
			{ "FadeOut", &UAtomSynthComponent::execFadeOut },
			{ "GetModulators", &UAtomSynthComponent::execGetModulators },
			{ "IsPlaying", &UAtomSynthComponent::execIsPlaying },
			{ "SetAisacControlValue", &UAtomSynthComponent::execSetAisacControlValue },
			{ "SetAtomBusSendPreEffect", &UAtomSynthComponent::execSetAtomBusSendPreEffect },
			{ "SetLowPassFilterEnabled", &UAtomSynthComponent::execSetLowPassFilterEnabled },
			{ "SetLowPassFilterFrequency", &UAtomSynthComponent::execSetLowPassFilterFrequency },
			{ "SetModulationRouting", &UAtomSynthComponent::execSetModulationRouting },
			{ "SetMultiplePositions", &UAtomSynthComponent::execSetMultiplePositions },
			{ "SetRackSend", &UAtomSynthComponent::execSetRackSend },
			{ "SetVolumeMultiplier", &UAtomSynthComponent::execSetVolumeMultiplier },
			{ "Start", &UAtomSynthComponent::execStart },
			{ "Stop", &UAtomSynthComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics
	{
		struct AtomSynthComponent_eventAdjustVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventAdjustVolume_Parms, FadeCurve), Z_Construct_UEnum_CriWareCore_EAtomFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData)) }; // 3302795458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/** This function allows designers to trigger an adjustment to the sound instance's playback Volume with options for smoothly applying a curve over time.\n\x09 * @param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n\x09 * @param AdjustVolumeLevel The new volume to set the Audio Component to.\n\x09 * @param FadeCurve The curve used when interpolating between the old and new volume.\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "This function allows designers to trigger an adjustment to the sound instance's playback Volume with options for smoothly applying a curve over time.\n@param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n@param AdjustVolumeLevel The new volume to set the Audio Component to.\n@param FadeCurve The curve used when interpolating between the old and new volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::AtomSynthComponent_eventAdjustVolume_Parms), Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics
	{
		struct AtomSynthComponent_eventFadeIn_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventFadeIn_Parms, FadeCurve), Z_Construct_UEnum_CriWareCore_EAtomFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData)) }; // 3302795458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call Play on an Audio Component instance while applying a volume curve over time.\n\x09 * Parameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\x09 *\n\x09 * @param FadeInDuration How long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "This function allows designers to call Play on an Audio Component instance while applying a volume curve over time.\nParameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\n@param FadeInDuration How long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "FadeIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::AtomSynthComponent_eventFadeIn_Parms), Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics
	{
		struct AtomSynthComponent_eventFadeOut_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventFadeOut_Parms, FadeCurve), Z_Construct_UEnum_CriWareCore_EAtomFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData)) }; // 3302795458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call a delayed Stop on an Audio Component instance while applying a\n\x09 * volume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\x09 *\n\x09 * @param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "This function allows designers to call a delayed Stop on an Audio Component instance while applying a\nvolume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "FadeOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::AtomSynthComponent_eventFadeOut_Parms), Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics
	{
		struct AtomSynthComponent_eventGetModulators_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventGetModulators_Parms, Destination), Z_Construct_UEnum_CriWareCore_EAtomModulationDestination, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_Destination_MetaData)) }; // 101930103
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Modulators" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventGetModulators_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_Destination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/**\n\x09 * Gets the set of currently active modulators for a given Modulation Destination.\n\x09 * @param Destination The Destination to retrieve the Modulators from.\n\x09 * @return The set of of Modulators applied to this component for the given Destination.\n\x09 */" },
		{ "DisplayName", "Get Modulators" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Gets the set of currently active modulators for a given Modulation Destination.\n@param Destination The Destination to retrieve the Modulators from.\n@return The set of of Modulators applied to this component for the given Destination." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "GetModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::AtomSynthComponent_eventGetModulators_Parms), Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_GetModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_GetModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics
	{
		struct AtomSynthComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomSynthComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomSynthComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/** Returns true if this component is currently playing. */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Returns true if this component is currently playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::AtomSynthComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics
	{
		struct AtomSynthComponent_eventSetAisacControlValue_Parms
		{
			FAtomAisacControl AisacControl;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControl;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::NewProp_AisacControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetAisacControlValue_Parms, AisacControl), Z_Construct_UScriptStruct_FAtomAisacControl, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::NewProp_AisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::NewProp_AisacControl_MetaData)) }; // 2456867995
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetAisacControlValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::NewProp_AisacControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/** Modulates in realtime the desired AISAC control value.\n\x09 * This multiply with the base control value and with any routed modulation.\n\x09 * @param AisacControl The AISAC control to modulate.\n\x09 * @param Value The value used to modulate the base value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Modulates in realtime the desired AISAC control value.\nThis multiply with the base control value and with any routed modulation.\n@param AisacControl The AISAC control to modulate.\n@param Value The value used to modulate the base value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetAisacControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::AtomSynthComponent_eventSetAisacControlValue_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics
	{
		struct AtomSynthComponent_eventSetAtomBusSendPreEffect_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBus = { "AtomBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetAtomBusSendPreEffect_Parms, AtomBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBusSendLevel = { "AtomBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetAtomBusSendPreEffect_Parms, AtomBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::NewProp_AtomBusSendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given AudioBus (pre effect). */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given AudioBus (pre effect)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetAtomBusSendPreEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::AtomSynthComponent_eventSetAtomBusSendPreEffect_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics
	{
		struct AtomSynthComponent_eventSetLowPassFilterEnabled_Parms
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
	void Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit(void* Obj)
	{
		((AtomSynthComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled = { "InLowPassFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomSynthComponent_eventSetLowPassFilterEnabled_Parms), &Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/** Sets whether or not the low pass filter is enabled on the audio component. */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Sets whether or not the low pass filter is enabled on the audio component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetLowPassFilterEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::AtomSynthComponent_eventSetLowPassFilterEnabled_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics
	{
		struct AtomSynthComponent_eventSetLowPassFilterFrequency_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency = { "InLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/** Sets lowpass filter frequency of the audio component. */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Sets lowpass filter frequency of the audio component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetLowPassFilterFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::AtomSynthComponent_eventSetLowPassFilterFrequency_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics
	{
		struct AtomSynthComponent_eventSetModulationRouting_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetModulationRouting_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetModulationRouting_Parms, Destination), Z_Construct_UEnum_CriWareCore_EAtomModulationDestination, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData)) }; // 101930103
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod = { "RoutingMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetModulationRouting_Parms, RoutingMethod), Z_Construct_UEnum_CriWareCore_EAtomModulationRouting, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData)) }; // 2968889505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Modulators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::NewProp_RoutingMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/**\n\x09 * Sets the routing for one of the given Synth component's Modulation Destinations.\n\x09 * @param Modulators The set of modulators to apply to the given destination on the component.\n\x09 * @param Destination The destination to assign the modulators to.\n\x09 * @param RoutingMethod The routing method to use for the given modulator.\n\x09 */" },
		{ "CPP_Default_RoutingMethod", "Inherit" },
		{ "DisplayName", "Set Modulation Routing" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Sets the routing for one of the given Synth component's Modulation Destinations.\n@param Modulators The set of modulators to apply to the given destination on the component.\n@param Destination The destination to assign the modulators to.\n@param RoutingMethod The routing method to use for the given modulator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetModulationRouting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::AtomSynthComponent_eventSetModulationRouting_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics
	{
		struct AtomSynthComponent_eventSetMultiplePositions_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetMultiplePositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetMultiplePositions_Parms, MultiPositionType), Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType, METADATA_PARAMS(nullptr, 0) }; // 1812021839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/**\n\x09 * Sets multiple source attenuation positions if spatialization is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Sets multiple source attenuation positions if spatialization is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetMultiplePositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::AtomSynthComponent_eventSetMultiplePositions_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics
	{
		struct AtomSynthComponent_eventSetRackSend_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::NewProp_Rack = { "Rack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetRackSend_Parms, Rack), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::NewProp_Rack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/** Sets sound send to the given Rack. */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Sets sound send to the given Rack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetRackSend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::AtomSynthComponent_eventSetRackSend_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetRackSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetRackSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics
	{
		struct AtomSynthComponent_eventSetVolumeMultiplier_Parms
		{
			float VolumeMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSynthComponent_eventSetVolumeMultiplier_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Components|Audio" },
		{ "Comment", "/** Set a new volume multiplier */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Set a new volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "SetVolumeMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::AtomSynthComponent_eventSetVolumeMultiplier_Parms), Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Starts the external audio.\n" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Starts the external audio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSynthComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSynthComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Stops the external audio.\n" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Stops the external audio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSynthComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSynthComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSynthComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSynthComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSynthComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSynthComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSynthComponent);
	UClass* Z_Construct_UClass_UAtomSynthComponent_NoRegister()
	{
		return UAtomSynthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSynthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationRouting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationRouting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClass;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreviewSound_MetaData[];
#endif
		static void NewProp_bIsPreviewSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreviewSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SynthSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSynthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomSynthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSynthComponent_AdjustVolume, "AdjustVolume" }, // 1188152083
		{ &Z_Construct_UFunction_UAtomSynthComponent_FadeIn, "FadeIn" }, // 3734658905
		{ &Z_Construct_UFunction_UAtomSynthComponent_FadeOut, "FadeOut" }, // 298319354
		{ &Z_Construct_UFunction_UAtomSynthComponent_GetModulators, "GetModulators" }, // 3204260832
		{ &Z_Construct_UFunction_UAtomSynthComponent_IsPlaying, "IsPlaying" }, // 3241042933
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetAisacControlValue, "SetAisacControlValue" }, // 3775958708
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetAtomBusSendPreEffect, "SetAtomBusSendPreEffect" }, // 684526946
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 237528781
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 2846832808
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetModulationRouting, "SetModulationRouting" }, // 1501452953
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetMultiplePositions, "SetMultiplePositions" }, // 904236910
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetRackSend, "SetRackSend" }, // 385155430
		{ &Z_Construct_UFunction_UAtomSynthComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 3030253788
		{ &Z_Construct_UFunction_UAtomSynthComponent_Start, "Start" }, // 2674923264
		{ &Z_Construct_UFunction_UAtomSynthComponent_Stop, "Stop" }, // 2863958996
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AtomSynth" },
		{ "Comment", "/**\n * An Atom compomennet that use externally created player and voices.\n * \n * Used for source access to sound created externally by CriWare libraries using their own AtomVoicePools and AtomExPlayers.\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Atom/Components/AtomSynthComponent.h" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An Atom compomennet that use externally created player and voices.\n\nUsed for source access to sound created externally by CriWare libraries using their own AtomVoicePools and AtomExPlayers." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Is this audio component allowed to be spatialized? */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Is this audio component allowed to be spatialized?" },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bAllowSpatialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAllowSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBaseRack_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** If enabled, sound will route to the Master Rack by default or to the Base Rack if defined. If disabled, sound will route ONLY to the Bus Sends */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "If enabled, sound will route to the Master Rack by default or to the Base Rack if defined. If disabled, sound will route ONLY to the Bus Sends" },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBaseRack_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bEnableBaseRack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBaseRack = { "bEnableBaseRack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBaseRack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBaseRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBaseRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBusSends_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** Whether or not to enable Bus Sends other than the Base Rack.*/" },
		{ "DisplayAfter", "AtomRack" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Whether or not to enable Bus Sends other than the Base Rack." },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBusSends_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bEnableBusSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBusSends = { "bEnableBusSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBusSends_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBusSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component */" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, AttenuationSettings), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 1019755818
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** What sound concurrency to use for sounds generated by this Atom component */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this Atom component" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ConcurrencySet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ModulationRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ModulationRouting = { "ModulationRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, ModulationRouting), Z_Construct_UScriptStruct_FAtomSoundModulationRoutingSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ModulationRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ModulationRouting_MetaData)) }; // 2169846499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SoundClass_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "Comment", "/** Sound class this sound belongs to */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, SoundClass), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SoundClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomRack_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** Rack this sound belongs to */" },
		{ "DisplayName", "Base Rack" },
		{ "EditCondition", "bEnableBaseRack" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Rack this sound belongs to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomRack = { "AtomRack", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, AtomRack), Z_Construct_UClass_UAtomRackWithParentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomRack_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomBusSends_Inner = { "AtomBusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSoundToBusSend, METADATA_PARAMS(nullptr, 0) }; // 1321788406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomBusSends_MetaData[] = {
		{ "Category", "Effects|Rack" },
		{ "Comment", "/** An array of submix sends. Audio from this sound will send a portion of its audio to these effects.  */" },
		{ "DisplayName", "Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "An array of submix sends. Audio from this sound will send a portion of its audio to these effects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomBusSends = { "AtomBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, AtomBusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomBusSends_MetaData)) }; // 1321788406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsPreviewSound_MetaData[] = {
		{ "Comment", "/** Whether or not this synth is playing as a preview sound */" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
		{ "ToolTip", "Whether or not this synth is playing as a preview sound" },
	};
#endif
	void Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsPreviewSound_SetBit(void* Obj)
	{
		((UAtomSynthComponent*)Obj)->bIsPreviewSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsPreviewSound = { "bIsPreviewSound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomSynthComponent), &Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsPreviewSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsPreviewSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsPreviewSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SynthSound_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SynthSound = { "SynthSound", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, SynthSound), Z_Construct_UClass_UAtomSynthSound_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SynthSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SynthSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/Components/AtomSynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSynthComponent, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSynthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bAllowSpatialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBaseRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bEnableBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ConcurrencySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_ModulationRouting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomBusSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_bIsPreviewSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_SynthSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSynthComponent_Statics::NewProp_AtomComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSynthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSynthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSynthComponent_Statics::ClassParams = {
		&UAtomSynthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomSynthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::PropPointers),
		0,
		0x00A800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSynthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSynthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSynthComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomSynthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSynthComponent.OuterSingleton, Z_Construct_UClass_UAtomSynthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSynthComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSynthComponent>()
	{
		return UAtomSynthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSynthComponent);
	UAtomSynthComponent::~UAtomSynthComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomSynthComponent)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSynthSound, UAtomSynthSound::StaticClass, TEXT("UAtomSynthSound"), &Z_Registration_Info_UClass_UAtomSynthSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSynthSound), 3363155949U) },
		{ Z_Construct_UClass_UAtomSynthComponent, UAtomSynthComponent::StaticClass, TEXT("UAtomSynthComponent"), &Z_Registration_Info_UClass_UAtomSynthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSynthComponent), 2475655778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_1389758925(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Components_AtomSynthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
