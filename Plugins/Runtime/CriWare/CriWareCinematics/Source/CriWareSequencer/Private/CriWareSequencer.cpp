/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2017-2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : CriWareSequencer
 * File     : CriWareSequencer.cpp
 *
 ****************************************************************************/

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "ISequencer.h"
#include "ISequencerModule.h"

#include "CriWareSequencerPrivate.h"
#include "ICriWareSequencer.h"
#include "CriWareSequencerEditorStyle.h"
#include "AtomTrackEditor.h"

#include "CriWareDefines.h"

#if USE_MANA_MODULE
#include "ManaTrackEditor.h"
#endif // USE_MANA_MODULE

/**
 * CriWareSequencer module implementation (private)
 */
class FCriWareSequencerModule : public ICriWareSequencer
{
public:
	/** IModuleInterface */
	virtual void StartupModule() override
	{
		FCriWareSequencerEditorStyle::Get();

		ISequencerModule& SequencerModule = FModuleManager::Get().LoadModuleChecked<ISequencerModule>("Sequencer");
		AtomTrackCreateEditorHandle = SequencerModule.RegisterTrackEditor(FOnCreateTrackEditor::CreateStatic(&FAtomTrackEditor::CreateTrackEditor));
#if USE_MANA_MODULE
		ManaTrackCreateEditorHandle = SequencerModule.RegisterPropertyTrackEditor<FManaTrackEditor>();
#endif

	}

	virtual void ShutdownModule() override
	{
		FCriWareSequencerEditorStyle::Destroy();

		ISequencerModule* SequencerModulePtr = FModuleManager::Get().GetModulePtr<ISequencerModule>("Sequencer");
		if (SequencerModulePtr)
		{
			SequencerModulePtr->UnRegisterTrackEditor(AtomTrackCreateEditorHandle);
#if USE_MANA_MODULE
			SequencerModulePtr->UnRegisterTrackEditor(ManaTrackCreateEditorHandle);
#endif
		}
	}

private:
	/** Registered delegate handles */
	FDelegateHandle AtomTrackCreateEditorHandle;
#if USE_MANA_MODULE
	FDelegateHandle ManaTrackCreateEditorHandle;
#endif
};

IMPLEMENT_MODULE(FCriWareSequencerModule, CriWareSequencer);
