﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareSequencer
 * File     : AtomTrackEditor.cpp
 *
 ****************************************************************************/

#include "AtomTrackEditor.h"

#include "Textures/SlateTextureData.h"
#include "Rendering/RenderingCommon.h"
#include "Rendering/DrawElements.h"
#include "Widgets/SBoxPanel.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "RenderUtils.h"
#include "RenderingThread.h"
#include "Modules/ModuleManager.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Layout/SBox.h"
#include "SequencerSectionPainter.h"
#include "Styling/AppStyle.h"
#include "Editor/UnrealEdEngine.h"
#include "UnrealEdGlobals.h"
#include "CommonMovieSceneTools.h"
#include "Slate/SlateTextures.h"
#include "IContentBrowserSingleton.h"
#include "ContentBrowserModule.h"
#include "SequencerUtilities.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "ISectionLayoutBuilder.h"
#include "MovieSceneToolHelpers.h"
#include "DragAndDrop/AssetDragDropOp.h"
#include "Misc/QualifiedFrameTime.h"
#include "Runtime/Launch/Resources/Version.h"
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3 
#include "AnimatedRange.h"
#endif

#include "AtomThumbnail.h"
#include "Atom/AtomSoundBank.h"
#include "Atom/AtomSoundBase.h"
#include "Shared/CriWareSequencerEditorStyle.h"

#include "MovieSceneAtomTrack.h"
#include "MovieSceneAtomSection.h"

#define LOCTEXT_NAMESPACE "FAtomTrackEditor"

FAtomSection::FAtomSection(UMovieSceneSection& InSection, TWeakPtr<ISequencer> InSequencer)
	: Section(InSection)
	, StoredDrawRange(TRange<float>::Empty())
	, StoredSectionHeight(0.f)
	, bStoredLooping(true)
	, Sequencer(InSequencer)
	, InitialStartOffsetDuringResize(0)
	, InitialStartTimeDuringResize(0)
{
}

FAtomSection::~FAtomSection()
{
}

UMovieSceneSection* FAtomSection::GetSectionObject()
{
	return &Section;
}

FText FAtomSection::GetSectionTitle() const
{
	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);
	if (AtomSection && AtomSection->GetSound())
	{
		return FText::FromString(AtomSection->GetSound()->GetName());
	}

	return NSLOCTEXT("FAtomSection", "NoAtomTitleName", "No Atom");
}

FText FAtomSection::GetSectionToolTip() const
{
	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);
	const UAtomSoundBase* Sound = AtomSection ? AtomSection->GetSound() : nullptr;

	if (AtomSection && Sound && AtomSection->HasStartFrame() && AtomSection->HasEndFrame())
	{
		UMovieScene* MovieScene = AtomSection->GetTypedOuter<UMovieScene>();
		FFrameRate TickResolution = MovieScene->GetTickResolution();

		const float AudioStartTime = AtomSection->GetStartOffset() / TickResolution;
		const float SectionDuration = (AtomSection->GetExclusiveEndFrame() - AtomSection->GetInclusiveStartFrame()) / TickResolution;

		if (AtomSection->GetLooping())
		{
			return FText::Format(LOCTEXT("ToolTipContentFormatLooping", "Start: {0}s\nDuration: {1}s\nLooping"),
				AudioStartTime,
				SectionDuration);
		}
		else
		{
			const float SoundDuration = Sound->Duration - AudioStartTime;
			const float Duration = FMath::Min(SoundDuration, SectionDuration);

			if (Duration > 0.0f)
			{
				return FText::Format(LOCTEXT("ToolTipContentFormat", "{0}s - {1}s ({2} seconds)"),
					AudioStartTime,
					AudioStartTime + Duration,
					Duration);
			}
		}
	}

	return FText::GetEmpty();
}

float FAtomSection::GetSectionHeight() const
{
	return Section.GetTypedOuter<UMovieSceneAtomTrack>()->GetRowHeight();
}

int32 FAtomSection::OnPaintSection(FSequencerSectionPainter& Painter) const
{
	int32 LayerId = Painter.PaintSectionBackground();

	if (WaveformThumbnail.IsValid() && WaveformThumbnail->ShouldRender())
	{
		// @todo Sequencer draw multiple times if looping possibly - requires some thought about SoundCues
		FSlateDrawElement::MakeViewport(
			Painter.DrawElements,
			++LayerId,
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 2
			Painter.SectionGeometry.ToPaintGeometry(FVector2f(StoredXSize, GetSectionHeight() + 8.f), FSlateLayoutTransform(FVector2f(StoredXOffset, 0))),
#else
			Painter.SectionGeometry.ToPaintGeometry(FVector2D(StoredXOffset, 0), FVector2D(StoredXSize, GetSectionHeight() + 8.f)),
#endif
			WaveformThumbnail,
			(Painter.bParentEnabled ? ESlateDrawEffect::None : ESlateDrawEffect::DisabledEffect) | ESlateDrawEffect::NoGamma,
			StoredSoundBase.IsValid() ? StoredSoundBase->SoundColor : FLinearColor::White
		);

		WaveformThumbnail->Tick(Painter.SectionGeometry, 0.0f, 0.0f);
	}

	const ESlateDrawEffect DrawEffects = Painter.bParentEnabled ? ESlateDrawEffect::None : ESlateDrawEffect::DisabledEffect;

	const FTimeToPixel& TimeToPixelConverter = Painter.GetTimeConverter();

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
	static const FSlateBrush* GenericDivider = FAppStyle::GetBrush("Sequencer.GenericDivider");
#else
	static const FSlateBrush* GenericDivider = FEditorStyle::GetBrush("Sequencer.GenericDivider");
#endif

	if (!Section.HasStartFrame() || !Section.HasEndFrame())
	{
		return LayerId;
	}

	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);
	if (!AtomSection || !AtomSection->GetSound())
	{
		return LayerId;
	}

	// Add lines where the animation starts and ends/loops
	FFrameRate TickResolution = TimeToPixelConverter.GetTickResolution();
	const float AudioDuration = AtomSection->GetSound()->WaveInfo.GetDuration();

	if (AudioDuration > KINDA_SMALL_NUMBER)
	{
		const float MaxOffset = Section.GetRange().Size<FFrameTime>() / TickResolution;
		const float StartOffsetTime = TickResolution.AsSeconds(AtomSection->GetStartOffset());
		const float SectionStartTime = TickResolution.AsSeconds(AtomSection->GetInclusiveStartFrame());

		float OffsetTime = AudioDuration - StartOffsetTime;
		while (OffsetTime < MaxOffset)
		{
			float OffsetPixel = TimeToPixelConverter.SecondsToPixel(SectionStartTime + OffsetTime);

			FSlateDrawElement::MakeBox(
				Painter.DrawElements,
				LayerId,
				Painter.SectionGeometry.MakeChild(
					FVector2D(2.f, Painter.SectionGeometry.Size.Y - 2.f),
					FSlateLayoutTransform(FVector2D(OffsetPixel, 1.f))
				).ToPaintGeometry(),
				GenericDivider,
				DrawEffects
			);

			OffsetTime += AudioDuration;

			if (!AtomSection->GetLooping())
			{
				break;
			}
		}
	}

	return LayerId;
}

void FAtomSection::Tick(const FGeometry& AllottedGeometry, const FGeometry& ParentGeometry, const double InCurrentTime, const float InDeltaTime)
{
	// Defer regenerating waveforms if playing or scrubbing
	TSharedPtr<ISequencer> SequencerPin = Sequencer.Pin();
	if (!SequencerPin.IsValid())
	{
		return;
	}

	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);
	UMovieSceneTrack* Track = Section.GetTypedOuter<UMovieSceneTrack>();

	UAtomSoundBase* SoundBase = AtomSection->GetSound();
	if (Track && SoundBase && (SoundBase->WaveInfo.NumChannels == 1 || SoundBase->WaveInfo.NumChannels == 2))
	{
		const FSlateRect ParentRect = TransformRect(
			Concatenate(
				ParentGeometry.GetAccumulatedLayoutTransform(),
				AllottedGeometry.GetAccumulatedLayoutTransform().Inverse()
			),
			FSlateRect(FVector2D(0, 0), ParentGeometry.GetLocalSize())
		);

		const float LeftMostVisiblePixel = FMath::Max(ParentRect.Left, 0.f);
		const float RightMostVisiblePixel = FMath::Min(ParentRect.Right, AllottedGeometry.GetLocalSize().X);

		FFrameRate   TickResolution = AtomSection->GetTypedOuter<UMovieScene>()->GetTickResolution();
		FTimeToPixel TimeToPixel(AllottedGeometry, AtomSection->GetRange() / TickResolution, TickResolution);

		TRange<float> DrawRange = TRange<float>(
			TimeToPixel.PixelToSeconds(LeftMostVisiblePixel),
			TimeToPixel.PixelToSeconds(RightMostVisiblePixel)
		);

		// generate texture x offset and x size
		int32 XOffset = LeftMostVisiblePixel;//PixelRange.GetLowerBoundValue() - TimeToPixelConverter.TimeToPixel(SectionRange.GetLowerBoundValue());
		int32 XSize = RightMostVisiblePixel - LeftMostVisiblePixel;//PixelRange.Size<int32>();

		if (!FMath::IsNearlyEqual(DrawRange.GetLowerBoundValue(), StoredDrawRange.GetLowerBoundValue()) ||
			!FMath::IsNearlyEqual(DrawRange.GetUpperBoundValue(), StoredDrawRange.GetUpperBoundValue()) ||
			XOffset != StoredXOffset || XSize != StoredXSize || Track->GetColorTint() != StoredColor ||
			StoredSoundBase != SoundBase ||
			StoredSectionHeight != GetSectionHeight() ||
			StoredStartOffset != AtomSection->GetStartOffset() ||
			bStoredLooping != AtomSection->GetLooping())
		{
			float DisplayScale = XSize / DrawRange.Size<float>();

			// Use the view range if possible, as it's much more stable than using the texture size and draw range
			DisplayScale = SequencerPin->GetViewRange().Size<float>() / ParentGeometry.GetLocalSize().X;

			RegenerateWaveforms(DrawRange, XOffset, XSize, Track->GetColorTint(), DisplayScale);
			StoredSoundBase = SoundBase;
		}
	}
	else
	{
		WaveformThumbnail.Reset();
		StoredDrawRange = TRange<float>::Empty();
		StoredSoundBase.Reset();
	}
}

void FAtomSection::BeginResizeSection()
{
	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);
	InitialStartOffsetDuringResize = AtomSection->GetStartOffset();
	InitialStartTimeDuringResize = AtomSection->HasStartFrame() ? AtomSection->GetInclusiveStartFrame() : 0;
}

void FAtomSection::ResizeSection(ESequencerSectionResizeMode ResizeMode, FFrameNumber ResizeTime)
{
	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);

	if (ResizeMode == SSRM_LeadingEdge && AtomSection)
	{
		FFrameNumber NewStartOffset = ResizeTime - InitialStartTimeDuringResize;
		NewStartOffset += InitialStartOffsetDuringResize;

		// Ensure start offset is not less than 0
		if (NewStartOffset < 0)
		{
			ResizeTime = ResizeTime - NewStartOffset;
			NewStartOffset = FFrameNumber(0);
		}

		AtomSection->SetStartOffset(NewStartOffset);
	}

	ISequencerSection::ResizeSection(ResizeMode, ResizeTime);
}

void FAtomSection::BeginSlipSection()
{
	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);
	InitialStartOffsetDuringResize = AtomSection->GetStartOffset();
	InitialStartTimeDuringResize = AtomSection->HasStartFrame() ? AtomSection->GetInclusiveStartFrame() : 0;
}

void FAtomSection::SlipSection(FFrameNumber SlipTime)
{
	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);

	FFrameNumber NewStartOffset = SlipTime - InitialStartTimeDuringResize;
	NewStartOffset += InitialStartOffsetDuringResize;

	// Ensure start offset is not less than 0
	AtomSection->SetStartOffset(FMath::Max(NewStartOffset, FFrameNumber(0)));

	ISequencerSection::SlipSection(SlipTime);
}

void FAtomSection::RegenerateWaveforms(TRange<float> DrawRange, int32 XOffset, int32 XSize, const FColor& ColorTint, float DisplayScale)
{
	UMovieSceneAtomSection* AtomSection = Cast<UMovieSceneAtomSection>(&Section);

	StoredDrawRange = DrawRange;
	StoredXOffset = XOffset;
	StoredXSize = XSize;
	StoredColor = ColorTint;
	StoredStartOffset = AtomSection->GetStartOffset();
	StoredSectionHeight = GetSectionHeight();
	bStoredLooping = AtomSection->GetLooping();

	if (DrawRange.IsDegenerate() || DrawRange.IsEmpty() || AtomSection->GetSound() == nullptr)
	{
		WaveformThumbnail.Reset();
	}
	else
	{
		WaveformThumbnail = MakeShareable(new FAtomThumbnail(Section, DrawRange, XSize, ColorTint, DisplayScale));
	}
}

FAtomTrackEditor::FAtomTrackEditor(TSharedRef<ISequencer> InSequencer)
	: FMovieSceneTrackEditor(InSequencer)
{
}

FAtomTrackEditor::~FAtomTrackEditor()
{
}

TSharedRef<ISequencerTrackEditor> FAtomTrackEditor::CreateTrackEditor(TSharedRef<ISequencer> InSequencer)
{
	return MakeShareable(new FAtomTrackEditor(InSequencer));
}

void FAtomTrackEditor::BuildAddTrackMenu(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry(
		LOCTEXT("AddTrack", "Atom Track"),
		LOCTEXT("AddTooltip", "Adds a new atom track that can play sounds."),
		FSlateIcon(FCriWareSequencerEditorStyle::Get().GetStyleSetName(), "ClassIcon.AtomPlane"),
		FUIAction(
			FExecuteAction::CreateRaw(this, &FAtomTrackEditor::HandleAddAtomTrackMenuEntryExecute)
		)
	);
}

void FAtomTrackEditor::BuildObjectBindingTrackMenu(FMenuBuilder& MenuBuilder, const TArray<FGuid>& ObjectBindings, const UClass* ObjectClass)
{
	if (ObjectClass != nullptr && ObjectClass->IsChildOf(AActor::StaticClass()))
	{
		MenuBuilder.AddSubMenu(
			LOCTEXT("AddAttachedAtomTrack", "Atom"),
			LOCTEXT("AddAttachedAtomTooltip", "Adds an atom track attached to the object."),
			FNewMenuDelegate::CreateSP(this, &FAtomTrackEditor::HandleAddAttachedAtomTrackMenuEntryExecute, ObjectBindings));
	}
}

bool FAtomTrackEditor::SupportsType(TSubclassOf<UMovieSceneTrack> Type) const
{
	return Type == UMovieSceneAtomTrack::StaticClass();
}

bool FAtomTrackEditor::SupportsSequence(UMovieSceneSequence* InSequence) const
{
	ETrackSupport TrackSupported = InSequence ? InSequence->IsTrackSupported(UMovieSceneAtomTrack::StaticClass()) : ETrackSupport::NotSupported;
	return TrackSupported != ETrackSupport::NotSupported;
}

const FSlateBrush* FAtomTrackEditor::GetIconBrush() const
{
	return FCriWareSequencerEditorStyle::Get().GetBrush("ClassIcon.AtomPlane");
}

bool FAtomTrackEditor::IsResizable(UMovieSceneTrack* InTrack) const
{
	return true;
}

void FAtomTrackEditor::Resize(float NewSize, UMovieSceneTrack* InTrack)
{
	UMovieSceneAtomTrack* AtomTrack = Cast<UMovieSceneAtomTrack>(InTrack);
	if (AtomTrack)
	{
		AtomTrack->Modify();

		int32 MaxNumRows = 1;
		for (UMovieSceneSection* Section : AtomTrack->GetAllSections())
		{
			MaxNumRows = FMath::Max(MaxNumRows, Section->GetRowIndex() + 1);
		}

		AtomTrack->SetRowHeight(FMath::RoundToInt(NewSize) / MaxNumRows);
	}
}

bool FAtomTrackEditor::OnAllowDrop(const FDragDropEvent& DragDropEvent, FSequencerDragDropParams& DragDropParams)
{
	if (!DragDropParams.Track.IsValid() || !DragDropParams.Track.Get()->IsA(UMovieSceneAtomTrack::StaticClass()))
	{
		return false;
	}

	TSharedPtr<FDragDropOperation> Operation = DragDropEvent.GetOperation();

	if (!Operation.IsValid() || !Operation->IsOfType<FAssetDragDropOp>())
	{
		return false;
	}

	TSharedPtr<ISequencer> SequencerPtr = GetSequencer();
	if (!SequencerPtr)
	{
		return false;
	}

	UMovieSceneSequence* FocusedSequence = SequencerPtr->GetFocusedMovieSceneSequence();
	if (!FocusedSequence)
	{
		return false;
	}

	TSharedPtr<FAssetDragDropOp> DragDropOp = StaticCastSharedPtr<FAssetDragDropOp>(Operation);

	for (const FAssetData& AssetData : DragDropOp->GetAssets())
	{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
		if (!MovieSceneToolHelpers::IsValidAsset(FocusedSequence, AssetData))
		{
			continue;
		}
#endif

		if (UAtomSoundBase* Sound = Cast<UAtomSoundBase>(AssetData.GetAsset()))
		{
			FFrameRate TickResolution = SequencerPtr->GetFocusedTickResolution();
			FFrameNumber LengthInFrames = TickResolution.AsFrameNumber(Sound->GetDuration());
			DragDropParams.FrameRange = TRange<FFrameNumber>(DragDropParams.FrameNumber, DragDropParams.FrameNumber + LengthInFrames);
			return true;
		}
	}

	return false;
}

FReply FAtomTrackEditor::OnDrop(const FDragDropEvent& DragDropEvent, const FSequencerDragDropParams& DragDropParams)
{
	if (!DragDropParams.Track.IsValid() || !DragDropParams.Track.Get()->IsA(UMovieSceneAtomTrack::StaticClass()))
	{
		return FReply::Unhandled();
	}

	TSharedPtr<FDragDropOperation> Operation = DragDropEvent.GetOperation();

	if (!Operation.IsValid() || !Operation->IsOfType<FAssetDragDropOp>())
	{
		return FReply::Unhandled();
	}

	TSharedPtr<ISequencer> SequencerPtr = GetSequencer();
	if (!SequencerPtr)
	{
		return FReply::Unhandled();
	}

	UMovieSceneSequence* FocusedSequence = SequencerPtr->GetFocusedMovieSceneSequence();
	if (!FocusedSequence)
	{
		return FReply::Unhandled();
	}

	UMovieSceneAtomTrack* AtomTrack = Cast<UMovieSceneAtomTrack>(DragDropParams.Track);

	const FScopedTransaction Transaction(LOCTEXT("DropAssets", "Drop Assets"));

	TSharedPtr<FAssetDragDropOp> DragDropOp = StaticCastSharedPtr<FAssetDragDropOp>(Operation);

	FMovieSceneTrackEditor::BeginKeying(DragDropParams.FrameNumber);

	bool bAnyDropped = false;
	for (const FAssetData& AssetData : DragDropOp->GetAssets())
	{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
		if (!MovieSceneToolHelpers::IsValidAsset(FocusedSequence, AssetData))
		{
			continue;
		}
#endif

		UAtomSoundBase* Sound = Cast<UAtomSoundBase>(AssetData.GetAsset());

		if (Sound)
		{
			if (DragDropParams.TargetObjectGuid.IsValid())
			{
				TArray<TWeakObjectPtr<>> OutObjects;
				for (TWeakObjectPtr<> Object : SequencerPtr->FindObjectsInCurrentSequence(DragDropParams.TargetObjectGuid))
				{
					OutObjects.Add(Object);
				}

				AnimatablePropertyChanged(FOnKeyProperty::CreateRaw(this, &FAtomTrackEditor::AddNewAttachedSound, Sound, AtomTrack, OutObjects));
			}
			else
			{
				AnimatablePropertyChanged(FOnKeyProperty::CreateRaw(this, &FAtomTrackEditor::AddNewSound, Sound, AtomTrack, DragDropParams.RowIndex));
			}

			bAnyDropped = true;
		}
	}

	FMovieSceneTrackEditor::EndKeying();

	return bAnyDropped ? FReply::Handled() : FReply::Unhandled();
}

TSharedRef<ISequencerSection> FAtomTrackEditor::MakeSectionInterface(UMovieSceneSection& SectionObject, UMovieSceneTrack& Track, FGuid ObjectBinding)
{
	check(SupportsType(SectionObject.GetOuter()->GetClass()));
	return MakeShareable(new FAtomSection(SectionObject, GetSequencer()));
}

TSharedPtr<SWidget> FAtomTrackEditor::BuildOutlinerEditWidget(const FGuid& ObjectBinding, UMovieSceneTrack* Track, const FBuildEditWidgetParams& Params)
{
	// Create a container edit box
	return SNew(SHorizontalBox)

	// Add the audio combo box
	+ SHorizontalBox::Slot()
	.AutoWidth()
	.VAlign(VAlign_Center)
	[
		FSequencerUtilities::MakeAddButton(LOCTEXT("AtomText", "Atom"), FOnGetContent::CreateSP(this, &FAtomTrackEditor::BuildAtomSubMenu, FOnAssetSelected::CreateRaw(this, &FAtomTrackEditor::OnAtomAssetSelected, Track), FOnAssetEnterPressed::CreateRaw(this, &FAtomTrackEditor::OnAtomAssetEnterPressed, Track)), Params.NodeIsHovered, GetSequencer())
	];
}

bool FAtomTrackEditor::HandleAssetAdded(UObject* Asset, const FGuid& TargetObjectGuid)
{
	if (Asset->IsA<UAtomSoundBase>())
	{
		auto Sound = Cast<UAtomSoundBase>(Asset);
		UMovieSceneAtomTrack* DummyTrack = nullptr;

		const FScopedTransaction Transaction(LOCTEXT("AddAudio_Transaction", "Add Audio"));

		if (TargetObjectGuid.IsValid())
		{
			TArray<TWeakObjectPtr<>> OutObjects;
			for (TWeakObjectPtr<> Object : GetSequencer()->FindObjectsInCurrentSequence(TargetObjectGuid))
			{
				OutObjects.Add(Object);
			}

			AnimatablePropertyChanged(FOnKeyProperty::CreateRaw(this, &FAtomTrackEditor::AddNewAttachedSound, Sound, DummyTrack, OutObjects));
		}
		else
		{
			int32 RowIndex = INDEX_NONE;
			AnimatablePropertyChanged(FOnKeyProperty::CreateRaw(this, &FAtomTrackEditor::AddNewSound, Sound, DummyTrack, RowIndex));
		}

		return true;
	}
	return false;
}

FKeyPropertyResult FAtomTrackEditor::AddNewSound(FFrameNumber KeyTime, UAtomSoundBase* Sound, UMovieSceneAtomTrack* AtomTrack, int32 RowIndex)
{
	FKeyPropertyResult KeyPropertyResult;

	UMovieScene* FocusedMovieScene = GetFocusedMovieScene();
	if (FocusedMovieScene->IsReadOnly())
	{
		return KeyPropertyResult;
	}

	FocusedMovieScene->Modify();

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 2
	FFindOrCreateRootTrackResult<UMovieSceneAtomTrack> TrackResult;
#else
	FFindOrCreateMasterTrackResult<UMovieSceneAtomTrack> TrackResult;
#endif
	TrackResult.Track = AtomTrack;
	if (!AtomTrack)
	{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 2
		TrackResult = FindOrCreateRootTrack<UMovieSceneAtomTrack>();
#else
		TrackResult = FindOrCreateMasterTrack<UMovieSceneAtomTrack>();
#endif
		AtomTrack = TrackResult.Track;
	}

	if (ensure(AtomTrack))
	{
		AtomTrack->Modify();

		UMovieSceneSection* NewSection = AtomTrack->AddNewSoundOnRow(Sound, KeyTime, RowIndex);

		if (TrackResult.bWasCreated)
		{
			AtomTrack->SetDisplayName(LOCTEXT("AtomTrackName", "Atom"));

			if (GetSequencer().IsValid())
			{
				GetSequencer()->OnAddTrack(AtomTrack, FGuid());
			}
		}

		KeyPropertyResult.bTrackModified = true;
		KeyPropertyResult.SectionsCreated.Add(NewSection);
	}

	return KeyPropertyResult;
}

FKeyPropertyResult FAtomTrackEditor::AddNewAttachedSound(FFrameNumber KeyTime, UAtomSoundBase* Sound, UMovieSceneAtomTrack* AtomTrack, TArray<TWeakObjectPtr<UObject>> ObjectsToAttachTo)
{
	FKeyPropertyResult KeyPropertyResult;

	for (int32 ObjectIndex = 0; ObjectIndex < ObjectsToAttachTo.Num(); ++ObjectIndex)
	{
		UObject* Object = ObjectsToAttachTo[ObjectIndex].Get();

		FFindOrCreateHandleResult HandleResult = FindOrCreateHandleToObject(Object);
		FGuid ObjectHandle = HandleResult.Handle;
		KeyPropertyResult.bHandleCreated |= HandleResult.bWasCreated;

		if (ObjectHandle.IsValid())
		{
			FFindOrCreateTrackResult TrackResult;
			TrackResult.Track = AtomTrack;
			if (!AtomTrack)
			{
				TrackResult = FindOrCreateTrackForObject(ObjectHandle, UMovieSceneAtomTrack::StaticClass());
				AtomTrack = Cast<UMovieSceneAtomTrack>(TrackResult.Track);
			}

			KeyPropertyResult.bTrackCreated |= TrackResult.bWasCreated;

			if (ensure(AtomTrack))
			{
				AtomTrack->Modify();

				UMovieSceneSection* NewSection = AtomTrack->AddNewSound(Sound, KeyTime);
				AtomTrack->SetDisplayName(LOCTEXT("AtomTrackName", "Atom"));
				KeyPropertyResult.bTrackModified = true;
				KeyPropertyResult.SectionsCreated.Add(NewSection);

				GetSequencer()->EmptySelection();
				GetSequencer()->SelectSection(NewSection);
				GetSequencer()->ThrobSectionSelection();
			}
		}
	}

	return KeyPropertyResult;
}


/* FAtomTrackEditor callbacks
 *****************************************************************************/

void FAtomTrackEditor::HandleAddAtomTrackMenuEntryExecute()
{
	UMovieScene* FocusedMovieScene = GetFocusedMovieScene();

	if (FocusedMovieScene == nullptr)
	{
		return;
	}

	if (FocusedMovieScene->IsReadOnly())
	{
		return;
	}

	const FScopedTransaction Transaction(NSLOCTEXT("Sequencer", "AddAtomTrack_Transaction", "Add Atom Track"));
	FocusedMovieScene->Modify();

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 2
	auto NewTrack = FocusedMovieScene->AddTrack<UMovieSceneAtomTrack>();
#else
	auto NewTrack = FocusedMovieScene->AddMasterTrack<UMovieSceneAtomTrack>();
#endif
	ensure(NewTrack);

	NewTrack->SetDisplayName(LOCTEXT("AtomTrackName", "Atom"));

	if (GetSequencer().IsValid())
	{
		GetSequencer()->OnAddTrack(NewTrack, FGuid());
	}
}

void FAtomTrackEditor::HandleAddAttachedAtomTrackMenuEntryExecute(FMenuBuilder& MenuBuilder, TArray<FGuid> ObjectBindings)
{
	MenuBuilder.AddWidget(BuildAtomSubMenu(FOnAssetSelected::CreateRaw(this, &FAtomTrackEditor::OnAttachedAtomAssetSelected, ObjectBindings), FOnAssetEnterPressed::CreateRaw(this, &FAtomTrackEditor::OnAttachedAtomEnterPressed, ObjectBindings)), FText::GetEmpty(), true);
}

TSharedRef<SWidget> FAtomTrackEditor::BuildAtomSubMenu(FOnAssetSelected OnAssetSelected, FOnAssetEnterPressed OnAssetEnterPressed)
{
	SoundPropertyHolderObject = NewObject<UAtomAddTrackSoundHolder>();

	// create a property widget from PropertyEditor module
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

	FDetailsViewArgs Args;
	Args.bHideSelectionTip = true;
	Args.bAllowSearch = false;

	SoundDetailView = PropertyEditorModule.CreateDetailView(Args);
	SoundDetailView->SetObject(SoundPropertyHolderObject, true);
	SoundDetailView->OnFinishedChangingProperties().AddLambda([InSoundDetailView = SoundDetailView, OnAssetEnterPressed](const FPropertyChangedEvent& PropertyChangedEvent)
	{
		TArray<TWeakObjectPtr<UObject>> SelectedObjs = InSoundDetailView->GetSelectedObjects();
		TArray<FAssetData> AssetDataArray;
		if (PropertyChangedEvent.Property && SelectedObjs.Num() > 0 && SelectedObjs[0].IsValid())
		{
			UAtomAddTrackSoundHolder* TmpSoundHolder = CastChecked<UAtomAddTrackSoundHolder>(SelectedObjs[0].Get());
			if (IsValid(TmpSoundHolder) && IsValid(TmpSoundHolder->Sound))
			{
				FAssetData AssetData = FAssetData(TmpSoundHolder->Sound, false);
				AssetDataArray.Add(AssetData);
				OnAssetEnterPressed.ExecuteIfBound(AssetDataArray);
			}
		}
	});

	FMenuBuilder MenuBuilder(true, nullptr);

	TSharedPtr<SHorizontalBox> MenuEntry = SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		[
			SoundDetailView.ToSharedRef()
		];

	MenuBuilder.AddWidget(MenuEntry.ToSharedRef(), FText::GetEmpty(), true);

	return MenuBuilder.MakeWidget();
}

void FAtomTrackEditor::OnAtomAssetSelected(const FAssetData& AssetData, UMovieSceneTrack* Track)
{
	FSlateApplication::Get().DismissAllMenus();

	UObject* SelectedObject = AssetData.GetAsset();

	if (SelectedObject)
	{
		UAtomSoundBase* NewSound = CastChecked<UAtomSoundBase>(AssetData.GetAsset());
		if (NewSound != nullptr)
		{
			const FScopedTransaction Transaction(NSLOCTEXT("Sequencer", "AddAtom_Transaction", "Add Atom"));

			auto AtomTrack = Cast<UMovieSceneAtomTrack>(Track);
			AtomTrack->Modify();

			FFrameTime KeyTime = GetSequencer()->GetLocalTime().Time;
			UMovieSceneSection* NewSection = AtomTrack->AddNewSound(NewSound, KeyTime.FrameNumber);

			GetSequencer()->EmptySelection();
			GetSequencer()->SelectSection(NewSection);
			GetSequencer()->ThrobSectionSelection();

			GetSequencer()->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::MovieSceneStructureItemAdded);
		}
	}
}

void FAtomTrackEditor::OnAtomAssetEnterPressed(const TArray<FAssetData>& AssetData, UMovieSceneTrack* Track)
{
	if (AssetData.Num() > 0)
	{
		OnAtomAssetSelected(AssetData[0].GetAsset(), Track);
	}
}

void FAtomTrackEditor::OnAttachedAtomAssetSelected(const FAssetData& AssetData, TArray<FGuid> ObjectBindings)
{
	FSlateApplication::Get().DismissAllMenus();

	UObject* SelectedObject = AssetData.GetAsset();

	if (SelectedObject)
	{
		const FScopedTransaction Transaction(NSLOCTEXT("Sequencer", "AddAtom_Transaction", "Add Atom"));

		for (FGuid ObjectBinding : ObjectBindings)
		{
			HandleAssetAdded(SelectedObject, ObjectBinding);
		}
	}
}

void FAtomTrackEditor::OnAttachedAtomEnterPressed(const TArray<FAssetData>& AssetData, TArray<FGuid> ObjectBindings)
{
	if (AssetData.Num() > 0)
	{
		OnAttachedAtomAssetSelected(AssetData[0].GetAsset(), ObjectBindings);
	}
}

#undef LOCTEXT_NAMESPACE
