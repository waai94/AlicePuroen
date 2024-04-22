﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomBus.cpp
 *
 ****************************************************************************/

#include "Atom/AtomBus.h"

#if WITH_EDITOR
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif // WITH_EDITOR

#include "CriWareCorePrivate.h"
#include "CriWare.h"
#include "Atom/Atom.h"
#include "Atom/AtomRuntime.h"
#include "Atom/AtomConfig.h"
#include "Atom/AtomRack.h"
#include "Atom/AtomBusEffectPreset.h"

#define LOCTEXT_NAMESPACE "AtomBus"

 /*
  * FAtomChannelLevelMatrix Implementation
  *****************************************************************************/
FAtomChannelLevelMatrix::FAtomChannelLevelMatrix()
{
#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

FAtomChannelLevelMatrix::FAtomChannelLevelMatrix(int NumInputChannels, int NumOutputChannels)
{
	SetupChannelArrayFromNumChannels(InputChannelArray, NumInputChannels);
	SetupChannelArrayFromNumChannels(OutputChannelArray, NumOutputChannels);
	LevelMatrix.Init(0.0f, NumInputChannels * NumOutputChannels);
	SetIdentity();

#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

bool FAtomChannelLevelMatrix::SetChannelLevel(EAtomSpeaker InChannel, EAtomSpeaker OutChannel, float Level)
{
	if ((int)InChannel >= InputChannelArray.Num() || (int)OutChannel >= OutputChannelArray.Num())
	{
		return false;
	}

	Level = FMath::Clamp(Level, 0.f, 1.f);

	int LevelIndex = (int)InChannel * OutputChannelArray.Num() + (int)OutChannel;
	check(LevelIndex < LevelMatrix.Num())

	LevelMatrix[LevelIndex] = Level;

	return true;
}

float FAtomChannelLevelMatrix::GetChannelLevel(EAtomSpeaker InChannel, EAtomSpeaker OutChannel) const
{
	if ((int)InChannel >= InputChannelArray.Num() || (int)OutChannel >= OutputChannelArray.Num())
	{
		return 0.0f;
	}

	int LevelIndex = (int)InChannel * OutputChannelArray.Num() + (int)OutChannel;
	check(LevelIndex < LevelMatrix.Num())

	return LevelMatrix[LevelIndex];
}

void FAtomChannelLevelMatrix::SetIdentity()
{
	LevelMatrix.Empty();

	for (int OutChannel = 0; OutChannel < OutputChannelArray.Num(); ++OutChannel)
	{
		for (int InChannel = 0; InChannel < InputChannelArray.Num(); ++InChannel)
		{
			LevelMatrix.Add(InChannel == OutChannel ? 1.0f : 0.0f);
		}
	}
}

void FAtomChannelLevelMatrix::UpMix()
{}

void FAtomChannelLevelMatrix::DownMix()
{}

void FAtomChannelLevelMatrix::SetupChannelArrayFromNumChannels(TArray<EAtomSpeaker>& ChannelArray, int NumChannels)
{
	for (int i = 0; i < NumChannels && i < (int)EAtomSpeaker::Count; ++i)
	{
		ChannelArray.Add(static_cast<EAtomSpeaker>(i));
	}
}

/*
 * FAtomPan Implementation
 *****************************************************************************/

FAtomPanning::FAtomPanning()
	: Volume(1.0f)
	, Angle(0.0f)
	, Distance(1.0f)
	, Wideness(1.0f)
	, Spread(0.0f)
{
#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

FAtomPanning::FAtomPanning(float InVolume, float InAngle, float InDistance, float InWideness, float InSpread)
	: Volume(InVolume)
	, Angle(InAngle)
	, Distance(InDistance)
	, Wideness(InWideness)
	, Spread(InSpread)
{
#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

/*
 * FAtomBusSend Implementation
 *****************************************************************************/

FAtomBusSend::FAtomBusSend()
	: DestinationBus(nullptr)
	, Level(0.0f)
#if WITH_EDITORONLY_DATA
	, SendType(EAtomBusSendType::PostPanning)
#endif
{
#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

FAtomBusSend::FAtomBusSend(const UAtomBus* InDestinationBus, float InLevel /* = 0.0f */, EAtomBusSendType SendType /* = EAtomBusSendType::PostPanning*/)
	: DestinationBus(InDestinationBus)
	, Level(InLevel)
#if WITH_EDITORONLY_DATA
	, SendType(SendType)
#endif
{
#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

/*
 * UAtomBus Implementation
 *****************************************************************************/

UAtomBus::UAtomBus(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SpatializationType(EAtomSpatializationType::Panning)
	, ChannelLevelMatrix(12, 12)
	, CurrentOutputVolume(1.0f)
	, TargetOutputVolume(1.0f)
{
	OutputVolumeModulation.Value = 0.0f;

#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCCLASS(GetClass());
#endif
}

void UAtomBus::Init(const FName& InBusName)
{
	BusName = InBusName;

	InitInternal();
}

bool UAtomBus::SetEffectPreset(UAtomBusEffectPreset* InEffectPreset)
{
	// check if valid effect
	int32 Index;
	if (InEffectPreset && BusEffectChainClasses.Find(InEffectPreset->GetClass(), Index))
	{
		if (BusEffectChain.IsValidIndex(Index))
		{
			// link to this bus (TSet)
			InEffectPreset->AddTargetBus(this);
			BusEffectChain[Index] = InEffectPreset;

			// apply settings
			ApplyEffectPreset(InEffectPreset);

			return true;
		}
	}

	return false;
}

bool UAtomBus::RemoveEffectPreset(UAtomBusEffectPreset* InEffectPreset)
{
	int32 EffectIndex = FindEffectPreset(InEffectPreset);
	if (EffectIndex != INDEX_NONE)
	{
		return SetDefaultEffectPreset(EffectIndex);
	}

	return false;
}

bool UAtomBus::SetDefaultEffectPreset(int32 InEffectIndex)
{
	if (BusEffectChain.IsValidIndex(InEffectIndex))
	{
		if (auto EffectPreset = BusEffectChain[InEffectIndex])
		{
			EffectPreset->RemoveTargetBus(this);
		}

		// create default effect preset
		UClass* EffectPresetClass = BusEffectChainClasses[InEffectIndex];

		if (auto EffectPreset = UAtomBusEffectPreset::CreateBusEffectPreset(this, EffectPresetClass))
		{
			BusEffectChain[InEffectIndex] = EffectPreset;
		}
		else
		{
			BusEffectChain[InEffectIndex] = nullptr;
		}

		return true;
	}

	return false;
}

int32 UAtomBus::FindEffectPreset(UAtomBusEffectPreset* InEffectPreset) const
{
	return BusEffectChain.Find(InEffectPreset);
}

void UAtomBus::PostInitProperties()
{
	Super::PostInitProperties();
}

#if WITH_EDITOR
/*bool UAtomBus::CanEditChange(const FProperty* InProperty) const
{
	return true;
}*/

void UAtomBus::PreEditChange(FProperty* PropertyAboutToChange)
{
	if (PropertyAboutToChange && PropertyAboutToChange->GetFName() == GET_MEMBER_NAME_CHECKED(UAtomBus, BusEffectChain))
	{
		// Take a copy of the current state of BusEffectChain
		BackupBusEffectChain = BusEffectChain;
	}
}

void UAtomBus::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (FAtomRuntimeManager* AtomRuntimeManager = FAtomRuntimeManager::Get())
	{
		const FName PropertyName = PropertyChangedEvent.GetPropertyName();
		const FName MemberPropertyName = PropertyChangedEvent.Property ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UAtomBus, SpatializationType))
		{
			if (SpatializationType == EAtomSpatializationType::SendToChannel)
			{
				ApplyChannelLevelMatrix();
			}
			else
			{
				ApplyPanning(); // default
			}
		}
		else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UAtomBus, Panning))
		{
			ApplyPanning();
		}
		else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UAtomBus, OutputVolumeModulation))
		{
			UAtomBus* AtomBus = this;

			TSet<TObjectPtr<UAtomModulatorBase>> NewVolumeMod = OutputVolumeModulation.Modulators;

			AtomRuntimeManager->IterateOverAllRuntimes([AtomBus, VolMod = MoveTemp(NewVolumeMod)](FAtomRuntimeId ID, FAtomRuntime* Runtime) mutable
			{
				Runtime->UpdateBusModulationSettings(AtomBus, VolMod);
			});

			float NewVolumeModBase = OutputVolumeModulation.Value;

			AtomRuntimeManager->IterateOverAllRuntimes([AtomBus, NewVolumeModBase](FAtomRuntimeId ID, FAtomRuntime* Runtime)
			{
				Runtime->SetBusModulationBaseLevels(AtomBus, NewVolumeModBase);
			});
		}
		else if (PropertyName == GET_MEMBER_NAME_CHECKED(UAtomBus, BusEffectChain))
		{
			// Find preset that was changed/added
			for (int32 EffectIndex = 0; EffectIndex < BusEffectChain.Num(); EffectIndex++)
			{
				check(BusEffectChainClasses.IsValidIndex(EffectIndex));

				auto BackupEffectPreset = BackupBusEffectChain.IsValidIndex(EffectIndex) ? BackupBusEffectChain[EffectIndex] : nullptr;

				// if preset has changed
				if (BusEffectChain[EffectIndex] != BackupEffectPreset)
				{
					if (auto AddedEffectPreset = BusEffectChain[EffectIndex])
					{
						// check if valid preset class for this slot
						if (AddedEffectPreset->IsA(BusEffectChainClasses[EffectIndex]))
						{
							// setup new preset
							AddedEffectPreset->TargetBuses.Add(this);
							ApplyEffectPreset(AddedEffectPreset);
						}
						else
						{
							// invalid preset set to this index - launch notification to inform user
							FNotificationInfo Info(NSLOCTEXT("Engine", "UnableToChangeAtomBusEffectPresetDueToInvalidEffectType", "Could not change AtomBusEffectPreset with this effect preset type at this index."));
							Info.ExpireDuration = 5.0f;
							Info.Image = FCoreStyle::Get().GetBrush(TEXT("MessageLog.Error"));
							FSlateNotificationManager::Get().AddNotification(Info);

							// Revert to the previous preset
							BusEffectChain[EffectIndex] = BackupEffectPreset;
							continue;
						}

						// remove old preset if new value was set
						if (BackupEffectPreset)
						{
							BackupEffectPreset->TargetBuses.Remove(this);
						}
					}
					else
					{
						// reset to default in case AddedEffectPreset is nullptr
						SetDefaultEffectPreset(EffectIndex);

						auto DefaultEffectPreset = BusEffectChain[EffectIndex];
						check(DefaultEffectPreset);

						SetEditorEffectSettings(DefaultEffectPreset);

						if (DefaultEffectPreset)
						{
							// setup new preset
							DefaultEffectPreset->TargetBuses.Add(this);
							ApplyEffectPreset(DefaultEffectPreset);
						}
					}
				}
			}
		}

		BackupBusEffectChain.Reset();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

TArray<UAtomBusEffectPreset*> UAtomBus::BackupBusEffectChain;

void UAtomBus::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	FProperty* ModifiedProperty = PropertyChangedEvent.PropertyChain.GetActiveMemberNode()->GetValue();

	const FName PropertyName = PropertyChangedEvent.GetPropertyName();
	const FName ModifiedPropertyName = ModifiedProperty ? ModifiedProperty->GetFName() : NAME_None;

	if (ModifiedPropertyName == GET_MEMBER_NAME_CHECKED(UAtomBus, Sends)
			 && PropertyName == GET_MEMBER_NAME_CHECKED(FAtomBusSend, Level))
	{
		const int32 ChangedIndex = PropertyChangedEvent.GetArrayIndex(ModifiedPropertyName.ToString());
		if (Sends.IsValidIndex(ChangedIndex))
		{
			auto& Send = Sends[ChangedIndex];
			ApplySendLevel(Send);
		}
	}

	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}

void UAtomBus::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UAtomBus* This = CastChecked<UAtomBus>(InThis);

	for (UAtomBusEffectPreset* Backup : This->BackupBusEffectChain)
	{
		Collector.AddReferencedObject(Backup);
	}

	Super::AddReferencedObjects(InThis, Collector);
}
#endif

void UAtomBus::SetBusOutputVolume(const UObject* WorldContextObject, float InOutputVolume)
{
	//ApplyVolume(WorldContextObject, InOutputVolume);
	
	// todo: use proxy
	VolumeModifier = InOutputVolume;
}

float UAtomBus::GetBusOutputVolume() const
{
	// get from asr
	if (GCriWare)
	{
		if (auto Atom = GCriWare->GetActiveAtomRuntime())
		{
			return Atom->GetBusVolume(this);
		}
	}

	return 0.0f;
}

void UAtomBus::ApplyVolume(const UObject* WorldContextObject, float InOutputVolume) const
{
	if (GCriWare)
	{
		if (auto AtomManager = GCriWare->GetAtomRuntimeManager())
		{
			if (auto AtomRuntime = AtomManager->GetAtomRuntimeFromWorldContext(WorldContextObject))
			{
				AtomRuntime->SetBusVolume(this, InOutputVolume);
			}
		}
	}
}

void UAtomBus::SetPanning(const FAtomPanning& PanningSetting)
{
	Panning = PanningSetting;
	ApplyPanning();
}

FAtomPanning UAtomBus::GetPanning() const
{
	// get from asr
	/*if (GCriWare)
	{
		if (auto Atom = GCriWare->GetActiveAtom())
		{
			FAtomPanning AsrPanning;
			Atom->GetBusPanning(this, AsrPanning);
			return AsrPanning;
		}
	}*/

	return Panning;
}

void UAtomBus::ApplyPanning() const
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			AtomRuntime->SetBusPanning(this);
		}
	}
}

void UAtomBus::SetChannelLevel(EAtomSpeaker InChannel, EAtomSpeaker OutChannel, float Level)
{
	ChannelLevelMatrix.SetChannelLevel(InChannel, OutChannel, Level);
	ApplyChannelLevelMatrix();
}

float UAtomBus::GetChannelLevel(EAtomSpeaker InChannel, EAtomSpeaker OutChannel)
{
	return ChannelLevelMatrix.GetChannelLevel(InChannel, OutChannel);
}

void UAtomBus::ApplyChannelLevelMatrix() const
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			AtomRuntime->SetBusChannelLevelMatrix(this);
		}
	}
}

void UAtomBus::ResetChannelLevelMatrix()
{
	ChannelLevelMatrix.SetIdentity();
	ApplyChannelLevelMatrix();
}

void UAtomBus::SetSendLevel(int SendIndex, float Level)
{
	if (Sends.IsValidIndex(SendIndex))
	{
		Sends[SendIndex].Level = Level;
		ApplySendLevel(Sends[SendIndex]);
	}
}

float UAtomBus::GetSendLevel(int SendIndex)
{
	if (Sends.IsValidIndex(SendIndex))
	{
		return Sends[SendIndex].Level;
	}

	return 0.0f;
}

void UAtomBus::ApplySendLevel(const FAtomBusSend& InSend) const
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			AtomRuntime->SetBusSendLevel(this, InSend);
		}
	}
}

void UAtomBus::ApplyEffectParameter(const UAtomBusEffectPreset* EffectPreset, int ParameterIndex) const
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			AtomRuntime->SetBusEffectParameter(this, EffectPreset, ParameterIndex);
		}
	}
}

void UAtomBus::ApplyEffectBypass(const UAtomBusEffectPreset* EffectPreset) const
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			AtomRuntime->SetBusEffectBypass(this, EffectPreset);
		}
	}
}

void UAtomBus::ApplyEffectPreset(const UAtomBusEffectPreset* EffectPreset) const
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			AtomRuntime->SetBusEffectPreset(this, EffectPreset);
		}
	}
}

void UAtomBus::ApplyAll() const
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			//AtomRuntime->SetBusVolume(this);
			if (SpatializationType == EAtomSpatializationType::SendToChannel)
			{
				AtomRuntime->SetBusChannelLevelMatrix(this);
			}
			else
			{
				AtomRuntime->SetBusPanning(this);
			}
			for (auto& Send : Sends)
			{
				AtomRuntime->SetBusSendLevel(this, Send);
			}
			for (auto EffectPreset : BusEffectChain)
			{
				AtomRuntime->SetBusEffectPreset(this, EffectPreset);
			}
		}
	}
}

void UAtomBus::SyncAll()
{
	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			//Volume = AtomRuntime->GetBusVolume(this);
			if (SpatializationType == EAtomSpatializationType::SendToChannel)
			{
				// nothing to get
			}
			else
			{
				AtomRuntime->GetBusPanning(this, Panning);
			}
			for (auto& Send : Sends)
			{
				// nothing to get
			}
			for (auto EffectPreset : BusEffectChain)
			{
				AtomRuntime->GetBusEffectPreset(this, EffectPreset);
			}
		}
	}
}

void UAtomBus::ResetSends()
{
	Sends.Empty();

	// Do not create sends for master out bus
	if (BusName == UAtomRackBase::MasterBusName)
	{
		return;
	}

	UAtomRack* Rack = Cast<UAtomRack>(GetRack());
	if (Rack)
	{
		for (auto Bus : Rack->Buses)
		{
			// Avoid send to itself
			if (Bus->BusName != BusName)
			{
				// By default do not output to another bus
				Sends.Add(FAtomBusSend(Bus));

				// Output to master bus
				//const float Level = BusName == UAtomRack::MasterBusName ? 1.0f : 0.0f;
			}
			/*else
			{
				Sends.Add(FAtomBusSend(this), 1.0f);
			}*/
		}
	}
}

void UAtomBus::ResetEffectChain(bool bUseRuntimeDefaults /* = false */)
{
	// Clear effects
	for (auto EffectPreset : BusEffectChain)
	{
		if (EffectPreset)
		{
			EffectPreset->TargetBuses.Remove(this);
		}
	}

	BusEffectChainClasses.Empty();
	BusEffectChain.Empty();

	// Recreate effect slots
	UAtomRack* Rack = Cast<UAtomRack>(GetRack());
	if (Rack && Rack->DspBusSetting)
	{
		for (int BusIndex = 0; BusIndex < Rack->DspBusSetting->GetNumBuses(); ++BusIndex)
		{
			if (Rack->DspBusSetting->GetBusName(BusIndex) == BusName)
			{
				// Setup effects
				for (int EffectIndex = 0; EffectIndex < Rack->DspBusSetting->GetNumBusEffects(BusIndex); EffectIndex++)
				{
					const FName EffectName = Rack->DspBusSetting->GetBusEffectName(BusIndex, EffectIndex);
					//const bool bEffectBypassed = bUseRuntimeDefaults ? Rack->DspBusSetting->IsBusEffectBypassed(BusIndex, EffectIndex) : false;
					const bool bEffectBypassed = false;
					AddEffect(EffectName, bEffectBypassed, bUseRuntimeDefaults);
				}
				break;
			}
		}
	}
}

int UAtomBus::AddEffect(const FName& InEffectName, bool bIsBypassed, bool bUseRuntimeValues)
{
	// create default effect preset
	UAtomBusEffectPreset* EffectPreset = UAtomBusEffectPreset::CreateBusEffectPreset(this, InEffectName);

	if (EffectPreset)
	{
		// add slot
		BusEffectChainClasses.Add(EffectPreset->GetClass());
		int32 Index = BusEffectChain.Add(nullptr);

		// setup the default effect preset
		EffectPreset->Init();
		SetEffectPreset(EffectPreset);

		if (bUseRuntimeValues)
		{
			// setup with atom current values
			if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
			{
				AtomRuntime->GetBusEffectPreset(this, EffectPreset);
				EffectPreset->SetBypass(bIsBypassed);
			}
		}

		return Index;
	}

	return INDEX_NONE;
}

UAtomRackBase* UAtomBus::GetRack() const
{
	return Cast<UAtomRackBase>(GetOuter());
}

void UAtomBus::Reset(bool bApplyToAtom /* = true */)
{
	OutputVolumeModulation.Value = 0.0f;
	SpatializationType = EAtomSpatializationType::Panning;
	Panning = FAtomPanning();
	ChannelLevelMatrix.SetIdentity();
	ResetSends();
	ResetEffectChain(true);
	// preset are generated using the value actually in the runtime so values form acf data.

#if WITH_EDITORONLY_DATA
	// Setup default data cached from acf data to reflect values in editor UI
	UAtomRack* Rack = Cast<UAtomRack>(GetRack());
	if (Rack && Rack->DspBusSetting)
	{
		const auto& DspSetting = Rack->DspBusSetting->GetEditorDspSetting();

		// Look up for bus info then setup to AtomBus
		const auto BusInfoPtr = DspSetting.Buses.FindByPredicate([this](const FAtomBusInfo& Info)
		{
			return GetBusName().ToString() == Info.Name;
		});

		if (BusInfoPtr)
		{
			const FAtomBusInfo& BusInfo = *BusInfoPtr;
			OutputVolumeModulation.Value = Atom::ConvertToDecibels(BusInfo.Volume);
			Panning = BusInfo.Panning;

			for (auto& Send : Sends)
			{
				// Look up for bus send info then setup to AtomBus's sends 
				const auto BusSendInfoPtr = BusInfo.Sends.FindByPredicate([Send](const FAtomBusSendInfo& Info)
				{
					return Send.DestinationBus ? Send.DestinationBus->GetBusName().ToString() == Info.SendToBusName : false;
				});

				if (BusSendInfoPtr)
				{
					const FAtomBusSendInfo& BusSendInfo = *BusSendInfoPtr;
					Send.Level = BusSendInfo.Level;
					Send.SendType = BusSendInfo.SendType;
				}
			}

			for (auto EffectPreset : BusEffectChain)
			{
				if (EffectPreset)
				{
					// Look up for bus effect then add them to AtomBus's effects.
					const auto BusEffectInfoPtr = BusInfo.Effects.FindByPredicate([EffectPreset](const FAtomBusEffectInfo& Info)
					{
						return EffectPreset->GetEffectName().ToString() == Info.BusEffectName;
					});

					if (BusEffectInfoPtr)
					{
						// Setup dynamic settings.
						const FAtomBusEffectInfo& BusEffectInfo = *BusEffectInfoPtr;
						for (int ParamIndex = 0; ParamIndex < BusEffectInfo.Parameters.Num(); ++ParamIndex)
						{
							EffectPreset->SetParameterValue(ParamIndex, BusEffectInfo.Parameters[ParamIndex]);
						}
						EffectPreset->SetBypass(BusEffectInfo.bBypass);

						// Apply dynamic change to defaults settings of the preset.
						EffectPreset->ApplyToDefautlsSettings();
					}
				}
			}
		}
	}
#endif

	if (bApplyToAtom)
	{
		ApplyAll();
	}
}

#if WITH_EDITORONLY_DATA
void UAtomBus::SetEditorEffectSettings(UAtomBusEffectPreset* EffectPreset)
{
	check(EffectPreset);

	UAtomRack* Rack = Cast<UAtomRack>(GetRack());
	if (Rack && Rack->DspBusSetting)
	{
		const auto& DspSetting = Rack->DspBusSetting->GetEditorDspSetting();

		// Look up for bus info then setup to AtomBus
		const auto BusInfoPtr = DspSetting.Buses.FindByPredicate([this](const FAtomBusInfo& Info)
		{
			return GetBusName().ToString() == Info.Name;
		});

		// Look up for bus effect then add them to AtomBus's effects.
		const auto BusEffectInfoPtr = BusInfoPtr->Effects.FindByPredicate([EffectPreset](const FAtomBusEffectInfo& Info)
		{
			return EffectPreset->GetEffectName().ToString() == Info.BusEffectName;
		});

		if (BusEffectInfoPtr)
		{
			// Setup dynamic settings.
			const FAtomBusEffectInfo& BusEffectInfo = *BusEffectInfoPtr;
			for (int ParamIndex = 0; ParamIndex < BusEffectInfo.Parameters.Num(); ++ParamIndex)
			{
				EffectPreset->SetParameterValue(ParamIndex, BusEffectInfo.Parameters[ParamIndex]);
			}
			EffectPreset->SetBypass(BusEffectInfo.bBypass);

			// Apply dynamic changes to default settings of the preset.
			EffectPreset->ApplyToDefautlsSettings();
		}
	}
}
#endif

void UAtomBus::InitInternal()
{
	UAtomBus* AtomBus = this;

	// todo: put in a proxy

	if (GCriWare)
	{
		if (auto AtomRuntime = GCriWare->GetActiveAtomRuntime())
		{
			if (AtomRuntime->GetAtomModulationSystem())
			{
				VolumeMod.Init(AtomRuntime->GetAtomRuntimeID(), FName("Volume"), false /* bInIsBuffered */, false /* bInValueLinear */);
			}

			VolumeModBaseDb = FMath::Clamp(AtomBus->OutputVolumeModulation.Value, MIN_VOLUME_DECIBELS, 0.0f);

			TargetOutputVolume = Atom::ConvertToLinear(VolumeModBaseDb);
			CurrentOutputVolume = TargetOutputVolume;

			if (AtomRuntime->GetAtomModulationSystem())
			{
				TSet<TObjectPtr<UAtomModulatorBase>> VolumeModulator = AtomBus->OutputVolumeModulation.Modulators;

				AtomRuntime->UpdateBusModulationSettings(this, VolumeModulator); // this function shoul be here in proxy
			}
		}
	}
}

void UAtomBus::ProcessAudio(FAtomRuntime* AtomRuntime)
{
	check(AtomRuntime);
	check(IsInAtomThread());

	// Update output volume using modulator
	UAtomBus* AtomBus = this;

	// todo: put in a proxy
	if (AtomRuntime->GetAtomModulationSystem())
	{
		VolumeMod.ProcessControl(VolumeModBaseDb);
		TargetOutputVolume = Atom::ConvertToLinear(VolumeMod.GetValue());
	}
	else
	{
		TargetOutputVolume = Atom::ConvertToLinear(VolumeModBaseDb);
	}

	TargetOutputVolume *= VolumeModifier;

	// Now apply the output volume
	if (!FMath::IsNearlyEqual(TargetOutputVolume, CurrentOutputVolume) || !FMath::IsNearlyEqual(CurrentOutputVolume, 1.0f))
	{
		// If we've already set the output volume, only need to multiply by constant
		/*if (FMath::IsNearlyEqual(TargetOutputVolume, CurrentOutputVolume))
		{
			Audio::ArrayMultiplyByConstantInPlace(InputBuffer, TargetOutputVolume);
		}
		else
		{
			// To avoid popping, we do a fade on the buffer to the target volume
			Audio::ArrayFade(InputBuffer, CurrentOutputVolume, TargetOutputVolume);
			CurrentOutputVolume = TargetOutputVolume;
		}*/
		CurrentOutputVolume = TargetOutputVolume;
		AtomRuntime->SetBusVolume(AtomBus, CurrentOutputVolume);
	}
}

#undef LOCTEXT_NAMESPACE
