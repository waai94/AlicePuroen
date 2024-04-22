/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCore
 * File     : AtomMultiPositionComponent.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/ObjectMacros.h"
#include "Components/SceneComponent.h"

#include "AtomComponent.h"
#include "AtomAttenuation.h"

#include "AtomMultiPositionComponent.generated.h"

/**
 * AtomMultiPositionComponent is an AtomComponent using multiple source positions for attenuation.
 *
 * @see UAtomComponent
 */
UCLASS(ClassGroup = Atom, 
AutoExpandCategories = (Transform, StaticMesh, MultiPosition),
AutoCollapseCategories = (Physics, Collision, Lighting, Rendering, Cooking, Tags),
BlueprintType, Blueprintable,
meta = (BlueprintSpawnableComponent))
class CRIWARECORE_API UAtomMultiPositionComponent
	: public UAtomComponent
{
	GENERATED_BODY()

public:

	UAtomMultiPositionComponent(const class FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = MultiPosition, meta = (ShowOnlyInnerProperties))
	FAtomMultiPositionSettings MultiPositionSettings;

	/** Populates an array with current positions of all attenuation sources. */
	UFUNCTION(BlueprintCallable, Category = MultiPosition)
	virtual void GetAllPositions(TArray<FTransform>& Positions) const;

	//~ Begin UActorComponent Interface
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//~ End UActorComponent Interface

private:

	void UpdatePositions();
};
