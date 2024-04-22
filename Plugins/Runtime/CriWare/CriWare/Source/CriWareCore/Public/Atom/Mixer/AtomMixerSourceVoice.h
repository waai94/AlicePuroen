
#pragma once

#include "AtomMixerSourceManager.h"

// Forward Definitions
class FAtomRuntime;

namespace Atom
{
	// Forward Definitions
	//struct FMixerSourceVoiceBuffer;
	//struct FMixerSourceVoiceFilterParams;
	struct FMixerSourceVoiceInitParams;
	//class FMixerSubmix;
	class FMixerSource;
	class FAtomSourceManager;
	//class ISourceBufferQueueListener;

	// An Atom voice
	class FMixerSourceVoice
	{
	public:

		FMixerSourceVoice();
		~FMixerSourceVoice();

		// Resets the source voice state
		void Reset(FAtomRuntime* InAtomRuntime);

		// Initializes the mixer source voice
		bool Init(const FMixerSourceVoiceInitParams& InFormat);

		// Releases the source voice back to the source buffer pool
		void Release();

		// Returns the source's ID.
		int32 GetSourceID() const { return SourceID; }

		// Returns the Atom voice pool's ID to assign to MixerSource.
		int32 GetVoicePoolID() const { return PoolType != EAtomVoicePoolType::InputPort ? PoolID : INDEX_NONE; }

		// Returns the Atom input port if created.
		void* GetInputPort() const { return PoolType == EAtomVoicePoolType::InputPort ? (void*)InputPort.Get() : nullptr; }

		// Called when the source is a bus and needs to mix other sources together to generate output
		//void OnMixBus(FMixerSourceVoiceBuffer* OutMixerSourceBuffer);

		// Whether or not the voice is currently using HRTF spatialization.
		//
		// @param bDefaultValue - This value will be returned if voice does not have a valid source id.
		bool IsUsingHRTFSpatializer(bool bDefaultValue) const;

	private:

		friend class FAtomSourceManager;

		FAtomSourceManager* SourceManager;
		FAtomRuntime* AtomRuntime;

		int32 SourceID;
		bool bIsBus;

		// Atom use static voice pools so a voice here is a pool with one or more sub-voices.
		FCriAtomVoicePoolPtr VoicePool;
		FCriAtomInputPortPtr InputPort;

		// the pool type
		EAtomVoicePoolType PoolType = EAtomVoicePoolType::Undefined;

		// The Atom voice pool ID 
		int32 PoolID = INDEX_NONE;
	};
} // namespace
