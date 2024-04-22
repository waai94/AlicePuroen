﻿/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine
 * Module   : Module Interface of CriWareCoreEditor
 * File     : CriWareCoreEditorModule.cpp
 *
 ****************************************************************************/

#include "CriWareCoreEditorModule.h"

#include "Modules/ModuleManager.h"
#include "UObject/WeakObjectPtr.h"
#include "UObject/Class.h"
#include "AssetToolsModule.h"
#include "IAssetTypeActions.h"
#include "ISettingsModule.h"
#include "ISettingsContainer.h"
#include "IPlacementModeModule.h"
#include "WorkspaceMenuStructure.h"
#include "WorkspaceMenuStructureModule.h"
#include "Editor.h"
#include "Editor/UnrealEdEngine.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "ContentBrowserMenuContexts.h"
#include "ToolMenus.h"
#include "UnrealEdGlobals.h"
#include "Runtime/Launch/Resources/Version.h"

#include "CriWareCoreModule.h"
#include "CriWareCoreSettings.h"
#include "CriWare.h"
#include "CriWareLLM.h"
#include "Atom/AtomRuntime.h" 
#include "Atom/AtomConfig.h"
#include "Atom/AtomWaveBank.h"
#include "Atom/AtomCueSheet.h"
#include "Atom/AtomComponent.h"
#include "Atom/AtomMultiPositionComponent.h"
#include "Atom/AtomAmbientSound.h"
#include "Atom/Gameplay/AtomGameplayVolume.h"
#include "Atom/Modulation/AtomModulationParameter.h"

#include "ActorFactories/ActorFactoryAtomAmbientSound.h"
#include "AssetTools/AtomConfigActions.h"
#include "AssetTools/AtomRackActions.h"
#include "AssetTools/AtomEndpointSettingsActions.h"
#include "AssetTools/AtomEffectPresetActions.h"
#include "AssetTools/AtomWaveBankActions.h"
#include "AssetTools/AtomCueSheetActions.h"
#include "AssetTools/AtomSoundBaseActions.h"
#include "AssetTools/AtomSoundWaveActions.h"
#include "AssetTools/AtomSoundCueActions.h"
#include "AssetTools/AtomSoundClassActions.h"
#include "AssetTools/AtomSoundSimpleActions.h"
#include "AssetTools/AtomAttenuationActions.h"
#include "AssetTools/AtomConcurrencyActions.h"
#include "AssetTools/AtomAisacPatchActions.h"
#include "AssetTools/AtomModulationActions.h"
#include "Customizations/AtomChannelLevelMatrixCustomization.h"
#include "Customizations/AtomAttenuationCustomization.h"
#include "Customizations/AtomEnvelopeCustomization.h"
#include "Customizations/AtomCategoryCustomization.h"
#include "Customizations/AtomSoundBaseCustomization.h"
#include "Customizations/AtomBusCustomization.h"
#include "Customizations/AtomAisacControlCustomization.h"
#include "Customizations/AtomAisacPatchCustomization.h"
#include "Customizations/AtomAisacModulationDefaultSettingsCustomization.h"
#include "Customizations/AtomModulationDestinationCustomization.h"
#include "Customizations/AtomModulationParameterSettingsCustomization.h"
#include "Customizations/AtomModulationControlBusMixStageCustomization.h"
#include "Customizations/AtomSelectorParamCustomization.h"
#include "Customizations/AtomRackConfigCustomization.h"
#include "Customizations/AtomRackDetails.h"
#include "Customizations/AtomBusDetails.h"
#include "Customizations/AtomSoundBankDetails.h"
#include "Customizations/AtomComponentDetails.h"
#include "Customizations/AtomAmbientSoundDetails.h"
#include "BlueprintGraph/AtomSoundGraphPinFactory.h"
#include "BlueprintGraph/AtomBusGraphPinFactory.h"
#include "BlueprintGraph/AtomAisacPatchGraphPinFactory.h"
#include "BlueprintGraph/AtomAisacControlGraphPinFactory.h"
#include "Models/AtomSoundBankEditorCommands.h"
#include "Visualizers/AtomComponentVisualizer.h"
#include "Visualizers/AtomMultiPositionComponentVisualizer.h"
#include "ThumbnailRendering/AtomSoundBaseThumbnailRenderer.h"
#include "AtomSoundBaseRenderer.h"
#include "Widgets/SAtomStatusBar.h"
#include "Widgets/SAtomStatisticsDialog.h"
#include "Widgets/SAtomResourceUsageDialog.h"
#include "Widgets/SAtomMonitorDialog.h"
#include "Widgets/SAtomMonitorLogWidget.h"
#include "AtomEditorStyle.h"
#include "CriWareCoreEditorPrivate.h"

#define UE_AUDIO_LINK_AVAILABLE (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1) 
#if UE_AUDIO_LINK_AVAILABLE
#include "Misc/ConfigContext.h"
#include "CriWareAudioLinkEditorModule.h"
#endif

#define LOCTEXT_NAMESPACE "CriWareCoreEditor"

DEFINE_LOG_CATEGORY(LogCriWareCoreEditor);

static const FName AtomStatisticsTabName = FName(TEXT("AtomStatistics"));
static const FName AtomResourceUsageTabName = FName(TEXT("AtomResourceUsage"));
static const FName AtomMonitorTabName = FName(TEXT("AtomMonitor"));

class FCriWareCoreEditorModule 
	: public ICriWareCoreEditorModule
{
	virtual void StartupModule() override
	{
		LLM_SCOPE_CRIWARE(ELLMTagCriWare::CriWareMisc);

		AtomStyleSet = MakeShareable(new FAtomEditorStyle); // register in ctor

		DelegateHandle = FCoreDelegates::OnPostEngineInit.AddLambda([this]()
		{
			RegisterAssetTools();
			RegisterCustomizations();
			RegisterComponentVisualizers();
			RegisterThumbnailRenderers();
			RegisterActorFactories();
			RegisterPlacementActors();
			RegisterSettings();
			RegisterBlueprintGraph();
			RegisterEditorDelegates();

			if (GEditor && !IsRunningCommandlet())
			{
				RegisterMenus();
				RegisterStatusBarTools();
			}

			RegisterModulationParameters();
			RegisterAudioLinkModule();
		});
	}

	virtual void ShutdownModule() override
	{
		if (UObjectInitialized())
		{
			FCoreDelegates::OnPostEngineInit.Remove(DelegateHandle);

			UnregisterAudioLinkModule();

			if (GEditor && !IsRunningCommandlet())
			{
				UnregisterStatusBarTools();
				UnregisterMenus();
			}

			UnregisterEditorDelegates();
			UnregisterBlueprintGraph();
			UnregisterSettings();
			UnregisterPlacementActors();
			UnregisterActorFactories();
			UnregisterThumbnailRenderers();
			UnregisterComponentVisualizers();
			UnregisterCustomizations();
			UnregisterAssetTools();
		}
	}

public:

	virtual void RegisterEffectPresetAssetActions() override
	{
		// Only register asset actions for the case where audio mixer data is enabled
		//if (GetDefault<UAudioSettings>()->IsAudioMixerEnabled())
		//{
			// Register the audio editor asset type actions
			IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

			// Look for any atom effect presets to register
			for (TObjectIterator<UClass> It; It; ++It)
			{
				UClass* ChildClass = *It;
				if (ChildClass->HasAnyClassFlags(CLASS_Abstract))
				{
					continue;
				}

				// Look for bus or source preset classes
				UClass* ParentClass = ChildClass->GetSuperClass();
				if (ParentClass && (ParentClass->IsChildOf(UAtomBusEffectPreset::StaticClass())) /*|| ParentClass->IsChildOf(UAtomEffectSourcePreset::StaticClass())*/)
				{
					UAtomEffectPreset* EffectPreset = ChildClass->GetDefaultObject<UAtomEffectPreset>();
					if (!RegisteredEffectPresetsActions.Contains(EffectPreset) && EffectPreset->HasAssetActions())
					{
						
						RegisteredEffectPresetsActions.Add(EffectPreset);
						RegisterAssetTypeAction(AssetTools, MakeShared<FAtomEffectPresetActions>(EffectPreset, AdxAssetCategoryBit));
					}
				}
			}
		//}
	}

protected:

	/** Registers asset tool actions. */
	void RegisterAssetTools()
	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

		AdxAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("CriWare ADX")), LOCTEXT("AdxAssetCategory", "ADX Atom"));

		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomConfigActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomDspBusSettingActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomRackActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomEndpointSettingsActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomSoundfieldRackActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomEndpointRackActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomSoundfieldEndpointRackActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomBusActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomBusEffectPresetActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomWaveBankActions>(AdxAssetCategoryBit, AtomStyleSet.ToSharedRef()));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomCueSheetActions>(AdxAssetCategoryBit, AtomStyleSet.ToSharedRef()));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomSoundBaseActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomSoundWaveActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomSoundCueActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomAttenuationActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomConcurrencyActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomSoundClassActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomSoundSimpleActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomAisacPatchActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomModulationControlBusActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomModulationControlBusMixActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomModulationGeneratorActions>(AdxAssetCategoryBit));
		RegisterAssetTypeAction(AssetTools, MakeShared<FAtomModulationParameterActions>(AdxAssetCategoryBit));

		RegisterEffectPresetAssetActions();
	}

	/**
	 * Registers a single asset type action.
	 *
	 * @param AssetTools The asset tools object to register with.
	 * @param Action The asset type action to register.
	 */
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		RegisteredAssetTypeActions.Add(Action);
	}

	/** Unregisters asset tool actions. */
	void UnregisterAssetTools()
	{
		FAssetToolsModule* AssetToolsModule = FModuleManager::GetModulePtr<FAssetToolsModule>("AssetTools");

		if (AssetToolsModule != nullptr)
		{
			IAssetTools& AssetTools = AssetToolsModule->Get();

			for (auto Action : RegisteredAssetTypeActions)
			{
				AssetTools.UnregisterAssetTypeActions(Action);
			}
			RegisteredAssetTypeActions.Reset();
		}
	}

protected:

	/** Register details view customizations. */
	void RegisterCustomizations()
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));

		// Custom Property Layouts
		auto RegisterCustomProperty = [this, InPropertyModule = &PropertyModule](FName Name, FOnGetPropertyTypeCustomizationInstance InstanceGetter)
		{
			InPropertyModule->RegisterCustomPropertyTypeLayout(Name, InstanceGetter);
			CustomPropertyLayoutNames.Add(Name);
		};

		RegisterCustomProperty("AtomRackConfig", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomRackConfigCustomization::MakeInstance));
		RegisterCustomProperty("AtomChannelLevelMatrix", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomChannelLevelMatrixCustomization::MakeInstance));
		RegisterCustomProperty("AtomAttenuationSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomAttenuationSettingsCustomization::MakeInstance));
		RegisterCustomProperty("AtomSelectorParam", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomSelectorParamCustomization::MakeInstance));
		RegisterCustomProperty("AtomAisacControl", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomAisacControlCustomization::MakeInstance));
		RegisterCustomProperty("AtomAisacPatch", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomAisacPatchCustomization::MakeInstance));
		RegisterCustomProperty("AtomAisacModulationDefaultSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomAisacModulationDefaultSettingsCustomization::MakeInstance));
		RegisterCustomProperty("AtomAisacControlSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomAisacModulationSettingsCustomization::MakeInstance));
		RegisterCustomProperty("AtomSoundModulationSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomSoundModulationSettingsCustomization::MakeInstance));
		RegisterCustomProperty("AtomSoundModulationDefaultSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomSoundModulationDefaultSettingsCustomization::MakeInstance));
		RegisterCustomProperty("AtomSoundModulationRoutingSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomSoundModulationRoutingSettingsCustomization::MakeInstance));
		RegisterCustomProperty("AtomModulationParameterSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomModulationParameterSettingsCustomization::MakeInstance));
		RegisterCustomProperty("AtomModulationControlBusMixStage", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomModulationControlBusMixStageCustomization::MakeInstance));
		RegisterCustomProperty("AtomEnvelope", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomEnvelopeCustomization::MakeInstance));
		RegisterCustomProperty("AtomCategory", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomCategoryCustomization::MakeInstance));
		RegisterCustomProperty("AtomSoundBase", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomSoundBaseCustomization::MakeInstance));
		RegisterCustomProperty("AtomSoundWave", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomSoundWaveCustomization::MakeInstance));
		RegisterCustomProperty("AtomSoundCue", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomSoundCueCustomization::MakeInstance));
		RegisterCustomProperty("AtomBus", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAtomBusCustomization::MakeInstance));

		// Custom Class Layouts
		auto RegisterCustomClass = [this, InPropertyModule = &PropertyModule](FName Name, FOnGetDetailCustomizationInstance InstanceGetter)
		{
			InPropertyModule->RegisterCustomClassLayout(Name, InstanceGetter);
			CustomClassLayoutNames.Add(Name);
		};

		RegisterCustomClass("AtomRack", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomRackDetails::MakeInstance));
		RegisterCustomClass("AtomSoundfieldRack", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomSoundfieldRackDetails::MakeInstance));
		RegisterCustomClass("AtomEndpointRack", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomEndpointRackDetails::MakeInstance));
		RegisterCustomClass("AtomSoundfieldEndpointRack", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomSoundfieldEndpointRackDetails::MakeInstance));
		RegisterCustomClass("AtomBus", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomBusDetails::MakeInstance));
		RegisterCustomClass("AtomWaveBank", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomSoundBankDetails::MakeInstance));
		RegisterCustomClass("AtomCueSheet", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomSoundBankDetails::MakeInstance));
		RegisterCustomClass("AtomComponent", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomComponentDetails::MakeInstance));
		RegisterCustomClass("AtomAmbientSound", FOnGetDetailCustomizationInstance::CreateStatic(&FAtomAmbientSoundDetails::MakeInstance));
	}

	/** Unregister details view customizations. */
	void UnregisterCustomizations()
	{
		if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
		{
			FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

			for (FName PropertyName : CustomPropertyLayoutNames)
			{
				PropertyModule.UnregisterCustomPropertyTypeLayout(PropertyName);
			}
			CustomPropertyLayoutNames.Reset();

			for (FName ClassName : CustomClassLayoutNames)
			{
				PropertyModule.UnregisterCustomClassLayout(ClassName);
			}
			CustomClassLayoutNames.Reset();
		}
	}

protected:

	void RegisterComponentVisualizers()
	{
		RegisterComponentVisualizer(UAtomComponent::StaticClass()->GetFName(), MakeShareable(new FAtomComponentVisualizer));
		RegisterComponentVisualizer(UAtomMultiPositionComponent::StaticClass()->GetFName(), MakeShareable(new FAtomMultiPositionComponentVisualizer));
	}

	void RegisterComponentVisualizer(FName ComponentClassName, TSharedPtr<FComponentVisualizer> Visualizer)
	{
		if (GUnrealEd)
		{
			GUnrealEd->RegisterComponentVisualizer(ComponentClassName, Visualizer);
		}

		RegisteredVisualizerComponentNames.Add(ComponentClassName);

		if (Visualizer.IsValid())
		{
			Visualizer->OnRegister();
		}
	}

	void UnregisterComponentVisualizers()
	{
		if (GUnrealEd)
		{
			// Iterate over all class names we registered for
			for (FName ClassName : RegisteredVisualizerComponentNames)
			{
				GUnrealEd->UnregisterComponentVisualizer(ClassName);
			}
		}
	}

protected:

	/** Registers asset thumbnail renderers. */
	void RegisterThumbnailRenderers()
	{
		ICriWareCoreModule::Get().RegisterCreateAtomSoundBaseRenderer(
			ICriWareCoreModule::FOnCreateAtomSoundBaseRenderer::CreateRaw(this,
				&FCriWareCoreEditorModule::CreateAtomSoundBaseRenderer));

		UThumbnailManager::Get().RegisterCustomRenderer(UAtomSoundBase::StaticClass(), UAtomSoundBaseThumbnailRenderer::StaticClass());
	}

	/** Unregisters all asset thumbnail renderers. */
	void UnregisterThumbnailRenderers()
	{
		if (UObjectInitialized())
		{
			UThumbnailManager::Get().UnregisterCustomRenderer(UAtomSoundBase::StaticClass());

			ICriWareCoreModule::Get().UnregisterCreateAtomSoundBaseRenderer();
		}
	}

	/** Create Atom sound render for snapshot generation that implements IAtomSoundBaseRendererInterface. */
	UObject* CreateAtomSoundBaseRenderer() const
	{
		return NewObject<UAtomSoundBaseRenderer>(GetTransientPackage());
	}

protected:
	
	/** Register settings. */
	void RegisterSettings()
	{
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			ISettingsContainerPtr ProjectSettingsContainer = SettingsModule->GetContainer("Project");

			if (ProjectSettingsContainer.IsValid())
			{
				ProjectSettingsContainer->DescribeCategory("CriWare", LOCTEXT("ProjectPluginsCategoryName", "CriWare"), LOCTEXT("ProjectCriWareCategoryDescription", "Project settings for CriWare modules."));
			}
			/*SettingsModule->RegisterSettings("Project", "CriWare", "CriWareCore",
				LOCTEXT("RuntimeSettingsName", "CriWareCore"),
				LOCTEXT("RuntimeSettingsDescription", "Configure the CriWare plugin"),
				GetMutableDefault<UCriWareCoreSettings>()
			);*/

			ISettingsContainerPtr EditorSettingsContainer = SettingsModule->GetContainer("Editor");

			if (EditorSettingsContainer.IsValid())
			{
				EditorSettingsContainer->DescribeCategory("CriWare", LOCTEXT("EditorPluginsCategoryName", "CriWare"), LOCTEXT("EditorCriWareCategoryDescription", "Editor settings for CriWare modules."));
			}
		}
	}

	/** Unregister settings. */
	void UnregisterSettings()
	{
		/*if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			SettingsModule->UnregisterSettings("Project", "CriWare", "CriWareCore");
		}*/
	}

protected:
	/** Register Kismet 2 elements for Blueprint graph. */
	void RegisterBlueprintGraph()
	{
		RegisterVisualPinFactory(MakeShareable(new FAtomSoundGraphPinFactory()));
		RegisterVisualPinFactory(MakeShareable(new FAtomBusGraphPinFactory()));
		RegisterVisualPinFactory(MakeShareable(new FAtomAisacPatchGraphPinFactory()));
		RegisterVisualPinFactory(MakeShareable(new FAtomAisacControlGraphPinFactory()));
	}

	/**
	 * Registers a single graph panel pin factory.
	 *
	 * @param Factory The graph panel pin factory to register.
	 */
	void RegisterVisualPinFactory(TSharedRef<FGraphPanelPinFactory> Factory)
	{
		FEdGraphUtilities::RegisterVisualPinFactory(Factory);
		GraphPanelPinFactories.Add(Factory);
	}

	/** Unregister Kismet 2 elements. */
	void UnregisterBlueprintGraph()
	{
		for (auto& Factory : GraphPanelPinFactories)
		{
			FEdGraphUtilities::UnregisterVisualPinFactory(Factory);
		}
		GraphPanelPinFactories.Reset();
	}

protected:

	/** Register actor factories. */
	void RegisterActorFactories()
	{
		if (GEditor)
		{
			GEditor->ActorFactories.Add(NewObject<UActorFactoryAtomAmbientSound>());
		}
	}

	/** Unregister actor factories. */
	void UnregisterActorFactories()
	{
		if (GEditor)
		{
			GEditor->ActorFactories.RemoveAll([](const UActorFactory* ActorFactory) { return ActorFactory->IsA<UActorFactoryAtomAmbientSound>(); });
		}
	}

protected:

	/** Register categories and actors for placement. */
	void RegisterPlacementActors()
	{
		if (GEditor)
		{
			IPlacementModeModule& PlacementModule = IPlacementModeModule::Get();

			FPlacementCategoryInfo Info(
				LOCTEXT("CriWareADXCategoryName", "ADX"),
				FSlateIcon(FAppStyle::GetAppStyleSetName(), "ClassIcon.SoundCue"),
				//FSlateIcon(AtomStyleSet->GetStyleSetName(), "ClassIcon.ADXThumbnail"), // should use svg
				TEXT("ADX"),
				TEXT("PMADX"),
				26
			);

			PlacementModule.RegisterPlacementCategory(Info);

			FPlaceableItem* AtomAmbientSoundPlaceableItem = new FPlaceableItem(
				*AAtomAmbientSound::StaticClass(),
				FAssetData(AAtomAmbientSound::StaticClass()),
				FName(""),
				FName(""),
				TOptional<FLinearColor>(),
				TOptional<int32>(),
				NSLOCTEXT("PlacementMode", "Atom Ambient Sound", "Atom Ambient Sound"));

			PlacementModule.RegisterPlaceableItem(Info.UniqueHandle, MakeShareable(AtomAmbientSoundPlaceableItem));

			FPlaceableItem* AtomGameplayVolumePlaceableItem = new FPlaceableItem(
				*AAtomGameplayVolume::StaticClass(),
				FAssetData(AAtomGameplayVolume::StaticClass()),
				FName(""),
				FName(""),
				TOptional<FLinearColor>(),
				TOptional<int32>(),
				NSLOCTEXT("PlacementMode", "Atom Gameplay Volume", "Atom Gameplay Volume"));

			PlacementModule.RegisterPlaceableItem(Info.UniqueHandle, MakeShareable(AtomGameplayVolumePlaceableItem));
		}
	}

	/** Unregister placements. */
	void UnregisterPlacementActors()
	{
		if (IPlacementModeModule::IsAvailable())
		{
			IPlacementModeModule::Get().UnregisterPlacementCategory("ADX");
		}
	}

protected:
	/** Register tool menus. */
	void RegisterMenus()
	{
		FAtomSoundBankEditorCommands::Register();

		UToolMenu* Menu = UToolMenus::Get()->RegisterMenu("CriWare.AtomSoundContextMenu");
		Menu->AddSection("AtomSoundAssetActions", LOCTEXT("AtomSoundAssetActionsMenuHeading", "Atom Sound Asset Actions"));

		ExtendContentMenu();
	}

	void UnregisterMenus()
	{
		FAtomSoundBankEditorCommands::Unregister();
	}

private:

	void ExtendContentMenu()
	{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 2
		UToolMenu* Menu = UE::ContentBrowser::ExtendToolMenu_AssetContextMenu(UAtomSoundBase::StaticClass());
#else
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu(TEXT("ContentBrowser.AssetContextMenu.AtomSoundBase"));
#endif
		FToolMenuSection& Section = Menu->FindOrAddSection("GetAssetActions");
	}

protected:

	/** Register Status bars. */
	void RegisterStatusBarTools()
	{
		const FSlateIcon StatisticsIcon(FAppStyle::Get().GetStyleSetName(), "DerivedData.Cache.Statistics");

		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(AtomStatisticsTabName, FOnSpawnTab::CreateRaw(this, &FCriWareCoreEditorModule::CreateAtomStatisticsTab))
			.SetDisplayName(LOCTEXT("AtomStatisticsTabTitle", "Atom Statistics"))
			.SetTooltipText(LOCTEXT("AtomStatisticsTabToolTipText", "Atom Runtime Statistics"))
			.SetGroup(WorkspaceMenu::GetMenuStructure().GetToolsCategory())
			.SetIcon(StatisticsIcon);
			
		const FSlateIcon ResourceUsageIcon(FAppStyle::Get().GetStyleSetName(), "DerivedData.ResourceUsage");

		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(AtomResourceUsageTabName, FOnSpawnTab::CreateRaw(this, &FCriWareCoreEditorModule::CreateAtomResourceUsageTab))
			.SetDisplayName(LOCTEXT("AtomResourceUsageTabTitle", "Atom Resource Usage"))
			.SetTooltipText(LOCTEXT("AtomResourceUsageTabToolTipText", "Atom Resource Usage"))
			.SetGroup(WorkspaceMenu::GetMenuStructure().GetToolsCategory())
			.SetIcon(ResourceUsageIcon);

		const FSlateIcon AtomMonitorIcon(FAppStyle::Get().GetStyleSetName(), "Log.TabIcon");

		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(AtomMonitorTabName, FOnSpawnTab::CreateRaw(this, &FCriWareCoreEditorModule::CreateAtomMonitorTab))
			.SetDisplayName(LOCTEXT("AtomMonitorTabTitle", "Atom Monitor"))
			.SetTooltipText(LOCTEXT("AtomMonitorTabToolTipText", "Atom Monitor"))
			.SetGroup(WorkspaceMenu::GetMenuStructure().GetToolsCategory())
			.SetIcon(AtomMonitorIcon);

#if WITH_RELOAD
		// This code attempts to relaunch the tabs when you reload this module
		if (IsReloadActive() && FSlateApplication::IsInitialized())
		{
			ShowAtomStatisticsTab();
			ShowAtomResourceUsageTab();
			ShowAtomMonitorTab();
		}
#endif // WITH_RELOAD

		FAtomStatusBarMenuCommands::Register();

		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.StatusBar.ToolBar");
		FToolMenuSection& AtomSection = Menu->AddSection("CriWareAtom", FText::GetEmpty(), FToolMenuInsert("DDC", EToolMenuInsertType::Before));

		AtomSection.AddEntry(
			FToolMenuEntry::InitWidget("CriWareAtomStatusBar", CreateStatusBarWidget(), FText::GetEmpty(), true, false)
		);

		// monitor log
		FAtomMonitorLogWidgetCommands::Register();
	}

	/** Unregister Status bars. */
	void UnregisterStatusBarTools()
	{
		if (FSlateApplication::IsInitialized())
		{
			FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(AtomStatisticsTabName);

			if (AtomStatisticsTab.IsValid())
			{
				AtomStatisticsTab.Pin()->RequestCloseTab();
			}

			FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(AtomResourceUsageTabName);

			if (AtomResourceUsageTab.IsValid())
			{
				AtomResourceUsageTab.Pin()->RequestCloseTab();
			}

			FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(AtomMonitorTabName);

			if (AtomMonitorTab.IsValid())
			{
				AtomMonitorTab.Pin()->RequestCloseTab();
			}
		}

		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.StatusBar.ToolBar");
		Menu->RemoveSection("CriWareAtom");

		FAtomStatusBarMenuCommands::Unregister();

		// monitor log
		FAtomMonitorLogWidgetCommands::Unregister();
	}

	TSharedRef<SWidget> CreateStatusBarWidget()
	{
		return SNew(SAtomStatusBarWidget);
	}

protected:

	/** Register Editor delegates. */
	void RegisterEditorDelegates()
	{
		FEditorDelegates::PreBeginPIE.AddRaw(this, &FCriWareCoreEditorModule::HandleEditorPreBeginPIE);
		FEditorDelegates::BeginPIE.AddRaw(this, &FCriWareCoreEditorModule::HandleEditorBeginPIE);
		FEditorDelegates::EndPIE.AddRaw(this, &FCriWareCoreEditorModule::HandleEditorEndPIE);
		FEditorDelegates::PausePIE.AddRaw(this, &FCriWareCoreEditorModule::HandleEditorPausePIE);
		FEditorDelegates::ResumePIE.AddRaw(this, &FCriWareCoreEditorModule::HandleEditorResumePIE);
	}

	/** Unregister Editor delegates. */
	void UnregisterEditorDelegates()
	{
		FEditorDelegates::BeginPIE.RemoveAll(this);
		FEditorDelegates::EndPIE.RemoveAll(this);
		FEditorDelegates::PausePIE.RemoveAll(this);
		FEditorDelegates::ResumePIE.RemoveAll(this);
	}

private:
	//~ Editor Delegates

	void HandleEditorPreBeginPIE(bool bIsSimulating)
	{
		
	}

	void HandleEditorBeginPIE(bool bIsSimulating)
	{
		if (GCriWare)
		{
			if (auto Core = GCriWare->GetCriWareCore())
			{
				Core->OnBeginPIE(bIsSimulating);
			}

			/*if (auto ActiveRuntime = GCriWare->GetActiveAtomRuntime())
			{
				ActiveRuntime->Flush(GEditor->PlayWorld);
				ActiveRuntime->ResetInterpolation();
				ActiveRuntime->OnBeginPIE(bIsSimulating);
			}*/
		}

		/*for (TObjectIterator<UVIPPlayer> It; It; ++It)
		{
			UVIPPlayer* Player = *It;
			if (Player->AffectedByPIEHandling)
			{
				Player->Close();
			}
		}*/
	}

	void HandleEditorEndPIE(bool bIsSimulating)
	{
		if (GCriWare)
		{
			if (auto Core = GCriWare->GetCriWareCore())
			{
				Core->OnEndPIE(bIsSimulating);
			}

			/*if (auto ActiveRuntime = GCriWare->GetActiveAtomRuntime())
			{
				ActiveRuntime->OnEndPIE(bIsSimulating);
			}*/
		}

		/*for (TObjectIterator<UVIPPlayer> It; It; ++It)
		{
			UVIPPlayer* Player = *It;
			if (Player->AffectedByPIEHandling)
			{
				(*It)->Close();
			}
		}*/
	}

	void HandleEditorPausePIE(bool bIsSimulating)
	{
		/*for (TObjectIterator<UVIPPlayer> It; It; ++It)
		{
			UVIPPlayer* Player = *It;
			if (Player->AffectedByPIEHandling)
			{
				(*It)->PausePIE();
			}
		}*/
	}

	void HandleEditorResumePIE(bool bIsSimulating)
	{
		/*for (TObjectIterator<UVIPPlayer> It; It; ++It)
		{
			UVIPPlayer* Player = *It;
			if (Player->AffectedByPIEHandling)
			{
				(*It)->ResumePIE();
			}
		}*/
	}

private:

	/** The collection of registered asset type actions. */
	TArray<TSharedRef<IAssetTypeActions>> RegisteredAssetTypeActions;

	/** The collection of registered effect presets asset. */
	TSet<UAtomEffectPreset*> RegisteredEffectPresetsActions;

	/** Collections of registered customized object names. */
	TArray<FName> CustomClassLayoutNames;
	TArray<FName> CustomPropertyLayoutNames;

	/** The collection of registered component with custom visualizer. */
	TArray<FName> RegisteredVisualizerComponentNames;

	/** Holds the plug-ins style set. */
	TSharedPtr<ISlateStyle> AtomStyleSet;

	/** Asset Categories */
	EAssetTypeCategories::Type AdxAssetCategoryBit;
	EAssetTypeCategories::Type SofdecAssetCategoryBit;

	/** GraphPin Factories */
	TArray<TSharedRef<FGraphPanelPinFactory>> GraphPanelPinFactories;

	/** OnPostEngineInit delegate handle */
	FDelegateHandle DelegateHandle;

	// UI and Widgets (todo: make a sub class or a UI module)
public:

	virtual void ShowAtomStatisticsTab()
	{
		FGlobalTabmanager::Get()->TryInvokeTab(FTabId(AtomStatisticsTabName));
	}

	virtual void ShowAtomResourceUsageTab()
	{
		FGlobalTabmanager::Get()->TryInvokeTab(FTabId(AtomResourceUsageTabName));
	}

	virtual void ShowAtomMonitorTab()
	{
		FGlobalTabmanager::Get()->TryInvokeTab(FTabId(AtomMonitorTabName));
	}

private:

	TSharedPtr<SWidget> CreateAtomStatisticsDialog()
	{
		return SNew(SAtomStatisticsDialog);
	}

	TSharedPtr<SWidget> CreateAtomResourceUsageDialog()
	{
		return SNew(SAtomResourceUsageDialog);
	}

	TSharedPtr<SWidget> CreateAtomMonitorDialog()
	{
		return SNew(SAtomMonitorDialog);
	}

	TSharedRef<SDockTab> CreateAtomStatisticsTab(const FSpawnTabArgs& Args)
	{
		return SAssignNew(AtomStatisticsTab, SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			CreateAtomStatisticsDialog().ToSharedRef()
		];
	}

	TSharedRef<SDockTab> CreateAtomResourceUsageTab(const FSpawnTabArgs& Args)
	{
		return SAssignNew(AtomResourceUsageTab, SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			CreateAtomResourceUsageDialog().ToSharedRef()
		];
	}

	TSharedRef<SDockTab> CreateAtomMonitorTab(const FSpawnTabArgs& Args)
	{
		return SAssignNew(AtomMonitorTab, SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			CreateAtomMonitorDialog().ToSharedRef()
		];
	}

	TWeakPtr<SDockTab> AtomStatisticsTab;
	TWeakPtr<SDockTab> AtomResourceUsageTab;
	TWeakPtr<SDockTab> AtomMonitorTab;

	// Atom Modulation Parameters Assets
public:

	void RegisterModulationParameters()
	{
		// All parameters are required to always be loaded in editor to enable them to be referenced via object
		// metadata and custom layouts, even if they are not referenced by runtime uobjects/systems directly
		IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
		AssetRegistry.OnAssetAdded().AddLambda([](const FAssetData& InAssetData)
		{
			UClass* AssetDataClass = InAssetData.GetClass();
			if (AssetDataClass && AssetDataClass->IsChildOf<UAtomModulationParameter>())
			{
				if (UAtomModulationParameter* Parameter = CastChecked<UAtomModulationParameter>(InAssetData.GetAsset()))
				{
					Parameter->AddToRoot();
				}
			}
		});

		AssetRegistry.OnInMemoryAssetDeleted().AddLambda([](UObject* ObjectDeleted)
		{
			if (UAtomModulationParameter* Parameter = Cast<UAtomModulationParameter>(ObjectDeleted))
			{
				Parameter->RemoveFromRoot();
			}
		});
	}

public:

	void RegisterAudioLinkModule()
	{
#if UE_AUDIO_LINK_AVAILABLE
		// Load AudioLink module
		FString CriWareIni;
		FConfigContext::ReadIntoGConfig().Load(TEXT("CriWare"), CriWareIni);

		bool bUseAudioLink = false;
		GConfig->GetBool(TEXT("/Script/CriWareCore.CriWareCoreSettings"), TEXT("bUseAudioLink"), bUseAudioLink, CriWareIni);
		if (bUseAudioLink)
		{
			UE_LOG(LogCriWareCoreEditor, Log, TEXT("FCriWareAudioLinkEditorModule startup"));
			CriWareAudioLinkEditorModule = MakeUnique<FCriWareAudioLinkEditorModule>();
		}
#endif
	}

	void UnregisterAudioLinkModule()
	{
#if UE_AUDIO_LINK_AVAILABLE
		CriWareAudioLinkEditorModule.Reset();
#endif
	}

#if UE_AUDIO_LINK_AVAILABLE
	TUniquePtr<FCriWareAudioLinkEditorModule> CriWareAudioLinkEditorModule;
#endif
};

IMPLEMENT_MODULE( FCriWareCoreEditorModule, CriWareCoreEditor );

#undef LOCTEXT_NAMESPACE
