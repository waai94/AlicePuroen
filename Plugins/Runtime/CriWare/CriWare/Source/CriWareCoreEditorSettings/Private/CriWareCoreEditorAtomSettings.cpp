﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCoreEditorSettings
 * File     : CriWareCoreEditorAtomSettings.cpp
 *
 ****************************************************************************/

#include "CriWareCoreEditorAtomSettings.h"

#define LOCTEXT_NAMESPACE "CriWareCoreEditorAtomSettings"

UCriWareCoreEditorAtomSettings::UCriWareCoreEditorAtomSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SectionName = TEXT("Atom");
	
	bCreateNewAtomRuntimeForPlayInEditor = false;
	NumOfAdditionalPlayerHandles = 8;
}

//~ UDeveloperSettings interface
#if WITH_EDITOR
FText UCriWareCoreEditorAtomSettings::GetSectionText() const
{
	return LOCTEXT("AtomSettingsName", "Atom");
}

FText UCriWareCoreEditorAtomSettings::GetSectionDescription() const
{
	return LOCTEXT("AtomSettingsDescription", "Settings for Atom in Editor");
}
#endif

#undef LOCTEXT_NAMESPACE
