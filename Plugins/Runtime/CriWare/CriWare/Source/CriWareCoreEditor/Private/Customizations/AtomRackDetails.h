/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : CriWareCoreEditor
 * File     : AtomRackDetails.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Layout/Visibility.h"
#include "IDetailCustomization.h"
#include "PropertyHandle.h"

#include "Widgets/Input/SComboBox.h"

// Forward declarations
class UAtomRack;

class CRIWARECOREEDITOR_API FAtomRackDetails
	: public IDetailCustomization
{
public:

	// Makes a new instance of this detail layout class
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface

private:

	void OnAtomConfigChanged();
	TSharedPtr<FName> GenerateCachedDspBusSettingNames();
	bool IsDspBusSettingNameComboBoxEnabled() const;
	TSharedRef<SWidget> OnGenerateDspBusSettingNameComboBoxWidget(TSharedPtr<FName> StringItem);
	void OnDspBusSettingNameComboBoxOpening();
	void OnDspBusSettingNameComboBoxSelectionChanged(TSharedPtr<FName> NameItem, ESelectInfo::Type SelectInfo);
	FText GetDspBusSettingNameComboBoxContent() const;
	FText GetDspBusSettingNameComboBoxToolTip() const;

	TArray<TSharedPtr<FName>> CachedDspBusSettingNameArray;
	TSharedPtr<IPropertyHandle> AtomConfigHandle;
	TSharedPtr<IPropertyHandle> DspBusSettingNameHandle;
	TSharedPtr<SComboBox<TSharedPtr<FName>>> DspBusSettingNameComboBox;

	void OnDspBusSettingChanged();
	TSharedPtr<FName> GenerateCachedSnapshotNames();
	bool IsSnapshotComboBoxEnabled() const;
	TSharedRef<SWidget> OnGenerateSnapshotComboBoxWidget(TSharedPtr<FName> StringItem);
	void OnSnapshotComboBoxOpening();
	void OnSnapshotComboBoxSelectionChanged(TSharedPtr<FName> NameItem, ESelectInfo::Type SelectInfo);
	FText GetSnapshotComboBoxContent() const;
	FText GetSnapshotComboBoxToolTip() const;

	//TWeakObjectPtr<UAtomRack> CachedRack;
	TArray<TSharedPtr<FName>> CachedSnapshotNameArray;
	TSharedPtr<IPropertyHandle> DspBusSettingHandle;
	TSharedPtr<IPropertyHandle> SnapshotHandle;
	TSharedPtr<SComboBox<TSharedPtr<FName>>> SnapshotComboBox;
};

class CRIWARECOREEDITOR_API FAtomSoundfieldRackDetails
	: public IDetailCustomization
{
public:

	// Makes a new instance of this detail layout class
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface

private:

	EVisibility IsSpatializationVisible() const;
	void OnSoundfieldRendererTypeChanged();

	TSharedPtr<IPropertyHandle> MasterBusHandle;
	TSharedPtr<IPropertyHandle> RendererTypeHandle;
};

class CRIWARECOREEDITOR_API FAtomEndpointRackDetails
	: public IDetailCustomization
{
public:

	// Makes a new instance of this detail layout class
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface
};

class CRIWARECOREEDITOR_API FAtomSoundfieldEndpointRackDetails
	: public IDetailCustomization
{
public:

	// Makes a new instance of this detail layout class
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface
};
