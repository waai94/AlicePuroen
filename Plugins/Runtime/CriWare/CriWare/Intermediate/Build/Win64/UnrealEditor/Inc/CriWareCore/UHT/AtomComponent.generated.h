// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomBus;
class UAtomModulatorBase;
class UAtomRackBase;
class UAtomSoundBase;
enum class EAtomComponentPlayState : uint8;
enum class EAtomFaderCurve : uint8;
enum class EAtomModulationDestination : uint8;
enum class EAtomModulationRouting : uint8;
enum class EAtomMultiPositionType : uint8;
struct FAtomAisacControl;
struct FAtomAttenuationSettings;
struct FAtomBeatSyncInfo;
struct FAtomSequencerEventInfo;
#ifdef CRIWARECORE_AtomComponent_generated_h
#error "AtomComponent.generated.h already included, missing '#pragma once' in AtomComponent.h"
#endif
#define CRIWARECORE_AtomComponent_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_64_DELEGATE \
static inline void FOnAtomSoundFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundFinished) \
{ \
	OnAtomSoundFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_70_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundPlayStateChanged_Parms \
{ \
	EAtomComponentPlayState PlayState; \
}; \
static inline void FOnAtomSoundPlayStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundPlayStateChanged, EAtomComponentPlayState PlayState) \
{ \
	_Script_CriWareCore_eventOnAtomSoundPlayStateChanged_Parms Parms; \
	Parms.PlayState=PlayState; \
	OnAtomSoundPlayStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_76_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundVirtualizationChanged_Parms \
{ \
	bool bIsVirtualized; \
}; \
static inline void FOnAtomSoundVirtualizationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundVirtualizationChanged, bool bIsVirtualized) \
{ \
	_Script_CriWareCore_eventOnAtomSoundVirtualizationChanged_Parms Parms; \
	Parms.bIsVirtualized=bIsVirtualized ? true : false; \
	OnAtomSoundVirtualizationChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_84_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundPlaybackPercent_Parms \
{ \
	const UAtomSoundBase* PlayingSoundBase; \
	float PlaybackPercent; \
}; \
static inline void FOnAtomSoundPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundPlaybackPercent, const UAtomSoundBase* PlayingSoundBase, const float PlaybackPercent) \
{ \
	_Script_CriWareCore_eventOnAtomSoundPlaybackPercent_Parms Parms; \
	Parms.PlayingSoundBase=PlayingSoundBase; \
	Parms.PlaybackPercent=PlaybackPercent; \
	OnAtomSoundPlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_90_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundCueBlockIndexChanged_Parms \
{ \
	int32 BlockIndex; \
}; \
static inline void FOnAtomSoundCueBlockIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundCueBlockIndexChanged, int32 BlockIndex) \
{ \
	_Script_CriWareCore_eventOnAtomSoundCueBlockIndexChanged_Parms Parms; \
	Parms.BlockIndex=BlockIndex; \
	OnAtomSoundCueBlockIndexChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_96_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundCueBeatSync_Parms \
{ \
	FAtomBeatSyncInfo BeatSyncInfo; \
}; \
static inline void FOnAtomSoundCueBeatSync_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundCueBeatSync, FAtomBeatSyncInfo BeatSyncInfo) \
{ \
	_Script_CriWareCore_eventOnAtomSoundCueBeatSync_Parms Parms; \
	Parms.BeatSyncInfo=BeatSyncInfo; \
	OnAtomSoundCueBeatSync.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_102_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundCueSequencerEvent_Parms \
{ \
	FAtomSequencerEventInfo EventInfo; \
}; \
static inline void FOnAtomSoundCueSequencerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundCueSequencerEvent, FAtomSequencerEventInfo EventInfo) \
{ \
	_Script_CriWareCore_eventOnAtomSoundCueSequencerEvent_Parms Parms; \
	Parms.EventInfo=EventInfo; \
	OnAtomSoundCueSequencerEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_111_DELEGATE \
struct _Script_CriWareCore_eventOnAtomSoundCueBeatSyncInfo_Parms \
{ \
	FAtomBeatSyncInfo BeatSyncInfo; \
}; \
static inline void FOnAtomSoundCueBeatSyncInfo_DelegateWrapper(const FScriptDelegate& OnAtomSoundCueBeatSyncInfo, FAtomBeatSyncInfo BeatSyncInfo) \
{ \
	_Script_CriWareCore_eventOnAtomSoundCueBeatSyncInfo_Parms Parms; \
	Parms.BeatSyncInfo=BeatSyncInfo; \
	OnAtomSoundCueBeatSyncInfo.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execSetCueBeatSyncOffset); \
	DECLARE_FUNCTION(execGetCueBeatSyncInfo); \
	DECLARE_FUNCTION(execGetCueBlockIndex); \
	DECLARE_FUNCTION(execSetCueNextBlockIndex); \
	DECLARE_FUNCTION(execClearAllCueSelectorLabels); \
	DECLARE_FUNCTION(execRemoveCueSelectorLabel); \
	DECLARE_FUNCTION(execSetCueSelectorLabel); \
	DECLARE_FUNCTION(execSetAisacControlValue); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execSetAtomBusSendPreEffect); \
	DECLARE_FUNCTION(execSetRackSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execSetCueBeatSyncOffset); \
	DECLARE_FUNCTION(execGetCueBeatSyncInfo); \
	DECLARE_FUNCTION(execGetCueBlockIndex); \
	DECLARE_FUNCTION(execSetCueNextBlockIndex); \
	DECLARE_FUNCTION(execClearAllCueSelectorLabels); \
	DECLARE_FUNCTION(execRemoveCueSelectorLabel); \
	DECLARE_FUNCTION(execSetCueSelectorLabel); \
	DECLARE_FUNCTION(execSetAisacControlValue); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execSetAtomBusSendPreEffect); \
	DECLARE_FUNCTION(execSetRackSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomComponent, NO_API)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend struct Z_Construct_UClass_UAtomComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_INCLASS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend struct Z_Construct_UClass_UAtomComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public: \
	NO_API virtual ~UAtomComponent();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomComponent) \
	NO_API virtual ~UAtomComponent();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_137_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomComponent_h


#define FOREACH_ENUM_EATOMCOMPONENTPLAYSTATE(op) \
	op(EAtomComponentPlayState::Playing) \
	op(EAtomComponentPlayState::Stopped) \
	op(EAtomComponentPlayState::Paused) \
	op(EAtomComponentPlayState::FadingIn) \
	op(EAtomComponentPlayState::FadingOut) \
	op(EAtomComponentPlayState::Count) 

enum class EAtomComponentPlayState : uint8;
template<> struct TIsUEnumClass<EAtomComponentPlayState> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomComponentPlayState>();

#define FOREACH_ENUM_EATOMMODULATIONDESTINATION(op) \
	op(EAtomModulationDestination::Volume) \
	op(EAtomModulationDestination::Pitch) \
	op(EAtomModulationDestination::Lowpass) \
	op(EAtomModulationDestination::Highpass) \
	op(EAtomModulationDestination::Count) 

enum class EAtomModulationDestination : uint8;
template<> struct TIsUEnumClass<EAtomModulationDestination> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomModulationDestination>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
