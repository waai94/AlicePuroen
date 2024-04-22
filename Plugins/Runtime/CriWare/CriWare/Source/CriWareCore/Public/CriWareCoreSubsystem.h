/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : CriWareCoreSubsystem.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "Subsystems/AudioEngineSubsystem.h"
#include "Templates/Function.h"
#include "UObject/Class.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"

#include "CriWareCoreSubsystem.generated.h"

UCLASS()
class CRIWARECORE_API UCriWareCoreSubsystem : public UAudioEngineSubsystem
{
	GENERATED_BODY()

public:

	virtual ~UCriWareCoreSubsystem() = default;

	//~ Begin USubsystem Interface
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	//~ End USubsystem Interface
};
