/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomSoundCue.cpp
 *
 ****************************************************************************/

#include "Atom/AtomSoundCue.h"

#include "CriWareCorePrivate.h"
#include "Atom/AtomCueSheetResource.h"
#include "Atom/AtomCueSheet.h"

#define LOCTEXT_NAMESPACE "AtomSoundCue"

/*
 * UAtomSoundCue class
 *****************************************************************************/

UAtomSoundCue::UAtomSoundCue(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, CueSheet(nullptr)
	, bOverrideAttenuation(false)
	, VolumeMultiplier(1.0f)
	, PitchMultiplier(1.0f)
{
#if WITH_EDITORONLY_DATA
	SoundColor = FColor(255, 127, 39); // Atom::DefaultSoundCueColor;
#endif

#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCCLASS(GetClass());
#endif
}

void UAtomSoundCue::PostLoad()
{
	Super::PostLoad();

	CacheAggregateValues();
}

void UAtomSoundCue::Init(UAtomCueSheet* InCueSheet, const FAtomCueInfo& InCueInfo)
{
	CueSheet = InCueSheet;
	CueInfo = InCueInfo;

	CacheAggregateValues();
}

void UAtomSoundCue::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	OutTags.Add(FAssetRegistryTag(TEXT("Probability"), FString::Printf(TEXT("%.2f%%"), CueInfo.Probability), FAssetRegistryTag::TT_Numerical));
	OutTags.Add(FAssetRegistryTag(TEXT("CueType"), ToString(CueInfo.Type), FAssetRegistryTag::TT_Alphabetical));
	OutTags.Add(FAssetRegistryTag(TEXT("Is3D"), CueInfo.bIs3D ? TEXT("true") : TEXT("false"), FAssetRegistryTag::TT_Alphabetical));
	OutTags.Add(FAssetRegistryTag(TEXT("IgnorePlayerParameters"), CueInfo.bIgnorePlayerParameters ? TEXT("true") : TEXT("false"), FAssetRegistryTag::TT_Alphabetical));
	
	Super::GetAssetRegistryTags(OutTags);
}

#if WITH_EDITOR
void UAtomSoundCue::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName PropertyName = PropertyChangedEvent.GetPropertyName();

	if (PropertyName == GET_MEMBER_NAME_CHECKED(UAtomSoundCue, AttenuationSettings))
	{
		CacheAggregateValues();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UAtomSoundCue::CacheAggregateValues()
{	
	const FName DefaultAttenuationName(TEXT("CueDefault_") + GetName());

	if (AttenuationSettings == nullptr)
	{
		AttenuationSettings = NewObject<UAtomAttenuation>(GetTransientPackage(), DefaultAttenuationName, RF_Transient);
#if WITH_EDITORONLY_DATA
		AttenuationSettings->bIsEditable = false;
#endif
	}
	
	if (AttenuationSettings && AttenuationSettings->GetFName() == DefaultAttenuationName)
	{
		// Create the default attenuation object from data stored in Cue.
		// Those values are needed to compute occlusion and other Engine side attenuation effects.
		// Note that settings stored in cue (from Atom Craft) are more limited than Atom audio engine:
		//  - Does not make difference for spatialization and volume distance attenuation.
		//  - Does not make difference in attenuation shapes.
		//  - Does not store Cone Outside Level of the Cone attenuation shape. (Always zero)

		auto& Attenuation = AttenuationSettings->Attenuation;

		Attenuation.bAttenuate = CueInfo.bIs3D;
		Attenuation.DistanceAlgorithm = EAtomAttenuationDistanceModel::Logarithmic;
		bool bIsClosed = (CueInfo.AttenuationDistance.ConeInsideAngle >= 359.9f) && (CueInfo.AttenuationDistance.ConeOutsideAngle >= 359.9f);
		Attenuation.AttenuationShape = bIsClosed ? EAtomAttenuationShape::Sphere : EAtomAttenuationShape::Cone;
		Attenuation.AttenuationShapeExtents.X = FMath::Max(0.0f, CueInfo.AttenuationDistance.MinDistance);
		Attenuation.FalloffDistance = FMath::Max(0.0f, CueInfo.AttenuationDistance.MaxDistance - CueInfo.AttenuationDistance.MinDistance);
		Attenuation.AttenuationShapeExtents.Y = FMath::Clamp(CueInfo.AttenuationDistance.ConeInsideAngle, 0.0, 360.0f);
		Attenuation.AttenuationShapeExtents.Z = FMath::Clamp(CueInfo.AttenuationDistance.ConeOutsideAngle - CueInfo.AttenuationDistance.ConeInsideAngle, 0.0, 360.0f);
		Attenuation.ConeOutsideLevel = 0.0f;

		Attenuation.bSpatialize = CueInfo.bIs3D;
		Attenuation.SpatializationAlgorithm = EAtomSpatializationAlgorithm::Default;
		Attenuation.NonSpatializedRadiusStart = FMath::Max(0.0f, CueInfo.AttenuationDistance.SourceRadius + CueInfo.AttenuationDistance.InteriorDistance);
		Attenuation.NonSpatializedRadiusEnd = FMath::Max(0.0f, CueInfo.AttenuationDistance.SourceRadius);
		Attenuation.NonSpatializedRadiusMode = EAtomNonSpatializedRadiusSpeakerMapMode::Direct2D;
		Attenuation.StereoSpread = 200.0f;
	}

	Duration = CueInfo.Duration.GetTotalSeconds();
	MaxDistance = GetMaxDistance();

	//bHasSelectorNode = 
	//bHasBlockNode = 
}

bool UAtomSoundCue::IsPlayable() const
{
	return CueSheet && CueInfo.bHeaderVisibility && 
		(!WaveInfo.bIsStreamed || (!CueSheet->WaveBanks.IsEmpty() && !CueSheet->WaveBanks.Contains(nullptr)));
}

bool UAtomSoundCue::IsStreaming(const TCHAR* PlatformName /* = nullptr */) const
{
	return CueSheet ? CueSheet->IsStreaming(PlatformName) : false;
}

float UAtomSoundCue::GetMaxDistance() const
{
	if (auto Settings = GetAttenuationSettingsToApply())
	{
		if (Settings->bAttenuate)
		{
			return Settings->GetMaxDimension();
		}
	}

	return CueInfo.AttenuationDistance.MaxDistance;
}

float UAtomSoundCue::GetDuration() const
{
	return (CueInfo.bLooping ? INDEFINITELY_LOOPING_DURATION : Duration);
}

float UAtomSoundCue::GetVolumeMultiplier()
{
	return VolumeMultiplier;
}

float UAtomSoundCue::GetPitchMultiplier()
{
	return PitchMultiplier;
}

const FAtomAttenuationSettings* UAtomSoundCue::GetAttenuationSettingsToApply() const
{
	if (bOverrideAttenuation)
	{
		return &AttenuationOverrides;
	}

	return Super::GetAttenuationSettingsToApply();
}

IAtomSoundResource* UAtomSoundCue::GetSoundResource()
{ 
	return CueSheet;
}

void UAtomSoundCue::GetAllSoundResources(TArray<IAtomSoundResource*>& Resources)
{
	Resources.Add(CueSheet);

	// if cue is using an external wavebank, list all wavebanks
	// TODO: Know which wave banks this cue is using. (Atom SDK limitation)
	if (WaveInfo.bIsStreamed)
	{
		Resources.Append(CueSheet->WaveBanks);
	}
}

FString UAtomSoundCue::GetSoundName() const
{
	return CueSheet->GetName() + TEXT(":") + GetName();
}

#if WITH_EDITOR
bool UAtomSoundCue::GetWaveInfo(FAtomResourceHandle& InHandle, FAtomWaveInfo& OutWaveInfo) const
{
	if (InHandle.IsValid() && InHandle->GetCueSheetResource())
	{
		return InHandle->GetCueSheetResource()->GetWaveformInfo(CueInfo.ID, OutWaveInfo, true);
	}
	return false;
}
#endif

/*
 * FAtomAttenuationDistanceParam struct
 *****************************************************************************/

FAtomAttenuationDistanceParam::FAtomAttenuationDistanceParam()
	: MinDistance(0.0f)
	, MaxDistance(5000.0f)
	, ConeInsideAngle(0.0f)
	, ConeOutsideAngle(0.0f)
	, SourceRadius(0.0f)
	, InteriorDistance(0.0f)
	, DopplerFactor(0.0f)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

/*
 * FAtomCueInfo struct
 *****************************************************************************/

FAtomCueInfo::FAtomCueInfo()
	: ID(-1)
	, Name()
	, Type(EAtomCueType::Polyphonic)
	, Duration(0)
	, Volume(0.0f)
	//, Pitch(0)
	, Probability(100.0f)
	, VirtualizationMode(EAtomVirtualizationMode::Normal)
	, Priority(0.0f)
	, bLooping(false)
	, bIs3D(false)
	, bHeaderVisibility(true)
	, bIgnorePlayerParameters(false)
	, bIsParameterPalletAssigned(false)
	, AttenuationDistance()
	, GameVariable(NAME_None)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

#undef LOCTEXT_NAMESPACE
