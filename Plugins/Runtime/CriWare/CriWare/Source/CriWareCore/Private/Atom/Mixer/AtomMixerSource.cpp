
#include "Atom/Mixer/AtomMixerSource.h"

#include "Templates/Function.h"
#include "ProfilingDebugging/CsvProfiler.h"

#include "CriWareDefines.h"
#include "CriWareLLM.h"
#include "CriWareTrace.h" // move to Mixer/AtomMixerTrace.h
#include "Atom/AtomRuntime.h"
#include "Atom/AtomActiveSound.h"
#include "Atom/Mixer/AtomMixer.h"
#include "Atom/Mixer/AtomMixerSourceManager.h"
#include "Atom/Mixer/AtomMixerSourceVoice.h"
#include "Atom/AtomResource.h"
#include "Atom/AtomWaveBankResource.h"
#include "Atom/AtomCueSheetResource.h"
#include "Atom/AtomRack.h"
#include "Atom/AtomBus.h"
#include "Atom/AtomSoundBank.h"
#include "Atom/AtomWaveBank.h"
#include "Atom/AtomCueSheet.h"
#include "Atom/AtomSoundBase.h"
#include "Atom/AtomSoundWave.h"
#include "Atom/AtomSoundWaveProcedural.h"
#include "Atom/AtomSoundCue.h"
#include "Atom/AtomSoundGenerator.h"
#include "Atom/Components/AtomExternalComponent.h"
#include "Atom/Components/AtomSynthComponent.h"

CSV_DECLARE_CATEGORY_MODULE_EXTERN(CRIWARECORE_API, Atom);

static int32 AtomUseListenerOverrideForSpreadCVar = 0;
FAutoConsoleVariableRef CVarAtomUseListenerOverrideForSpread(
	TEXT("atom.UseListenerOverrideForSpread"),
	AtomUseListenerOverrideForSpreadCVar,
	TEXT("Zero attenuation override distance stereo panning\n")
	TEXT("0: Use actual distance, 1: use listener override"),
	ECVF_Default);

namespace Atom
{
	// Modulation Utilities
	namespace AtomModulationUtils
	{
		void MixInRoutedValue(const FAtomModulationParameter& InParam, float& InOutValueA, float InValueB)
		{
			if (InParam.bRequiresConversion)
			{
				InParam.NormalizedFunction(InOutValueA);
				InParam.NormalizedFunction(InValueB);
			}
			InParam.MixFunction(InOutValueA, InValueB);
			if (InParam.bRequiresConversion)
			{
				InParam.UnitFunction(InOutValueA);
			}
		}

		FAtomSoundModulationSettings InitRoutedModulationSettings(
			const EAtomModulationRouting& InActiveSoundRouting,
			const FAtomSoundModulationSettings& InActiveSoundSettings,
			const EAtomModulationRouting& InSoundRouting,
			const FAtomSoundModulationSettings& InSoundSettings,
			const UAtomSoundClass* InSoundClass,
			const FAtomModulationParameter& InModParam,
			TFunctionRef<const FAtomSoundModulationSettings* (const UAtomSoundClass&)> InGetSoundClassModulationSettingsFunction)
		{
			auto UnionSoundClassSettings = [&](FAtomSoundModulationSettings& InOutSettings)
			{
				if (InSoundClass)
				{
					if (auto ClassSettings = InGetSoundClassModulationSettingsFunction(*InSoundClass))
					{
						MixInRoutedValue(InModParam, InOutSettings.Value, ClassSettings->Value);
						InOutSettings.Modulators = InOutSettings.Modulators.Union(ClassSettings->Modulators);
					}
				}
			};

			switch (InActiveSoundRouting)
			{
			case EAtomModulationRouting::Union:
			{
				// Get ActiveSound settings to mix
				FAtomSoundModulationSettings UnionSettings = InActiveSoundSettings;

				switch (InSoundRouting)
				{
				case EAtomModulationRouting::Union:
				{
					// Mix with sound settings and soundclass settings
					MixInRoutedValue(InModParam, UnionSettings.Value, InSoundSettings.Value);
					UnionSettings.Modulators = UnionSettings.Modulators.Union(InSoundSettings.Modulators);
					UnionSoundClassSettings(UnionSettings);
				}
				break;
				case EAtomModulationRouting::Inherit:
				{
					// Mix with soundclass settings
					UnionSoundClassSettings(UnionSettings);
				}
				break;
				case EAtomModulationRouting::Override:
				{
					// Mix with sound settings
					MixInRoutedValue(InModParam, UnionSettings.Value, InSoundSettings.Value);
					UnionSettings.Modulators = UnionSettings.Modulators.Union(InSoundSettings.Modulators);
				}
				break;
				case EAtomModulationRouting::DAW:
				{
					// Mix settings with Atom Craft value
					//todo: get the craft value
					float AtomCraftValue = 1.0f;
					MixInRoutedValue(InModParam, UnionSettings.Value, AtomCraftValue);
				}
				break;
				case EAtomModulationRouting::Disable:
				default:
					break;
				}

				return UnionSettings;
			}
			break;

			// Use sound value
			case EAtomModulationRouting::Inherit:
			{
				switch (InSoundRouting)
				{
				case EAtomModulationRouting::Union:
				{
					// Use mixed sound setinngs with soundclass setinngs
					FAtomSoundModulationSettings UnionSettings = InSoundSettings;
					UnionSoundClassSettings(UnionSettings);
					return UnionSettings;
				}
				break;
				case EAtomModulationRouting::Inherit:
				{
					// Use soundclass value
					if (InSoundClass)
					{
						if (auto ClassSettings = InGetSoundClassModulationSettingsFunction(*InSoundClass))
						{
							return *ClassSettings;
						}
					}
				}
				break;
				case EAtomModulationRouting::Override:
				{
					// Use sound value
					return InSoundSettings;
				}
				break;
				case EAtomModulationRouting::DAW:
				{
					// Use craft value
					FAtomSoundModulationSettings CraftSettings;
					CraftSettings.Value = InModParam.DefaultValue;  // todo use a flag to disable volume mixing or return value from craft.
					return CraftSettings;
				}
				break;
				case EAtomModulationRouting::Disable:
				default:
					break;
				}
			}
			break;
			case EAtomModulationRouting::Override:
			{
				// use activesound value
				return InActiveSoundSettings;
			}
			break;
			case EAtomModulationRouting::DAW:
			{
				// Use craft value
				FAtomSoundModulationSettings CraftSettings;
				CraftSettings.Value = InModParam.DefaultValue;  // todo use a flag to disable volume mixing or return value from craft.
				return CraftSettings;
			}
			break;
			case EAtomModulationRouting::Disable:
			default:
				break;
			}

			FAtomSoundModulationSettings DefaultSettings;
			DefaultSettings.Value = InModParam.DefaultValue;
			return DefaultSettings;
		}

		float GetRoutedModulationValue(
			const EAtomModulationRouting& InActiveSoundRouting,
			const FAtomSoundModulationSettings& InActiveSoundSettings,
			const EAtomModulationRouting& InSoundRouting,
			const FAtomSoundModulationSettings& InSoundSettings,
			const UAtomSoundClass* InSoundClass,
			const FAtomModulationParameter& InModParam,
			TFunctionRef<const FAtomSoundModulationSettings* (const UAtomSoundClass&)> InGetSoundClassModulationSettingsFunction)
		{
			auto MixInSoundClassValue = [&](float& InOutValue)
			{
				if (InSoundClass)
				{
					if (auto ClassSettings = InGetSoundClassModulationSettingsFunction(*InSoundClass))
					{
						MixInRoutedValue(InModParam, InOutValue, ClassSettings->Value);
					}
				}
			};

			switch (InActiveSoundRouting)
			{
			case EAtomModulationRouting::Union:
			{
				// Get ActiveSound value to mix
				float UnionValue = InActiveSoundSettings.Value;

				switch (InSoundRouting)
				{
				case EAtomModulationRouting::Union:
				{
					// Mix with sound value and soundclass value
					MixInRoutedValue(InModParam, UnionValue, InSoundSettings.Value);
					MixInSoundClassValue(UnionValue);
				}
				break;
				case EAtomModulationRouting::Inherit:
				{
					// Mix with soundclass
					MixInSoundClassValue(UnionValue);
				}
				break;
				case EAtomModulationRouting::Override:
				{
					// Mix with sound value
					MixInRoutedValue(InModParam, UnionValue, InSoundSettings.Value);
				}
				break;
				case EAtomModulationRouting::DAW:
				{
					// Mix with Atom Craft value
					//todo: get the craft value
					float AtomCraftValue = 1.0f;
					MixInRoutedValue(InModParam, UnionValue, AtomCraftValue);
				}
				break;
				case EAtomModulationRouting::Disable:
				default:
					break;
				}

				return UnionValue;
			}
			break;

			// Use sound value
			case EAtomModulationRouting::Inherit:
			{
				switch (InSoundRouting)
				{
				case EAtomModulationRouting::Union:
				{
					// Use mixed sound value with soundclass value
					float UnionValue = InSoundSettings.Value;
					MixInSoundClassValue(UnionValue);
					return UnionValue;
				}
				break;
				case EAtomModulationRouting::Inherit:
				{
					// Use soundclass value
					if (InSoundClass)
					{
						if (auto ClassSettings = InGetSoundClassModulationSettingsFunction(*InSoundClass))
						{
							return ClassSettings->Value;
						}
					}
				}
				break;
				case EAtomModulationRouting::Override:
				{
					// Use sound value
					return InSoundSettings.Value;
				}
				break;
				case EAtomModulationRouting::DAW:
				{
					// Use craft value
					return InModParam.DefaultValue; // todo use a flag to disable volume mixing or return value from craft.
				}
				break;
				case EAtomModulationRouting::Disable:
				default:
					break;
				}
			}
			break;
			case EAtomModulationRouting::Override:
			{
				// use activesound value
				return InActiveSoundSettings.Value;
			}
			break;
			case EAtomModulationRouting::DAW:
			{
				// Use craft value
				return InModParam.DefaultValue; // todo use a flag to disable volume mixing or return value from craft.
			}
			break;
			case EAtomModulationRouting::Disable:
			default:
				break;
			}

			return InModParam.DefaultValue;
		}

		// get fallback sound class
		const UAtomSoundClass* GetFallbackSoundClass(const FAtomPlaybackInstance& InPlaybackInstance, const FAtomActiveSound& InActiveSound)
		{
			if (InPlaybackInstance.SoundClass)
			{
				return InPlaybackInstance.SoundClass;
			}
			return InActiveSound.GetSoundClass();
		}

		FAtomSoundModulationSettings InitRoutedVolumeModulation(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.VolumeRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.VolumeModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.VolumeRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.VolumeModulation;

			return InitRoutedModulationSettings(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("Volume"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.VolumeModulation; });
		}

		FAtomSoundModulationSettings InitRoutedPitchModulation(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.PitchRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.PitchModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.PitchRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.PitchModulation;

			return InitRoutedModulationSettings(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("Pitch"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.PitchModulation; });
		}

		FAtomSoundModulationSettings InitRoutedLowpassModulation(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.LowpassRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.LowpassModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.LowpassRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.LowpassModulation;

			return InitRoutedModulationSettings(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("LPFCutoffFrequency"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.LowpassModulation; });
		}

		FAtomSoundModulationSettings InitRoutedHighpassModulation(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.HighpassRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.HighpassModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.HighpassRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.HighpassModulation;

			return InitRoutedModulationSettings(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("HPFCutoffFrequency"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.HighpassModulation; });
		}

		FAtomAisacControlSettings InitRoutedAisacModulation(const FAtomAisacControl& AisacControl, const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{

			auto AsiacFindPredicate = [&](const FAtomAisacControlSettings& ControlSettings)
			{
				return AisacControl == ControlSettings.Control;
			};

			const FAtomAisacControlSettings* ActiveSoundSettings = InActiveSound.ModulationRouting.AisacModulations.AisacControlModulations.FindByPredicate(AsiacFindPredicate);
			const EAtomModulationRouting& ActiveSoundRouting = ActiveSoundSettings ? EAtomModulationRouting::Union : EAtomModulationRouting::Inherit;

			const FAtomAisacControlSettings* SoundSettings = InSound.ModulationSettings.AisacModulations.AisacControlModulations.FindByPredicate(AsiacFindPredicate);
			const EAtomModulationRouting& SoundRouting = SoundSettings ? EAtomModulationRouting::Union : EAtomModulationRouting::Inherit;

			return {
				InitRoutedModulationSettings(ActiveSoundRouting, ActiveSoundSettings ? *ActiveSoundSettings : FAtomAisacControlSettings(),
				SoundRouting, SoundSettings ? *SoundSettings : FAtomAisacControlSettings(),
				GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("AISAC"),
				[Predicate = AsiacFindPredicate](const UAtomSoundClass& InClass)
				{
					return InClass.Properties.ModulationSettings.AisacModulations.AisacControlModulations.FindByPredicate(Predicate);
				})
				, AisacControl
			};
		}

		float GetRoutedVolume(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.VolumeRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.VolumeModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.VolumeRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.VolumeModulation;

			return GetRoutedModulationValue(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("Volume"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.VolumeModulation; });
		}

		float GetRoutedPitch(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.PitchRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.PitchModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.PitchRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.PitchModulation;

			return GetRoutedModulationValue(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("Pitch"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.PitchModulation; });
		}

		float GetRoutedLowpass(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.LowpassRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.LowpassModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.LowpassRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.LowpassModulation;

			return GetRoutedModulationValue(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("LPFCutoffFrequency"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.LowpassModulation; });
		}

		float GetRoutedHighpass(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{
			const EAtomModulationRouting& ActiveSoundRouting = InActiveSound.ModulationRouting.HighpassRouting;
			const FAtomSoundModulationSettings& ActiveSoundSettings = InActiveSound.ModulationRouting.HighpassModulation;

			const EAtomModulationRouting& SoundRouting = InSound.ModulationSettings.HighpassRouting;
			const FAtomSoundModulationSettings& SoundSettings = InSound.ModulationSettings.HighpassModulation;

			return GetRoutedModulationValue(ActiveSoundRouting, ActiveSoundSettings,
				SoundRouting, SoundSettings, GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("HPFCutoffFrequency"),
				[](const UAtomSoundClass& InClass) { return &InClass.Properties.ModulationSettings.HighpassModulation; });
		}

		float GetRoutedAisac(const FAtomAisacControl& AisacControl, const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound& InActiveSound)
		{

			auto AsiacFindPredicate = [&](const FAtomAisacControlSettings& ControlSettings)
			{
				return AisacControl == ControlSettings.Control;
			};

			const FAtomAisacControlSettings* ActiveSoundSettings = InActiveSound.ModulationRouting.AisacModulations.AisacControlModulations.FindByPredicate(AsiacFindPredicate);
			const EAtomModulationRouting& ActiveSoundRouting = ActiveSoundSettings ? EAtomModulationRouting::Union : EAtomModulationRouting::Inherit;

			const FAtomAisacControlSettings* SoundSettings = InSound.ModulationSettings.AisacModulations.AisacControlModulations.FindByPredicate(AsiacFindPredicate);
			const EAtomModulationRouting& SoundRouting = SoundSettings ? EAtomModulationRouting::Union : EAtomModulationRouting::Inherit;

			return GetRoutedModulationValue(ActiveSoundRouting, ActiveSoundSettings ? *ActiveSoundSettings : FAtomAisacControlSettings(),
				SoundRouting, SoundSettings ? *SoundSettings : FAtomAisacControlSettings(),
				GetFallbackSoundClass(InPlaybackInstance, InActiveSound),
				Atom::GetModulationParameter("AISAC"),
				[Predicate = AsiacFindPredicate](const UAtomSoundClass& InClass)
				{
					return InClass.Properties.ModulationSettings.AisacModulations.AisacControlModulations.FindByPredicate(Predicate);
				});
		}

		FAtomSoundModulationDefaultSettings InitRoutedModulation(const FAtomPlaybackInstance& InPlaybackInstance, const UAtomSoundBase& InSound, const FAtomActiveSound* InActiveSound)
		{
			FAtomSoundModulationDefaultSettings Settings;
			if (InActiveSound)
			{
				Settings.VolumeModulation = InitRoutedVolumeModulation(InPlaybackInstance, InSound, *InActiveSound);
				Settings.PitchModulation = InitRoutedPitchModulation(InPlaybackInstance, InSound, *InActiveSound);
				Settings.HighpassModulation = InitRoutedHighpassModulation(InPlaybackInstance, InSound, *InActiveSound);
				Settings.LowpassModulation = InitRoutedLowpassModulation(InPlaybackInstance, InSound, *InActiveSound);

				Settings.AisacModulations.AisacControlModulations.Reset();
				TSet<FAtomAisacControl> ControlsToModulate;
				// TODO: get all control possible for this player/cue (craft + global attached)
				{
					for (auto& ControlMod : InSound.ModulationSettings.AisacModulations.AisacControlModulations)
					{
						ControlsToModulate.Add(ControlMod.Control);
					}

					for (auto& ControlMod : InActiveSound->ModulationRouting.AisacModulations.AisacControlModulations)
					{
						ControlsToModulate.Add(ControlMod.Control);
					}

					if (const UAtomSoundClass* SoundClass = AtomModulationUtils::GetFallbackSoundClass(InPlaybackInstance, *InActiveSound))
					{
						for (auto& ControlMod : SoundClass->Properties.ModulationSettings.AisacModulations.AisacControlModulations)
						{
							ControlsToModulate.Add(ControlMod.Control);
						}
					}
				}

				for (auto& AisacControl : ControlsToModulate)
				{
					Settings.AisacModulations.AisacControlModulations.Add(InitRoutedAisacModulation(AisacControl, InPlaybackInstance, InSound, *InActiveSound));
				}
			}

			return Settings;
		}
	}


	/*
	*/

	FMixerSource::FMixerSource(FAtomRuntime* InAtomRuntime)
		: FAtomSource(InAtomRuntime)
		, MixerSourceVoice(nullptr)
		, bDebugMode(false)
	{
	}

	FMixerSource::~FMixerSource()
	{
	}

	bool FMixerSource::InitSourceVoice(FAtomPlaybackInstance* InPlaybackInstance)
	{
		ATOM_MIXER_CHECK(InPlaybackInstance);

		UAtomSoundBase* SoundData = InPlaybackInstance->SoundData;
		check(SoundData);

		if (SoundData->IsA<UAtomSoundWave>() && SoundData->WaveInfo.NumChannels == 0)
		{
			// sound cue may have zero data
			UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Soundwave %s has invalid compressed data."), *(SoundData->GetName()));
			FreeResources();
			return false;
		}

		if (SoundData->WaveInfo.NumChannels > 0)
		{
			CSV_SCOPED_TIMING_STAT(Atom, InitSources);
			SCOPE_CYCLE_COUNTER(STAT_AtomSourceInitTime);

			ATOM_MIXER_CHECK(AtomRuntime);
			if (SoundData->IsA<UAtomExternalSound>() == false)
			{
				if (SoundData->IsA<UAtomSoundWaveProcedural>() || !AtomRuntime->IsUsingFixedVoicePools())
				{
					MixerSourceVoice = AtomRuntime->GetMixerSourceVoice();
				}
				else
				{
					MixerSourceVoice = nullptr;
				}
			}

			if (!MixerSourceVoice)
			{
				// new:
				//FreeResources();
				//UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Failed to get a mixer source voice for sound %s."), *InPlaybackInstance->GetName());
				//return false;

				// TODO: restore free resource code and -> set fixed pools in mixer too
				// actually null => use fixed or external
			}

			auto& WaveData = SoundData->WaveInfo;
			bool bIsProcedural = SoundData->IsA<UAtomSoundWaveProcedural>();

			// Initialize the source voice with the necessary format information
			FMixerSourceVoiceInitParams InitParams;

			if (!bIsProcedural)
			{
				// determine if actually streamed data or on memory for awb
				if (auto WaveBank = Cast<UAtomWaveBank>(SoundData->GetSoundResource()))
				{
					check(WaveBank->AtomResource);
					WaveData.bIsStreamed = WaveBank->AtomResource->GetWaveBankResource()->IsUsingFileSystemBinder();
				}
			}
			else
			{
				if (auto ExternalSound = Cast<UAtomExternalSound>(SoundData))
				{
					InitParams.ExternalVoicePool = ExternalSound->GetExternalVoicePool();
				}
			}

			InitParams.SourceListener = this;
			InitParams.NumInputChannels = WaveData.NumChannels;
			InitParams.NumInputFrames = WaveData.NumFrames;
			InitParams.InputFormat = WaveData.Format;
			InitParams.InputSampleRate = WaveData.SampleRate; // need to modulate with max pitch factor !!!
			InitParams.bUseHRTFSpatialization = UseObjectBasedSpatialization();
			InitParams.bIsStreamed = WaveData.bIsStreamed;
			//InitParams.bIsSoundfield = InPlaybackInstance->bIsAmbisonics;
			InitParams.SourceVoice = MixerSourceVoice;

			// Check to see if this sound has been flagged to be in debug mode
#if ATOM_MIXER_ENABLE_DEBUG_MODE
			InitParams.DebugName = InPlaybackInstance->GetName();

			bool bIsDebug = false;
			FString WaveInstanceName = InPlaybackInstance->GetName();
			FString TestName = GCriWare->GetAtomRuntimeManager()->GetDebugger().GetAtomMixerDebugSoundName();
			if (!TestName.IsEmpty() && WaveInstanceName.Contains(TestName))
			{
				bDebugMode = true;
				InitParams.bIsDebugMode = bDebugMode;
			}
#endif

			//// other inits ?
			if (!MixerSourceVoice) // todo: remove this
			{
				return true;
			}

			if (MixerSourceVoice->Init(InitParams))
			{
				// init SourceDataOverridePluginInterface plugins ?

				return true;
			}
			else
			{
				//InitializationState = EMixerSourceInitializationState::NotInitialized;
				UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Failed to initialize mixer source voice '%s'."), *InPlaybackInstance->GetName());
			}

		}
		else
		{
			UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Num channels was 0 for sound buffer '%s'."), *InPlaybackInstance->GetName());
		}

		FreeResources();
		return false;
	}

	bool FMixerSource::UseObjectBasedSpatialization() const
	{
		if (PlaybackInstance->SpatializationMethod == EAtomSpatializationAlgorithm::Binaural)
		{
			auto SpatializationRack = AtomRuntime->GetSpatializationRack();

			int MaxChannelsSupportedBySpatialization = 16;
			if (auto SoundfieldRack = Cast<UAtomSoundfieldRack>(SpatializationRack))
			{
				if (SoundfieldRack->GetRackType() == EAtomSoundfieldRendererType::SoundObject)
				{
					MaxChannelsSupportedBySpatialization = 1;
				}
			}

			// check if spatialization rack matches
			return SpatializationRack && WaveInfo.NumChannels <= MaxChannelsSupportedBySpatialization;
		}

		return false;

		/*return (Buffer->NumChannels <= MixerDevice->GetCurrentSpatializationPluginInterfaceInfo().MaxChannelsSupportedBySpatializationPlugin &&
			AudioDevice->IsSpatializationPluginEnabled() &&
			WaveInstance->SpatializationMethod == ESoundSpatializationAlgorithm::SPATIALIZATION_HRTF);*/	
	}

	bool FMixerSource::IsUsingObjectBasedSpatialization() const
	{
		bool bIsUsingObjectBaseSpatialization = UseObjectBasedSpatialization();

		if (MixerSourceVoice)
		{
			// If it is currently playing, check whether it actively uses HRTF spatializer.
			// HRTF spatialization cannot be altered on currently playing source. So this handles
			// the case where the source was initialized without HRTF spatialization before HRTF
			// spatialization is enabled. 
			bool bDefaultIfNoSourceID = true;
			bIsUsingObjectBaseSpatialization &= MixerSourceVoice->IsUsingHRTFSpatializer(bDefaultIfNoSourceID);
		}
		return bIsUsingObjectBaseSpatialization;
	}

	bool FMixerSource::UseSourceDataOverridePlugin() const
	{
		/*return (Buffer->NumChannels == 1 || Buffer->NumChannels == 2) &&
			AudioDevice->IsSourceDataOverridePluginEnabled() &&
			WaveInstance->SourceDataOverridePluginSettings != nullptr;*/
		return PlaybackInstance->SourceDataOverridePluginSettings != nullptr;
	}

	/*
	 * FAtomPlayer implementation
	 *****************************************************************************/

	namespace FAtomPlayer_NativeCallbacks
	{
		extern "C" void CRIAPI OnPcmDecode(void* Obj, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumSamples, void* Data[])
		{
			// ADX do not call this function if player is destroyed
			if (FAtomPlayer* Self = static_cast<FAtomPlayer*>(Obj))
			{
				Self->HandleNativePlayerOnPcmDecode(Format, NumChannels, NumSamples, Data);
			}
		}
	}

	// this occur from atom thread
	void FAtomPlayer::HandleNativePlayerOnPcmDecode(CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumFrames, void* Data[])
	{
		// this event is not executed on main thread for performance purpose - user code needs to use some CriticalSections and WeakPtrs.
		if (PlaybackInstance && PlaybackInstance->ActiveSound)
		{
			auto ActiveSound = PlaybackInstance->ActiveSound;
			if (ActiveSound->PcmFilterFunction)
			{
				ActiveSound->PcmFilterFunction(FAtomRuntime::GetPcmBitDepthFromAtomPcmFormat(Format), (int32)NumChannels, (int32)NumFrames, Data);
			}
		}
	}

	FAtomPlayer::FAtomPlayer(FAtomRuntime* InAtomRuntime)
		: FAtomSource(InAtomRuntime)
		, bIsPreparingForInit(false)
		, bIsLoadingResource(false)
		, bIsPreparingPlayer(false)
		, bIsPrepareFailed(false)
		, bIsStopping(false)
	{
		bIsInitialized = false;
	}

	FAtomPlayer::~FAtomPlayer()
	{
		FreeResources();
	}

	void FAtomPlayer::FreeResources()
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		if (Player.IsValid())
		{
			// criAtomExPlayer_Destroy
			Player.Reset();
		}

		bIsInitialized = false;
		bIsPreparingPlayer = false;
	}

	bool FAtomPlayer::PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance)
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		if (!ensure(InPlaybackInstance))
		{
			return false;
		}

		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomPlayer::PrepareForInitialization);

		// select output if not default or native (uses master rack by default)
		CriAtomSoundRendererType AsrType = CRIATOM_SOUND_RENDERER_DEFAULT;
		CriAtomExAsrRackId RackId = 0;

		check(InPlaybackInstance);
		check(AtomRuntime);

		auto SoundRack = InPlaybackInstance->SoundRack;
		if (SoundRack)
		{
			if (SoundRack->IsA(UAtomEndpointRack::StaticClass()))
			{
				UAtomEndpointRack* EndpointRack = Cast<UAtomEndpointRack>(SoundRack);
				AsrType = GCriWare->GetActiveAtomRuntime()->GetAtomExSoundRendererType(EndpointRack->SoundRendererType); // this may not work on some platform!
			}
			else if (SoundRack->IsA(UAtomRack::StaticClass()))
			{
				RackId = GCriWare->GetActiveAtomRuntime()->GetAsrRackId(SoundRack);
			}
		}

		// SoundData must be valid beyond this point, otherwise Player would have failed to init.
		check(InPlaybackInstance->SoundData);

		UAtomSoundBank* SoundBank = nullptr;
		bool bProcedural = false;
		if (auto SoundCue = Cast<UAtomSoundCue>(InPlaybackInstance->SoundData))
		{
			SoundBank = SoundCue->CueSheet;
			WaveInfo = SoundCue->WaveInfo;
		}
		else if (auto SoundWave = Cast<UAtomSoundWave>(InPlaybackInstance->SoundData))
		{
			SoundBank = SoundWave->WaveBank;
			WaveInfo = SoundWave->WaveInfo;
		}
		else if (auto SoundWaveProcedural = Cast<UAtomSoundWaveProcedural>(InPlaybackInstance->SoundData))
		{
			bProcedural = true;
			WaveInfo = SoundWaveProcedural->WaveInfo;
		}

		if (bProcedural) // no bank
		{
			uint32 PlayOrder = InPlaybackInstance->ActiveSound->GetPlayOrder();
			uint64 InstanceID = InPlaybackInstance->ActiveSound->GetAtomComponentID();
			bool bActiveSoundIsPreviewSound = InPlaybackInstance->ActiveSound->bIsPreviewSound;

			// todo: may be move this to soucevoice too
			// try to get generator if exist and assign it to ADX pcm filter
			auto SoundWaveProcedural = Cast<UAtomSoundWaveProcedural>(InPlaybackInstance->SoundData);
			FAtomSoundGeneratorInitParams InitParams;
			InitParams.AtomRuntimeID = AtomRuntime->GetAtomRuntimeID();
			InitParams.AtomComponentID = InstanceID;
			InitParams.SampleRate = WaveInfo.SampleRate;
			InitParams.AtomMixerNumOutputFrames = FAtomRuntimeManager::Get()->GetDefaultDSPBufferLength();
			InitParams.NumChannels = WaveInfo.NumChannels;
			InitParams.NumFramesPerCallback = WaveInfo.NumFrames;
			//InitParams.InstanceID = Audio::GetTransmitterID(InitParams.AtomComponentID, PlaybackInstance->PlaybackInstanceHash, PlayOrder);
			InitParams.InstanceID = HashCombineFast(static_cast<uint32>(InstanceID % TNumericLimits<uint32>::Max()), PlayOrder + PlaybackInstance->PlaybackInstanceHash);
			InitParams.bIsPreviewSound = bActiveSoundIsPreviewSound;
			IAtomSoundGeneratorPtr SoundGenerator = SoundWaveProcedural->CreateSoundGenerator(InitParams);
			if (SoundGenerator.IsValid())
			{
				InPlaybackInstance->ActiveSound->PcmFilterFunction = [SoundGenerator](EAtomPcmBitDepth BitDepth, int32 NumChannels, int32 NumFrames, void* Data[])
					{
						if (SoundGenerator.IsValid() && !SoundGenerator->IsFinished())
						{
							const int32 NumRequestedSamples = NumFrames * NumChannels;
							int32 NumSampleWritten = SoundGenerator->GetNextBuffer((float**)Data, NumFrames, NumChannels, true);
							if (NumSampleWritten < NumRequestedSamples)
							{
								UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Input Port Buffer Underrun."));
							}
						}
					};
			}
		}
		else if (UAtomWaveBank* WaveBank = Cast<UAtomWaveBank>(SoundBank))
		{
			bIsPreparingForInit = true;
			PlaybackInstance = InPlaybackInstance;

			CreatePlayerTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, WeakWaveBank = MakeWeakObjectPtr(WaveBank), AsrType, RackId, InPlaybackInstance]()
			{
				if (!WeakWaveBank.IsValid())
				{
					bIsPreparingForInit = false;
					return;
				}

				// ask loading
				if (!WeakWaveBank->IsLoaded())
				{
					WeakWaveBank->RetainResource();
				}

				CriAtomStandardPlayerConfig Config;
				criAtomPlayer_SetDefaultConfigForStandardPlayer(&Config);
				Config.sound_renderer_type = AsrType;

				// awb
				Config.max_channels = WaveInfo.NumChannels;
				Config.max_sampling_rate = WaveInfo.SampleRate;
				Config.streaming_flag = WaveInfo.bIsStreamed;

				CriAtomPlayerHn AtomPlayerHn = FCriWareApi::criAtomPlayer_CreateStandardPlayer(&Config, nullptr, 0);
				if (!AtomPlayerHn)
				{
					bIsPreparingForInit = false;
					return;
				}

				// when created continue Atom player prepare sequence on Mainthread
				AsyncTask(ENamedThreads::GameThread, [this, AtomPlayerHn, WeakWaveBank, WaveID = WaveInfo.WaveID, RackId, InPlaybackInstance]()
				{
					Player = MakeCriHandle(AtomPlayerHn);

					// Set rack id not default or native (uses master rack (0) by default)
					if (RackId > 0)
					{
						FCriWareApi::criAtomPlayer_SetAsrRackId(AtomPlayerHn, (CriSint32)RackId);
					}

					auto ThisWaveBank = WeakWaveBank.Get();
					if (!ThisWaveBank)
					{
						FreeResources();
						return;
					}

					if (auto Resource = ThisWaveBank->AtomResource.GetResource())
					{
						auto NativeHandle = Resource->GetWaveBankResource()->GetNativeHandle();

						if (InPlaybackInstance->ActiveSound->PcmFilterFunction)
						{
							FCriWareApi::criAtomPlayer_SetDecodeCallback(Player, FAtomPlayer_NativeCallbacks::OnPcmDecode, this);
							FCriWareApi::criAtomPlayer_LimitLoopCount(Player, CRIATOMPLAYER_IGNORE_LOOP);
						}

						FCriWareApi::criAtomPlayer_SetWaveId(Player, NativeHandle, WaveID);
						//FCriWareApi::criAtomPlayer_SetFile(Player, nullptr, SoundWave->);

						// Set startup settings
						UpdateVolume();

						FCriWareApi::criAtomPlayer_Pause(Player, CRI_TRUE);
						FCriWareApi::criAtomPlayer_Start(Player);
					}
					else
					{
						bIsPrepareFailed = true;
					}
				});
			}, TStatId(), nullptr, ENamedThreads::AnyBackgroundThreadNormalTask);

			return true;
		}
		else if (UAtomCueSheet* CueSheet = Cast<UAtomCueSheet>(SoundBank))
		{
			bIsPreparingForInit = true;
			PlaybackInstance = InPlaybackInstance;

			CreatePlayerTask = FFunctionGraphTask::CreateAndDispatchWhenReady([this, WeakCueSheet = MakeWeakObjectPtr(CueSheet), AsrType, RackId, InPlaybackInstance]()
			{
				if (!WeakCueSheet.IsValid())
				{
					bIsPreparingForInit = false;
					return;
				}

				// ask loading
				if (!WeakCueSheet->IsLoaded())
				{
					WeakCueSheet->RetainResource();
				}

				CriAtomStandardPlayerConfig Config;
				criAtomPlayer_SetDefaultConfigForStandardPlayer(&Config);
				Config.sound_renderer_type = AsrType;

				// acb
				Config.max_channels = WaveInfo.NumChannels;
				Config.max_sampling_rate = WaveInfo.SampleRate;
				Config.streaming_flag = WaveInfo.bIsStreamed;

				CriAtomPlayerHn AtomPlayerHn = FCriWareApi::criAtomPlayer_CreateStandardPlayer(&Config, nullptr, 0);
				if (!AtomPlayerHn)
				{
					bIsPreparingForInit = false;
					return;
				}

				DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.PreparePlayer"), STAT_AtomPreparePlayer, STATGROUP_TaskGraphTasks);

				// when created continue Atom player prepare sequence on Atom thread
				FAtomThread::RunCommandOnAtomThread([this, AtomPlayerHn, WeakCueSheet, WaveID = WaveInfo.WaveID, RackId, InPlaybackInstance]()
				{
					Player = MakeCriHandle(AtomPlayerHn);

					// Set rack id if not default or native (uses master rack (0) by default)
					if (RackId > 0)
					{
						FCriWareApi::criAtomPlayer_SetAsrRackId(Player, (CriSint32)RackId);
					}

					auto ThisCueSheet = WeakCueSheet.Get();
					if (!ThisCueSheet)
					{
						FreeResources();
						return;
					}

					if (auto Resource = ThisCueSheet->AtomResource.GetResource())
					{
						auto CueSheetResource = Resource->GetCueSheetResource();
						auto NativeHandle = CueSheetResource->GetNativeAwbHandle(WaveInfo.bIsStreamed ? 0 : INDEX_NONE);
						// obtain the used wavebank by this cue sheet

						if (InPlaybackInstance->ActiveSound->PcmFilterFunction)
						{
							FCriWareApi::criAtomPlayer_SetDecodeCallback(Player, FAtomPlayer_NativeCallbacks::OnPcmDecode, this);
							FCriWareApi::criAtomPlayer_LimitLoopCount(Player, CRIATOMPLAYER_IGNORE_LOOP);
						}

						FCriWareApi::criAtomPlayer_SetWaveId(Player, NativeHandle, WaveID);
						//FCriWareApi::criAtomPlayer_SetFile(Player, nullptr, SoundWave->);

						// Set startup settings
						UpdateVolume();

						FCriWareApi::criAtomPlayer_Pause(Player, CRI_TRUE);
						FCriWareApi::criAtomPlayer_Start(Player);
					}
					else
					{
						bIsPrepareFailed = true;
					}
				}, GET_STATID(STAT_AtomPreparePlayer));

			}, TStatId(), nullptr, ENamedThreads::AnyBackgroundThreadNormalTask);

			return true;
		}

		return false;
	}

	bool FAtomPlayer::IsPreparedToInit()
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);
		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomPlayer::IsPreparedToInit);

		if (bIsPreparingForInit && Player.IsValid())
		{
			Status = FCriWareApi::criAtomPlayer_GetStatus(Player);
			if (Status == CRIATOMPLAYER_STATUS_PLAYING
				|| Status == CRIATOMPLAYER_STATUS_PLAYEND
				|| Status == CRIATOMPLAYER_STATUS_ERROR)
			{
				bIsPrepareFailed = Status == CRIATOMPLAYER_STATUS_ERROR;
				return true;
			}
		}

		if (!bIsPreparingForInit && !Player.IsValid())
		{
			bIsPrepareFailed = true;
			return true;
		}

		return false;
	}

	bool FAtomPlayer::Init(FAtomPlaybackInstance* InPlaybackInstance)
	{
		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomPlayer::Init);
		//AUDIO_MIXER_CHECK(MixerBuffer);
		//AUDIO_MIXER_CHECK(MixerBuffer->IsRealTimeSourceReady());

		// We've already been passed the playback instance in PrepareForInitialization, make sure we have the same one
		ATOM_MIXER_CHECK(PlaybackInstance && PlaybackInstance == InPlaybackInstance);

		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		FAtomSource::InitCommon();

		if (!ensure(InPlaybackInstance))
		{
			return false;
		}

		bIsPreparingForInit = false;

		if (!bIsPrepareFailed && Player.IsValid() && Status == CRIATOMPLAYER_STATUS_PLAYING)
		{
			if (InPlaybackInstance->ActiveSound->PcmFilterFunction)
			{
				FCriWareApi::criAtomPlayer_DiscardSamples(Player, WaveInfo.NumFrames);
				//FCriWareApi::criAtomPlayer_Pause(Player, CRI_FALSE);
			}

			bIsInitialized = true;
			return true;
		}

		bIsPrepareFailed = false;
		return false;
	}

	void FAtomPlayer::Update()
	{
		CSV_SCOPED_TIMING_STAT(Atom, UpdateSources);
		SCOPE_CYCLE_COUNTER(STAT_AtomUpdateSources);

		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		if (!PlaybackInstance || !Player.IsValid() || bIsPaused || (!bIsInitialized && !bIsPreparingForInit))
		{
			return;
		}

		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomPlayer::Update);

		Status = FCriWareApi::criAtomPlayer_GetStatus(Player);

		FAtomSource::UpdateCommon();

		TickCount++;

		UpdateVolume();

#if ENABLE_ATOM_DEBUG
		Atom::FAtomDebugger::DrawDebugInfo(*this);
#endif // ENABLE_ATOM_DEBUG
	}

	void FAtomPlayer::UpdateVolume()
	{
		check(PlaybackInstance);

		float CurrentVolume = 0.0f;
		if (!AtomRuntime->IsAtomRuntimeMuted())
		{
			FAtomActiveSound* ActiveSound = PlaybackInstance->ActiveSound;
			check(ActiveSound);

			// 1. Apply device gain stage(s)
			CurrentVolume = ActiveSound->bIsPreviewSound ? 1.0f : AtomRuntime->GetPrimaryVolume();
			//CurrentVolume *= AudioDevice->GetPlatformAudioHeadroom();

			// 2. Gain stages
			CurrentVolume *= PlaybackInstance->GetVolume();
			CurrentVolume *= PlaybackInstance->GetDynamicVolume();

			// 3. Editor gain stage
			CurrentVolume = FMath::Clamp<float>(GetDebugVolume(CurrentVolume), 0.0f, ATOM_MAX_VOLUME);

			// 4. Modulations
			UAtomSoundBase* Sound = PlaybackInstance->SoundData;
			check(Sound);
			const float ModVolumeBase = AtomModulationUtils::GetRoutedVolume(*PlaybackInstance, *Sound, *ActiveSound);
		}

		FCriWareApi::criAtomPlayer_SetVolume(Player, CurrentVolume);
	}

	void FAtomPlayer::Play()
	{
#ifdef ATOM_SOUND_STATUS_DEBUG
		UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Play %d (Atom Voice)"), Status);
#endif
		if (!PlaybackInstance)
		{
			return;
		}

		// Don't restart the sound if it was stopping when we paused, just stop it.
		if (bIsPaused && (bIsStopping /* || IsPlaybackFinished(MainPlaybackID)*/))
		{
#ifdef ATOM_SOUND_STATUS_DEBUG
			UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Stop %d" (Atom Voice)), Status);
#endif
			StopNow();
			return;
		}

		if (bIsStopping)
		{
			UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Restarting an Atom source player which was stopping. Stopping now."));
			return;
		}

		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomPlayer::Play);

		if (Player.IsValid() && bIsInitialized)
		{
#ifdef ATOM_SOUND_STATUS_DEBUG
			UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Resume %d (Atom Voice)"), Status);
#endif
			if (Status == CRIATOMPLAYER_STATUS_PLAYING)
			{
				FCriWareApi::criAtomPlayer_Pause(Player, CRI_FALSE);
			}
			else if (IsPlaybackFinished())
			{
				FCriWareApi::criAtomPlayer_Start(Player);
			}
			else
			{
				UE_LOG(LogCriWareAtomMixer, Warning, TEXT("AtomPlayer is not ready for playback."));
			}
		}

		bIsPaused = false;
		bIsPlaying = true;
		bIsStopping = false;
	}

	void FAtomPlayer::Pause()
	{
		if (!PlaybackInstance)
		{
			return;
		}

		if (bIsStopping)
		{
			return;
		}

		if (Player.IsValid())
		{
			FCriWareApi::criAtomPlayer_Pause(Player, CRI_TRUE);
		}

		bIsPaused = true;
	}

	void FAtomPlayer::Stop()
	{
		if (!bIsInitialized)
		{
			return;
		}

		if (!Player.IsValid())
		{
			StopNow();
			return;
		}

		UAtomSoundBase* Sound = PlaybackInstance ? PlaybackInstance->SoundData : nullptr;
		// If MarkAsGarbage() was called, Sound can be null
		if (!Sound)
		{
			StopNow();
			return;
		}

		// Stop procedural sounds immediately that don't require fade
		/*if (Sound->bProcedural && !Sound->bRequiresStopFade)
		{
			StopNow();
			return;
		}*/

		if (IsPlaybackFinished())
		{
			StopNow();
			return;
		}

		// Otherwise, we need to do a quick fade-out of the sound and put the state
		// of the sound into "stopping" mode. This prevents this source from
		// being put into the "free" pool and prevents the source from freeing its resources
		// until the sound has finished naturally (i.e. faded all the way out)

		if (!bIsStopping)
		{
			// Let the playback instance know it's stopping
			PlaybackInstance->SetStopping(true);

#ifdef  ATOM_SOUND_DEV_DEBUG
			UE_LOG(LogCriWareAtomMixerDebug, Error, TEXT("call stop (atom voice)"));
#endif

			FCriWareApi::criAtomPlayer_Stop(Player);
			bIsStopping = true;
			bIsPaused = false;

			// FAtomSource::Stop(); // Will be excuted by StopNow()
		}
	}

	void FAtomPlayer::StopNow()
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		bIsInitialized = false;
		bIsStopping = false;

		if (PlaybackInstance)
		{
		}

		if (Player.IsValid())
		{
			if (bIsPlaying)
			{
				FCriWareApi::criAtomPlayer_ForceStop(Player);
			}

			// Immediate destroy of the voice
			//FreeResources();
		}
		else
		{
			UE_LOG(LogCriWareAtomMixer, Error, TEXT("AtomPlayer is not setup."));
		}

		bIsPaused = false;
		bIsPlaying = false;

		// Free/reset Parameters and Resources

		FreeResources();

		FAtomSource::Stop();
	}

	bool FAtomPlayer::IsStopping()
	{
		return bIsStopping;
	}

	bool FAtomPlayer::IsFinished()
	{
		// A paused source is not finished.
		if (bIsPaused)
		{
			return false;
		}

		if (!bIsInitialized)
		{
			return true;
		}

		if (bIsPreparingForInit)
		{
			return false;
		}

		if (PlaybackInstance && Player.IsValid())
		{
			if (IsPlaybackFinished())
			{
				PlaybackInstance->NotifyFinished();
				bIsStopping = false;
				return true;
			}
			//else if (bLoopCallback && WaveInstance->LoopingMode == LOOP_WithNotification)
			//{
			//	WaveInstance->NotifyFinished();
			//	bLoopCallback = false;
			//}
		}

		return false;
	}

	bool FAtomPlayer::IsPlaybackFinished()
	{
		return Status == CRIATOMPLAYER_STATUS_STOP || Status == CRIATOMPLAYER_STATUS_PLAYEND;
	}

	/*
	 * FAtomExPlayer implementation
	 *****************************************************************************/

	namespace FAtomExPlayer_NativeCallbacks
	{
		extern "C" void CRIAPI OnPlaybackEvent(void* Obj, CriAtomExPlaybackEvent PlaybackEvent, const CriAtomExPlaybackInfoDetail * Info)
		{
			// ADX should not call this function if player is destroyed
			if (FAtomExPlayer* Self = static_cast<FAtomExPlayer*>(Obj))
			{
				Self->HandleNativeOnPlaybackEvent(PlaybackEvent, Info);
			}
		}

		extern "C" void CRIAPI OnCueBlockIndexChanged(void* Obj, CriAtomExPlaybackId PlaybackID, CriAtomExBlockIndex BlockIndex)
		{
			if (FAtomExPlayer* Self = static_cast<FAtomExPlayer*>(Obj))
			{
				Self->HandleNativeOnCueBlockIndexChanged(PlaybackID, BlockIndex);
			}
		}

		extern "C" void CRIAPI OnFilter(void* Obj, CriAtomExPlaybackId PlaybackID, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumSamples, void* Data[])
		{
			// ADX do not call this function if player is destroyed
			if (FAtomExPlayer* Self = static_cast<FAtomExPlayer*>(Obj))
			{
				Self->HandleNativePlayerOnFilter(PlaybackID, Format, NumChannels, NumSamples, Data);
			}
		}

		extern "C" void CRIAPI OnInputPortFilter(void* Obj, CriAtomExPlaybackId PlaybackID, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumSamples, void* Data[])
		{
			// ADX do not call this function if player is destroyed
			if (FAtomExPlayer* Self = static_cast<FAtomExPlayer*>(Obj))
			{
				Self->HandleNativePlayerOnInputPortFilter(PlaybackID, Format, NumChannels, NumSamples, Data);
			}
		}
	}

	// this occur from atom asr thread / and can happen from User thread too
	void FAtomExPlayer::HandleNativeOnPlaybackEvent(CriAtomExPlaybackEvent PlaybackEvent, const CriAtomExPlaybackInfoDetail* Info)
	{
		// note:
		// Info.id is PlaybackId

		auto VirtualizeActiveSoundOnAtomThread = [this](bool bVirtualize, const TCHAR* ReasonLog)
		{
			auto VirtualizeActiveSound = [this](bool bVirtualize, const TCHAR* ReasonLog)
			{
				if (PlaybackInstance && PlaybackInstance->ActiveSound)
				{
					FAtomActiveSound& ActiveSound = *PlaybackInstance->ActiveSound;

					if (bVirtualize)
					{
						const bool bDoRangeCheck = false;
						FAtomVirtualLoop VirtualLoop;
						if (FAtomVirtualLoop::Virtualize(ActiveSound, bDoRangeCheck, VirtualLoop))
						{
							if (UAtomSoundBase* Sound = ActiveSound.GetSound())
							{
								UE_LOG(LogCriWareAtomMixer, Verbose, TEXT("Playing ActiveSound %s Virtualizing: %s"), *Sound->GetName(), ReasonLog);
							}
							ActiveSound.GetAtomRuntime()->AddVirtualLoop(VirtualLoop);
						}
					}
					else
					{
						if (UAtomSoundBase* Sound = ActiveSound.GetSound())
						{
							UE_LOG(LogCriWareAtomMixer, Verbose, TEXT("Playing ActiveSound %s Realizing: %s"), *Sound->GetName(), ReasonLog);
						}
						ActiveSound.GetAtomRuntime()->RealizeVirtualLoop(ActiveSound);
					}

					// update source status
					bIsVirtual = bVirtualize;
				}
			};

			if (!IsInAtomThread())
			{
				// todo notify active sound system
				DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetVirtualized"), STAT_AtomSetVirtualized, STATGROUP_AtomThreadCommands);
				FAtomThread::RunCommandOnAtomThread([this, VirtualizeActiveSound, bVirtualize, ReasonLog]()
					{
						VirtualizeActiveSound(bVirtualize, ReasonLog);
					}, GET_STATID(STAT_AtomSetVirtualized));
			}
			else
			{
				VirtualizeActiveSound(bVirtualize, ReasonLog);
			}
		};

		if (PlaybackEvent == CRIATOMEX_PLAYBACK_EVENT_ALLOCATE)
		{
			VirtualizeActiveSoundOnAtomThread(true, TEXT("by allocation"));
		}
		else if (PlaybackEvent == CRIATOMEX_PLAYBACK_EVENT_FROM_NORMAL_TO_VIRTUAL)
		{
			VirtualizeActiveSoundOnAtomThread(true, TEXT("Sound's voice stollen due to Atom concurrency group maximum met or silent."));
		}
		else if (PlaybackEvent == CRIATOMEX_PLAYBACK_EVENT_FROM_VIRTUAL_TO_NORMAL)
		{
			VirtualizeActiveSoundOnAtomThread(false, TEXT("Sound's voice is available or sound became audible."));
		}
	}

	// this occur from atom asr thread
	void FAtomExPlayer::HandleNativeOnCueBlockIndexChanged(CriAtomExPlaybackId PlaybackID, CriAtomExBlockIndex BlockIndex)
	{
		if (!IsInAtomThread())
		{
			DECLARE_CYCLE_STAT(TEXT("FAtomThreadTask.SetCueBlockIndex"), STAT_AtomSetCueBlockIndex, STATGROUP_AtomThreadCommands);
			FAtomThread::RunCommandOnAtomThread([this, BlockIndex]()
				{
					if (PlaybackInstance && PlaybackInstance->ActiveSound)
					{
						PlaybackInstance->ActiveSound->SetCueBlockIndex(BlockIndex);
					}
				}, GET_STATID(STAT_AtomSetCueBlockIndex));
		}
		else
		{
			if (PlaybackInstance && PlaybackInstance->ActiveSound)
			{
				PlaybackInstance->ActiveSound->SetCueBlockIndex(BlockIndex);
			}
		}
	}

	// this occur from atom render thread
	void FAtomExPlayer::HandleNativePlayerOnFilter(CriAtomExPlaybackId PlaybackID, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumFrames, void* Data[])
	{
		// this event is not executed on main thread for performance purpose - user code needs to use some CriticalSections and WeakPtrs.
		if (PlaybackInstance && PlaybackInstance->ActiveSound)
		{
			auto ActiveSound = PlaybackInstance->ActiveSound;
			if (ActiveSound->PcmFilterFunction)
			{
				ActiveSound->PcmFilterFunction(FAtomRuntime::GetPcmBitDepthFromAtomPcmFormat(Format), (int32)NumChannels, (int32)NumFrames, Data);
			}
		}
	}

	// this occur from atom render thread
	void FAtomExPlayer::HandleNativePlayerOnInputPortFilter(CriAtomExPlaybackId PlaybackID, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumFrames, void* Data[])
	{
		// this event is not executed on main thread for performance purpose - user code needs to use some CriticalSections and WeakPtrs.
		if (PlaybackInstance && PlaybackInstance->ActiveSound)
		{
			auto ActiveSound = PlaybackInstance->ActiveSound;
			if (ActiveSound->PcmFilterFunction)
			{
				ActiveSound->PcmFilterFunction(FAtomRuntime::GetPcmBitDepthFromAtomPcmFormat(Format), (int32)NumChannels, (int32)NumFrames, Data);
			}
		}
	}

	FAtomExPlayer::FAtomExPlayer(FAtomRuntime* InAtomRuntime, FCriAtomExPlayerPtr&& ExternalExPlayer)
		: FMixerSource(InAtomRuntime)
		, MainPlaybackID(INDEX_NONE)
		, Status(CRIATOMEXPLAYER_STATUS_STOP)
		, bIsPreparingForInit(false)
		, bIsLoadingResource(false)
		, bIsPreparingPlayer(false)
		, bIsPrepareFailed(false)
		, bIsStopping(false)
		, bIsExternal(false)
		, bIs3D(false)
		, bAttenuationReady(false) //
		, bPreviousBaseRackEnablement(false)
		, PreviousPlaybackPercent(0.0f)
		, PreviousAzimuth(-1.0f)
		, PreviousCueNextBlockIndex(INDEX_NONE)
	{
		bIsInitialized = false;

		CriAtomExPlayerConfig Config;
		criAtomExPlayer_SetDefaultConfig(&Config);
		//Config.updates_time = atomconfig; // can get playback time time
		//Config.enable_audio_synced_timer = atomconfig; // can get sample synced time
		//Config.voice_allocation_method = CRIATOMEX_RETRY_VOICE_ALLOCATION; // virtualize if sound not possible

		if (ExternalExPlayer.IsValid())
		{
			ExPlayer = MoveTemp(ExternalExPlayer);
			check(ExPlayer.IsExternal());
			bIsExternal = true;
		}
		else
		{
			ExPlayer = MakeCriHandle(FCriWareApi::criAtomExPlayer_Create(&Config, nullptr, 0));
		}

		if (!ExPlayer)
		{
			// error
			return;
		}

		if (!bIsExternal) // impossible to control lifecycle of the player with external atom player
		{
			// register event callbacks
			FCriWareApi::criAtomExPlayer_SetPlaybackEventCallback(ExPlayer, FAtomExPlayer_NativeCallbacks::OnPlaybackEvent, this);
			FCriWareApi::criAtomExPlayer_SetBlockTransitionCallback(ExPlayer, FAtomExPlayer_NativeCallbacks::OnCueBlockIndexChanged, this);
		}
	}

	FAtomExPlayer::~FAtomExPlayer()
	{
		FreeResources();

		if (ExPlayer.IsValid())
		{
			// unregister events (To ensure Atom will not call it after player is destroyed!)
			FCriWareApi::criAtomExPlayer_SetPlaybackEventCallback(ExPlayer, nullptr, nullptr);
			FCriWareApi::criAtomExPlayer_SetBlockTransitionCallback(ExPlayer, nullptr, nullptr);
		}

		ExPlayer.Reset();
	}

	void FAtomExPlayer::FreeResources()
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		// remove associations
		if (bIs3D && (ExSource.IsValid() || ExSourceList.IsValid()))
		{
			RemoveSpatialization();
		}

		// clear settings
		if (ExPlayer.IsValid())
		{
			if (MixerSourceVoice)
			{
				uint32 SourceID = MixerSourceVoice->GetSourceID();

				// Release the source using the propagation interface
				if (AtomRuntime->SourceDataOverridePluginInterface)
				{
					AtomRuntime->SourceDataOverridePluginInterface->OnReleaseSource(SourceID);
				}

				for (auto RuntimePluginInterface : AtomRuntime->RuntimePluginInterfaces)
				{
					RuntimePluginInterface->OnReleaseSource(SourceID);
				}

				MixerSourceVoice->Release();
				MixerSourceVoice = nullptr;
			}

			FCriWareApi::criAtomExPlayer_ResetParameters(ExPlayer);
		
			// ensure all updated before destroying
			FCriWareApi::criAtomExPlayer_UpdateAll(ExPlayer);
		}

		// destroy 3d sources
		ExSource.Reset();
		ExSources.Reset();
		ExSourceList.Reset();
		bIs3D = false;
		bAttenuationReady = false; //

		// clean modulations
		SourceInfo.ResetModulators(AtomRuntime->GetAtomRuntimeID());

		InitializationState = EAtomPlayerExInitializationState::NotInitialized;
		MainPlaybackID = INDEX_NONE;
		bIsInitialized = false;
		bIsPreparingPlayer = false;
	}

	// cri_set_sound, cri_prepare
	bool FAtomExPlayer::PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance)
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		if (!ensure(InPlaybackInstance))
		{
			return false;
		}

		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomExPlayer::PrepareForInitialization);

		// We are not initialized yet. We won't be until the sound file finishes loading and parsing the header.
		InitializationState = EAtomPlayerExInitializationState::Initializing;

		const bool bIsSeeking = InPlaybackInstance->StartTime > 0.0f;

		check(InPlaybackInstance);
		check(AtomRuntime);

		if (InPlaybackInstance && ExPlayer.IsValid())
		{
			// SoundData must be valid beyond this point.
			check(InPlaybackInstance->SoundData);
			UAtomSoundBase& Sound = *InPlaybackInstance->SoundData;

			PlaybackInstance = InPlaybackInstance;

			LPFFrequency = ATOM_MAX_FILTER_FREQUENCY;
			LastLPFFrequency = FLT_MAX;

			HPFFrequency = 0.0f;
			LastHPFFrequency = FLT_MAX;

			// setup time
			// Not all wave data types have a non-zero duration
			if (Sound.GetDuration() > 0.0f)
			{
				NumTotalFrames = Sound.WaveInfo.NumFrames;
				//check(NumTotalFrames > 0);
				if (NumTotalFrames > 0)
				{
					
				}
				else
				{
					StartFrame = 0;
				}

				StartFrame = FMath::Clamp<int32>((InPlaybackInstance->StartTime / Sound.Duration) * NumTotalFrames, 0, NumTotalFrames);
			}

			if (LoadSoundInternal(InPlaybackInstance))
			{
				bIsPreparingForInit = true;

				// loading or ready
				return true;
			}
			else
			{
				// load failed!
				bIsPrepareFailed = true;
			}
		}

		return false;
	}

	bool FAtomExPlayer::LoadSoundInternal(FAtomPlaybackInstance* InPlaybackInstance)
	{
		// try access or load assets if not available
		UAtomSoundBank* SoundBank = nullptr;
		uint32 SoundID = 0;
		bool bProcedural = false;
		if (auto SoundCue = Cast<UAtomSoundCue>(InPlaybackInstance->SoundData))
		{
			SoundBank = SoundCue->CueSheet;
			SoundID = SoundCue->CueInfo.ID;
			WaveInfo = SoundCue->WaveInfo;
			// -> next atom will have a cueinfo or a function to know. if using awb file - todo: check in case the awb is from memory in a specific case :p 
		}
		else if (auto SoundWave = Cast<UAtomSoundWave>(InPlaybackInstance->SoundData))
		{
			SoundBank = SoundWave->WaveBank;
			SoundID = SoundWave->WaveID;
			WaveInfo = SoundWave->WaveInfo;
		}
		else if (auto ExternalSound = Cast<UAtomExternalSound>(InPlaybackInstance->SoundData))
		{
			WaveInfo = ExternalSound->WaveInfo;
			bIsLoadingResource = false;
			// init externalvoicepool
			InitSourceVoice(InPlaybackInstance);
			return true;
		}
		else if (auto SoundWaveProcedural = Cast<UAtomSoundWaveProcedural>(InPlaybackInstance->SoundData))
		{
			WaveInfo = SoundWaveProcedural->WaveInfo;
			bProcedural = true;
		}

		bool bIsLoaded = false;

		if (bProcedural)
		{
			bIsLoadingResource = false;

			// init audioinput			
			InitSourceVoice(InPlaybackInstance);

			void* Port = nullptr;
			if (MixerSourceVoice)
			{
				Port = MixerSourceVoice->GetInputPort();
			}
			if (!Port)
			{
				// error
				return false;
			}

			// set input port
			FCriWareApi::criAtomExPlayer_SetInputPort(ExPlayer, Port);

			uint32 PlayOrder = InPlaybackInstance->ActiveSound->GetPlayOrder();
			uint64 InstanceID = InPlaybackInstance->ActiveSound->GetAtomComponentID();
			bool bActiveSoundIsPreviewSound = InPlaybackInstance->ActiveSound->bIsPreviewSound;

			// todo: may be move this to soucevoice too
			// try to get generator if exist and assign it to ADX pcm filter
			auto SoundWaveProcedural = Cast<UAtomSoundWaveProcedural>(InPlaybackInstance->SoundData);
			FAtomSoundGeneratorInitParams InitParams;
			InitParams.AtomRuntimeID = AtomRuntime->GetAtomRuntimeID();
			InitParams.AtomComponentID = InstanceID;
			InitParams.SampleRate = WaveInfo.SampleRate;
			InitParams.AtomMixerNumOutputFrames = FAtomRuntimeManager::Get()->GetDefaultDSPBufferLength();
			InitParams.NumChannels = WaveInfo.NumChannels;
			InitParams.NumFramesPerCallback = WaveInfo.NumFrames;
			//InitParams.InstanceID = Audio::GetTransmitterID(InitParams.AtomComponentID, PlaybackInstance->PlaybackInstanceHash, PlayOrder);
			InitParams.InstanceID = HashCombineFast(static_cast<uint32>(InstanceID % TNumericLimits<uint32>::Max()), PlayOrder + PlaybackInstance->PlaybackInstanceHash);
			InitParams.bIsPreviewSound = bActiveSoundIsPreviewSound;

			// todo: procedural voice buffer: actually soundgenerator lifespan is held by activesound tru pcmfilter lambda
			IAtomSoundGeneratorPtr SoundGenerator = SoundWaveProcedural->CreateSoundGenerator(InitParams);
			if (SoundGenerator.IsValid())
			{
				InPlaybackInstance->ActiveSound->PcmFilterFunction = [SoundGenerator](EAtomPcmBitDepth BitDepth, int32 NumChannels, int32 NumFrames, void* Data[])
				{
					if (SoundGenerator.IsValid() && !SoundGenerator->IsFinished())
					{
						const int32 NumRequestedSamples = NumFrames * NumChannels;
						int32 NumSampleWritten = SoundGenerator->GetNextBuffer((float**)Data, NumFrames, NumChannels, true);
						if (NumSampleWritten < NumRequestedSamples)
						{
							UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Input Port Buffer Underrun."));
						}
					}
				};
			}

			// set procedural filter
			FCriWareApi::criAtomExPlayer_SetFilterCallback(ExPlayer, FAtomExPlayer_NativeCallbacks::OnInputPortFilter, this);

			bIsLoaded = true;
		}
		// set wave bank+index
		else if (UAtomWaveBank* WaveBank = Cast<UAtomWaveBank>(SoundBank))
		{
			bIsLoaded = WaveBank->IsLoaded();

			if (!bIsLoaded)
			{
				if (!bIsPreparingForInit)
				{
					// async load
					WaveBank->RetainResource();
					bIsLoadingResource = true;
				}
			}
			else
			{
				bIsLoadingResource = false;

				if (auto Resource = WaveBank->AtomResource.GetResource())
				{
					auto WaveBankResource = Resource->GetWaveBankResource();

					// set the voice pool to use					
					InitSourceVoice(InPlaybackInstance);

					if (MixerSourceVoice)
					{
						const int32 VoicePoolID = MixerSourceVoice->GetVoicePoolID();
						FCriWareApi::criAtomExPlayer_SetVoicePoolIdentifier(ExPlayer, (CriAtomExVoicePoolIdentifier)VoicePoolID);
					}
					else
					{
						// global VP
						// TODO: global VP - move to voice manager source tooo !
						EAtomVoicePoolType VoicePoolID = WaveBankResource->IsUsingFileSystemBinder() ? EAtomVoicePoolType::StandardStreaming : EAtomVoicePoolType::StandardMemory;
						FCriWareApi::criAtomExPlayer_SetVoicePoolIdentifier(ExPlayer, (uint8)VoicePoolID + 1000);
					}

					auto NativeHandle = WaveBankResource->GetNativeHandle();

					// Set the wave
					FCriWareApi::criAtomExPlayer_SetWaveId(ExPlayer, NativeHandle, SoundID);
					FCriWareApi::criAtomExPlayer_SetNumChannels(ExPlayer, WaveInfo.NumChannels);
					FCriWareApi::criAtomExPlayer_SetSamplingRate(ExPlayer, WaveInfo.SampleRate);

					//FCriWareApi::criAtomExPlayer_SetFile(Player, nullptr, SoundWave->);
				}
				else
				{
					// error
					return false;
				}
			}
		}

		// set data cuesheet+id
		else if (UAtomCueSheet* CueSheet = Cast<UAtomCueSheet>(SoundBank))
		{
			bIsLoaded = CueSheet->IsLoaded();

			if (!bIsLoaded)
			{
				if (!bIsPreparingForInit)
				{
					// async load
					CueSheet->RetainResource();
					bIsLoadingResource = true;
				}
			}
			else
			{
				bIsLoadingResource = false;

				if (auto Resource = CueSheet->AtomResource.GetResource())
				{
					auto CueSheetResource = Resource->GetCueSheetResource();

					// set the voice pool to use					
					InitSourceVoice(InPlaybackInstance);

					if (MixerSourceVoice)
					{
						const int32 VoicePoolID = MixerSourceVoice->GetVoicePoolID();
						FCriWareApi::criAtomExPlayer_SetVoicePoolIdentifier(ExPlayer, (CriAtomExVoicePoolIdentifier)VoicePoolID);
					}
					else
					{
						// global VP
						// TODO: global VP - move to voice manager source tooo !
						EAtomVoicePoolType VoicePoolID = WaveInfo.bIsStreamed || CueSheetResource->IsUsingFileSystemBinder() ? EAtomVoicePoolType::StandardStreaming : EAtomVoicePoolType::StandardMemory;
						FCriWareApi::criAtomExPlayer_SetVoicePoolIdentifier(ExPlayer, (uint8)VoicePoolID + 1000);
					}

					auto NativeHandle = CueSheetResource->GetNativeHandle();

					// Set the cue
					FCriWareApi::criAtomExPlayer_SetCueId(ExPlayer, NativeHandle, SoundID);
				}
				else
				{
					// error
					return false;
				}
			}
		}

		return true;
	}

	bool FAtomExPlayer::PrepareSoundInternal()
	{
		// select output if not default or native (uses master rack by default)

		/*
		TArray<FAtomRackSend> Racks;
		PlaybackInstance->ActiveSound->GetAtomRackSends(Racks);
		if (Racks.Num() > 0)
		{
			TArray<CriSint32> ExRackIDs;
			for (UAtomRackBase* AtomRack : Racks)
			{
				if (GCriWare && AtomRack)
				{
					// ExPlayer only accept asr rack, no endpoint.
					if (AtomRack->IsA(UAtomRack::StaticClass()))
					{
						ExRackIDs.Add((CriSint32)AtomRuntime->GetAsrRackId(AtomRack));
					}
				}
			}

			// Set rack id array
			if (ExRackIDs.Num() > 0)
			{
				FCriWareApi::criAtomExPlayer_SetAsrRackIdArray(ExPlayer, ExRackIDs.GetData(), ExRackIDs.Num());
			}
		}*/

		// Actually we only support one rack for the bus send settings so only one rack destination
		
		if (!IsUsingObjectBasedSpatialization())
		{
			UAtomRackWithParentBase* Rack = nullptr;
 			if (PlaybackInstance->BusSendSettings.Num() > 0) // get from 1st bus send
			{
				Rack = Cast<UAtomRackWithParentBase>(PlaybackInstance->BusSendSettings[0].Bus->GetRack());
			}
			if (!Rack && PlaybackInstance->bEnableSoundRack) // else use the sound rack
			{
				Rack = Cast<UAtomRackWithParentBase>(PlaybackInstance->SoundRack);
			}
			if (Rack)
			{
				// ExPlayer only accept ASR rack (or master rack), no endpoints. 
				if (Rack->IsA(UAtomRackWithParentBase::StaticClass()))
				{
					CriSint32 ExRackID = (CriSint32)AtomRuntime->GetAsrRackId(Rack);
					if (ExRackID != INDEX_NONE)
					{
						FCriWareApi::criAtomExPlayer_SetAsrRackId(ExPlayer, ExRackID);
					}
				}
			}
		}
		else // Object Based
		{
			// Warn about sending a source marked as Binaural directly to a soundfield rack:
			// This is a bit of a gray area as soundfield racks are intended to be their own spatial format
			// So to send a source to this, and also flagging the source as Binaural are probably conflicting forms of spatialization.
			UAtomRackBase* Rack = PlaybackInstance->bEnableSoundRack ? Cast<UAtomRackBase>(PlaybackInstance->SoundRack) : nullptr;

			if (Rack)
			{
				//if (Rack->IsA(UAtomSoundfieldRack::StaticClass()) || Rack->IsA(UAtomSoundfieldEndpointRack::StaticClass()))
				//{
				//	UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Ignoring soundfield Base Rack destination being set on SoundWave (%s) because spatializaition method is set to Binaural.")
				//		, *PlaybackInstance->GetName());
				//}
				
				// multi rack no yet available - alway sow a warning
				UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Ignoring Base Rack destination being set on Sound (%s) because spatialization method is set to 'Object Based / Binaural'.")
					, *PlaybackInstance->GetName());
			}

			// get the spatialization rack and use it as destination
			UAtomRackBase* SpatializationRack = AtomRuntime->GetSpatializationRack();
			CriSint32 ExRackID = (CriSint32)AtomRuntime->GetAsrRackId(SpatializationRack);
			if (ExRackID != INDEX_NONE)
			{
				FCriWareApi::criAtomExPlayer_SetAsrRackId(ExPlayer, ExRackID);
			}
		}

		// reset
		RemoveSpatialization();

		if (PlaybackInstance->GetUseSpatialization())
		{
			AddSpatialization();

			// enable 3d positionning
			FCriWareApi::criAtomExPlayer_SetPanType(ExPlayer, CRIATOMEX_PAN_TYPE_3D_POS);

			bIs3D = true;
		}
		else
		{
			// use panning
			FCriWareApi::criAtomExPlayer_SetPanType(ExPlayer, CRIATOMEX_PAN_TYPE_PAN3D);

			bIs3D = false;
		}

		// voices
		if (PlaybackInstance->SoundData->bOverrideVirtualizationMode)
		{
			// virtualization / silent mode (TODO: can be changed while playing with updateall())
			CriAtomExSilentMode SilentMode = CRIATOMEX_SILENT_MODE_NORMAL;
			switch (PlaybackInstance->SoundData->VirtualizationMode)
			{
			case EAtomVirtualizationMode::Normal:
				// no virtualization, continue to use a voice and play in silent.
				SilentMode = CRIATOMEX_SILENT_MODE_NORMAL;
				break;
			case EAtomVirtualizationMode::StopWhenSilent:
				// no virtalization and don't play in silent.
				SilentMode = CRIATOMEX_SILENT_MODE_STOP;
				break;
			case EAtomVirtualizationMode::PlayWhenSilent:
				// virtualize in silent (use a virtual voice), continue to play when silent. 
				SilentMode = CRIATOMEX_SILENT_MODE_VIRTUAL;
				break;
			case EAtomVirtualizationMode::Retrigger:
				// virtualize in silent (use a virtual voice), retrigger when back from virtual.
				SilentMode = CRIATOMEX_SILENT_MODE_VIRTUAL_RETRIGGER;
				break;
				/*case EAtomVirtualizationMode::Restart:
					// no virtalization, restrat from unreal.
					SilentMode = CRIATOMEX_SILENT_MODE_STOP;
					break;*/
			}

			FCriWareApi::criAtomExPlayer_SetSilentMode(ExPlayer, SilentMode);
		}

		// Priorties
		// WARNING -> Lost of information 32 bit to 9 bits only -> the layer that ADD to data based value of priority in ATOM with this function is limited to 9bits values (512 values only!)
		// priority with Atom Limiters can go wrong depending the Blueprint script logic that user made, in this case may need to control priority by AISAC.
		const float Priority = FMath::GetMappedRangeValueUnclamped(FVector2f{ -100.0f, 100.0f }, FVector2f{ -255.0f, 255.0f }, PlaybackInstance->Priority);
		FCriWareApi::criAtomExPlayer_SetVoicePriority(ExPlayer, (CriSint32)Priority); // control limiters and virtualization BY atom (can be culled by concurrency sytem before)

		// Categories
		SetCategories();

		// AISAC patches
		AttachAisacPatches();

		// Cue Params
		SetCueSelectorLabels();
		SetCueFirstBlockIndex();

		// set startup values
		//FCriWareApi::criAtomExPlayer_SetMaxPitch(ExPlayer, 2400.0f); // 2 octaves up  ratio => 4.0
		UpdatePitch();
		UpdateVolume();
		UpdateSpatialization();

		LPFFrequency = ATOM_MAX_FILTER_FREQUENCY;
		LastLPFFrequency = FLT_MAX;

		HPFFrequency = 0.0f;
		LastHPFFrequency = FLT_MAX;

		// Looping
		SetLooping();

		// Start Time
		CriSint64 StartTimeMs = 0;
		if (PlaybackInstance->StartTime > 0.0f)
		{
			if (PlaybackInstance->IsSeekable())
			{
				StartTimeMs = (CriSint64)(PlaybackInstance->StartTime * 1000.0);
			}
		}
		FCriWareApi::criAtomExPlayer_SetStartTime(ExPlayer, StartTimeMs);

		// apply
		FCriWareApi::criAtomExPlayer_UpdateAll(ExPlayer);

		if (!bIsExternal)
		{
			// prepare
			MainPlaybackID = FCriWareApi::criAtomExPlayer_Prepare(ExPlayer);
			if (MainPlaybackID == INDEX_NONE)
			{
				UE_LOG(LogCriWareAtomMixer, Error, TEXT("Cannot prepare AtomExPlayer for AtomSoundBase '%s'."), *PlaybackInstance->SoundData->GetName());
				return false;
			}
		}
		else
		{
			// try to get a playback ID if started else will be -1 (INDEX_NONE)
			// in case it is not prepared, we will try to get it when a voice is allocated in atom.
			MainPlaybackID = FCriWareApi::criAtomExPlayer_GetLastPlaybackId(ExPlayer);
		}

		return true;
	}

	bool FAtomExPlayer::IsPreparedToInit()
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);
		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomExPlayer::IsPreparedToInit);
#ifdef ATOM_SOUND_INIT_DEBUG
		UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("IsPreparedToInit '%p', %i."), PlaybackInstance, ExPlayer.IsValid());
#endif
		FScopeLock Lock(&PlayerLock);

		if (bIsPreparingForInit && ExPlayer.IsValid())
		{
			// check if resource is ready
			if (PlaybackInstance)
			{
				bool bIsLoaded = true;
				if (bIsLoadingResource)
				{
					// try access ressource
					bIsLoaded = false;
					if (LoadSoundInternal(PlaybackInstance))
					{
						if (bIsLoadingResource)
						{
							// not yet loaded - wait
							return false;
						}

						bIsLoaded = true;
					}
					else
					{
						// loading failed
						bIsPrepareFailed = true;
						return true;
					}
				}

				if (bIsLoaded && !bIsPreparingPlayer)
				{
					// loaded - setup and call prepare of native atom player
					if (!PrepareSoundInternal())
					{
						// prepare failed
						bIsPreparingPlayer = false;
						bIsPrepareFailed = true;
						return true;
					}

					// atom is preparing the playback
					bIsPreparingPlayer = true;
				}
			}

			// check the prepare status of native atom player
			Status = FCriWareApi::criAtomExPlayer_GetStatus(ExPlayer);
			if (Status == CRIATOMEXPLAYER_STATUS_PLAYING
				|| Status == CRIATOMEXPLAYER_STATUS_PLAYEND // virtual voice behavior in craft can kill the sound early
				|| Status == CRIATOMEXPLAYER_STATUS_ERROR)
			{
				bIsPreparingPlayer = false;
				bIsPrepareFailed = Status == CRIATOMEXPLAYER_STATUS_ERROR;
				return true;
			}

		}

		return false;
	}

	bool FAtomExPlayer::Init(FAtomPlaybackInstance* InPlaybackInstance)
	{
		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomExPlayer::Init);
		//AUDIO_MIXER_CHECK(MixerBuffer);
		//AUDIO_MIXER_CHECK(MixerBuffer->IsRealTimeSourceReady());
#ifdef ATOM_SOUND_INIT_DEBUG
		UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Init. %d"), Status);
#endif
		// We've already been passed the wave instance in PrepareForInitialization, make sure we have the same one
		ATOM_MIXER_CHECK(PlaybackInstance && PlaybackInstance == InPlaybackInstance);

		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		FAtomSource::InitCommon();

		if (!ensure(InPlaybackInstance))
		{
			return false;
		}

		if (bIs3D)
		{
			if (ExSource.IsValid())
			{
				Update3DSource(ExSource, InPlaybackInstance->Transform, nullptr);
			}
			else if (ExSourceList.IsValid() && InPlaybackInstance->ActiveSound)
			{
				for (int Index = 0; Index < InPlaybackInstance->ActiveSound->MultiPositions.Num(); Index++)
				{
					if (ExSources.IsValidIndex(Index) && ExSources[Index].IsValid())
					{
						Update3DSource(ExSources[Index], InPlaybackInstance->ActiveSound->MultiPositions[Index], nullptr);
					}
				}
			}
		}

		bIsPreparingForInit = false;

		FScopeLock Lock(&PlayerLock);

		if (!bIsPrepareFailed && ExPlayer.IsValid() && (Status == CRIATOMEXPLAYER_STATUS_PLAYING || Status == CRIATOMEXPLAYER_STATUS_PLAYEND))
		{
			// update playback instances
			if (MainPlaybackID == INDEX_NONE)
			{
				MainPlaybackID = FCriWareApi::criAtomExPlayer_GetLastPlaybackId(ExPlayer);
			}

			// init other stuff and reset dynamic params

			FAtomRuntimeId RuntimeID = AtomRuntime->GetAtomRuntimeID();
			SourceInfo.ResetModulators(RuntimeID);

			// get initial routed settinges
			FAtomSoundModulationDefaultSettings InitModSettings = AtomModulationUtils::InitRoutedModulation(*InPlaybackInstance, *InPlaybackInstance->SoundData, InPlaybackInstance->ActiveSound);

			// init source modulators
			FAtomModulationDestination VolumeMod;
			VolumeMod.Init(RuntimeID, FName("Volume"), false /* bInIsBuffered */, false /* bInValueLinear */);
			VolumeMod.UpdateModulators(InitModSettings.VolumeModulation.Modulators);

			FAtomModulationDestination PitchMod;
			PitchMod.Init(RuntimeID, FName("Pitch"), false /* bInIsBuffered */, false /* bInValueLinear */);
			PitchMod.UpdateModulators(InitModSettings.PitchModulation.Modulators);

			FAtomModulationDestination HighpassMod;
			HighpassMod.Init(RuntimeID, FName("HPFCutoffFrequency"), false /* bInIsBuffered */, false /* bInValueLinear */);
			HighpassMod.UpdateModulators(InitModSettings.HighpassModulation.Modulators);

			FAtomModulationDestination LowpassMod;
			LowpassMod.Init(RuntimeID, FName("LPFCutoffFrequency"), false /* bInIsBuffered */, false /* bInValueLinear */);
			LowpassMod.UpdateModulators(InitModSettings.LowpassModulation.Modulators);

			// store the selected modulation
			SourceInfo.VolumeModulation = MoveTemp(VolumeMod);
			SourceInfo.PitchModulation = MoveTemp(PitchMod);
			SourceInfo.HighpassModulation = MoveTemp(HighpassMod);
			SourceInfo.LowpassModulation = MoveTemp(LowpassMod);

			// Aisac modulations
			SourceInfo.AisacControlModulations.Reset();
			for (auto& ControlDefaultSetting : InitModSettings.AisacModulations.AisacControlModulations)
			{
				const FName ControlName = ControlDefaultSetting.Control.Name;

				FSourceInfo::FSourceAisacModulation AisacControlMod = {};

				FAtomAisacControlSettings* ControlSettings = InitModSettings.AisacModulations.AisacControlModulations.FindByPredicate([&](FAtomAisacControlSettings& Settings)
					{
						return Settings.Control == ControlDefaultSetting.Control;
					});

				if (ControlSettings)
				{
					FAtomModulationDestination AisacMod;
					AisacMod.Init(AtomRuntime->GetAtomRuntimeID(), "AISAC", false /* bInIsBuffered */, true /* bInValueLinear */);
					AisacMod.UpdateModulators(ControlSettings->Modulators);

					AisacControlMod.Modulation = MoveTemp(AisacMod);
				}

				SourceInfo.AisacControlModulations.Add(ControlDefaultSetting.Control, AisacControlMod);
			}

			//check(MixerSourceVoice != nullptr);
			//uint32 SourceID = MixerSourceVoice->GetSourceID();
			
			uint32 SourceID = MixerSourceVoice ? MixerSourceVoice->GetSourceID() : MainPlaybackID;

			// Initialize the propagation interface as soon as we have a valid source id
			if (AtomRuntime->SourceDataOverridePluginInterface)
			{
				AtomRuntime->SourceDataOverridePluginInterface->OnInitSource(SourceID, PlaybackInstance->ActiveSound->GetAtomComponentUserID(), PlaybackInstance->SourceDataOverridePluginSettings);
			}

			for (auto RuntimePluginInterface : AtomRuntime->RuntimePluginInterfaces)
			{
				RuntimePluginInterface->OnInitSource(SourceID, this);
			}

			bIsInitialized = true;
			return true;
		}

		bIsPrepareFailed = false;
		return false;
	}

	void FAtomExPlayer::Update()
	{
		CSV_SCOPED_TIMING_STAT(Atom, UpdateSources);
		SCOPE_CYCLE_COUNTER(STAT_AtomUpdateSources);

		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		FScopeLock Lock(&PlayerLock);
		
		if (!PlaybackInstance || !ExPlayer.IsValid() || bIsPaused || (!bIsInitialized && !bIsPreparingForInit))
		{
			return;
		}

		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomExPlayer::Update);

		// if MarkAsGarbage() was called, PlaybackInstance->SoundData is null
		if (!PlaybackInstance->SoundData)
		{
			StopNow();
			return;
		}

		Status = FCriWareApi::criAtomExPlayer_GetStatus(ExPlayer);
#ifdef ATOM_SOUND_INIT_DEBUG
		//UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Update. %d"), Status);
#endif
		FAtomSource::UpdateCommon();

		TickCount++;

		// update playback instances
		if (MainPlaybackID == INDEX_NONE)
		{
			MainPlaybackID = FCriWareApi::criAtomExPlayer_GetLastPlaybackId(ExPlayer);
		}

		// Allow plugins to override any data in a PlaybackInstance
		if (AtomRuntime->SourceDataOverridePluginInterface && PlaybackInstance->bEnableSourceDataOverride)
		{
			//uint32 SourceID = MixerSourceVoice->GetSourceID();
			uint32 SourceID = MixerSourceVoice ? MixerSourceVoice->GetSourceID() : MainPlaybackID;
			int32 ListenerIndex = PlaybackInstance->ActiveSound->GetClosestListenerIndex();

			FTransform ListenerTransform;
			AtomRuntime->GetListenerTransform(ListenerIndex, ListenerTransform);

			AtomRuntime->SourceDataOverridePluginInterface->GetSourceDataOverrides(SourceID, ListenerTransform, PlaybackInstance);
		}

		UpdateModulation();

		UpdatePitch();

		UpdateVolume();

		UpdateSpatialization();

		UpdateEffects();

		UpdateBusSends();

		UpdateChannelMap();

		UpdateCueParameters();

		FCriWareApi::criAtomExPlayer_Update(ExPlayer, MainPlaybackID);

#if ENABLE_ATOM_DEBUG
		Atom::FAtomDebugger::DrawDebugInfo(*this);
#endif // ENABLE_ATOM_DEBUG

	}

	void FAtomExPlayer::UpdatePitch()
	{
		check(PlaybackInstance);

		FAtomActiveSound* ActiveSound = PlaybackInstance->ActiveSound;
		check(ActiveSound);

		Pitch = PlaybackInstance->GetPitch();
		//UE_LOG(LogCriWareAtomMixer, Display, TEXT("Update pitch. %f"), Pitch);

		// Don't apply global pitch scale to UI sounds
		if (!PlaybackInstance->bIsUISound)
		{
			Pitch *= AtomRuntime->GetGlobalPitchScale().GetValue();
		}

		// Modulations
		UAtomSoundBase* Sound = PlaybackInstance->SoundData;
		check(Sound);
		// realtime change base value
		const float ModPitchBase = AtomModulationUtils::GetRoutedPitch(*PlaybackInstance, *Sound, *ActiveSound);
		SourceInfo.PitchModulationBase = ModPitchBase;
		SourceInfo.PitchModulation.ProcessControl(SourceInfo.PitchModulationBase);
		const float ModPitchEnd = Atom::GetFrequencyMultiplier(SourceInfo.PitchModulation.GetValue());
		Pitch *= ModPitchEnd;

		Pitch = AtomRuntime->ClampPitch(Pitch);

		// Semitones = 12.0f * FMath::Log2(PitchRatio)
		// 100 Cents = 1 Semitone
		const CriFloat32 Cents = Atom::GetSemitones(Pitch) * 100.0f;
		FCriWareApi::criAtomExPlayer_SetPitch(ExPlayer, Cents);
	}

	void FAtomExPlayer::UpdateVolume()
	{
		check(PlaybackInstance);

		float CurrentVolume = 0.0f;
		if (!AtomRuntime->IsAtomRuntimeMuted())
		{
			FAtomActiveSound* ActiveSound = PlaybackInstance->ActiveSound;
			check(ActiveSound);

			// 1. Apply runtime gain stage(s)
			CurrentVolume = ActiveSound->bIsPreviewSound ? 1.0f : AtomRuntime->GetPrimaryVolume();
			//CurrentVolume *= AudioDevice->GetPlatformAudioHeadroom();

			// 2. Apply instance gain stages
			CurrentVolume *= PlaybackInstance->GetVolume();
			CurrentVolume *= PlaybackInstance->GetDynamicVolume();

			// 3. Apply editor gain stage
			CurrentVolume = FMath::Clamp<float>(GetDebugVolume(CurrentVolume), 0.0f, ATOM_MAX_VOLUME);

			// 4. Apply Modulations
			UAtomSoundBase* Sound = PlaybackInstance->SoundData;
			check(Sound);

			// realtime change base value
			const float ModVolumeBase = AtomModulationUtils::GetRoutedVolume(*PlaybackInstance, *Sound, *ActiveSound);
			SourceInfo.VolumeModulationBase = ModVolumeBase;

			// Note: can execute this in real time with cri atom server callback
			//const bool bHasProcessed = SourceInfo.VolumeModulation.GetHasProcessed();
			//const float ModVolumeStart = SourceInfo.VolumeModulation.GetValue();
			SourceInfo.VolumeModulation.ProcessControl(SourceInfo.VolumeModulationBase);
			const float ModVolumeEnd = SourceInfo.VolumeModulation.GetValue();
			//VolumeStart *= bHasProcessed ? ModVolumeStart : ModVolumeEnd;
			CurrentVolume *= Atom::ConvertToLinear(ModVolumeEnd);

			// 5. Apply occlusion attenuation that is not handled by Atom
			CurrentVolume *= PlaybackInstance->GetOcclusionAttenuation();
		}

#ifdef ATOM_SOUND_DEV_DEBUG
		UE_LOG(LogCriWareAtomMixerDebug, Error, TEXT("volume %f"), CurrentVolume);
#endif

		FCriWareApi::criAtomExPlayer_SetVolume(ExPlayer, CurrentVolume);

		// amplitude envelope

		if (PlaybackInstance->bEnableAmplitudeEnvelope)
		{
			auto& Envelope = PlaybackInstance->AmplitudeEnvelope;
			FCriWareApi::criAtomExPlayer_SetEnvelopeAttackTime(ExPlayer, Envelope.AttackTime);
			FCriWareApi::criAtomExPlayer_SetEnvelopeHoldTime(ExPlayer, Envelope.HoldTime);
			FCriWareApi::criAtomExPlayer_SetEnvelopeDecayTime(ExPlayer, Envelope.DecayTime);
			FCriWareApi::criAtomExPlayer_SetEnvelopeSustainLevel(ExPlayer, Envelope.SustainLevel);
			FCriWareApi::criAtomExPlayer_SetEnvelopeReleaseTime(ExPlayer, Envelope.ReleaseTime);
		}
	}

	void FAtomExPlayer::Update3DSource(FCriAtomExSourcePtr& InExSource, const FTransform& InTransform, const FAtomAttenuationSettings* InAttenuationSettings)
	{
		const float DistanceFactor = 0.01f; // UE5 (cm) to Atom (meters)
		auto Pos = ToCriAtomExVector(InTransform.GetTranslation() * DistanceFactor);
		auto Front = ToCriAtomExVector(InTransform.GetUnitAxis(EAxis::X));
		auto Up = ToCriAtomExVector(InTransform.GetUnitAxis(EAxis::Z));
		auto Velocity = ToCriAtomExVector(InTransform.GetScale3D() * DistanceFactor);

		//UE_LOG(LogTemp, Warning, TEXT("Source SetPos(%f, %f, %f)"), Pos.x, Pos.y, Pos.z);
		//UE_LOG(LogTemp, Warning, TEXT("Source SetOri(%f, %f, %f | %f, %f, %f)"), Front.x, Front.y, Front.z, Up.x, Up.y, Up.z);
		//UE_LOG(LogTemp, Warning, TEXT("Source SetVel(%f, %f, %f)"), Velocity.x, Velocity.y, Velocity.z);

		// position
		FCriWareApi::criAtomEx3dSource_SetPosition(InExSource, &Pos);
		FCriWareApi::criAtomEx3dSource_SetOrientation(InExSource, &Front, &Up);
		FCriWareApi::criAtomEx3dSource_SetVelocity(InExSource, &Velocity);

		if (InAttenuationSettings)
		{
			auto& AttenuationSettings = *InAttenuationSettings;

			// on/off
			FCriWareApi::criAtomEx3dSource_SetAttenuationDistanceSetting(InExSource, AttenuationSettings.bAttenuate ? CRI_TRUE : CRI_FALSE);

			if (AttenuationSettings.bAttenuate)
			{
				if (AttenuationSettings.AttenuationShape == EAtomAttenuationShape::Sphere)
				{
					// disable cone
					FCriWareApi::criAtomEx3dSource_SetConeParameter(InExSource, 360.0f, 360.0f, 0.0f);
				}
				else if (AttenuationSettings.AttenuationShape == EAtomAttenuationShape::Cone)
				{
					float InnerAngle = 0.0f;
					float OuterAngle = 0.0f;
					const float OutsideLevel = AttenuationSettings.GetConeAnglesAndOutsideLevel(InnerAngle, OuterAngle);

					FCriWareApi::criAtomEx3dSource_SetConeParameter(InExSource, InnerAngle * 2.0f, OuterAngle * 2.0f, OutsideLevel);
				}

				const float MinDistance = AttenuationSettings.GetMinDimension() * DistanceFactor;
				const float MaxDistance = AttenuationSettings.GetMaxDimension() * DistanceFactor;

				FCriWareApi::criAtomEx3dSource_SetMinMaxAttenuationDistance(InExSource, MinDistance, MaxDistance);
			}

			// ADX internal doppler fx - (it uses velocity to control pitch)
			//FCriWareApi::criAtomEx3dSource_SetDopplerFactor(InExSource, PlaybackInstance->DopplerIntensity);

			// NonSpatializedRadius (interior pan field in ADX sdk)
			const float SourceRadius = AttenuationSettings.NonSpatializedRadiusEnd * DistanceFactor;
			const float InteriorDistance = FMath::Max(0.0f, AttenuationSettings.NonSpatializedRadiusStart - AttenuationSettings.NonSpatializedRadiusEnd) * DistanceFactor;

			FCriWareApi::criAtomEx3dSource_SetInteriorPanField(InExSource, SourceRadius, InteriorDistance);

			// Note: by default atom use the closest listener present
			// update closest listener
			//int32 Index = AtomRuntime->FindClosestListenerIndex(InTransform);
			//auto& ClosestListener = AtomRuntime->GetListeners()[Index];
			//FCriWareApi::criAtomExPlayer_Set3dListenerHn(ExPlayer, ClosestListener.ExListener);
		}

		// update
		FCriWareApi::criAtomEx3dSource_Update(InExSource);
	}

	// debug
#if UE_BUILD_DEBUG && !defined(CRIWARE_UE_LE)
	extern "C" CriBool CRIAPI criAtomExPlayback_DebugGetDistanceFactor(CriAtomExPlaybackId id, CriFloat32 * distance_factor);
#endif

	void FAtomExPlayer::UpdateSpatialization()
	{
		check(PlaybackInstance);

		if (PlaybackInstance->GetUseSpatialization())
		{
			if (!bIs3D)
			{
				AddSpatialization();

				// enable 3d positionning
				FCriWareApi::criAtomExPlayer_SetPanType(ExPlayer, CRIATOMEX_PAN_TYPE_3D_POS);

				bIs3D = true;
			}

			// todo: set attenutation plain data for atom in playback instance ? 
			// taking them from this means you can't override attenuation settings from plugins.
			FAtomActiveSound* ActiveSound = PlaybackInstance->ActiveSound;
			check(ActiveSound);

			FAtomAttenuationSettings* AttenuationSettings = nullptr;
			if (ActiveSound->bHasAttenuationSettings)
			{
				AttenuationSettings = &ActiveSound->AttenuationSettings;
			}

			if (ActiveSound->MultiPositionType == EAtomMultiPositionType::SingleSource)
			{
				if (ExSource.IsValid())
				{
					if (ActiveSound->MultiPositions.IsEmpty())
					{
						// normal
						Update3DSource(ExSource, PlaybackInstance->Transform, AttenuationSettings);
					}
					else
					{
						// use the first given position if exists.
						Update3DSource(ExSource, ActiveSound->MultiPositions[0], AttenuationSettings);
					}
				}
			}
			else
			{
				// Update list if changed
				if (ExSources.Num() != ActiveSound->MultiPositions.Num())
				{
					AddSpatialization();
				}

				// update sources values
				for (int Index = 0; Index < ExSources.Num(); ++Index)
				{
					if (ExSources[Index].IsValid() && ActiveSound->MultiPositions.IsValidIndex(Index))
					{
						Update3DSource(ExSources[Index], ActiveSound->MultiPositions[Index], AttenuationSettings);
					}
				}
			}

			// debug test - try to get the applyied volume attenuation
			if (bIsPlaying && bAttenuationReady)
			{
				CriFloat32 OutDistanceFactor = 0.0f;
#if UE_BUILD_DEBUG && !defined(CRIWARE_UE_LE)
				criAtomExPlayback_DebugGetDistanceFactor(MainPlaybackID, &OutDistanceFactor);
#endif
				PlaybackInstance->SetDistanceAttenuation(1.0f - OutDistanceFactor);
#ifdef ATOM_SOUND_DEV_DEBUG
				UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("GetDistanceFactor for [%d]: factor %f"), MainPlaybackID, OutDistanceFactor);
#endif
			}
			else
			{
				bAttenuationReady = true;
			}
		}
		else if (bIs3D)
		{
			bIs3D = false;

			if (ExSource.IsValid() || ExSourceList.IsValid())
			{
				RemoveSpatialization();
			}

			// disable 3d positionning
			FCriWareApi::criAtomExPlayer_SetPanType(ExPlayer, CRIATOMEX_PAN_TYPE_PAN3D);
		}
	}

	void FAtomExPlayer::UpdateEffects()
	{
		// Update the default LPF/HPF filter frequency
		SetFilterFrequency();

		// Modulations
		FAtomActiveSound* ActiveSound = PlaybackInstance->ActiveSound;
		check(ActiveSound);
		UAtomSoundBase* Sound = PlaybackInstance->SoundData;
		check(Sound);

		// realtime change base value
		const float ModHighpassBase = AtomModulationUtils::GetRoutedHighpass(*PlaybackInstance, *Sound, *ActiveSound);
		SourceInfo.HighpassModulationBase = ModHighpassBase;
		SourceInfo.HighpassModulation.ProcessControl(SourceInfo.HighpassModulationBase);
		const float ModHighpassEnd = SourceInfo.HighpassModulation.GetValue();

		const float ModLowpassBase = AtomModulationUtils::GetRoutedLowpass(*PlaybackInstance, *Sound, *ActiveSound);
		SourceInfo.LowpassModulationBase = ModLowpassBase;
		SourceInfo.LowpassModulation.ProcessControl(SourceInfo.LowpassModulationBase);
		const float ModLowpassEnd = SourceInfo.LowpassModulation.GetValue();

		// mix with main carrier
		HPFFrequency = FMath::Max(ModHighpassEnd, HPFFrequency);
		LPFFrequency = FMath::Min(ModLowpassEnd, LPFFrequency);

		// apply to atom 
		// TODO: better biquad/bandpass filter control to apply only one 
		if (LastLPFFrequency != LPFFrequency || LastHPFFrequency != HPFFrequency)
		{
			//UE_LOG(LogTemp, Warning, TEXT("LPF%f HPF%f"), SpatializationParams.AttenuationLowpassFilterFrequency, SpatializationParams.AttenuationHighpassFilterFrequency);
			CriFloat32 CutoffLow = Atom::GetLinearFrequencyClamped(HPFFrequency, FVector2D(0.0f, 1.0f), FVector2D(ATOM_MIN_FILTER_FREQUENCY, ATOM_MAX_FILTER_FREQUENCY));
			CriFloat32 CutoffHigh = Atom::GetLinearFrequencyClamped(LPFFrequency, FVector2D(0.0f, 1.0f), FVector2D(ATOM_MIN_FILTER_FREQUENCY, ATOM_MAX_FILTER_FREQUENCY));

			//UE_LOG(LogTemp, Warning, TEXT("LPF%f HPF%f"), CutoffLow, CutoffHigh);
			FCriWareApi::criAtomExPlayer_SetBandpassFilterParameters(ExPlayer, CutoffLow, CutoffHigh);

			LastLPFFrequency = LPFFrequency;
			LastHPFFrequency = HPFFrequency;
		}

		// WARNING -> Lost of information 32 bit to 9 bits only -> the layer that ADD to data based value of priority in ATOM with this function is limited to 9bits values (512 values only!)
		// priority with Atom Limiters can go wrong depending the Blueprint script logic that user made, in this case may need to control priority by AISAC.
		const float Priority = FMath::GetMappedRangeValueUnclamped(FVector2f{-100.0f, 100.0f}, FVector2f{-255.0f, 255.0f}, PlaybackInstance->Priority);
		FCriWareApi::criAtomExPlayer_SetVoicePriority(ExPlayer, (CriSint32)Priority); // control limiters and virtualization BY atom (can be culled by concurrency sytem before)
		
		//CriAtomExFaderConfig cfg;
		//FCriWareApi::criAtomExPlayer_AttachFader(ExPlayer, &cfg, nullptr, 0);

		// function to by pass attenuation
		//FCriWareApi::criAtomExPlayer_SetDrySendLevel();

		// bus sends from attenuation settings
		if (PlaybackInstance->BusSendSettings.Num() > 0)
		{
			bool bIsUsingMasterBusSend = false;
			auto DestRack = (PlaybackInstance->bEnableSoundRack && PlaybackInstance->SoundRack) ? PlaybackInstance->SoundRack : AtomRuntime->GetMasterRack();

			for (auto& SendSettings : PlaybackInstance->BusSendSettings)
			{
				if (SendSettings.Bus)
				{
					//if (SendSettings.Bus->GetRack() != DestRack)
					//{
					//	UE_LOG(LogCriWareAtomMixer, Warning, TEXT("A bus send from a different rack than the destination rack is set for sound %s."), *ActiveSound->GetSound()->GetName());
					//	continue;
					//}

					// Get bus name
					FName BusName = SendSettings.Bus->GetBusName();
#if WITH_EDITOR
					if (BusName.IsNone())
					{
						UE_LOG(LogCriWareAtomMixerDebug, Error, TEXT("Failed to set bus send value of bus '%s' because it is not initialized with AtomRack '%s'."), *SendSettings.Bus->GetFullName(), *DestRack->GetFullName());
						continue;
					}
#endif
					check(!BusName.IsNone());

					if (BusName == UAtomRack::MasterBusName)
					{
						bIsUsingMasterBusSend = true;
					}

					// compute attenuation value

					float BusSendLevel = 0.0f;

					if (SendSettings.BusSendMethod == EAtomBusSendMethod::Manual)
					{
						BusSendLevel = FMath::Clamp(SendSettings.ManualBusSendLevel, 0.0f, 1.0f);
					}
					else
					{
						// The alpha value is determined identically between manual and custom curve methods
						const float Denom = FMath::Max(SendSettings.BusSendDistanceMax - SendSettings.BusSendDistanceMin, 1.0f);
						const float Alpha = FMath::Clamp((PlaybackInstance->ListenerToSoundDistance - SendSettings.BusSendDistanceMin) / Denom, 0.0f, 1.0f);

						if (SendSettings.BusSendMethod == EAtomBusSendMethod::Linear)
						{
							BusSendLevel = FMath::Clamp(FMath::Lerp(SendSettings.BusSendLevelMin, SendSettings.BusSendLevelMax, Alpha), 0.0f, 1.0f);
						}
						else
						{
							BusSendLevel = FMath::Clamp(SendSettings.CustomBusSendCurve.GetRichCurveConst()->Eval(Alpha), 0.0f, 1.0f);
						}
					}

					// actualy it modulate the seetings that is set in acb data.
					FCriWareApi::criAtomExPlayer_SetBusSendLevelByName(ExPlayer, TCHAR_TO_UTF8(*BusName.ToString()), BusSendLevel);
					//FCriWareApi::criAtomExPlayer_SetBusSendLevelOffsetByName(ExPlayer, TCHAR_TO_UTF8(*BusName.ToString()), 0.0f);
				}
			}

			// remove default master bus send, if not set (Atom sets by default a send to master bus.)
			if (!bIsUsingMasterBusSend)
			{
				FCriWareApi::criAtomExPlayer_SetBusSendLevelByName(ExPlayer, TCHAR_TO_UTF8(*UAtomRack::MasterBusName.ToString()), 0.0f);
			}
		}

		// AISACs modulations
		for (auto& AisacControlMod : SourceInfo.AisacControlModulations)
		{
			auto FindPredicate = [&](const FAtomAisacControlParameterInfo& ControlParam) { return AisacControlMod.Key == ControlParam.Control; };

			float AisacValue = 1.0f;
			if (auto* DefaultAisac = PlaybackInstance->AisacControlParams.FindByPredicate(FindPredicate))
			{
				AisacValue = DefaultAisac->Value;
			}

			// realtime change base value
			const float ModVolumeBase = AtomModulationUtils::GetRoutedAisac(AisacControlMod.Key, *PlaybackInstance, *Sound, *ActiveSound);
			AisacControlMod.Value.ModulationBase = ModVolumeBase;

			// Note: can execute this in real time with cri atom server callback
			//const bool bHasProcessed = SourceInfo.VolumeModulation.GetHasProcessed();
			//const float ModVolumeStart = SourceInfo.VolumeModulation.GetValue();
			AisacControlMod.Value.Modulation.ProcessControl(AisacControlMod.Value.ModulationBase);
			const float ModValueEnd = AisacControlMod.Value.Modulation.GetValue();
			//VolumeStart *= bHasProcessed ? ModVolumeStart : ModVolumeEnd;
			AisacValue *= ModValueEnd;

			const CriAtomExAisacControlId ID = AisacControlMod.Key.ID;
			CriFloat32 Value = AisacValue;
			FCriWareApi::criAtomExPlayer_SetAisacControlById(ExPlayer, ID, Value);
		}

		// add aisac not in modulation
		for (auto& ControlMod : PlaybackInstance->AisacControlParams)
		{
			if (!SourceInfo.AisacControlModulations.Contains(ControlMod.Control))
			{
				const CriAtomExAisacControlId ID = ControlMod.Control.ID;
				CriFloat32 Value = ControlMod.Value;
				FCriWareApi::criAtomExPlayer_SetAisacControlById(ExPlayer, ID, Value);
			}
		}
	}

	void FAtomExPlayer::UpdateModulation()
	{
		check(PlaybackInstance);

		FAtomActiveSound* ActiveSound = PlaybackInstance->ActiveSound;
		check(ActiveSound);

		if (ActiveSound->bModulationRoutingUpdated)
		{
			// todo: move modulation handleing to voice manager
			//MixerSourceVoice->SetModulationRouting(ActiveSound->ModulationRouting);

			FAtomRuntimeId RuntimeID = AtomRuntime->GetAtomRuntimeID();

			// update source modulators
			FAtomModulationDestination VolumeMod;
			VolumeMod.Init(RuntimeID, FName("Volume"), false /* bInIsBuffered */, false /* bInValueLinear */);
			VolumeMod.UpdateModulators(ActiveSound->ModulationRouting.VolumeModulation.Modulators);

			FAtomModulationDestination PitchMod;
			PitchMod.Init(RuntimeID, FName("Pitch"), false /* bInIsBuffered */, false /* bInValueLinear */);
			PitchMod.UpdateModulators(ActiveSound->ModulationRouting.PitchModulation.Modulators);

			FAtomModulationDestination HighpassMod;
			HighpassMod.Init(RuntimeID, FName("HPFCutoffFrequency"), false /* bInIsBuffered */, false /* bInValueLinear */);
			HighpassMod.UpdateModulators(ActiveSound->ModulationRouting.HighpassModulation.Modulators);

			FAtomModulationDestination LowpassMod;
			LowpassMod.Init(RuntimeID, FName("LPFCutoffFrequency"), false /* bInIsBuffered */, false /* bInValueLinear */);
			LowpassMod.UpdateModulators(ActiveSound->ModulationRouting.LowpassModulation.Modulators);

			// store the selected modulation
			SourceInfo.VolumeModulation = MoveTemp(VolumeMod);
			SourceInfo.PitchModulation = MoveTemp(PitchMod);
			SourceInfo.HighpassModulation = MoveTemp(HighpassMod);
			SourceInfo.LowpassModulation = MoveTemp(LowpassMod);

			// AISAC modulations
			for (auto& ControlSetting : ActiveSound->ModulationRouting.AisacModulations.AisacControlModulations)
			{
				const FName ControlName = ControlSetting.Control.Name;

				FSourceInfo::FSourceAisacModulation AisacControlMod = {};

				FAtomAisacControlSettings* ControlSettings = ActiveSound->ModulationRouting.AisacModulations.AisacControlModulations.FindByPredicate([&](FAtomAisacControlSettings& Settings)
				{
					return Settings.Control == ControlSetting.Control;
				});

				if (ControlSettings)
				{
					FAtomModulationDestination AisacMod;
					AisacMod.Init(AtomRuntime->GetAtomRuntimeID(), "AISAC", false /* bInIsBuffered */, true /* bInValueLinear */);
					AisacMod.UpdateModulators(ControlSettings->Modulators);

					AisacControlMod.Modulation = MoveTemp(AisacMod);
				}

				SourceInfo.AisacControlModulations.Add(ControlSetting.Control, AisacControlMod);
			}
		}

		ActiveSound->bModulationRoutingUpdated = false;
	}

	void FAtomExPlayer::UpdateBusSends()
	{
		bool bIsUsingMasterBusSend = false;
		auto DestRack = (PlaybackInstance->bEnableSoundRack && PlaybackInstance->SoundRack) ? PlaybackInstance->SoundRack : AtomRuntime->GetMasterRack();

		// Clear bus sends if they need clearing.
		if (PreviousBusSendSettings.Num() > 0)
		{
			// Loop through every previous send setting
			for (FAtomSoundToBusSend& PreviousSendSetting : PreviousBusSendSettings)
			{
				bool bFound = false;

				if (PlaybackInstance->bEnableSoundBusSends)
				{
					// See if it's in the current send list
					for (const FAtomSoundToBusSend& CurrentSendSettings : PlaybackInstance->SoundBusSends)
					{
						if (CurrentSendSettings.Bus == PreviousSendSetting.Bus)
						{
							bFound = true;
							break;
						}
					}
				}

				// If it's not in the current send list, add to submixes to clear
				if (!bFound && PreviousSendSetting.Bus)
				{
					//FCriWareApi::criAtomExPlayer_SetBusSendLevelByName(ExPlayer, TCHAR_TO_UTF8(*PreviousSendSetting.Bus->GetBusName().ToString()), 0.0f);

					// Atom resets all buses, but we will reapply them. 
					// it will not change things since Update() is not called between the ResetBuses() and SetBusLevel()
					FCriWareApi::criAtomExPlayer_ResetBusSends(ExPlayer);
					break;
				}
			}
		}
		
		if (PlaybackInstance->bEnableSoundBusSends)
		{
			PreviousBusSendSettings = PlaybackInstance->SoundBusSends;

			// Update bus send levels
			for (FAtomSoundToBusSend& SendInfo : PlaybackInstance->SoundBusSends)
			{
				if (SendInfo.Bus)
				{
					//if (SendInfo.Bus->GetRack() != DestRack)
					//{
					//	UE_LOG(LogCriWareAtomMixer, Warning, TEXT("A bus send from a different rack than the destination rack is set for sound %s."), *ActiveSound->GetSound()->GetName());
					//	continue;
					//}

					// Get bus name
					FName BusName = SendInfo.Bus->GetBusName();
#if WITH_EDITOR
					if (BusName.IsNone())
					{
						UE_LOG(LogCriWareAtomMixerDebug, Error, TEXT("Failed to set bus send value of bus '%s' because it is not initialized with AtomRack '%s'."), *SendInfo.Bus->GetFullName(), *DestRack->GetFullName());
						continue;
					}
#endif
					check(!BusName.IsNone());

					if (BusName == UAtomRack::MasterBusName)
					{
						bIsUsingMasterBusSend = true;
					}

					float SendLevel = 1.0f;

					// calculate send level based on distance if that method is enabled
					/*if (!WaveInstance->bEnableSubmixSends)
					{
						SendLevel = 0.0f;
					}
					else*/ if (SendInfo.SendLevelControlMethod == EAtomSendLevelControlMethod::Manual)
					{
						if (SendInfo.DisableManualSendClamp)
						{
							SendLevel = SendInfo.SendLevel;
						}
						else
						{
							SendLevel = FMath::Clamp(SendInfo.SendLevel, 0.0f, 1.0f);
						}
					}
					else
					{
						// The alpha value is determined identically between manual and custom curve methods
						const float Denom = FMath::Max(SendInfo.MaxSendDistance - SendInfo.MinSendDistance, 1.0f);
						const float Alpha = FMath::Clamp((PlaybackInstance->ListenerToSoundDistance - SendInfo.MinSendDistance) / Denom, 0.0f, 1.0f);

						if (SendInfo.SendLevelControlMethod == EAtomSendLevelControlMethod::Linear)
						{
							SendLevel = FMath::Clamp(FMath::Lerp(SendInfo.MinSendLevel, SendInfo.MaxSendLevel, Alpha), 0.0f, 1.0f);
						}
						else // use curve
						{
							SendLevel = FMath::Clamp(SendInfo.CustomSendLevelCurve.GetRichCurveConst()->Eval(Alpha), 0.0f, 1.0f);
						}
					}

					// actualy it modulate the settings that is set in acb data.
					FCriWareApi::criAtomExPlayer_SetBusSendLevelByName(ExPlayer, TCHAR_TO_UTF8(*BusName.ToString()), SendLevel);
					//FCriWareApi::criAtomExPlayer_SetBusSendLevelOffsetByName(ExPlayer, TCHAR_TO_UTF8(*BusName.ToString()), SendLevel);
				}
			}
		}
		else
		{
			PreviousBusSendSettings.Reset();
		}
	}

	void FAtomExPlayer::UpdateChannelMap()
	{
		//SetLFEBleed();

		// Compute a new speaker map for each possible output channel mapping for the source
		bool bShouldSetMap = false;
		//{
		//	FRWScopeLock Lock(ChannelMapLock, SLT_Write);
			bShouldSetMap = ComputeChannelMap(WaveInfo.NumChannels);
		//}
		//if (bShouldSetMap)
		//{
		//	FRWScopeLock Lock(ChannelMapLock, SLT_ReadOnly);
		//	MixerSourceVoice->SetChannelMap(NumChannels, ChannelMap, bIs3D, WaveInstance->bCenterChannelOnly);
		//}

		//bPrevAllowedSpatializationSetting = IsSpatializationCVarEnabled();
	}

	bool FAtomExPlayer::ComputeChannelMap(const int32 NumSourceChannels)
	{
		if (NumSourceChannels == 1)
		{
			return ComputeMonoChannelMap();
		}
		else if (NumSourceChannels >= 2)
		{
			return ComputeStereoChannelMap();
		}
		//else if (!OutChannelMap.Num())
		//{
		//	MixerDevice->Get2DChannelMap(bIsVorbis, NumSourceChannels, WaveInstance->bCenterChannelOnly, OutChannelMap);
		//	return true;
		//}
		return false;
	}

	bool FAtomExPlayer::ComputeMonoChannelMap()
	{
		if (IsUsingObjectBasedSpatialization())
		{

			// Treat the source as if it is a 2D stereo source:
			//return ComputeStereoChannelMap();
			return true; // adx object based
		}
		else if (PlaybackInstance->GetUseSpatialization() && (!FMath::IsNearlyEqual(PlaybackInstance->AbsoluteAzimuth, PreviousAzimuth, 0.01f) /* || MixerSourceVoice->NeedsSpeakerMap()*/))
		{
			// Don't need to compute the source channel map if the absolute azimuth hasn't changed much
			PreviousAzimuth = PlaybackInstance->AbsoluteAzimuth;

			return true;
		}

		return false;
	}

	bool FAtomExPlayer::ComputeStereoChannelMap()
	{
		if (PlaybackInstance->GetUseSpatialization() && (!FMath::IsNearlyEqual(PlaybackInstance->AbsoluteAzimuth, PreviousAzimuth, 0.01f)/* || MixerSourceVoice->NeedsSpeakerMap()*/))
		{
			// Make sure our stereo emitter positions are updated relative to the sound emitter position
			if (WaveInfo.NumChannels == 2)
			{
				// Make sure our stereo emitter positions are updated relative to the sound emitter position
				UpdateStereoEmitterPositions();
			}

			// Check whether voice is currently using 
			if (!IsUsingObjectBasedSpatialization())
			{
				float AzimuthOffset = 0.0f;

				const float DistanceToUse = AtomUseListenerOverrideForSpreadCVar ? PlaybackInstance->ListenerToSoundDistance : PlaybackInstance->ListenerToSoundDistanceForPanning;

				if (DistanceToUse > UE_KINDA_SMALL_NUMBER)
				{
					AzimuthOffset = FMath::Atan(0.5f * PlaybackInstance->StereoSpread / DistanceToUse);
					AzimuthOffset = FMath::RadiansToDegrees(AzimuthOffset);
				}

				// Atom panning is only multichannel so stereo is limited to a wideness angle of 30 degre.
				// panspread => {0.0, 1.0} => {0 degree, 30 degrees} 
				const float Wideness = AzimuthOffset * 0.033333f;
				FCriWareApi::criAtomExPlayer_SetWideness(ExPlayer, (CriFloat32)Wideness);

				return true;
			}
		}

		return true; // channel mapping is controlled by Atom SDK
	}

	void FAtomExPlayer::UpdateCueParameters()
	{
		// Selector Labels

		// Clear selector labels if they need clearing.
		if (PreviousCueSelectorParams.Num() > 0)
		{
			// Loop through every previous label setting
			for (FAtomSelectorParam& PreviousSelectorParam : PreviousCueSelectorParams)
			{
				// See if it's in the current label list
				if (!PlaybackInstance->CueSelectorParams.FindByPredicate([PreviousSelectorParam](const FAtomSelectorParam& Param)
					{
						return PreviousSelectorParam.Name == Param.Name;
					}))
				{
					// If it's not in the current label list, ask for a complete clear.
					if (!PreviousSelectorParam.Name.IsNone())
					{
						// Atom clear all labels, but we will reapply all current labels.
						// it will not change things since Update() is not called between the ClearSelectorLabels() and SetSelectorLabel()
						FCriWareApi::criAtomExPlayer_ClearSelectorLabels(ExPlayer);
						break;
					}
				}
			}
		}
		PreviousCueSelectorParams = PlaybackInstance->CueSelectorParams;

		// Apply the current selector labels
		SetCueSelectorLabels();

		// Block Index
		int32 BlockIndex = PlaybackInstance->CueNextBlockIndex;
		if (BlockIndex != PreviousCueNextBlockIndex)
		{
			FCriWareApi::criAtomExPlayback_SetNextBlockIndex(MainPlaybackID, (CriAtomExBlockIndex)BlockIndex);
			PreviousCueNextBlockIndex = BlockIndex;
		}

		// BeatSync
		CriAtomExBeatSyncInfo ExBeatSyncInfo;
		CriBool bIsBeatSyncPresent = FCriWareApi::criAtomExPlayback_GetBeatSyncInfo(MainPlaybackID, &ExBeatSyncInfo);
		if (bIsBeatSyncPresent == CRI_TRUE)
		{
			// sync info
			if (!CueBeatSyncInfo.IsValid())
			{
				CueBeatSyncInfo = MakeShareable(new FAtomBeatSyncInfo{});
			}
			FAtomBeatSyncInfo& BeatSyncInfo = *CueBeatSyncInfo.Get();
			BeatSyncInfo.BarCount = (int32)ExBeatSyncInfo.bar_count;
			BeatSyncInfo.BeatCount = (int32)ExBeatSyncInfo.beat_count;
			BeatSyncInfo.BeatProgress = (float)ExBeatSyncInfo.beat_progress;
			BeatSyncInfo.BPM = (float)ExBeatSyncInfo.bar_count;
			BeatSyncInfo.Offset = (int32)ExBeatSyncInfo.offset;
			BeatSyncInfo.NumBeatsPerBar = (int32)ExBeatSyncInfo.num_beats;
			PlaybackInstance->ActiveSound->SetCueBeatSyncInfo(CueBeatSyncInfo);

			// set offset prameter (no-op if not changed)
			int32 BeatSyncOffset = PlaybackInstance->CueBeatSyncOffset;
			FCriWareApi::criAtomExPlayback_SetBeatSyncOffset(MainPlaybackID, (CriSint16)BeatSyncOffset);
		}
	}

	void FAtomExPlayer::AddSpatialization()
	{
		// Set the 3d sources. Set3dSource and Set3dSourcelist overrides each other.
		if (PlaybackInstance->ActiveSound->MultiPositionType == EAtomMultiPositionType::SingleSource)
		{
			if (!ExSource.IsValid())
			{
				// Create a source
				CriAtomEx3dSourceConfig Config;
				criAtomEx3dSource_SetDefaultConfig(&Config);
				ExSource = MakeCriHandle(FCriWareApi::criAtomEx3dSource_Create(&Config, nullptr, 0));
			}

			// attach source
			FCriWareApi::criAtomExPlayer_Set3dSourceHn(ExPlayer, ExSource);
		}
		else // Multi positions
		{
			// Create a source list
			if (!ExSourceList.IsValid())
			{
				CriAtomEx3dSourceListConfig Config;
				criAtomEx3dSourceList_SetDefaultConfig(&Config);
				ExSourceList = MakeCriHandle(FCriWareApi::criAtomEx3dSourceList_Create(&Config, nullptr, 0));
			}

			int NumPositions = PlaybackInstance->ActiveSound->MultiPositions.Num();

			// add positions
			for (int Index = ExSources.Num(); Index < NumPositions; ++Index)
			{
				// Create a source
				CriAtomEx3dSourceConfig Config;
				criAtomEx3dSource_SetDefaultConfig(&Config);
				FCriAtomExSourcePtr NewExSource = MakeCriHandle(FCriWareApi::criAtomEx3dSource_Create(&Config, nullptr, 0));
				if (NewExSource.IsValid())
				{
					FCriWareApi::criAtomEx3dSourceList_Add(ExSourceList, NewExSource);
				}
				ExSources.Add(Forward<FCriAtomExSourcePtr>(NewExSource));
			}

			// remove unused positions
			for (int LastIndex = ExSources.Num() - 1; LastIndex >= NumPositions; --LastIndex)
			{
				if (ExSources[LastIndex].IsValid())
				{
					FCriWareApi::criAtomEx3dSourceList_Remove(ExSourceList, ExSources[LastIndex]);
				}
				ExSources.RemoveAt(LastIndex);
			}

			// attach source list
			FCriWareApi::criAtomExPlayer_Set3dSourceListHn(ExPlayer, ExSourceList);
		}

		// Note: by default atom use the closet listener present
		// attach closest listener
		//int32 Index = AtomRuntime->FindClosestListenerIndex(PlaybackInstance->Transform);
		//auto& ClosestListener = AtomRuntime->GetListeners()[Index];
		//FCriWareApi::criAtomExPlayer_Set3dListenerHn(ExPlayer, ClosestListener.ExListener);
	}

	void FAtomExPlayer::RemoveSpatialization()
	{
		// Note: by default atom use the closet listener present
		//FCriWareApi::criAtomExPlayer_Set3dListenerHn(ExPlayer, nullptr);

		if (ExSource.IsValid())
		{
			FCriWareApi::criAtomEx3dSource_ResetParameters(ExSource);

			if (ExPlayer.IsValid())
			{
				FCriWareApi::criAtomExPlayer_Set3dSourceHn(ExPlayer, nullptr);
			}
		}

		if (ExSourceList.IsValid())
		{
			for (auto& Source : ExSources)
			{
				FCriWareApi::criAtomEx3dSource_ResetParameters(Source);
			}

			if (ExPlayer.IsValid())
			{
				FCriWareApi::criAtomExPlayer_Set3dSourceListHn(ExPlayer, nullptr);
			}
		}
	}

	void FAtomExPlayer::SetLooping()
	{
		if (Cast<UAtomSoundCue>(PlaybackInstance->SoundData))
		{
			// A cue controls various track and block looping, so behavior should never be overwritten in player.
			FCriWareApi::criAtomExPlayer_LimitLoopCount(ExPlayer, CRIATOMPLAYER_NO_LOOP_LIMITATION);
		}
		else
		{
			// Applies the looping mode to player
			if (PlaybackInstance->LoopingMode == EAtomLoopingMode::LoopForever
				|| PlaybackInstance->LoopingMode == EAtomLoopingMode::LoopWithNotification)
			{
				FCriWareApi::criAtomExPlayer_LimitLoopCount(ExPlayer, CRIATOMEXPLAYER_FORCE_LOOP);
			}
			else
			{
				FCriWareApi::criAtomExPlayer_LimitLoopCount(ExPlayer, CRIATOMEXPLAYER_IGNORE_LOOP);
			}
		}
	}

	void FAtomExPlayer::SetCategories()
	{
		for (auto CategoryName : PlaybackInstance->CategoryNames)
		{
			FCriWareApi::criAtomExPlayer_SetCategoryByName(ExPlayer, TCHAR_TO_UTF8(*CategoryName.ToString()));
		}
	}

	void FAtomExPlayer::UnsetCategories()
	{
		// note: ResetParameters also flush
		FCriWareApi::criAtomExPlayer_UnsetCategory(ExPlayer);
	}

	void FAtomExPlayer::AttachAisacPatches()
	{
		for (auto PatchName : PlaybackInstance->AdditionalAisacPatchNames)
		{
			FCriWareApi::criAtomExPlayer_AttachAisac(ExPlayer, TCHAR_TO_UTF8(*PatchName.ToString()));
		}
	}

	void FAtomExPlayer::DetachAisacPatches()
	{
		// note: ResetParameters also flush
		FCriWareApi::criAtomExPlayer_DetachAisacAll(ExPlayer);
	}

	void FAtomExPlayer::SetCueSelectorLabels()
	{
		for (const FAtomSelectorParam& SelectorParam : PlaybackInstance->CueSelectorParams)
		{

#if WITH_EDITOR
			if (SelectorParam.Name.IsNone() || SelectorParam.Label.IsNone())
			{
				UE_LOG(LogCriWareAtomMixerDebug, Error, TEXT("Failed to set selector label for sound '%s' because it is not valid."), *PlaybackInstance->SoundData->GetFullName());
				continue;
			}
#endif
			check(!SelectorParam.Name.IsNone());
			check(!SelectorParam.Label.IsNone());

			FCriWareApi::criAtomExPlayer_SetSelectorLabel(ExPlayer, TCHAR_TO_UTF8(*SelectorParam.Name.ToString()), TCHAR_TO_UTF8(*SelectorParam.Label.ToString()));
		}
	}

	void FAtomExPlayer::SetCueFirstBlockIndex()
	{
		int32 BlockIndex = PlaybackInstance->ActiveSound->CueFirstBlockIndex;
		if (BlockIndex > INDEX_NONE)
		{
			FCriWareApi::criAtomExPlayer_SetFirstBlockIndex(ExPlayer, (CriAtomExBlockIndex)BlockIndex);
		}
	}

	void FAtomExPlayer::Play()
	{
#ifdef ATOM_SOUND_STATUS_DEBUG
		UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Play %d"), Status);
#endif
		if (!PlaybackInstance)
		{
			return;
		}

		// Don't restart the sound if it was stopping when we paused, just stop it.
		if (bIsPaused && (bIsStopping /* || IsPlaybackFinished(MainPlaybackID)*/))
		{
#ifdef ATOM_SOUND_STATUS_DEBUG
			UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Stop %d"), Status);
#endif
			StopNow();
			return;
		}

		if (bIsStopping)
		{
			UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Restarting an Atom source player which was stopping. Stopping now."));
			return;
		}

		ATOM_MIXER_TRACE_CPUPROFILER_EVENT_SCOPE(FAtomExPlayer::Play);

		if (ExPlayer.IsValid() && bIsInitialized)
		{
			if (!bIsExternal)
			{
#ifdef ATOM_SOUND_STATUS_DEBUG
				UE_LOG(LogCriWareAtomMixerDebug, Display, TEXT("Resume %d"), Status);
#endif
				FCriWareApi::criAtomExPlayer_Resume(ExPlayer, CriAtomExResumeMode::CRIATOMEX_RESUME_ALL_PLAYBACK);
			}
		}
		else
		{
			UE_LOG(LogCriWareAtomMixer, Error, TEXT("AtomExPlayer is not ready for playback."));
		}

		bIsPaused = false;
		bIsPlaying = true;
		bIsStopping = false;
	}

	void FAtomExPlayer::Pause()
	{
		if (!PlaybackInstance)
		{
			return;
		}

		if (bIsStopping)
		{
			return;
		}

		if (ExPlayer.IsValid())
		{
			FCriWareApi::criAtomExPlayer_Pause(ExPlayer, CRI_TRUE);
		}

		bIsPaused = true;
	}

	void FAtomExPlayer::Stop()
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		if (!bIsInitialized)
		{
			return;
		}

		if (!ExPlayer.IsValid())
		{
			StopNow();
			return;
		}

		UAtomSoundBase* Sound = PlaybackInstance ? PlaybackInstance->SoundData : nullptr;
		// If MarkAsGarbage() was called, Sound can be null
		if (!Sound)
		{
			StopNow();
			return;
		}

		// Stop procedural sounds immediately that don't require fade
		/*if (Sound->bProcedural && !Sound->bRequiresStopFade)
		{
			StopNow();
			return;
		}*/

		if (IsPlaybackFinished(MainPlaybackID))
		{
			StopNow();
			return;
		}

		// Otherwise, we need to do a quick fade-out of the sound and put the state
		// of the sound into "stopping" mode. This prevents this source from
		// being put into the "free" pool and prevents the source from freeing its resources
		// until the sound has finished naturally (i.e. faded all the way out)

		if (!bIsStopping)
		{
			// Let the playback instance know it's stopping
			PlaybackInstance->SetStopping(true);

			if (!bIsExternal)
			{
#ifdef  ATOM_SOUND_DEV_DEBUG
				UE_LOG(LogCriWareAtomMixerDebug, Error, TEXT("call stop"));
#endif
				FCriWareApi::criAtomExPlayer_Stop(ExPlayer);
			}
			bIsStopping = true;
			bIsPaused = false;

			// FAtomSource::Stop() Will be excuted by StopNow()
		}
	}

	void FAtomExPlayer::StopNow()
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::AtomMixer);

		// Immediately stop the sound source

		InitializationState = EAtomPlayerExInitializationState::NotInitialized;
		bIsInitialized = false; // maybe replace by InitializationState
		bIsStopping = false;

		if (ExPlayer.IsValid())
		{
			if (bIsPlaying && !bIsExternal)
			{
#ifdef ATOM_SOUND_DEV_DEBUG
				UE_LOG(LogCriWareAtomMixerDebug, Error, TEXT("call stop now"));
#endif
				// TODO: make this per playbackid
				//FCriWareApi::criAtomExPlayback_StopWithoutReleaseTime(MainPlaybackID);
				FCriWareApi::criAtomExPlayer_StopWithoutReleaseTime(ExPlayer);
			}

			if (PlaybackInstance)
			{
				if (PlaybackInstance->AdditionalAisacPatchNames.Num() > 0)
				{
					DetachAisacPatches();
				}
			}
		}

		bIsPaused = false;
		bIsPlaying = false;

		// Free/reset Parameters and Resources

		FreeResources();

		FAtomSource::Stop();
	}

	bool FAtomExPlayer::IsStopping()
	{
		return bIsStopping;
	}

	bool FAtomExPlayer::IsFinished()
	{
		// A paused source is not finished.
		if (bIsPaused)
		{
			return false;
		}

		if (!bIsInitialized) // EAtomPLayerExInitializationState::NotInitialized)
		{
			return true;
		}

		if (bIsPreparingForInit) // EAtomPLayerExInitializationState::Initializing
		{
			return false;
		}

		if (PlaybackInstance && ExPlayer.IsValid())
		{
			if (IsPlaybackFinished(MainPlaybackID))
			{
				PlaybackInstance->NotifyFinished();
				bIsStopping = false;
				return true;
			}
			//else if (bLoopCallback && WaveInstance->LoopingMode == LOOP_WithNotification)
			//{
			//	WaveInstance->NotifyFinished();
			//	bLoopCallback = false;
			//}
		}

		return false;
	}

	bool FAtomExPlayer::IsPlaybackFinished(FAtomPlaybackId PlaybackID)
	{
#ifdef ATOM_SOUND_DEV_DEBUG
		UE_LOG(LogCriWareAtomMixer, Display, TEXT("IsPlaybackFinished. %d"), FCriWareApi::criAtomExPlayback_GetStatus(PlaybackID));
#endif
		return FCriWareApi::criAtomExPlayback_GetStatus(PlaybackID) == CRIATOMEXPLAYBACK_STATUS_REMOVED;
	}

	float FAtomExPlayer::GetPlaybackPercent() const
	{
		if (!bIsInitialized)// InitializationState != EMixerSourceInitializationState::Initialized)
		{
			return PreviousPlaybackPercent;
		}

		if (ExPlayer.IsValid() && NumTotalFrames > 0)
		{
			CriSint64 NumSamplesPlayed = 0;
			CriSint32 SampleRate = 0;
			FCriWareApi::criAtomExPlayback_GetNumPlayedSamples(MainPlaybackID, &NumSamplesPlayed, &SampleRate);

			int64 NumFrames = StartFrame + NumSamplesPlayed;
			PreviousPlaybackPercent = (float)NumFrames / NumTotalFrames;
			if (PlaybackInstance->LoopingMode == EAtomLoopingMode::LoopNever)
			{
				PreviousPlaybackPercent = FMath::Min(PreviousPlaybackPercent, 1.0f);
			}
			return PreviousPlaybackPercent;
		}
		else
		{
			// If we don't have any frames, that means it's some procedural sound, which means
			// that we're never going to have a playback percentage.
			return 1.0f;
		}
	}

	/* FAtomExPlayback implementation
	 *****************************************************************************/

	FAtomExPlayback::FAtomExPlayback(FAtomExPlayer* InExPlayer)
		: FMixerSource(InExPlayer ? InExPlayer->GetAtomRuntime() : nullptr)
		, ExPlayer(InExPlayer)
		, ExPlaybackID(INDEX_NONE)
		, bIsPreparingForInit(false)
		, bIsWaitingExPlayerReady(false)
		, bIsPrepareFailed(false)
		, bIsStopping(false)
	{
		check(InExPlayer);
	}

	FAtomExPlayback::~FAtomExPlayback()
	{}

	bool FAtomExPlayback::PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance)
	{
		if (InPlaybackInstance && ExPlayer)
		{
			PlaybackInstance = InPlaybackInstance;

			if (ExPlayer->IsInitialized())
			{
				if (!PrepareToInitializeInternal(InPlaybackInstance))
				{
					return false;
				}
			}

			bIsWaitingExPlayerReady = true;
			bIsPreparingForInit = true;
			return true;
		}

		return false;
	}

	bool FAtomExPlayback::PrepareToInitializeInternal(FAtomPlaybackInstance* InPlaybackInstance)
	{
		// prepare
		ExPlaybackID = FCriWareApi::criAtomExPlayer_Prepare((CriAtomExPlayerHn)ExPlayer->GetNativeHandle());
		if (ExPlaybackID == INDEX_NONE)
		{
			UE_LOG(LogCriWareAtomMixer, Error, TEXT("Cannot prepare AtomExPlayback for AtomSoundBase '%s'."), *InPlaybackInstance->SoundData->GetName());
			return false;
		}

		return true;
	}

	bool FAtomExPlayback::IsPreparedToInit()
	{
		if (bIsPreparingForInit && ExPlayer)
		{
			if (PlaybackInstance && bIsWaitingExPlayerReady)
			{
				if (ExPlayer->IsInitialized())
				{
					bIsWaitingExPlayerReady = false;
				}

				if (bIsWaitingExPlayerReady)
				{
					return false;
				}

				bIsPrepareFailed = !PrepareToInitializeInternal(PlaybackInstance);
			}

			if (ExPlaybackID != INDEX_NONE)
			{
				Status = FCriWareApi::criAtomExPlayback_GetStatus(ExPlaybackID);
				return Status == CRIATOMEXPLAYBACK_STATUS_PLAYING || Status == CRIATOMEXPLAYBACK_STATUS_ERROR;
			}
		}

		return false;
	}

	bool FAtomExPlayback::Init(FAtomPlaybackInstance* InPlaybackInstance)
	{
		FAtomSource::InitCommon();

		bIsPreparingForInit = false;

		if (!bIsPrepareFailed && ExPlaybackID != INDEX_NONE && Status == CRIATOMEXPLAYBACK_STATUS_PLAYING)
		{
			// -- init other needed stuff --

			bIsInitialized = true;
			return true;
		}

		bIsPrepareFailed = false;
		return false;
	}

	void FAtomExPlayback::Update()
	{
		if (!PlaybackInstance || !ExPlayer || ExPlaybackID == INDEX_NONE || bIsPaused || (!bIsInitialized && !bIsPreparingForInit))
		{
			return;
		}

		Status = FCriWareApi::criAtomExPlayback_GetStatus(ExPlaybackID);

		FAtomSource::UpdateCommon();

		TickCount++;

		FCriWareApi::criAtomExPlayer_Update((CriAtomExPlayerHn)ExPlayer->GetNativeHandle(), ExPlaybackID);
	}

	void FAtomExPlayback::Play()
	{
		if (!PlaybackInstance)
		{
			return;
		}

		// Don't restart the sound if it was stopping when we paused, just stop it.
		if (bIsPaused && (bIsStopping /* || IsPlaybackFinished(MainPlaybackID)*/))
		{
			StopNow();
			return;
		}

		if (bIsStopping)
		{
			UE_LOG(LogCriWareAtomMixer, Warning, TEXT("Restarting an Atom source player which was stopping. Stopping now."));
			return;
		}

		if (ExPlaybackID != INDEX_NONE && bIsInitialized)
		{
			FCriWareApi::criAtomExPlayback_Resume(ExPlaybackID, CriAtomExResumeMode::CRIATOMEX_RESUME_ALL_PLAYBACK);
		}
		else
		{
			UE_LOG(LogCriWareAtomMixer, Error, TEXT("AtomExPlayback is not ready for playback."));
		}

		bIsPaused = false;
		bIsPlaying = true;
		bIsStopping = false;
	}

	void FAtomExPlayback::Pause()
	{
		if (!PlaybackInstance)
		{
			return;
		}

		if (bIsStopping)
		{
			return;
		}

		if (ExPlaybackID != INDEX_NONE)
		{
			FCriWareApi::criAtomExPlayback_Pause(ExPlaybackID, CRI_TRUE);
			bIsPaused = true;
		}
	}

	void FAtomExPlayback::Stop()
	{
		if (!bIsInitialized)
		{
			return;
		}

		if (ExPlaybackID == INDEX_NONE)
		{
			StopNow();
			return;
		}

		if (!PlaybackInstance)
		{
			StopNow();
			return;
		}

		if (IsPlaybackFinished())
		{
			StopNow();
			return;
		}

		if (!bIsStopping)
		{
			FCriWareApi::criAtomExPlayback_Stop(ExPlaybackID);
			bIsPaused = false;
			bIsStopping = true;

			// Will be excuted by StopNow()
			//FAtomSource::Stop();
		}
	}

	void FAtomExPlayback::StopNow()
	{
		bIsInitialized = false;
		bIsStopping = false;

		if (PlaybackInstance)
		{

		}

		if (ExPlaybackID != INDEX_NONE && bIsPlaying)
		{
			FCriWareApi::criAtomExPlayback_StopWithoutReleaseTime(ExPlaybackID);
			bIsPaused = false;
			bIsPlaying = false;
		}
		else
		{
			UE_LOG(LogCriWareAtomMixer, Error, TEXT("AtomExPlayer is not setup."));
		}

		if (ExPlaybackID != INDEX_NONE)
		{
			ExPlaybackID = INDEX_NONE;
		}

		FAtomSource::Stop();
	}

	bool FAtomExPlayback::IsStopping()
	{
		return bIsStopping;
	}

	bool FAtomExPlayback::IsFinished()
	{
		// A paused source is not finished.
		if (bIsPaused)
		{
			return false;
		}

		if (!bIsInitialized)
		{
			return true;
		}

		if (bIsPreparingForInit)
		{
			return false;
		}

		if (PlaybackInstance && ExPlaybackID != INDEX_NONE)
		{
			if (IsPlaybackFinished())
			{
				bIsStopping = false;
				return true;
			}
		}

		return false;
	}

	bool FAtomExPlayback::IsPlaybackFinished()
	{
		return FCriWareApi::criAtomExPlayback_GetStatus(ExPlaybackID) == CRIATOMEXPLAYBACK_STATUS_REMOVED;
	}

	/* FAtomExternalExPlayer implementation
	 *****************************************************************************/

	FAtomExternalExPlayer::FAtomExternalExPlayer(FAtomRuntime* InAtomRuntime, FCriAtomExPlayerPtr&& InExternalExPlayer)
		: FAtomExPlayer(InAtomRuntime, MoveTemp(InExternalExPlayer))
	{
		//check(bIsExternal);
	}

	FAtomExternalExPlayer::~FAtomExternalExPlayer()
	{
	}

	bool FAtomExternalExPlayer::PrepareForInitialization(FAtomPlaybackInstance* InPlaybackInstance)
	{
		return FAtomExPlayer::PrepareForInitialization(InPlaybackInstance);
	}
	 
	bool FAtomExternalExPlayer::IsPreparedToInit()
	{
		return FAtomExPlayer::IsPreparedToInit();
	}
	 
	bool FAtomExternalExPlayer::Init(FAtomPlaybackInstance* InPlaybackInstance)
	{
		return FAtomExPlayer::Init(InPlaybackInstance);
	}



} // namespace