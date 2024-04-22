#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Framework/SlateDelegates.h"
#include "PropertyHandle.h"

class SAtomEnvelopeShape : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SAtomEnvelopeShape)
		: _LineColor(FColor::White)
		, _LabelColor(FColor::White)
		, _IsShowingSegments(false)
		, _ReleaseExponent(5.0)
	{}
		/** */
		SLATE_ARGUMENT(FColor, LineColor)
		
		/** */
		SLATE_ARGUMENT(FColor, LabelColor)
		
		/** */
		SLATE_ATTRIBUTE(bool, IsShowingSegments)

		/** */
		SLATE_ATTRIBUTE(float, Attack)

		/** */
		SLATE_ATTRIBUTE(float, Hold)

		/** */
		SLATE_ATTRIBUTE(float, Decay)
		
		/** */
		SLATE_ATTRIBUTE(float, Sustain)
		
		/** */
		SLATE_ATTRIBUTE(float, Release)

		/** */
		SLATE_ARGUMENT(float, ReleaseExponent)


	SLATE_END_ARGS()

	SAtomEnvelopeShape();
	~SAtomEnvelopeShape();

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect,
		FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle,
		bool bParentEnabled) const override;

	virtual FVector2D ComputeDesiredSize(float LayoutScale) const override { return FVector2D(200.0f, 100.0f); }
	
private:

	FColor LineColor;
	FColor LabelColor;
	TAttribute<bool> IsShowingSegments;
	TAttribute<float> Attack;
	TAttribute<float> Hold;
	TAttribute<float> Decay;
	TAttribute<float> Sustain;
	TAttribute<float> Release;
	float ReleaseExponent;

	struct FTextLabelInfo
	{
		const FText Text;
		const FVector2D LabelSize;
	};

	TArray<FTextLabelInfo> LabelInfos;
};
