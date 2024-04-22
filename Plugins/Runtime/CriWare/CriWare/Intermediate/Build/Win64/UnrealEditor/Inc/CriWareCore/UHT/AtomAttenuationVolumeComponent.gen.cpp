// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAttenuationVolumeComponent() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuationVolumeComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuationVolumeComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomAttenuationVolumeComponent::execSetInteriorVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteriorVolume(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAttenuationVolumeComponent::execSetExteriorVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExteriorVolume(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	void UAtomAttenuationVolumeComponent::StaticRegisterNativesUAtomAttenuationVolumeComponent()
	{
		UClass* Class = UAtomAttenuationVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExteriorVolume", &UAtomAttenuationVolumeComponent::execSetExteriorVolume },
			{ "SetInteriorVolume", &UAtomAttenuationVolumeComponent::execSetInteriorVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics
	{
		struct AtomAttenuationVolumeComponent_eventSetExteriorVolume_Parms
		{
			float Volume;
			float InterpolateTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAttenuationVolumeComponent_eventSetExteriorVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAttenuationVolumeComponent_eventSetExteriorVolume_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplay" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAttenuationVolumeComponent, nullptr, "SetExteriorVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::AtomAttenuationVolumeComponent_eventSetExteriorVolume_Parms), Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics
	{
		struct AtomAttenuationVolumeComponent_eventSetInteriorVolume_Parms
		{
			float Volume;
			float InterpolateTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAttenuationVolumeComponent_eventSetInteriorVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAttenuationVolumeComponent_eventSetInteriorVolume_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplay" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAttenuationVolumeComponent, nullptr, "SetInteriorVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::AtomAttenuationVolumeComponent_eventSetInteriorVolume_Parms), Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAttenuationVolumeComponent);
	UClass* Z_Construct_UClass_UAtomAttenuationVolumeComponent_NoRegister()
	{
		return UAtomAttenuationVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetExteriorVolume, "SetExteriorVolume" }, // 2240358721
		{ &Z_Construct_UFunction_UAtomAttenuationVolumeComponent_SetInteriorVolume, "SetInteriorVolume" }, // 678563145
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AtomGameplayVolume" },
		{ "Comment", "/**\n *  UAtomAttenuationVolumeComponent - Atom Gameplay Volume component for occlusion settings (volume attenuation)\n */" },
		{ "DisplayName", "Attenuation" },
		{ "IncludePath", "Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomAttenuationVolumeComponent - Atom Gameplay Volume component for occlusion settings (volume attenuation)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The desired volume of sounds outside the volume when the player is inside the volume\n" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
		{ "ToolTip", "The desired volume of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume = { "ExteriorVolume", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAttenuationVolumeComponent, ExteriorVolume), METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorTime = { "ExteriorTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAttenuationVolumeComponent, ExteriorTime), METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The desired volume of sounds inside the volume when the player is outside the volume\n" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
		{ "ToolTip", "The desired volume of sounds inside the volume when the player is outside the volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorVolume = { "InteriorVolume", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAttenuationVolumeComponent, InteriorVolume), METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeAttenuation" },
		{ "Comment", "// The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomAttenuationVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player enters the volume" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorTime = { "InteriorTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAttenuationVolumeComponent, InteriorTime), METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_ExteriorTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::NewProp_InteriorTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAttenuationVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::ClassParams = {
		&UAtomAttenuationVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAttenuationVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomAttenuationVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAttenuationVolumeComponent.OuterSingleton, Z_Construct_UClass_UAtomAttenuationVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAttenuationVolumeComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAttenuationVolumeComponent>()
	{
		return UAtomAttenuationVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAttenuationVolumeComponent);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAttenuationVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAttenuationVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAttenuationVolumeComponent, UAtomAttenuationVolumeComponent::StaticClass, TEXT("UAtomAttenuationVolumeComponent"), &Z_Registration_Info_UClass_UAtomAttenuationVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAttenuationVolumeComponent), 100819028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAttenuationVolumeComponent_h_828205594(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAttenuationVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomAttenuationVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
