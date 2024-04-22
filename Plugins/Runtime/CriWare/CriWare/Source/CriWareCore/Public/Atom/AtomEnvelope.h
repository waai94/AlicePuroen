#pragma once

#include "CoreMinimal.h"

#include "AtomEnvelope.generated.h"

USTRUCT(BlueprintType)
struct CRIWARECORE_API FAtomEnvelope
{
	GENERATED_BODY()

public:

	/** The envelope attack time in miliseconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Envelope, meta = (ClampMin = "0.0", ClampMax = "2000.0", UIMin = "0.0", UIMax = "2000.0", ForceUnits = ms))
	float AttackTime = 0.0f;

	/** The envelope Hold time in miliseconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Envelope, meta = (ClampMin = "0.0", ClampMax = "2000.0", UIMin = "0.0", UIMax = "2000.0", ForceUnits = ms))
	float HoldTime = 0.0f;

	/** The envelope decay time in miliseconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Envelope, meta = (ClampMin = "0.0", ClampMax = "2000.0", UIMin = "0.0", UIMax = "2000.0", ForceUnits = ms))
	float DecayTime = 0.0f;

	/** The envelope sustain level. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Envelope, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float SustainLevel = 1.0f;

	/** The envelope release time in miliseconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Envelope, meta = (ClampMin = "0.0", ClampMax = "10000.0", UIMin = "0.0", UIMax = "10000.0", ForceUnits = ms, SliderExponent = "5.0"))
	float ReleaseTime = 0.0f;
};

