﻿
#include "AtomRuntimeApple.h"

#include "CriWareApi.h"
#include "CriWare.h"
#include "CriWareCore.h"
#include "CriWareCoreSettings.h"
#include "CriWareAppleSettings.h"
#include "Atom/AtomRack.h"

THIRD_PARTY_INCLUDES_START
#include <cri_le_file_system.h>
THIRD_PARTY_INCLUDES_END

/*
 * FAtomRuntimeApple Implementation
 *****************************************************************************/

FAtomRuntimeApple::FAtomRuntimeApple(ICriWarePlatformAtom* InPlatformAtom)
	: FAtomRuntime(InPlatformAtom)
{
}

FAtomRuntimeApple::~FAtomRuntimeApple()
{
}

void FAtomRuntimeApple::InitializePlatformAtomLibrary()
{
	auto Settings = GetDefault<UCriWareCoreSettings>();

	auto AppleSettings = GetDefault<UCriWareAppleSettings>();

	// overwrite settings
	// Standard Voices
	FCriWareStandardVoicesSettings StandardVoicesSettings = Settings->StandardVoicesSettings;
	StandardVoicesSettings.OverridesWith(AppleSettings->StandardVoicesOverrides);

	// HCA-MX Voices
	FCriWareHcaMxVoicesSettings HcaMxVoicesSettings = Settings->HcaMxVoicesSettings;
	HcaMxVoicesSettings.OverridesWith(AppleSettings->HcaMxVoicesOverrides);

	// Master Rack
	UAtomRack* MasterAtomRack = GetMasterRack();

	// AtomEx Config overwrites and limitations
	auto SetPlatformAtomConfig = [&](auto& AtomConfig)
	{
		// always out to Default
		CriAtomSoundRendererType DefaultOutRendererType = GetAtomExSoundRendererTypeForApple(EAtomSoundRendererType::Default);

		// select number of channels to output
		int AsrNumChannels = GetAtomExSoundRendererNumChannelsForApple(EAtomSoundRendererType::Default);
		int AsrSamplingRate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
		float AsrServerFrequency = 60.0f;

		// todo: move this to common
		if (MasterAtomRack)
		{
			AsrNumChannels = FMath::Min(AsrNumChannels, MasterAtomRack->NumChannels);
			AsrSamplingRate = MasterAtomRack->SamplingRate;
			AsrServerFrequency = MasterAtomRack->ServerFrequency;
		}

		// -- add platform specific overrides here --

		AtomConfig.asr.sound_renderer_type = DefaultOutRendererType;
		AtomConfig.asr.output_channels = AsrNumChannels;
		AtomConfig.asr.output_sampling_rate = AsrSamplingRate;
		AtomConfig.asr.server_frequency = AsrServerFrequency;
		AtomConfig.hca_mx.output_channels = 6;
		AtomConfig.hca_mx.output_sampling_rate = HcaMxVoicesSettings.HcaMxVoiceSamplingRate;
		AtomConfig.hca_mx.max_sampling_rate = HcaMxVoicesSettings.HcaMxVoiceSamplingRate;
		AtomConfig.hca_mx.max_voices = HcaMxVoicesSettings.NumHcaMxMemoryVoices + HcaMxVoicesSettings.NumHcaMxStreamingVoices;
		AtomConfig.hca_mx.num_mixers = ((AtomConfig.hca_mx.max_voices > 0) ? 1 : 0);

		// -- check platform config limitation here --
		// if (max voices is too much...)
	};

	// setup config
#if defined(XPT_TGT_IOS)
	CriAtomExConfig_IOS AtomExConfig;
	criAtomEx_SetDefaultConfig_IOS(&AtomExConfig);
	CriFsConfig FileSystemConfig;
	criFs_SetDefaultConfig(&FileSystemConfig);
	FCriWarePlatformAtomConfig<CriAtomExConfig_IOS>::SetCommonAtomConfig(AtomExConfig, FileSystemConfig);
	SetPlatformAtomConfig(AtomExConfig);

	// initialize atom & filesystem
	criAtomEx_Initialize_IOS(&AtomExConfig, nullptr, 0);
#else
	CriAtomExConfig_MACOSX AtomExConfig;
	criAtomEx_SetDefaultConfig_MACOSX(&AtomExConfig);
	CriFsConfig FileSystemConfig;
	criFs_SetDefaultConfig(&FileSystemConfig);
	FCriWarePlatformAtomConfig<CriAtomExConfig_MACOSX>::SetCommonAtomConfig(AtomExConfig, FileSystemConfig);
	SetPlatformAtomConfig(AtomExConfig);

	// initialize atom & filesystem
	FCriWareApi::criAtomEx_Initialize_MACOSX(&AtomExConfig, nullptr, 0);
#endif

	if (FCriWareApi::criAtomEx_IsInitialized() != CRI_TRUE)
	{
		return;
	}

	// Voice pools
	if (IsUsingFixedVoicePools())
	{
		CreateAtomStandardVoicePools(StandardVoicesSettings);
		CreateAtomHcaMxVoicePools(HcaMxVoicesSettings);
	}

	// D-bas
	SetupAtomDBAS();

	// Apple thread settings
	//criAtom_SetServerThreadPriority_Apple(AppleSettings->AtomServerThreadPriority);
	//criAtom_SetServerThreadAffinityMask_Apple(AppleSettings->AtomServerThreadAffinityMask);
	//criAtom_SetOutputThreadPriority_Apple(AppleSettings->AtomOutputThreadPriority);
	//criAtom_SetOutputThreadAffinityMask_Apple(AppleSettings->AtomOutputThreadAffinityMask);

	//criFs_SetFileAccessThreadPriority_Apple(AppleSettings->FsFileAccessThreadPriority);
	//criFs_SetFileAccessThreadAffinityMask_Apple(AppleSettings->FsFileAccessThreadAffinityMask);
	//criFs_SetDataDecompressionThreadPriority_Apple(AppleSettings->FsDataDecompressionThreadPriority);
	//criFs_SetDataDecompressionThreadAffinityMask_Apple(AppleSettings->FsDataDecompressionThreadAffinityMask);
	//criFs_SetMemoryFileSystemThreadPriority_Apple(AppleSettings->FsMemoryFileSystemThreadPriority);
	//criFs_SetMemoryFileSystemThreadAffinityMask_Apple(AppleSettings->FsMemoryFileSystemThreadAffinityMask);
}

void FAtomRuntimeApple::FinalizePlatformAtomLibrary()
{
#if defined(XPT_TGT_IOS)
	// finalize atom
	criAtomEx_Finalize_IOS();
#else
	// finalize atom
	FCriWareApi::criAtomEx_Finalize_MACOSX();
#endif
}

CriAtomSoundRendererType FAtomRuntimeApple::GetAtomExSoundRendererTypeForApple(EAtomSoundRendererType RendererType)
{
	switch (RendererType)
	{
	case EAtomSoundRendererType::Default:
		// By default, output to hw1
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_NATIVE;
	case EAtomSoundRendererType::Main:
	case EAtomSoundRendererType::BGM:
	case EAtomSoundRendererType::Voice:
	case EAtomSoundRendererType::Pad:
	case EAtomSoundRendererType::User:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_NATIVE;
	case EAtomSoundRendererType::Haptic:
	//	return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_HAPTIC;
	case EAtomSoundRendererType::Aux:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_NATIVE;
	case EAtomSoundRendererType::Asr:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_ASR;
	case EAtomSoundRendererType::Muted:
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_PSEUDO;
	default:
		checkNoEntry();
		return CriAtomSoundRendererType::CRIATOM_SOUND_RENDERER_NATIVE;
	}
}

int32 FAtomRuntimeApple::GetAtomExSoundRendererNumChannelsForApple(EAtomSoundRendererType RendererType)
{
	/*switch (RendererType)
	{
	case EAtomSoundRendererType::Default:
		return 8;
	case EAtomSoundRendererType::Main:
		return 8;
	case EAtomSoundRendererType::BGM:
		return 8;
	case EAtomSoundRendererType::Voice:
		return 2;
	case EAtomSoundRendererType::Pad:
		return 1;
	case EAtomSoundRendererType::User:
		return 2;
	case EAtomSoundRendererType::Haptic:
		return 2;
	case EAtomSoundRendererType::Aux:
		return 8;
	case EAtomSoundRendererType::Muted:
		return 0;
	default:
		return 8;
	}*/

	// should get numchannel from hardware device
	return 6;
}

int32 FAtomRuntimeApple::GetAtomExSoundRendererNumPortsForApple(EAtomSoundRendererType RendererType)
{
	/*switch (RendererType)
	{
	case EAtomSoundRendererType::Default:
		return 4; // hardware 1~4
	case EAtomSoundRendererType::Main:
		return 1;
	case EAtomSoundRendererType::BGM:
		return 1;
	case EAtomSoundRendererType::Voice:
		return 4;
	case EAtomSoundRendererType::Pad:
		return 4;
	case EAtomSoundRendererType::User:
		return 4;
	case EAtomSoundRendererType::Haptic:
		return 4;
	case EAtomSoundRendererType::Aux:
		return 4; // hardware 1~4
	case EAtomSoundRendererType::Muted:
		return 0;
	default:
		return 1;
	}*/

	// only 1 port by device on Apple
	return 1;
}
