/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCoreEditor
 * File     : AtomRackDetails.cpp
 *
 ****************************************************************************/

#include "AtomRackDetails.h"

#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Text/STextBlock.h"

#include "Atom/AtomRack.h"
#include "Atom/AtomConfig.h"

#define LOCTEXT_NAMESPACE	"AtomRackDetailsInspector"

TSharedRef<IDetailCustomization> FAtomRackDetails::MakeInstance()
{
	return MakeShareable(new FAtomRackDetails);
}

void FAtomRackDetails::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	// Obtain object on customization
	/*TArray<TWeakObjectPtr<UObject>> Objects;
	DetailLayout.GetObjectsBeingCustomized(Objects);
	if (Objects.Num() != 1)
	{
		return;
	}
	CachedRack = CastChecked<UAtomRack>(Objects[0].Get());*/

	TArray<FName> CategoryNames;
	DetailLayout.GetCategoryNames(CategoryNames);

	// Get the master bus.
	TSharedPtr<IPropertyHandle> MasterBusHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomRack, MasterBus), UAtomRackBase::StaticClass());
	
	// Hide master bus name.
	TSharedPtr<IPropertyHandle> BusNameHandle = MasterBusHandle->GetChildHandle(TEXT("BusName"));
	BusNameHandle->MarkHiddenByCustomization();

	// Rename Level Mixer category of master bus.
	DetailLayout.EditCategory(TEXT("Level Mixer"), LOCTEXT("MasterBusLevelMixerDisplayName", "Level Mixer (Master Bus)"));
	
	// Show only Effects category if master bus uses effects.
	UObject* BusObject = nullptr;
	MasterBusHandle->GetValue(BusObject);
	if (UAtomBus* MasterBus = Cast<UAtomBus>(BusObject))
	{
		if (MasterBus->GetNumEffectPresets() > 0)
		{
			DetailLayout.EditCategory(TEXT("Effects"), LOCTEXT("MasterBusEffectsDisplayName", "Effects (Master Bus)"));
		}
		else
		{
			DetailLayout.HideCategory(TEXT("Effects"));
		}
	}

	// Get Buses category.
	IDetailCategoryBuilder& CategoryBuilder = DetailLayout.EditCategory(TEXT("Buses"));

	// Set AtomConfig property in first.
	AtomConfigHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomRack, AtomConfig));
	AtomConfigHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FAtomRackDetails::OnAtomConfigChanged));
	CategoryBuilder.AddProperty(AtomConfigHandle);

	// Customize DspBusSettingName with a combo-box.
	DspBusSettingNameHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomRack, DspBusSettingName));
	IDetailPropertyRow& DspBusSettingNameRow = CategoryBuilder.AddProperty(DspBusSettingNameHandle);

	// Drop box names.
	TSharedPtr<FName> InitialSelectedSettingName = GenerateCachedDspBusSettingNames();

	// DspBusSettingName customization
	DspBusSettingNameRow.CustomWidget()
		.NameContent()
		[
			DspBusSettingNameHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		[
			SAssignNew(DspBusSettingNameComboBox, SComboBox<TSharedPtr<FName>>)
			.OptionsSource(&CachedDspBusSettingNameArray)
			.IsEnabled(this, &FAtomRackDetails::IsDspBusSettingNameComboBoxEnabled)
			.OnGenerateWidget(this, &FAtomRackDetails::OnGenerateDspBusSettingNameComboBoxWidget)
			.OnComboBoxOpening(this, &FAtomRackDetails::OnDspBusSettingNameComboBoxOpening)
			.OnSelectionChanged(this, &FAtomRackDetails::OnDspBusSettingNameComboBoxSelectionChanged)
			.InitiallySelectedItem(InitialSelectedSettingName)
			.ContentPadding(FMargin(2.0f, 2.0f))
			.Content()
			[
				SNew(STextBlock)
				.Text(this, &FAtomRackDetails::GetDspBusSettingNameComboBoxContent)
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.ToolTipText(this, &FAtomRackDetails::GetDspBusSettingNameComboBoxToolTip)
			]
		];

	// Set DspBusSetting property in first
	DspBusSettingHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomRack, DspBusSetting));
	DspBusSettingHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FAtomRackDetails::OnDspBusSettingChanged));
	CategoryBuilder.AddProperty(DspBusSettingHandle);

	// Customize Snapshot with a combo-box
	SnapshotHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomRack, Snapshot));
	IDetailPropertyRow& SnapshotRow = CategoryBuilder.AddProperty(SnapshotHandle);

	// Drop box names
	TSharedPtr<FName> InitialSelectedSnapshotName = GenerateCachedSnapshotNames();

	// Snapshot customization
	SnapshotRow.CustomWidget()
		.NameContent()
		[
			SnapshotHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		[
			SAssignNew(SnapshotComboBox, SComboBox<TSharedPtr<FName>>)
			.OptionsSource(&CachedSnapshotNameArray)
			.IsEnabled(this, &FAtomRackDetails::IsSnapshotComboBoxEnabled)
			.OnGenerateWidget(this, &FAtomRackDetails::OnGenerateSnapshotComboBoxWidget)
			.OnComboBoxOpening(this, &FAtomRackDetails::OnSnapshotComboBoxOpening)
			.OnSelectionChanged(this, &FAtomRackDetails::OnSnapshotComboBoxSelectionChanged)
			.InitiallySelectedItem(InitialSelectedSnapshotName)
			.ContentPadding(FMargin(2.0f, 2.0f))
			.Content()
			[
				SNew(STextBlock)
				.Text(this, &FAtomRackDetails::GetSnapshotComboBoxContent)
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.ToolTipText(this, &FAtomRackDetails::GetSnapshotComboBoxToolTip)
			]
		];

	// Set buses in last position
	auto BusesHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomRack, Buses));
	CategoryBuilder.AddProperty(BusesHandle);

	// Keep original categories order
	DetailLayout.SortCategories([=](const TMap<FName, IDetailCategoryBuilder*>& AllCategoryMap)
	{
		for (const TPair<FName, IDetailCategoryBuilder*>& Pair : AllCategoryMap)
		{
			const FName CategoryName = Pair.Key;
			int32 SortOrder = CategoryNames.Find(CategoryName);
			Pair.Value->SetSortOrder(SortOrder);
		}
	});
}

void FAtomRackDetails::OnAtomConfigChanged()
{
	if (DspBusSettingNameComboBox)
	{
		TSharedPtr<FName> SelectedName = GenerateCachedDspBusSettingNames();
		DspBusSettingNameComboBox->SetSelectedItem(SelectedName);
		DspBusSettingNameComboBox->RefreshOptions();
	}

	OnDspBusSettingChanged();
}

TSharedPtr<FName> FAtomRackDetails::GenerateCachedDspBusSettingNames()
{
	TSharedPtr<FName> InitialSelectedDspBusSettingName = MakeShared<FName>(NAME_None);
	CachedDspBusSettingNameArray.Reset();

	UObject* AtomConfigObject = nullptr;
	AtomConfigHandle->GetValue(AtomConfigObject);
	if (UAtomConfig* AtomConfig = Cast<UAtomConfig>(AtomConfigObject))
	{
		FName DspBusSettingName;
		DspBusSettingNameHandle->GetValue(DspBusSettingName);

		for (int Index = 0; AtomConfig && Index < AtomConfig->GetNumDspBusSettings(); ++Index)
		{
			TSharedPtr<FName> SettingName = MakeShared<FName>(AtomConfig->GetDspBusSetting(Index)->GetSettingName());
			CachedDspBusSettingNameArray.Add(SettingName);

			if (!DspBusSettingName.IsNone() && DspBusSettingName == *SettingName)
			{
				InitialSelectedDspBusSettingName = SettingName;
			}
		}
	}

	if (CachedDspBusSettingNameArray.IsEmpty())
	{
		CachedDspBusSettingNameArray.Add(InitialSelectedDspBusSettingName);
	}

	return InitialSelectedDspBusSettingName;
}

bool FAtomRackDetails::IsDspBusSettingNameComboBoxEnabled() const
{
	UObject* AtomConfig = nullptr;
	AtomConfigHandle->GetValue(AtomConfig);
	return AtomConfig != nullptr;
}

TSharedRef<SWidget> FAtomRackDetails::OnGenerateDspBusSettingNameComboBoxWidget(TSharedPtr<FName> StringItem)
{
	return SNew(STextBlock)
		.Text(FText::FromName(*StringItem))
		.Font(IDetailLayoutBuilder::GetDetailFont());
}

void FAtomRackDetails::OnDspBusSettingNameComboBoxOpening()
{
	TSharedPtr<FName> SelectedName = GenerateCachedDspBusSettingNames();
	DspBusSettingNameComboBox->SetSelectedItem(SelectedName);
	DspBusSettingNameComboBox->RefreshOptions();
}

void FAtomRackDetails::OnDspBusSettingNameComboBoxSelectionChanged(TSharedPtr<FName> NameItem, ESelectInfo::Type SelectInfo)
{
	FName DspBusSettingName;
	if (NameItem.IsValid())
	{
		DspBusSettingNameHandle->GetValue(DspBusSettingName);
		DspBusSettingNameHandle->SetValue(*NameItem);
		if (DspBusSettingName != *NameItem && SnapshotHandle.IsValid()) {
			SnapshotHandle->SetValue(NAME_None);
		}
	}
}

FText FAtomRackDetails::GetDspBusSettingNameComboBoxContent() const
{
	FName DspBusSettingName;
	DspBusSettingNameHandle->GetValue(DspBusSettingName);
	return FText::FromName(DspBusSettingName);
}

FText FAtomRackDetails::GetDspBusSettingNameComboBoxToolTip() const
{
	FName DspBusSettingName;
	DspBusSettingNameHandle->GetValue(DspBusSettingName);
	return FText::FromName(DspBusSettingName);
}

void FAtomRackDetails::OnDspBusSettingChanged()
{
	if (SnapshotComboBox)
	{
		TSharedPtr<FName> SelectedName = GenerateCachedSnapshotNames();
		SnapshotComboBox->SetSelectedItem(SelectedName);
		SnapshotComboBox->RefreshOptions();
	}
}

TSharedPtr<FName> FAtomRackDetails::GenerateCachedSnapshotNames()
{
	TSharedPtr<FName> InitialSelectedSnapshot = MakeShared<FName>(NAME_None);
	CachedSnapshotNameArray.Reset();
	CachedSnapshotNameArray.Add(InitialSelectedSnapshot);

	UObject* DspBusSettingObject = nullptr;
	DspBusSettingHandle->GetValue(DspBusSettingObject);
	if (UAtomDspBusSetting* DspBusSetting = Cast<UAtomDspBusSetting>(DspBusSettingObject))
	{
		FName RackSnapshot;
		SnapshotHandle->GetValue(RackSnapshot);

		for (int Index = 0; DspBusSetting && Index < DspBusSetting->GetNumSnapshots(); ++Index)
		{
			TSharedPtr<FName> Snapshot = MakeShared<FName>(DspBusSetting->GetSnapshotName(Index));
			CachedSnapshotNameArray.Add(Snapshot);

			if (!RackSnapshot.IsNone() && RackSnapshot == *Snapshot)
			{
				InitialSelectedSnapshot = Snapshot;
			}
		}
	}

	return InitialSelectedSnapshot;
}

bool FAtomRackDetails::IsSnapshotComboBoxEnabled() const
{
	UObject* DspBusSetting = nullptr;
	DspBusSettingHandle->GetValue(DspBusSetting);
	return DspBusSetting != nullptr;
}

TSharedRef<SWidget> FAtomRackDetails::OnGenerateSnapshotComboBoxWidget(TSharedPtr<FName> StringItem)
{
	return SNew(STextBlock)
		.Text(FText::FromName(*StringItem))
		.Font(IDetailLayoutBuilder::GetDetailFont());
}

void FAtomRackDetails::OnSnapshotComboBoxOpening()
{
	TSharedPtr<FName> SelectedName = GenerateCachedSnapshotNames();
	SnapshotComboBox->SetSelectedItem(SelectedName);
	SnapshotComboBox->RefreshOptions();
}

void FAtomRackDetails::OnSnapshotComboBoxSelectionChanged(TSharedPtr<FName> NameItem, ESelectInfo::Type SelectInfo)
{
	if (NameItem.IsValid())
	{
		SnapshotHandle->SetValue(*NameItem);
	}
}

FText FAtomRackDetails::GetSnapshotComboBoxContent() const
{
	FName SnapshotName;
	SnapshotHandle->GetValue(SnapshotName);
	return FText::FromName(SnapshotName);
}

FText FAtomRackDetails::GetSnapshotComboBoxToolTip() const
{
	FName SnapshotName;
	SnapshotHandle->GetValue(SnapshotName);
	return FText::FromName(SnapshotName);
}

TSharedRef<IDetailCustomization> FAtomSoundfieldRackDetails::MakeInstance()
{
	return MakeShareable(new FAtomSoundfieldRackDetails);
}

void FAtomSoundfieldRackDetails::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	TArray<FName> CategoryNames;
	DetailLayout.GetCategoryNames(CategoryNames);

	// Get the master bus.
	MasterBusHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomSoundfieldRack, MasterBus), UAtomRackBase::StaticClass());

	// Hide master bus name.
	TSharedPtr<IPropertyHandle> BusNameHandle = MasterBusHandle->GetChildHandle(TEXT("BusName"));
	BusNameHandle->MarkHiddenByCustomization();
	
	// Rename Level Mixer category of master bus and edit behavior.
	IDetailCategoryBuilder& LevelMixerCategory = DetailLayout.EditCategory(TEXT("Level Mixer"), LOCTEXT("MasterBusLevelMixerDisplayName", "Level Mixer (Master Bus)"));

	// Hide bus sends.
	TSharedPtr<IPropertyHandle> SendsHandle = MasterBusHandle->GetChildHandle(TEXT("Sends"));
	SendsHandle->MarkHiddenByCustomization();

	// Get the renderer type.
	RendererTypeHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomSoundfieldRack, SoundfieldRendererType));
	RendererTypeHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FAtomSoundfieldRackDetails::OnSoundfieldRendererTypeChanged));

	// Get the source mixer's spatialization type.
	TSharedPtr<IPropertyHandle> SpatializationHandle = MasterBusHandle->GetChildHandle(TEXT("SpatializationType"));
	LevelMixerCategory.AddProperty(SpatializationHandle.ToSharedRef())
		.Visibility(TAttribute<EVisibility>(this, &FAtomSoundfieldRackDetails::IsSpatializationVisible));

	// Set the mixer panning.
	TSharedPtr<IPropertyHandle> PanningHandle = MasterBusHandle->GetChildHandle(TEXT("Panning"));
	LevelMixerCategory.AddProperty(PanningHandle.ToSharedRef())
		.Visibility(TAttribute<EVisibility>(this, &FAtomSoundfieldRackDetails::IsSpatializationVisible));

	// Set the mixer level matrix.
	TSharedPtr<IPropertyHandle> MatrixHandle = MasterBusHandle->GetChildHandle(TEXT("ChannelLevelMatrix"));
	LevelMixerCategory.AddProperty(MatrixHandle.ToSharedRef())
		.Visibility(TAttribute<EVisibility>(this, &FAtomSoundfieldRackDetails::IsSpatializationVisible));

	// Show only Effects category if master bus uses effects.
	UObject* BusObject = nullptr;
	MasterBusHandle->GetValue(BusObject);
	if (UAtomBus* MasterBus = Cast<UAtomBus>(BusObject))
	{
		if (MasterBus->GetNumEffectPresets() > 0)
		{
			DetailLayout.EditCategory(TEXT("Effects"), LOCTEXT("MasterBusEffectsDisplayName", "Effects (Master Bus)"));
		}
		else
		{
			DetailLayout.HideCategory(TEXT("Effects"));
		}
	}

	// Keep original categories order
	DetailLayout.SortCategories([=](const TMap<FName, IDetailCategoryBuilder*>& AllCategoryMap)
	{
		for (const TPair<FName, IDetailCategoryBuilder*>& Pair : AllCategoryMap)
		{
			const FName CategoryName = Pair.Key;
			int32 SortOrder = CategoryNames.Find(CategoryName);
			Pair.Value->SetSortOrder(SortOrder);
		}
	});
}

EVisibility FAtomSoundfieldRackDetails::IsSpatializationVisible() const
{
	EAtomSoundfieldRendererType Type;
	RendererTypeHandle->GetValue((uint8&)Type);

	if (Type == EAtomSoundfieldRendererType::Ambisonics || Type == EAtomSoundfieldRendererType::SoundObject)
	{
		return EVisibility::Hidden;
	}

	return EVisibility::Visible;
}

void FAtomSoundfieldRackDetails::OnSoundfieldRendererTypeChanged()
{
	EAtomSoundfieldRendererType Type;
	RendererTypeHandle->GetValue((uint8&)Type);

	if (Type == EAtomSoundfieldRendererType::Ambisonics || Type == EAtomSoundfieldRendererType::SoundObject)
	{
		UObject* BusObject = nullptr;
		MasterBusHandle->GetValue(BusObject);
		if (UAtomBus* MasterBus = Cast<UAtomBus>(BusObject))
		{
			MasterBus->SpatializationType = EAtomSpatializationType::SendToChannel;
		}
	}
}

TSharedRef<IDetailCustomization> FAtomEndpointRackDetails::MakeInstance()
{
	return MakeShareable(new FAtomEndpointRackDetails);
}

void FAtomEndpointRackDetails::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	TArray<FName> CategoryNames;
	DetailLayout.GetCategoryNames(CategoryNames);

	// Get the master bus.
	TSharedPtr<IPropertyHandle> MasterBusHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomEndpointRack, MasterBus), UAtomRackBase::StaticClass());

	// Hide master bus.
	MasterBusHandle->MarkHiddenByCustomization();

	DetailLayout.HideCategory(TEXT("Level Mixer"));
	DetailLayout.HideCategory(TEXT("Bus"));
	DetailLayout.HideCategory(TEXT("Effects"));
}

TSharedRef<IDetailCustomization> FAtomSoundfieldEndpointRackDetails::MakeInstance()
{
	return MakeShareable(new FAtomSoundfieldEndpointRackDetails);
}

void FAtomSoundfieldEndpointRackDetails::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	TArray<FName> CategoryNames;
	DetailLayout.GetCategoryNames(CategoryNames);

	// Get the master bus.
	TSharedPtr<IPropertyHandle> MasterBusHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UAtomSoundfieldEndpointRack, MasterBus), UAtomRackBase::StaticClass());

	// Hide master bus.
	MasterBusHandle->MarkHiddenByCustomization();

	DetailLayout.HideCategory(TEXT("Level Mixer"));
	DetailLayout.HideCategory(TEXT("Bus"));
	DetailLayout.HideCategory(TEXT("Effects"));
}

#undef LOCTEXT_NAMESPACE
