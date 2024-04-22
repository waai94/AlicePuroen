// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomBusSendVolumeComponent.h"
#include "CriWareCore/Public/Atom/AtomVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusSendVolumeComponent() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusSendVolumeComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusSendVolumeComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomBusSendVolumeComponent::execSetBusSendSettings)
	{
		P_GET_TARRAY_REF(FAtomVolumeBusSendSettings,Z_Param_Out_NewBusSendSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendSettings(Z_Param_Out_NewBusSendSettings);
		P_NATIVE_END;
	}
	void UAtomBusSendVolumeComponent::StaticRegisterNativesUAtomBusSendVolumeComponent()
	{
		UClass* Class = UAtomBusSendVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBusSendSettings", &UAtomBusSendVolumeComponent::execSetBusSendSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics
	{
		struct AtomBusSendVolumeComponent_eventSetBusSendSettings_Parms
		{
			TArray<FAtomVolumeBusSendSettings> NewBusSendSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewBusSendSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBusSendSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewBusSendSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::NewProp_NewBusSendSettings_Inner = { "NewBusSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings, METADATA_PARAMS(nullptr, 0) }; // 3129683858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::NewProp_NewBusSendSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::NewProp_NewBusSendSettings = { "NewBusSendSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusSendVolumeComponent_eventSetBusSendSettings_Parms, NewBusSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::NewProp_NewBusSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::NewProp_NewBusSendSettings_MetaData)) }; // 3129683858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::NewProp_NewBusSendSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::NewProp_NewBusSendSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplay" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomBusSendVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSendVolumeComponent, nullptr, "SetBusSendSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::AtomBusSendVolumeComponent_eventSetBusSendSettings_Parms), Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusSendVolumeComponent);
	UClass* Z_Construct_UClass_UAtomBusSendVolumeComponent_NoRegister()
	{
		return UAtomBusSendVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSendSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusSendVolumeComponent_SetBusSendSettings, "SetBusSendSettings" }, // 3907755859
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AtomGameplayVolume" },
		{ "Comment", "/**\n *  UAtomBusSendVolumeComponent - Atom Gameplay Volume component for bus sends\n */" },
		{ "DisplayName", "Bus Send" },
		{ "IncludePath", "Atom/Gameplay/AtomBusSendVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomBusSendVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomBusSendVolumeComponent - Atom Gameplay Volume component for bus sends" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::NewProp_BusSendSettings_Inner = { "BusSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomVolumeBusSendSettings, METADATA_PARAMS(nullptr, 0) }; // 3129683858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::NewProp_BusSendSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** Bus send settings to use for this component. Allows audio to dynamically send to buses based on source and listener locations (relative to parent volume.) */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomBusSendVolumeComponent.h" },
		{ "ToolTip", "Bus send settings to use for this component. Allows audio to dynamically send to buses based on source and listener locations (relative to parent volume.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::NewProp_BusSendSettings = { "BusSendSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusSendVolumeComponent, BusSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::NewProp_BusSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::NewProp_BusSendSettings_MetaData)) }; // 3129683858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::NewProp_BusSendSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::NewProp_BusSendSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusSendVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::ClassParams = {
		&UAtomBusSendVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusSendVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomBusSendVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusSendVolumeComponent.OuterSingleton, Z_Construct_UClass_UAtomBusSendVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusSendVolumeComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusSendVolumeComponent>()
	{
		return UAtomBusSendVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusSendVolumeComponent);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomBusSendVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomBusSendVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusSendVolumeComponent, UAtomBusSendVolumeComponent::StaticClass, TEXT("UAtomBusSendVolumeComponent"), &Z_Registration_Info_UClass_UAtomBusSendVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusSendVolumeComponent), 2690308856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomBusSendVolumeComponent_h_4032143060(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomBusSendVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomBusSendVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
