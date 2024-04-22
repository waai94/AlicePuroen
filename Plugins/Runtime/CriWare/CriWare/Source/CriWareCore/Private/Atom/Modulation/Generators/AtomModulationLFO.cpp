﻿
#include "Atom/Modulation/Generators/AtomModulationLFO.h"

#include "Engine/World.h"
#include "DSP/LFO.h"

#include "Atom/AtomRuntime.h"
#include "Atom/Modulation/AtomModulation.h"
#include "Atom/Modulation/AtomModulationLogs.h"
#include "Atom/Modulation/AtomModulationSystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AtomModulationLFO)

namespace AtomGeneratorLFOPrivate
{
	static const TArray<FString> DebugCategories =
	{
		TEXT("Value"),
		TEXT("Gain"),
		TEXT("Frequency"),
		TEXT("Offset"),
		TEXT("Curve")
	};

	static const FString DebugName = TEXT("LFO");
}

class FAtomLFOGenerator
	: public IAtomModulatorGenerator
{
	public:
		FAtomLFOGenerator() = default;

		FAtomLFOGenerator(const FAtomLFOGenerator& InGenerator)
			: LFO(InGenerator.LFO)
			, Value(InGenerator.Value)
			, Params(InGenerator.Params)
		{
		}

		FAtomLFOGenerator(const FAtomModulationLFOParams& InParams)
			: Params(InParams)
		{
			LFO.SetBipolar(false);
			LFO.SetExponentialFactor(Params.ExponentialFactor);
			LFO.SetFrequency(Params.Frequency);
			LFO.SetGain(Params.Amplitude);
			LFO.SetMode(Params.bLooping ? Audio::ELFOMode::Type::Sync : Audio::ELFOMode::OneShot);
			LFO.SetPulseWidth(Params.Width);
			LFO.SetType(static_cast<Audio::ELFO::Type>(Params.Shape));
			LFO.Start();

			static_assert(static_cast<int32>(EAtomModulationLFOShape::COUNT) == static_cast<int32>(Audio::ELFO::Type::NumLFOTypes), "LFOShape/ELFO Type mismatch");
		}

		virtual ~FAtomLFOGenerator() = default;

		virtual float GetValue() const override
		{
			return Value;
		}

		virtual bool IsBypassed() const override
		{
			return Params.bBypass;
		}

		virtual void Update(double InElapsed) override
		{
			if (InElapsed > 0.0f && LFO.GetFrequency() > 0.0f)
			{
				const float SampleRate = static_cast<float>(1.0 / InElapsed);
				LFO.SetSampleRate(SampleRate);
				LFO.Update();
				Value = LFO.Generate() + Params.Offset;
			}
		}

		virtual FAtomModulationGeneratorPtr Clone() const override
		{
			return FAtomModulationGeneratorPtr(new FAtomLFOGenerator(*this));
		}

		virtual void UpdateGenerator(FAtomModulationGeneratorPtr&& InGenerator) override
		{
			if (!ensure(InGenerator.IsValid()))
			{
				return;
			}

			//AtomRenderThreadCommand([this, NewGenerator = MoveTemp(InGenerator)]()
			AtomThreadCommand([this, NewGenerator = MoveTemp(InGenerator)]()
			{
				const FAtomLFOGenerator* Generator = static_cast<const FAtomLFOGenerator*>(NewGenerator.Get());
				Params = Generator->Params;

				LFO.SetExponentialFactor(Params.ExponentialFactor);
				LFO.SetFrequency(Params.Frequency);
				LFO.SetGain(Params.Amplitude);
				LFO.SetPhaseOffset(Params.Phase);
				LFO.SetPulseWidth(Params.Width);

				static_assert(static_cast<int32>(EAtomModulationLFOShape::COUNT) == static_cast<int32>(Audio::ELFO::Type::NumLFOTypes), "LFOShape/ELFO Type mismatch");
				LFO.SetType(static_cast<Audio::ELFO::Type>(Params.Shape));

				Audio::ELFOMode::Type NewMode = Params.bLooping ? Audio::ELFOMode::Type::Sync : Audio::ELFOMode::OneShot;
				const bool bModeUpdated = NewMode != LFO.GetMode();
				if (bModeUpdated)
				{
					LFO.SetMode(NewMode);
				}

				if (bModeUpdated)
				{
					LFO.Start();
				}
			});
		}

#if !UE_BUILD_SHIPPING
		virtual void GetDebugCategories(TArray<FString>& OutDebugCategories) const override
		{
			OutDebugCategories = AtomGeneratorLFOPrivate::DebugCategories;
		}

		virtual const FString& GetDebugName() const override
		{
			return AtomGeneratorLFOPrivate::DebugName;
		}

		virtual void GetDebugValues(TArray<FString>& OutDebugValues) const override
		{
			OutDebugValues.Add(FString::Printf(TEXT("%.4f"), GetValue()));
			OutDebugValues.Add(FString::Printf(TEXT("%.4f"), LFO.GetGain()));
			OutDebugValues.Add(FString::Printf(TEXT("%.4f"), LFO.GetFrequency()));
			OutDebugValues.Add(FString::Printf(TEXT("%.4f"), Params.Offset));

			switch (LFO.GetType())
			{
			case Audio::ELFO::DownSaw:
				OutDebugValues.Add(TEXT("DownSaw"));
				break;

			case Audio::ELFO::Exponential:
				OutDebugValues.Add(TEXT("Exponential"));
				break;

			case Audio::ELFO::RandomSampleHold:
				OutDebugValues.Add(TEXT("Random (Sample & Hold)"));
				break;

			case Audio::ELFO::Sine:
				OutDebugValues.Add(TEXT("Sine"));
				break;

			case Audio::ELFO::Square:
				OutDebugValues.Add(TEXT("Square"));
				break;

			case Audio::ELFO::Triangle:
				OutDebugValues.Add(TEXT("Triangle"));
				break;

			case Audio::ELFO::UpSaw:
				OutDebugValues.Add(TEXT("Up Saw"));
				break;

			default:
				static_assert(static_cast<int32>(Audio::ELFO::NumLFOTypes) == 7, "Missing LFO type case coverage");
				break;
			}
		}
#endif // !UE_BUILD_SHIPPING

protected:
	Audio::FLFO LFO;
	float Value = 1.0f;
	FAtomModulationLFOParams Params;
};

FAtomModulationGeneratorPtr UAtomModulationGeneratorLFO::CreateInstance() const
{
	return FAtomModulationGeneratorPtr(new FAtomLFOGenerator(Params));
}
