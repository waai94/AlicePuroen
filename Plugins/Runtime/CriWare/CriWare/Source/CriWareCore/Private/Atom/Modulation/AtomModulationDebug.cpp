﻿
#include "AtomModulationDebug.h"

#if !UE_BUILD_SHIPPING
#include "CoreMinimal.h"
#include "Async/TaskGraphInterfaces.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "HAL/IConsoleManager.h"
#include "Misc/CoreDelegates.h"

#include "Atom/AtomThread.h"
#include "Atom/AtomRuntime.h"
#include "Atom/AtomRuntimeManager.h"
#include "Atom/AtomDebug.h"
#include "Atom/Modulation/AtomModulation.h"
#include "Atom/Modulation/AtomModulationLogs.h"
#include "Atom/Modulation/AtomModulationSystem.h"
#include "Atom/Modulation/AtomModulationValue.h"
//#include "Atom/Modulation/AtomModulationPatch.h"
#include "AtomModulationControlBusProxy.h"
#include "AtomModulationProxy.h"

namespace AtomModulation
{
	namespace Debug
	{
		using FDebugViewUpdateFunction = TUniqueFunction<void(FAtomModulationSystem& /*InModulation*/, const FString* /*InFilter*/)>;
		void UpdateObjectFilter(const TArray<FString>& Args, UWorld* World, FDebugViewUpdateFunction InUpdateViewFunc)
		{
			if (!World)
			{
				return;
			}

			const FString* FilterString = nullptr;
			if (Args.Num() > 0)
			{
				FilterString = &Args[0];
			}

			FAtomRuntimeHandle RuntimeHandle = FAtomRuntimeManager::GetAtomRuntimeFromWorld(World);
			if (RuntimeHandle.IsValid())
			{
				if (GEngine)
				{
					GEngine->Exec(World, TEXT("atom.Debug.SoundModulators 1"));
				}

				if (FAtomModulationSystem* Modulation = RuntimeHandle->GetAtomModulationSystem())
				{
					InUpdateViewFunc(*Modulation, FilterString);
				}
			}
		}
	}
}

static float AtomModulationDebugUpdateRateCVar = 0.1f;
FAutoConsoleVariableRef CVarAtomModulationDebugUpdateRate(
	TEXT("atom.Debug.SoundModulators.UpdateRate"),
	AtomModulationDebugUpdateRateCVar,
	TEXT("Sets update rate for modulation debug statistics (in seconds).\n")
	TEXT("Default: 0.1f"),
	ECVF_Default);

static FAutoConsoleCommandWithWorldAndArgs CVarAtomModulationDebugBuses(
	TEXT("atom.Debug.SoundModulators.Filter.Buses"),
	TEXT("Sets substring by which to filter mixes in matrix view. Arguments:\n"
		"Enabled (Optional, ex. True, False. Default: True) - Whether or not to enable showing buses.\n"
		"Filter (Optional, Default: null) - Whether or not to filter buses by name using the provided substring.\n"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
	{
		using namespace AtomModulation;
		Debug::UpdateObjectFilter(Args, World, [](FAtomModulationSystem& InModulation, const FString* InFilter)
		{
			InModulation.SetDebugBusFilter(InFilter);
		});
	}));

static FAutoConsoleCommandWithWorldAndArgs CVarAtomModulationDebugMixes(
	TEXT("atom.Debug.SoundModulators.Filter.Mixes"),
	TEXT("Sets substring by which to filter mixes in matrix view. Arguments:\n"
		"Filter - Filter bus mixes by name using the provided substring.\n"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
	{
		using namespace AtomModulation;
		Debug::UpdateObjectFilter(Args, World, [](FAtomModulationSystem& InModulation, const FString* InFilter)
		{
			InModulation.SetDebugMixFilter(InFilter);
		});
	}));

static FAutoConsoleCommandWithWorldAndArgs CVarAtomModulationDebugMatrix(
	TEXT("atom.Debug.SoundModulators.Enable.Matrix"),
	TEXT("Whether or not to enable mix matrix. Arguments:\n"
		"Enabled (Default: 1/True) - Whether or not to have matrix view enabled.\n"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
	{
		using namespace AtomModulation;
		Debug::UpdateObjectFilter(Args, World, [](FAtomModulationSystem& InModulation, const FString* InFilter)
		{
			if (InFilter)
			{
				const bool bEnabled = InFilter->ToBool();
				InModulation.SetDebugMatrixEnabled(bEnabled);
			}
		});
	}));

static FAutoConsoleCommandWithWorldAndArgs CVarAtomModulationSetDebugGeneratorFilter(
	TEXT("atom.Debug.SoundModulators.Filter.Generators"),
	TEXT("Sets substring by which to filter generators. Arguments:\n"
		"Name - Filter generators by name using the provided substring.\n"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
	{
		using namespace AtomModulation;

		Debug::UpdateObjectFilter(Args, World, [](FAtomModulationSystem& InModulation, const FString* InFilter)
		{
			InModulation.SetDebugGeneratorFilter(InFilter);
		});
	}));

static FAutoConsoleCommandWithWorldAndArgs CVarAtomModulationSetDebugGeneratorFilterType(
	TEXT("atom.Debug.SoundModulators.Filter.Generators.Type"),
	TEXT("Whether to display or hide Generator type provided (defaults to show if enablement boolean not provided). Arguments:\n"
		"Name (Optional, Default: null) - Filter generators type to display/hide (Empty/null clears any currently set filter).\n"
		"Enabled (Optional, Default: True) - True to show, false to hide.\n"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
	{
		using namespace AtomModulation;

		bool bEnabled = true;
		if (Args.Num() > 1)
		{
			bEnabled = Args[1].ToBool();
		}
		Debug::UpdateObjectFilter(Args, World, [bEnabled](FAtomModulationSystem& InModulation, const FString* InFilter)
		{
			InModulation.SetDebugGeneratorTypeFilter(InFilter, bEnabled);
		});
	}));

static FAutoConsoleCommandWithWorldAndArgs CVarAtomModulationDebugEnableGenerators(
	TEXT("atom.Debug.SoundModulators.Enable.Generators"),
	TEXT("Whether or not to enable displaying generators. Arguments:\n"
		"Enabled (Default: 1/True) - Whether or not to have generators view enabled.\n"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
	{
		using namespace AtomModulation;
		Debug::UpdateObjectFilter(Args, World, [](FAtomModulationSystem& InModulation, const FString* InFilter)
		{
			if (InFilter)
			{
				const bool bEnabled = InFilter->ToBool();
				InModulation.SetDebugGeneratorsEnabled(bEnabled);
			}
		});
	}));

namespace AtomModulation
{
	namespace Debug
	{
		const int32 MaxNameLength = 40;
		const int32 XIndent = 36;

		FColor GetUnitRenderColor(const float Value)
		{
			return Value > 1.0f || Value < 0.0f
				? FColor::Red
				: FColor::Green;
		}

		int32 RenderStatGeneratorsToCanvas(const FString& Name, const FGeneratorDebugInfo& GeneratorDebugInfo, int32 CellWidth, FCanvas& Canvas, int32 X, int32 Y, const UFont& Font)
		{
			int32 Height = 12;
			int32 Width = 12;
			Font.GetStringHeightAndWidth(TEXT("@"), Height, Width);

			Y += Height;
			X += XIndent;

			Canvas.DrawShadowedString(X, Y, *(Name + TEXT(":")), &Font, FColor::Red);
			Y += Height;

			// Print Category Titles
			{
				int32 RowX = X;
				for (const FString& Category : GeneratorDebugInfo.Categories)
				{
					Canvas.DrawShadowedString(RowX, Y, *Category, &Font, FColor::White);
					RowX += Width * CellWidth;
				}
				Y += Height;
			}

			// Print Instance Info
			for (const FGeneratorDebugInfo::FInstanceValues& InstanceValues : GeneratorDebugInfo.FilteredInstances)
			{
				int32 RowX = X;

				// Validate that all instances have the same number of values as there are registered categories.
				ensure(InstanceValues.Num() == GeneratorDebugInfo.Categories.Num());

				for (const FString& Value : InstanceValues)
				{
					FString DisplayValue = Value.Left(MaxNameLength);
					if (DisplayValue.Len() < MaxNameLength)
					{
						DisplayValue = DisplayValue.RightPad(MaxNameLength - DisplayValue.Len());
					}

					Canvas.DrawShadowedString(RowX, Y, *DisplayValue, &Font, FColor::Green);
					RowX += Width * CellWidth;
				}
				Y += Height;
			}

			Y += Height;
			return Y;
		}

		int32 RenderStatMixMatrixToCanvas(const TArray<FControlBusMixDebugInfo>& FilteredMixes, const TArray<FControlBusDebugInfo>& FilteredBuses, FCanvas& Canvas, int32 X, int32 Y, const UFont& Font)
		{
			int32 Height = 12;
			int32 Width = 12;
			Font.GetStringHeightAndWidth(TEXT("@"), Height, Width);
			X += XIndent;

			Canvas.DrawShadowedString(X, Y, TEXT("Bus Mix Matrix:"), &Font, FColor::Red);
			Y += Height;

			// Determine minimum width of cells
			static const FString MixSubTotalHeader = TEXT("Mix");
			static const FString GeneratorsSubTotalHeader = TEXT("Generators");
			static const FString TotalHeader = TEXT("Final");
			static const TArray<int32> StaticCellWidths =
			{
				GeneratorsSubTotalHeader.Len(),
				MixSubTotalHeader.Len(),
				TotalHeader.Len(),
				14 /* Minimum width due to value strings X.XXXX(X.XXXX) */
			};

			int32 CellWidth = FMath::Max(StaticCellWidths);
			for (const FControlBusMixDebugInfo& BusMix : FilteredMixes)
			{
				CellWidth = FMath::Max(CellWidth, BusMix.Name.Len());
			}
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				CellWidth = FMath::Max(CellWidth, Bus.Name.Len());
			}

			// Draw Column Headers
			int32 RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				FString Name = Bus.Name.Left(MaxNameLength);
				Name += FString::Printf(TEXT(" (%u)"), Bus.RefCount);

				if (Name.Len() < MaxNameLength)
				{
					Name = Name.RightPad(MaxNameLength - Name.Len());
				}

				RowX += Width * CellWidth; // Add before to leave space for row headers
				Canvas.DrawShadowedString(RowX, Y, *Name, &Font, FColor::White);
			}

			// Draw Row Headers
			int32 ColumnY = Y;
			for (const FControlBusMixDebugInfo& BusMix : FilteredMixes)
			{
				FString Name = BusMix.Name.Left(MaxNameLength);
				Name += FString::Printf(TEXT(" (%u)"), BusMix.RefCount);

				if (Name.Len() < MaxNameLength)
				{
					Name = Name.RightPad(MaxNameLength - Name.Len());
				}

				ColumnY += Height; // Add before to leave space for column headers
				Canvas.DrawShadowedString(X, ColumnY, *Name, &Font, FColor::White);
			}

			// Reset Corner of Matrix & Draw Per Bus Data
			RowX = X;
			ColumnY = Y;
			for (const FControlBusMixDebugInfo& BusMix : FilteredMixes)
			{
				ColumnY += Height; // Add before to leave space for column headers
				RowX = X;

				for (const FControlBusDebugInfo& Bus : FilteredBuses)
				{
					RowX += Width * CellWidth; // Add before to leave space for row headers

					float Target = Bus.DefaultValue;
					float Value = Bus.DefaultValue;
					if (const FControlBusMixStageDebugInfo* Stage = BusMix.Stages.Find(Bus.Id))
					{
						Target = Stage->TargetValue;
						Value  = Stage->CurrentValue;
					}

					if (Target != Value)
					{
						Canvas.DrawShadowedString(RowX, ColumnY, *FString::Printf(TEXT("%.4f(%.4f)"), Value, Target), &Font, FColor::Green);
					}
					else
					{
						Canvas.DrawShadowedString(RowX, ColumnY, *FString::Printf(TEXT("%.4f"), Value), &Font, FColor::Green);
					}
				}
			}

			Y += (FilteredMixes.Num() + 2) * Height; // Add 2, one for header and one for spacing row

			// Draw Sub-Totals & Totals
			Canvas.DrawShadowedString(X, Y, *MixSubTotalHeader, &Font, FColor::Yellow);
			RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				RowX += Width * CellWidth; // Add before to leave space for row headers

				const float Value = Bus.MixValue;
				if (FMath::IsNaN(Value))
				{
					Canvas.DrawShadowedString(RowX, Y, TEXT("N/A"), &Font, FColor::Green);
				}
				else
				{
					const FColor Color = Debug::GetUnitRenderColor(Value);
					Canvas.DrawShadowedString(RowX, Y, *FString::Printf(TEXT("%.4f"), Value), &Font, Color);
				}
			}
			Y += Height;

			Canvas.DrawShadowedString(X, Y, *GeneratorsSubTotalHeader, &Font, FColor::Yellow);
			RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				RowX += Width * CellWidth; // Add before to leave space for row headers
				const float Value = Bus.GeneratorValue;
				const FColor Color = Debug::GetUnitRenderColor(Value);
				Canvas.DrawShadowedString(RowX, Y, *FString::Printf(TEXT("%.4f"), Value), &Font, Color);
			}

			Y += Height;
			Canvas.DrawShadowedString(X, Y, *TotalHeader, &Font, FColor::Yellow);
			RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				RowX += Width * CellWidth; // Add before to leave space for row headers
				const FColor Color = Debug::GetUnitRenderColor(Bus.Value);
				Canvas.DrawShadowedString(RowX, Y, *FString::Printf(TEXT("%.4f"), Bus.Value), &Font, Color);
			}
			Y += Height;

			return Y + Height;
		}

		int32 RenderStatGeneratorsToViewportSubsystem(const FString& Name, const FGeneratorDebugInfo& GeneratorDebugInfo, int32 CellWidth, UViewportStatsSubsystem* ViewportSubsystem, int32 X, int32 Y)
		{
			int32 Height = 12;
			int32 Width = 12;

			Y += Height;
			X += XIndent;

			Atom::DebugDrawString(ViewportSubsystem, (Name + TEXT(":")), FColor::Red, X, Y);

			// Print Category Titles
			{
				int32 RowX = X;
				for (const FString& Category : GeneratorDebugInfo.Categories)
				{
					Y -= Atom::DebugDrawString(ViewportSubsystem, Category, FColor::White, RowX, Y);
					RowX += Width * CellWidth;
				}
				Y += Height;
			}

			// Print Instance Info
			for (const FGeneratorDebugInfo::FInstanceValues& InstanceValues : GeneratorDebugInfo.FilteredInstances)
			{
				int32 RowX = X;

				// Validate that all instances have the same number of values as there are registered categories.
				ensure(InstanceValues.Num() == GeneratorDebugInfo.Categories.Num());

				for (const FString& Value : InstanceValues)
				{
					FString DisplayValue = Value.Left(MaxNameLength);
					if (DisplayValue.Len() < MaxNameLength)
					{
						DisplayValue = DisplayValue.RightPad(MaxNameLength - DisplayValue.Len());
					}

					Y -= Atom::DebugDrawString(ViewportSubsystem, DisplayValue, FColor::Green, RowX, Y);
					RowX += Width * CellWidth;
				}
				Y += Height;
			}

			Y += Height;
			return Y;
		}

		int32 RenderStatMixMatrixToViewportSubsystem(const TArray<FControlBusMixDebugInfo>& FilteredMixes, const TArray<FControlBusDebugInfo>& FilteredBuses, UViewportStatsSubsystem* ViewportSubsystem, int32 X, int32 Y)
		{
			int32 LineHeight = 20; // from subsystem
			int32 Height = 12;
			int32 Width = 12;
			X += XIndent;

			Atom::DebugDrawString(ViewportSubsystem, TEXT("Bus Mix Matrix:"), FColor::Red, X, Y);

			// Determine minimum width of cells
			static const FString MixSubTotalHeader = TEXT("Mix");
			static const FString GeneratorsSubTotalHeader = TEXT("Generators");
			static const FString TotalHeader = TEXT("Final");
			static const TArray<int32> StaticCellWidths =
			{
				GeneratorsSubTotalHeader.Len(),
				MixSubTotalHeader.Len(),
				TotalHeader.Len(),
				14 /* Minimum width due to value strings X.XXXX(X.XXXX) */
			};

			int32 CellWidth = FMath::Max(StaticCellWidths);
			for (const FControlBusMixDebugInfo& BusMix : FilteredMixes)
			{
				CellWidth = FMath::Max(CellWidth, BusMix.Name.Len());
			}
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				CellWidth = FMath::Max(CellWidth, Bus.Name.Len());
			}

			// Draw Column Headers
			int32 RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				FString Name = Bus.Name.Left(MaxNameLength);
				Name += FString::Printf(TEXT(" (%u)"), Bus.RefCount);

				if (Name.Len() < MaxNameLength)
				{
					Name = Name.RightPad(MaxNameLength - Name.Len());
				}

				RowX += Width * CellWidth; // Add before to leave space for row headers
				Y -= Atom::DebugDrawString(ViewportSubsystem, Name, FColor::White, RowX, Y);
			}

			// Draw Row Headers
			Y += Height;
			int32 AddedColumnY = 0;
			for (const FControlBusMixDebugInfo& BusMix : FilteredMixes)
			{
				FString Name = BusMix.Name.Left(MaxNameLength);
				Name += FString::Printf(TEXT(" (%u)"), BusMix.RefCount);

				if (Name.Len() < MaxNameLength)
				{
					Name = Name.RightPad(MaxNameLength - Name.Len());
				}

				AddedColumnY += Atom::DebugDrawString(ViewportSubsystem, Name, FColor::White, X, Y);
			}

			// Reset Corner of Matrix & Draw Per Bus Data
			RowX = X;
			Y -= AddedColumnY;
			for (const FControlBusMixDebugInfo& BusMix : FilteredMixes)
			{
				RowX = X;

				for (const FControlBusDebugInfo& Bus : FilteredBuses)
				{
					RowX += Width * CellWidth; // Add before to leave space for row headers

					float Target = Bus.DefaultValue;
					float Value = Bus.DefaultValue;
					if (const FControlBusMixStageDebugInfo* Stage = BusMix.Stages.Find(Bus.Id))
					{
						Target = Stage->TargetValue;
						Value = Stage->CurrentValue;
					}

					if (Target != Value)
					{
						Y -= Atom::DebugDrawString(ViewportSubsystem, FString::Printf(TEXT("%.4f(%.4f)"), Value, Target), FColor::Green, RowX, Y);
					}
					else
					{
						Y -= Atom::DebugDrawString(ViewportSubsystem, FString::Printf(TEXT("%.4f"), Value), FColor::Green, RowX, Y);
					}
				}
				Y += LineHeight;
			}

			Y += AddedColumnY + Height; // Add Columns + spacing row

			// Draw Sub-Totals & Totals
			Y -= Atom::DebugDrawString(ViewportSubsystem, MixSubTotalHeader, FColor::Yellow, X, Y);
			RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				RowX += Width * CellWidth; // Add before to leave space for row headers

				const float Value = Bus.MixValue;
				if (FMath::IsNaN(Value))
				{
					Y -= Atom::DebugDrawString(ViewportSubsystem, TEXT("N/A"), FColor::Green, RowX, Y);
				}
				else
				{
					const FColor Color = Debug::GetUnitRenderColor(Value);
					Y -= Atom::DebugDrawString(ViewportSubsystem, FString::Printf(TEXT("%.4f"), Value), Color, RowX, Y);
				}
			}
			Y += Height;

			Y -= Atom::DebugDrawString(ViewportSubsystem, GeneratorsSubTotalHeader, FColor::Yellow, X, Y);
			RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				RowX += Width * CellWidth; // Add before to leave space for row headers
				const float Value = Bus.GeneratorValue;
				const FColor Color = Debug::GetUnitRenderColor(Value);
				Y -= Atom::DebugDrawString(ViewportSubsystem, FString::Printf(TEXT("%.4f"), Value), Color, RowX, Y);
			}
			Y += Height;

			Y -= Atom::DebugDrawString(ViewportSubsystem, TotalHeader, FColor::Yellow , X, Y);
			RowX = X;
			for (const FControlBusDebugInfo& Bus : FilteredBuses)
			{
				RowX += Width * CellWidth; // Add before to leave space for row headers
				const FColor Color = Debug::GetUnitRenderColor(Bus.Value);
				Y -= Atom::DebugDrawString(ViewportSubsystem, FString::Printf(TEXT("%.4f"), Bus.Value), Color, RowX, Y);
			}
			Y += Height;

			return Y + Height;
		}

		template <typename T>
		bool CompareNames(const T& A, const T& B)
		{
			return A.Name < B.Name;
		}

		template <typename T, typename U>
		void FilterDebugArray(const T& Map, const FString& FilterString, int32 MaxCount, TArray<const U*>& FilteredArray)
		{
			int32 FilteredItemCount = 0;
			for (const auto& IdItemPair : Map)
			{
				const U& Item = IdItemPair.Value;
				const bool Filtered = !FilterString.IsEmpty()
					&& !Item.GetName().Contains(FilterString);
				if (!Filtered)
				{
					FilteredArray.Add(&Item);
					if (++FilteredItemCount >= MaxCount)
					{
						return;
					}
				}
			}
		}
	} // namespace Debug

	FAtomModulationDebugger::FAtomModulationDebugger()
		: bActive(0)
		, bShowRenderStatMix(1)
		, bShowGenerators(0)
		, bEnableAllGenerators(0)
		, ElapsedSinceLastUpdate(0.0f)
	{
	}

	void FAtomModulationDebugger::UpdateDebugData(double InElapsed, const FReferencedProxies& InRefProxies)
	{
		if (!bActive)
		{
			ElapsedSinceLastUpdate = 0.0f;
			return;
		}

		ElapsedSinceLastUpdate += InElapsed;
		if (AtomModulationDebugUpdateRateCVar > ElapsedSinceLastUpdate)
		{
			return;
		}
		ElapsedSinceLastUpdate = 0.0f;

		static const int32 MaxFilteredBuses = 8;
		TArray<const FAtomModulationControlBusProxy*> FilteredBusProxies;
		Debug::FilterDebugArray<FAtomModulationBusProxyMap, FAtomModulationControlBusProxy>(InRefProxies.Buses, BusStringFilter, MaxFilteredBuses, FilteredBusProxies);
		TArray<FControlBusDebugInfo> RefreshedFilteredBuses;
		for (const FAtomModulationControlBusProxy* Proxy : FilteredBusProxies)
		{
			FControlBusDebugInfo DebugInfo;
			DebugInfo.DefaultValue = Proxy->GetDefaultValue();
			DebugInfo.Id = Proxy->GetId();
			DebugInfo.GeneratorValue = Proxy->GetGeneratorValue();
			DebugInfo.MixValue = Proxy->GetMixValue();
			DebugInfo.Name = Proxy->GetName();
			DebugInfo.RefCount = Proxy->GetRefCount();
			DebugInfo.Value = Proxy->GetValue();
			RefreshedFilteredBuses.Add(DebugInfo);
		}

		static const int32 MaxFilteredMixes = 16;
		TArray<const FAtomModulatorBusMixProxy*> FilteredMixProxies;
		Debug::FilterDebugArray<FAtomModulationBusMixProxyMap, FAtomModulatorBusMixProxy>(InRefProxies.BusMixes, MixStringFilter, MaxFilteredMixes, FilteredMixProxies);
		TArray<FControlBusMixDebugInfo> RefreshedFilteredMixes;
		for (const FAtomModulatorBusMixProxy* Proxy : FilteredMixProxies)
		{
			FControlBusMixDebugInfo DebugInfo;
			DebugInfo.Name = Proxy->GetName();
			DebugInfo.RefCount = Proxy->GetRefCount();
			for (const TPair<FAtomModulationBusId, FAtomModulatorBusMixStageProxy>& Stage : Proxy->Stages)
			{
				FControlBusMixStageDebugInfo StageDebugInfo;
				StageDebugInfo.CurrentValue = Stage.Value.Value.GetCurrentValue();
				StageDebugInfo.TargetValue = Stage.Value.Value.TargetValue;
				DebugInfo.Stages.Add(Stage.Key, StageDebugInfo);
			}
			RefreshedFilteredMixes.Add(DebugInfo);
		}

		static const int32 MaxFilteredGenerators = 8;
		TArray<const FAtomModulatorGeneratorProxy*> FilteredGeneratorProxies;
		Debug::FilterDebugArray<FAtomModulationGeneratorProxyMap, FAtomModulatorGeneratorProxy>(InRefProxies.Generators, GeneratorStringFilter, MaxFilteredGenerators, FilteredGeneratorProxies);

		FGeneratorSortMap RefreshedFilteredGenerators;
		for (const FAtomModulatorGeneratorProxy* Proxy : FilteredGeneratorProxies)
		{
			FGeneratorDebugInfo::FInstanceValues Values = Proxy->GetDebugValues();
			FGeneratorDebugInfo& DebugInfo = RefreshedFilteredGenerators.FindOrAdd(Proxy->GetDebugName());
			DebugInfo.FilteredInstances.Emplace(MoveTemp(Values));
			DebugInfo.Categories = Proxy->GetDebugCategories();
		}

		FFunctionGraphTask::CreateAndDispatchWhenReady([DebuggerPtr = AsWeak(), RefreshedFilteredBuses, RefreshedFilteredMixes, RefreshedFilteredGenerators]()
		{
			TSharedPtr<FAtomModulationDebugger> ThisDebugger = DebuggerPtr.Pin();
			if (!ThisDebugger.IsValid())
			{
				return;
			}

			ThisDebugger->FilteredBuses = RefreshedFilteredBuses;
			ThisDebugger->FilteredBuses.Sort(&Debug::CompareNames<FControlBusDebugInfo>);

			ThisDebugger->FilteredMixes = RefreshedFilteredMixes;
			ThisDebugger->FilteredMixes.Sort(&Debug::CompareNames<FControlBusMixDebugInfo>);

			FGeneratorSortMap NewFilteredMap;
			if (ThisDebugger->bShowGenerators)
			{
				NewFilteredMap = RefreshedFilteredGenerators;
				for (TPair<FString, FGeneratorDebugInfo>& NewInfoPair : NewFilteredMap)
				{
					FGeneratorDebugInfo* LastDebugInfo = ThisDebugger->FilteredGeneratorsMap.Find(NewInfoPair.Key);
					NewInfoPair.Value.bEnabled = ThisDebugger->bEnableAllGenerators
						|| (LastDebugInfo && LastDebugInfo->bEnabled);

					if (bool* Value = ThisDebugger->RequestedGeneratorUpdate.Find(NewInfoPair.Key))
					{
						NewInfoPair.Value.bEnabled = *Value;
					}

					if (!NewInfoPair.Value.bEnabled)
					{
						NewInfoPair.Value.FilteredInstances.Reset();
					}
				}
				ThisDebugger->bEnableAllGenerators = 0;
				ThisDebugger->RequestedGeneratorUpdate.Reset();
			}

			ThisDebugger->FilteredGeneratorsMap = MoveTemp(NewFilteredMap);
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	}

	bool FAtomModulationDebugger::OnPostHelp(FCommonViewportClient& ViewportClient, const TCHAR* Stream)
	{
		if (GEngine)
		{
			static const float TimeShowHelp = 10.0f;
			GEngine->AddOnScreenDebugMessage(-1, TimeShowHelp, FColor::Yellow, TEXT("-MixFilter: Substring that filters mixes shown in matrix view"));
			GEngine->AddOnScreenDebugMessage(-1, TimeShowHelp, FColor::Yellow, TEXT("-BusFilter: Substring that filters buses shown in matrix view"));
			GEngine->AddOnScreenDebugMessage(-1, TimeShowHelp, FColor::Yellow, TEXT("-Matrix: Show bus matrix"));
			GEngine->AddOnScreenDebugMessage(-1, TimeShowHelp, FColor::Yellow, TEXT("-GeneratorFilter: Substring that filters Generator types listed"));
			GEngine->AddOnScreenDebugMessage(-1, TimeShowHelp, FColor::Yellow, TEXT("-Generator: Show Generator debug data"));
			GEngine->AddOnScreenDebugMessage(-1, TimeShowHelp, FColor::Yellow, TEXT("stat SoundModulators:"));
		}

		return true;
	}

	void FAtomModulationDebugger::SetDebugBusFilter(const FString* InNameFilter)
	{
		check(IsInGameThread());

		if (InNameFilter)
		{
			BusStringFilter = *InNameFilter;
		}
		else
		{
			BusStringFilter.Reset();
		}
	}

	void FAtomModulationDebugger::SetDebugMatrixEnabled(bool bInIsEnabled)
	{
		bShowRenderStatMix = bInIsEnabled;
	}

	void FAtomModulationDebugger::SetDebugMixFilter(const FString* InNameFilter)
	{
		check(IsInGameThread());

if (InNameFilter)
{
	MixStringFilter = *InNameFilter;
}
else
{
	MixStringFilter.Reset();
}
	}

	void FAtomModulationDebugger::SetDebugGeneratorsEnabled(bool bInIsEnabled)
	{
		check(IsInGameThread());

		bShowGenerators = bInIsEnabled;
		bEnableAllGenerators = 1;
	}

	void FAtomModulationDebugger::SetDebugGeneratorFilter(const FString* InFilter)
	{
		check(IsInGameThread());

		if (InFilter)
		{
			bShowGenerators = 1;
			GeneratorStringFilter = *InFilter;
		}
		else
		{
			GeneratorStringFilter.Reset();
		}
	}

	void FAtomModulationDebugger::SetDebugGeneratorTypeFilter(const FString* InFilter, bool bInIsEnabled)
	{
		check(IsInGameThread());

		if (InFilter)
		{
			bShowGenerators |= bInIsEnabled;
			RequestedGeneratorUpdate.Add(*InFilter, bInIsEnabled);
		}
		else
		{
			bShowGenerators = bInIsEnabled;
			if (bInIsEnabled)
			{
				bEnableAllGenerators = 1;
			}
		}
	}

	int32 FAtomModulationDebugger::OnRenderStat(FCanvas& Canvas, int32 X, int32 Y, const UFont& Font)
	{
		check(IsInGameThread());

		// Render stats can get called when toggle did not update bActive, so force active
		// if called and update toggle state accordingly, utilizing the last set filters.
		if (!bActive)
		{
			bActive = true;
		}

		if (bShowRenderStatMix)
		{
			Y = Debug::RenderStatMixMatrixToCanvas(FilteredMixes, FilteredBuses, Canvas, X, Y, Font);
		}

		int32 CellWidth = 0;
		for (const TPair<FString, FGeneratorDebugInfo>& GeneratorStatPair : FilteredGeneratorsMap)
		{
			for (const FString& Category : GeneratorStatPair.Value.Categories)
			{
				CellWidth = FMath::Max(CellWidth, Category.Len());
			}

			for (const FGeneratorDebugInfo::FInstanceValues& InstanceInfo : GeneratorStatPair.Value.FilteredInstances)
			{
				for (const FString& Value : InstanceInfo)
				{
					CellWidth = FMath::Max(CellWidth, Value.Len());
				}
			}
		}

		if (bShowGenerators)
		{
			for (const TPair<FString, FGeneratorDebugInfo>& GeneratorStatPair : FilteredGeneratorsMap)
			{
				if (GeneratorStatPair.Value.bEnabled)
				{
					Y = Debug::RenderStatGeneratorsToCanvas(GeneratorStatPair.Key, GeneratorStatPair.Value, CellWidth, Canvas, X, Y, Font);
				}
			}
		}

		return Y;
	}

	int32 FAtomModulationDebugger::OnRenderStat(UViewportStatsSubsystem* ViewportSubSystem, int32 OffsetX, int32 OffsetY)
	{
		check(IsInGameThread());

		// Render stats can get called when toggle did not update bActive, so force active
		// if called and update toggle state accordingly, utilizing the last set filters.
		if (!bActive)
		{
			bActive = true;
		}

		if (bShowRenderStatMix)
		{
			OffsetY = Debug::RenderStatMixMatrixToViewportSubsystem(FilteredMixes, FilteredBuses, ViewportSubSystem, OffsetX, OffsetY);
		}

		int32 CellWidth = 0;
		for (const TPair<FString, FGeneratorDebugInfo>& GeneratorStatPair : FilteredGeneratorsMap)
		{
			for (const FString& Category : GeneratorStatPair.Value.Categories)
			{
				CellWidth = FMath::Max(CellWidth, Category.Len());
			}

			for (const FGeneratorDebugInfo::FInstanceValues& InstanceInfo : GeneratorStatPair.Value.FilteredInstances)
			{
				for (const FString& Value : InstanceInfo)
				{
					CellWidth = FMath::Max(CellWidth, Value.Len());
				}
			}
		}

		if (bShowGenerators)
		{
			for (const TPair<FString, FGeneratorDebugInfo>& GeneratorStatPair : FilteredGeneratorsMap)
			{
				if (GeneratorStatPair.Value.bEnabled)
				{
					OffsetY = Debug::RenderStatGeneratorsToViewportSubsystem(GeneratorStatPair.Key, GeneratorStatPair.Value, CellWidth, ViewportSubSystem, OffsetX, OffsetY);
				}
			}
		}

		return OffsetY;
	}

	bool FAtomModulationDebugger::OnToggleStat(FCommonViewportClient& ViewportClient, const TCHAR* Stream)
	{
		check(IsInGameThread());

		if (bActive == ViewportClient.IsStatEnabled(TEXT("SoundModulators")))
		{
			return true;
		}

		if (!bActive)
		{
			if (Stream && Stream[0] != '\0')
			{
				bool bGeneratorsUpdated = false;
				for (TPair<FString, FGeneratorDebugInfo>& GeneratorStatPair : FilteredGeneratorsMap)
				{
					const bool bGeneratorEnabled = FParse::Param(Stream, *GeneratorStatPair.Key);
					if (bGeneratorEnabled)
					{
						bGeneratorsUpdated = true;
						GeneratorStatPair.Value.bEnabled = bGeneratorEnabled;
					}
					else
					{
						GeneratorStatPair.Value.bEnabled = false;
					}
				}

				const bool bUpdateMix = FParse::Param(Stream, TEXT("Matrix"));
				if (bGeneratorsUpdated || bUpdateMix)
				{
					bShowRenderStatMix = bUpdateMix;
				}
				else
				{
					// Off by default as there may be many of these
					ResetGeneratorStats();
					bShowRenderStatMix = 1;
				}

				FParse::Value(Stream, TEXT("BusFilter"), BusStringFilter);
				FParse::Value(Stream, TEXT("GeneratorFilter"), GeneratorStringFilter);
				FParse::Value(Stream, TEXT("MixFilter"), MixStringFilter);
			}
			else
			{
				bShowRenderStatMix = 1;

				// Off by default as there may be many of these
				ResetGeneratorStats();

				BusStringFilter.Reset();
				GeneratorStringFilter.Reset();
				MixStringFilter.Reset();
			}
		}

		bActive = !bActive;
		return true;
	}

	void FAtomModulationDebugger::ResetGeneratorStats()
	{
		for (TPair<FString, FGeneratorDebugInfo>& GeneratorStatPair : FilteredGeneratorsMap)
		{
			GeneratorStatPair.Value.bEnabled = false;
		}
	}

} // namespace

#endif // !UE_BUILD_SHIPPING
