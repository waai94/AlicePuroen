
#include "Atom/Mixer/AtomMixerSourceVoice.h"

#include "Atom/Mixer/AtomMixer.h"
#include "Atom/Mixer/AtomMixerSource.h"
#include "Atom/Mixer/AtomMixerSourceManager.h"
#include "Atom/AtomRuntime.h"

namespace Atom
{
	/**
	* FMixerSourceVoice Implementation
	*/

	FMixerSourceVoice::FMixerSourceVoice()
	{
		Reset(nullptr);
	}

	FMixerSourceVoice::~FMixerSourceVoice()
	{
	}

	void FMixerSourceVoice::Reset(FAtomRuntime* InAtomRuntime)
	{
		if (InAtomRuntime)
		{
			AtomRuntime = InAtomRuntime;
			SourceManager = AtomRuntime->GetSourceManager();
		}
		else
		{
			AtomRuntime = nullptr;
			SourceManager = nullptr;
		}

		//Pitch = -1.0f;
		//Volume = -1.0f;
		//DistanceAttenuation = -1.0f;
		//Distance = -1.0f;
		//LPFFrequency = -1.0f;
		//HPFFrequency = -1.0f;
		SourceID = INDEX_NONE;
		//bIsPlaying = false;
		//bIsPaused = false;
		//bIsActive = false;
		bIsBus = false;
		//bEnableBusSends = false;
		//bEnableBaseSubmix = false;
		//bEnableSubmixSends = false;
		//bStopFadedOut = false;

		//PitchModBase = TNumericLimits<float>::Max();
		//VolumeModBase = TNumericLimits<float>::Max();
		//LPFFrequencyModBase = TNumericLimits<float>::Max();
		//HPFFrequencyModBase = TNumericLimits<float>::Max();

		//SubmixSends.Reset();

		// destroy the pool/port
		VoicePool = nullptr;
		PoolType = EAtomVoicePoolType::Undefined;
		PoolID = INDEX_NONE;

		InputPort = nullptr;
	}

	bool FMixerSourceVoice::Init(const FMixerSourceVoiceInitParams& InitParams)
	{
		ATOM_MIXER_CHECK_GAME_THREAD(AtomRuntime);

		if (SourceManager->GetFreeSourceID(SourceID))
		{
			ATOM_MIXER_CHECK(InitParams.SourceListener != nullptr);
			ATOM_MIXER_CHECK(InitParams.NumInputChannels > 0);

			bIsBus = InitParams.AudioBusID != INDEX_NONE;

			SourceManager->InitSource(SourceID, InitParams);
			return true;
		}

		return false;
	}

	void FMixerSourceVoice::Release()
	{
		ATOM_MIXER_CHECK_GAME_THREAD(AtomRuntime);

		SourceManager->ReleaseSourceID(SourceID);
	}

	/*void FMixerSourceVoice::SetTimeStretch(const float InTimeStretch)
	{
		ATOM_MIXER_CHECK_GAME_THREAD(AtomRuntime);

		if (TimeStretch != InTimeStretch)
		{
			Pitch = InTimeStretch;
			SourceManager->SetTimeStretch(SourceID, InTimeStretch);
		}
	}*/

	/*void FMixerSourceVoice::OnMixBus(FMixerSourceVoiceBuffer* OutMixerSourceBuffer)
	{
		ATOM_MIXER_CHECK_AUDIO_PLAT_THREAD(AtomRuntime);

		check(OutMixerSourceBuffer->AudioData.Num() > 0);

		for (int32 i = 0; i < OutMixerSourceBuffer->AudioData.Num(); ++i)
		{
			OutMixerSourceBuffer->AudioData[i] = 0.0f;
		}
	}*/

	bool FMixerSourceVoice::IsUsingHRTFSpatializer(bool bDefaultValue) const
	{
		ATOM_MIXER_CHECK_GAME_THREAD(AtomRuntime);

		if (SourceID != INDEX_NONE)
		{
			return SourceManager->IsUsingHRTFSpatializer(SourceID);
		}

		return bDefaultValue;
	}
} // namespace
