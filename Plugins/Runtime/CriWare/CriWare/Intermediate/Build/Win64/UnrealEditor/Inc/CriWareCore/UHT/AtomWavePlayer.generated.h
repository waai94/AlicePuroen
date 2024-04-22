// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomWavePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomSoundBank;
class UAtomSoundBase;
class UAtomSoundCue;
class UAtomSoundWave;
class UAtomWaveBank;
enum class EAtomWavePlayState : uint8;
struct FAtomWaveInfo;
struct FTimespan;
#ifdef CRIWARECORE_AtomWavePlayer_generated_h
#error "AtomWavePlayer.generated.h already included, missing '#pragma once' in AtomWavePlayer.h"
#endif
#define CRIWARECORE_AtomWavePlayer_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_56_DELEGATE \
static inline void FOnWaveFinished_DelegateWrapper(const FMulticastScriptDelegate& OnWaveFinished) \
{ \
	OnWaveFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_64_DELEGATE \
struct _Script_CriWareCore_eventOnWavePlaybackPercent_Parms \
{ \
	const UAtomWaveBank* PlayingWaveBank; \
	int32 PlayingWaveId; \
	float PlaybackPercent; \
}; \
static inline void FOnWavePlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnWavePlaybackPercent, const UAtomWaveBank* PlayingWaveBank, int32 PlayingWaveId, const float PlaybackPercent) \
{ \
	_Script_CriWareCore_eventOnWavePlaybackPercent_Parms Parms; \
	Parms.PlayingWaveBank=PlayingWaveBank; \
	Parms.PlayingWaveId=PlayingWaveId; \
	Parms.PlaybackPercent=PlaybackPercent; \
	OnWavePlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_70_DELEGATE \
static inline void FOnAtomWavePlayerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAtomWavePlayerStateChanged) \
{ \
	OnAtomWavePlayerStateChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetWaveInfo); \
	DECLARE_FUNCTION(execGetSoundBank); \
	DECLARE_FUNCTION(execGetSound); \
	DECLARE_FUNCTION(execSetCue); \
	DECLARE_FUNCTION(execSetWave);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetWaveInfo); \
	DECLARE_FUNCTION(execGetSoundBank); \
	DECLARE_FUNCTION(execGetSound); \
	DECLARE_FUNCTION(execSetCue); \
	DECLARE_FUNCTION(execSetWave);


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomWavePlayer, NO_API)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomWavePlayer(); \
	friend struct Z_Construct_UClass_UAtomWavePlayer_Statics; \
public: \
	DECLARE_CLASS(UAtomWavePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomWavePlayer) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUAtomWavePlayer(); \
	friend struct Z_Construct_UClass_UAtomWavePlayer_Statics; \
public: \
	DECLARE_CLASS(UAtomWavePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomWavePlayer) \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ARCHIVESERIALIZER


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomWavePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomWavePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomWavePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomWavePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomWavePlayer(UAtomWavePlayer&&); \
	NO_API UAtomWavePlayer(const UAtomWavePlayer&); \
public:


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomWavePlayer(UAtomWavePlayer&&); \
	NO_API UAtomWavePlayer(const UAtomWavePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomWavePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomWavePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomWavePlayer)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_78_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_INCLASS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_INCLASS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomWavePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWavePlayer_h


#define FOREACH_ENUM_EATOMWAVEPLAYSTATE(op) \
	op(EAtomWavePlayState::Playing) \
	op(EAtomWavePlayState::Stopped) \
	op(EAtomWavePlayState::Paused) \
	op(EAtomWavePlayState::FadingIn) \
	op(EAtomWavePlayState::FadingOut) \
	op(EAtomWavePlayState::Count) 

enum class EAtomWavePlayState : uint8;
template<> struct TIsUEnumClass<EAtomWavePlayState> { enum { Value = true }; };
template<> CRIWARECORE_API UEnum* StaticEnum<EAtomWavePlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
