// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomAisacVolumeComponent.h"
#include "CriWareCore/Public/Atom/Modulation/AtomAisacModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacVolumeComponent() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacVolumeComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacVolumeComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings;
class UScriptStruct* FAtomVolumeAisacControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomVolumeAisacControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomVolumeAisacControlSettings>()
{
	return FAtomVolumeAisacControlSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ListenerLocationState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerLocationState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ListenerLocationState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct to determine dynamic Aisac Control data for use with Atom gameplay volumes. */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAisacVolumeComponent.h" },
		{ "ToolTip", "Struct to determine dynamic Aisac Control data for use with Atom gameplay volumes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomVolumeAisacControlSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_ListenerLocationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_ListenerLocationState_MetaData[] = {
		{ "Category", "Atom Volume Bus Sends" },
		{ "Comment", "/** The state the listener needs to be in, relative to the Atom volume, for this bus send list to be used for a given sound. */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAisacVolumeComponent.h" },
		{ "ToolTip", "The state the listener needs to be in, relative to the Atom volume, for this bus send list to be used for a given sound." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_ListenerLocationState = { "ListenerLocationState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomVolumeAisacControlSettings, ListenerLocationState), Z_Construct_UEnum_CriWareCore_EAtomVolumeLocationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_ListenerLocationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_ListenerLocationState_MetaData)) }; // 2718168638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_AisacControls_Inner = { "AisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlSettings, METADATA_PARAMS(nullptr, 0) }; // 1581297063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_AisacControls_MetaData[] = {
		{ "Category", "AISAC Controls" },
		{ "Comment", "/** AISAC control array for sounds that are in the AtomListenerLocationState at the same time as the listener. */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAisacVolumeComponent.h" },
		{ "ToolTip", "AISAC control array for sounds that are in the AtomListenerLocationState at the same time as the listener." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_AisacControls = { "AisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomVolumeAisacControlSettings, AisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_AisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_AisacControls_MetaData)) }; // 1581297063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_ListenerLocationState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_ListenerLocationState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_AisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewProp_AisacControls,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomVolumeAisacControlSettings",
		sizeof(FAtomVolumeAisacControlSettings),
		alignof(FAtomVolumeAisacControlSettings),
		Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomAisacVolumeComponent::execSetAisacControlSettings)
	{
		P_GET_TARRAY_REF(FAtomVolumeAisacControlSettings,Z_Param_Out_NewAisacControlSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAisacControlSettings(Z_Param_Out_NewAisacControlSettings);
		P_NATIVE_END;
	}
	void UAtomAisacVolumeComponent::StaticRegisterNativesUAtomAisacVolumeComponent()
	{
		UClass* Class = UAtomAisacVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAisacControlSettings", &UAtomAisacVolumeComponent::execSetAisacControlSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics
	{
		struct AtomAisacVolumeComponent_eventSetAisacControlSettings_Parms
		{
			TArray<FAtomVolumeAisacControlSettings> NewAisacControlSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAisacControlSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAisacControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAisacControlSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::NewProp_NewAisacControlSettings_Inner = { "NewAisacControlSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings, METADATA_PARAMS(nullptr, 0) }; // 2785325923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::NewProp_NewAisacControlSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::NewProp_NewAisacControlSettings = { "NewAisacControlSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAisacVolumeComponent_eventSetAisacControlSettings_Parms, NewAisacControlSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::NewProp_NewAisacControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::NewProp_NewAisacControlSettings_MetaData)) }; // 2785325923
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::NewProp_NewAisacControlSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::NewProp_NewAisacControlSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplay" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAisacVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAisacVolumeComponent, nullptr, "SetAisacControlSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::AtomAisacVolumeComponent_eventSetAisacControlSettings_Parms), Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAisacVolumeComponent);
	UClass* Z_Construct_UClass_UAtomAisacVolumeComponent_NoRegister()
	{
		return UAtomAisacVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAisacVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControlSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControlSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomAisacVolumeComponent_SetAisacControlSettings, "SetAisacControlSettings" }, // 425870093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AtomGameplayVolume" },
		{ "Comment", "/**\n *  UAtomAisacVolumeComponent - Atom Gameplay Volume component for bus sends.\n */" },
		{ "DisplayName", "AISAC" },
		{ "IncludePath", "Atom/Gameplay/AtomAisacVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAisacVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomAisacVolumeComponent - Atom Gameplay Volume component for bus sends." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::NewProp_AisacControlSettings_Inner = { "AisacControlSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings, METADATA_PARAMS(nullptr, 0) }; // 2785325923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::NewProp_AisacControlSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Submixes" },
		{ "Comment", "/** AISAC Controls to use for this component. Allows to apply AISAC controls dynamically to ausio on source and listener locations (relative to parent volume.) */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAisacVolumeComponent.h" },
		{ "ToolTip", "AISAC Controls to use for this component. Allows to apply AISAC controls dynamically to ausio on source and listener locations (relative to parent volume.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::NewProp_AisacControlSettings = { "AisacControlSettings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAisacVolumeComponent, AisacControlSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::NewProp_AisacControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::NewProp_AisacControlSettings_MetaData)) }; // 2785325923
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::NewProp_AisacControlSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::NewProp_AisacControlSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAisacVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::ClassParams = {
		&UAtomAisacVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAisacVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomAisacVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAisacVolumeComponent.OuterSingleton, Z_Construct_UClass_UAtomAisacVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAisacVolumeComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAisacVolumeComponent>()
	{
		return UAtomAisacVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAisacVolumeComponent);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_Statics::ScriptStructInfo[] = {
		{ FAtomVolumeAisacControlSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomVolumeAisacControlSettings_Statics::NewStructOps, TEXT("AtomVolumeAisacControlSettings"), &Z_Registration_Info_UScriptStruct_AtomVolumeAisacControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomVolumeAisacControlSettings), 2785325923U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAisacVolumeComponent, UAtomAisacVolumeComponent::StaticClass, TEXT("UAtomAisacVolumeComponent"), &Z_Registration_Info_UClass_UAtomAisacVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAisacVolumeComponent), 3988619566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_761410930(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAisacVolumeComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
