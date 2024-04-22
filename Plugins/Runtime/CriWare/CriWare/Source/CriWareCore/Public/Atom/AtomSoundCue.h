/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomSoundCue.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptMacros.h"

#include "AtomSoundBase.h"
#include "AtomAttenuation.h"

#include "AtomSoundCue.generated.h"

 // Forward Declarations
class UAtomCueSheet;
class UAtomCueSheetFactory;
class IAtomSoundResource;

UENUM()
enum class EAtomCueType : uint8
{
	/** Polyphonic. */
	Polyphonic = 0,
	
	/** Sequential. */
	Sequential,
	
	/** Shuffle. */
	Shuffle,
	
	/** Random. */
	Random,

	/** Random but not repeated. (sounds played randomly other than the last played sound.) */
	RandomNoRepeat,
	
	/** Switch playback (referring to game variables to switch playback tracks.) */
	SwitchGameVariable,
	
	/** Combo Sequential (Sequential if a continuous combo is determined within the "combo time", returns to the "combo loopback" point when it reaches the end.) */
	ComboSequential,	
	
	/** Switch playback (Referring to the selector to switch playback tracks.) */
	SwitchSelector,

	/** Track transition playback (referring to the selector to switch playback tracks.) */
	TrackTransitionBySelector,
};

inline const TCHAR* ToString(EAtomCueType Type)
{
	switch (Type) {
	case EAtomCueType::Polyphonic:					return TEXT("Polyphonic");
	case EAtomCueType::Sequential:					return TEXT("Sequential");
	case EAtomCueType::Shuffle:						return TEXT("Shuffle");
	case EAtomCueType::Random:						return TEXT("Random");
	case EAtomCueType::RandomNoRepeat:				return TEXT("Random No Repeat");
	case EAtomCueType::SwitchGameVariable:			return TEXT("Switch Game Variable");
	case EAtomCueType::ComboSequential:				return TEXT("Combo Sequential");
	case EAtomCueType::SwitchSelector:				return TEXT("Switch Selector");
	case EAtomCueType::TrackTransitionBySelector:	return TEXT("Track Transition by Selector");
	default:										return TEXT("Unknown");
	}
}

USTRUCT(BlueprintType, meta = (ToolTip = "AtomAttenuationDistanceParam structure."))
struct CRIWARECORE_API FAtomAttenuationDistanceParam
{
	GENERATED_BODY()

public:

	FAtomAttenuationDistanceParam();

	/** Minimal Distance. */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "Minimal Distance.", ClampMin = "0.0"))
	float MinDistance;

	/** Maximal Distance. */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "Maximal Distance.", ClampMin = "0.0"))
	float MaxDistance;

	/** Inner Cone Angle in degres. */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "Inner Cone Angle.", ClampMin = "0.0", ClampMax = "360.0"))
	float ConeInsideAngle;

	/** Outter Cone Angle in degres. */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "Outter Cone Angle.", ClampMin = "0.0", ClampMax = "360.0"))
	float ConeOutsideAngle;

	/** Source Radius */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "Source Radius.", ClampMin = "0.0"))
	float SourceRadius;

	/** Interior Distance */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "Interior Panning.", ClampMin = "0.0"))
	float InteriorDistance;

	/** Doppler Intensity. */
	UPROPERTY(EditAnywhere, Category = "Attenuation", meta = (ToolTip = "Doppler Intensity.", ClampMin = "0.0", ClampMax = "360.0"))
	float DopplerFactor;

	FORCEINLINE bool operator == (const FAtomAttenuationDistanceParam& Other) const
	{
		return MinDistance == Other.MinDistance 
			&& MaxDistance == Other.MaxDistance
			&& ConeInsideAngle == Other.ConeInsideAngle
			&& ConeOutsideAngle == Other.ConeOutsideAngle
			&& SourceRadius == Other.SourceRadius
			&& InteriorDistance == Other.InteriorDistance
			&& DopplerFactor == Other.DopplerFactor;
	}

	FORCEINLINE bool operator != (const FAtomAttenuationDistanceParam& Other) const
	{
		return !(*this == Other);
	}
};

USTRUCT(BlueprintType, meta = (ToolTip = "AtomCueInfo structure."))
struct CRIWARECORE_API FAtomCueInfo
{
	GENERATED_BODY()

public:

	FAtomCueInfo();

	/** Cue identifier is used internaly to identify and play the cue. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	int32 ID;

	/** The cue name. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	FString Name;

	/** The cue type. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	EAtomCueType Type;

	/** The cue duration. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, AssetRegistrySearchable)
	FTimespan Duration;
	
	/** The default volume applied to the cue in dB. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, meta = (DisplayName = "Volume (dB)"))
	float Volume;

	/** The default pitch value applied to the cue in cents. */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, meta = (DisplayName = "Volume (Cent)"))
	//int32 Pitch;
	
	/** The playback probability of this cue. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, meta = (Units = %))
	float Probability;

	/** The cue virtualization mode (Voice Behaviour).*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, meta = (DisplayAfter = "bLooping"))
	EAtomVirtualizationMode VirtualizationMode;

	/** The playback priority of this cue. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	float Priority;

	/** Whether this cue is looping. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, AssetRegistrySearchable)
	uint8 bLooping : 1;

	/** Whether this cue is using 3d positioning (Spatialization and volume attenuation). */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, AssetRegistrySearchable)
	uint8 bIs3D : 1;

	/** Whether this cue is public accessible or used privately by another cue. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	uint8 bHeaderVisibility : 1;

	/** Whether parameter can be changed while playing or is locked to data settings. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, AssetRegistrySearchable)
	uint8 bIgnorePlayerParameters : 1;

	/** Whether this cue is using parameter pallet. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, meta = (DisplayAfter = "AttenuationDistance"))
	uint8 bIsParameterPalletAssigned : 1;

	/** The categories in which this cue is associated. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	TArray<FString> CategoryNames;

	/** The AISAC control names this cue is bound to. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	TArray<FString> AisacControlNames;

	/** The cue volume attenuation distance parameters if using 3d positioning. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue)
	FAtomAttenuationDistanceParam AttenuationDistance;

	/** The name of the game variable to use when this cue is of type SwitchGameVariable. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cue, meta = (EditCondition = "Type == EAtomCueType::SwitchGameVariable", EditConditionHides))
	FName GameVariable;
};

/** */
UCLASS(HideCategories = Object, BlueprintType, Within = AtomCueSheet)
class CRIWARECORE_API UAtomSoundCue
	: public UAtomSoundBase
{
	GENERATED_BODY()

public:

	UAtomSoundCue(const FObjectInitializer& ObjectInitializer);

	void Init(UAtomCueSheet* InCueSheet, const FAtomCueInfo& InCueInfo);

	//~ Begin UObject Interface
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	//~ End UObject Interface

	//~ Begin UAtomSoundBase interface.
	virtual bool IsPlayable() const override;
	virtual bool IsStreaming(const TCHAR* PlatformName = nullptr) const override;
	virtual float GetMaxDistance() const;
	virtual float GetDuration() const;
	virtual float GetVolumeMultiplier() override;
	virtual float GetPitchMultiplier() override;
	virtual const FAtomAttenuationSettings* GetAttenuationSettingsToApply() const override;
	virtual IAtomSoundResource* GetSoundResource() override;
	virtual void GetAllSoundResources(TArray<IAtomSoundResource*>& Resources) override;
	virtual FString GetSoundName() const override;
	//~ End UAtomSoundBase interface.

	/** Helper that returns the name of this cue. */
	UFUNCTION(BlueprintCallable, Category = Cue)
	FString GetCueName() const { return CueInfo.Name; }

	/** CueSheet holding this sound cue. */
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Cue)
	TObjectPtr<UAtomCueSheet> CueSheet;

	/** Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset */
	UPROPERTY(EditAnywhere, Category = Attenuation)
	uint8 bOverrideAttenuation : 1;

	/** Cached cue information from cue sheet. */
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Cue, meta = (ShowOnlyInnerProperties))
	FAtomCueInfo CueInfo;

	/** Base volume multiplier */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sound, AssetRegistrySearchable)
	float VolumeMultiplier;

	/** Base pitch multiplier */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sound, AssetRegistrySearchable)
	float PitchMultiplier;

	/** Attenuation settings to use if Override Attenuation is set to true */
	UPROPERTY(EditAnywhere, Category = Attenuation)
	FAtomAttenuationSettings AttenuationOverrides;

	/** Call to cache any values which need to be computed from the sound cue info. e.g. MaxDistance, Duration, etc. */
	void CacheAggregateValues();

#if WITH_EDITOR
	virtual bool GetWaveInfo(FAtomResourceHandle& InHandle, FAtomWaveInfo& OutWaveInfo) const;
#endif

	friend UAtomCueSheet;
	friend UAtomCueSheetFactory;
};
