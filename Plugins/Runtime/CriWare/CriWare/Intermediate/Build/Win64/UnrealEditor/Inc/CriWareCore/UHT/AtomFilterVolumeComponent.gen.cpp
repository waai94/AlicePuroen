// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomFilterVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomFilterVolumeComponent() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomFilterVolumeComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomFilterVolumeComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomFilterVolumeComponent::execSetInteriorLPF)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteriorLPF(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomFilterVolumeComponent::execSetExteriorLPF)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExteriorLPF(Z_Param_Volume,Z_Param_InterpolateTime);
		P_NATIVE_END;
	}
	void UAtomFilterVolumeComponent::StaticRegisterNativesUAtomFilterVolumeComponent()
	{
		UClass* Class = UAtomFilterVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExteriorLPF", &UAtomFilterVolumeComponent::execSetExteriorLPF },
			{ "SetInteriorLPF", &UAtomFilterVolumeComponent::execSetInteriorLPF },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics
	{
		struct AtomFilterVolumeComponent_eventSetExteriorLPF_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomFilterVolumeComponent_eventSetExteriorLPF_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomFilterVolumeComponent_eventSetExteriorLPF_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplay" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomFilterVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomFilterVolumeComponent, nullptr, "SetExteriorLPF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::AtomFilterVolumeComponent_eventSetExteriorLPF_Parms), Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics
	{
		struct AtomFilterVolumeComponent_eventSetInteriorLPF_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomFilterVolumeComponent_eventSetInteriorLPF_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_InterpolateTime = { "InterpolateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomFilterVolumeComponent_eventSetInteriorLPF_Parms, InterpolateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::NewProp_InterpolateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplay" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomFilterVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomFilterVolumeComponent, nullptr, "SetInteriorLPF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::AtomFilterVolumeComponent_eventSetInteriorLPF_Parms), Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomFilterVolumeComponent);
	UClass* Z_Construct_UClass_UAtomFilterVolumeComponent_NoRegister()
	{
		return UAtomFilterVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomFilterVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPFTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPFTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorLPFTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorLPFTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayVolumeMutator,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomFilterVolumeComponent_SetExteriorLPF, "SetExteriorLPF" }, // 3382547819
		{ &Z_Construct_UFunction_UAtomFilterVolumeComponent_SetInteriorLPF, "SetInteriorLPF" }, // 1965190079
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AtomGameplayVolume" },
		{ "Comment", "/**\n *  UAtomFilterVolumeComponent - Atom Gameplay Volume component for occlusion settings (volume filter)\n */" },
		{ "DisplayName", "Filter" },
		{ "IncludePath", "Atom/Gameplay/AtomFilterVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomFilterVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomFilterVolumeComponent - Atom Gameplay Volume component for occlusion settings (volume filter)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPF_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The desired LPF frequency cutoff (in hertz) of sounds outside the volume when the player is inside the volume\n" },
		{ "MaxClamp", "24000" },
		{ "MaxUI", "24000" },
		{ "MinClamp", "24" },
		{ "MinUI", "24" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomFilterVolumeComponent.h" },
		{ "ToolTip", "The desired LPF frequency cutoff (in hertz) of sounds outside the volume when the player is inside the volume" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPF = { "ExteriorLPF", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomFilterVolumeComponent, ExteriorLPF), METADATA_PARAMS(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomFilterVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime = { "ExteriorLPFTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomFilterVolumeComponent, ExteriorLPFTime), METADATA_PARAMS(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPF_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The desired LPF frequency cutoff (in hertz) of sounds inside the volume when the player is outside the volume\n" },
		{ "MaxClamp", "24000" },
		{ "MaxUI", "24000" },
		{ "MinClamp", "24" },
		{ "MinUI", "24" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomFilterVolumeComponent.h" },
		{ "ToolTip", "The desired LPF frequency cutoff (in hertz) of sounds inside the volume when the player is outside the volume" },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPF = { "InteriorLPF", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomFilterVolumeComponent, InteriorLPF), METADATA_PARAMS(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPFTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VolumeFilter" },
		{ "Comment", "// The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player enters the volume\n" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomFilterVolumeComponent.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player enters the volume" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPFTime = { "InteriorLPFTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomFilterVolumeComponent, InteriorLPFTime), METADATA_PARAMS(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPFTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPFTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_ExteriorLPFTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::NewProp_InteriorLPFTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomFilterVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::ClassParams = {
		&UAtomFilterVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomFilterVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomFilterVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomFilterVolumeComponent.OuterSingleton, Z_Construct_UClass_UAtomFilterVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomFilterVolumeComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomFilterVolumeComponent>()
	{
		return UAtomFilterVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomFilterVolumeComponent);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomFilterVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomFilterVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomFilterVolumeComponent, UAtomFilterVolumeComponent::StaticClass, TEXT("UAtomFilterVolumeComponent"), &Z_Registration_Info_UClass_UAtomFilterVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomFilterVolumeComponent), 1114917145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomFilterVolumeComponent_h_3073427160(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomFilterVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomFilterVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
