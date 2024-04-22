// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomGameplayVolumeMutator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGameplayVolumeMutator() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomGameplayVolumeMutator::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_InPriority);
		P_NATIVE_END;
	}
	void UAtomGameplayVolumeMutator::StaticRegisterNativesUAtomGameplayVolumeMutator()
	{
		UClass* Class = UAtomGameplayVolumeMutator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPriority", &UAtomGameplayVolumeMutator::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics
	{
		struct AtomGameplayVolumeMutator_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayVolumeMutator_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplay" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeMutator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayVolumeMutator, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::AtomGameplayVolumeMutator_eventSetPriority_Parms), Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumeMutator);
	UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator_NoRegister()
	{
		return UAtomGameplayVolumeMutator::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomGameplayVolumeMutator_SetPriority, "SetPriority" }, // 3227534538
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAtomGameplayVolumeMutator - These components are used for more complex interactions with AtomGameplayVolumes.\n *\x09\x09""Currently, components inheriting this base can affect interior settings as well as active sounds or the Atom listener(s) inside the volume.\n *\x09\x09See also: AtomFilterVolumeComponent, AtomAttenuationVolumeComponent, AtomBusSendComponent, AtomAisacVolumeComponent, and AtomReverbVolumeComponent\n */" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayVolumeMutator.h" },
		{ "IsBlueprintBase", "FALSE" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeMutator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomGameplayVolumeMutator - These components are used for more complex interactions with AtomGameplayVolumes.\n           Currently, components inheriting this base can affect interior settings as well as active sounds or the Atom listener(s) inside the volume.\n           See also: AtomFilterVolumeComponent, AtomAttenuationVolumeComponent, AtomBusSendComponent, AtomAisacVolumeComponent, and AtomReverbVolumeComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AtomGameplay" },
		{ "Comment", "// The priority of this component.  In the case of overlapping volumes or multiple affecting components, the highest priority is chosen.\n" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeMutator.h" },
		{ "ToolTip", "The priority of this component.  In the case of overlapping volumes or multiple affecting components, the highest priority is chosen." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomGameplayVolumeMutator, Priority), METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayVolumeMutator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::ClassParams = {
		&UAtomGameplayVolumeMutator::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::PropPointers),
		0,
		0x04B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumeMutator()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumeMutator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumeMutator.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumeMutator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumeMutator.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumeMutator>()
	{
		return UAtomGameplayVolumeMutator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumeMutator);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeMutator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeMutator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomGameplayVolumeMutator, UAtomGameplayVolumeMutator::StaticClass, TEXT("UAtomGameplayVolumeMutator"), &Z_Registration_Info_UClass_UAtomGameplayVolumeMutator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumeMutator), 4283527092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeMutator_h_3680613030(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeMutator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeMutator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
