// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationControlBusMix.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationControlBusMix() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationControlBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationControlBusMix();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationMixValue();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage;
class UScriptStruct* FAtomModulationControlBusMixStage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomModulationControlBusMixStage"));
	}
	return Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomModulationControlBusMixStage>()
{
	return FAtomModulationControlBusMixStage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomModulationControlBusMixStage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Bus_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/* Bus controlled by stage. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ToolTip", "Bus controlled by stage." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationControlBusMixStage, Bus), Z_Construct_UClass_UAtomModulationControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Bus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/* Value mix is set to. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ToolTip", "Value mix is set to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomModulationControlBusMixStage, Value), Z_Construct_UScriptStruct_FAtomModulationMixValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Value_MetaData)) }; // 1521900124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomModulationControlBusMixStage",
		sizeof(FAtomModulationControlBusMixStage),
		alignof(FAtomModulationControlBusMixStage),
		Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage.InnerSingleton, Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomModulationControlBusMix::execDeactivateAllMixes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllMixes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationControlBusMix::execDeactivateMix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateMix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationControlBusMix::execActivateMix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationControlBusMix::execSoloMix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SoloMix();
		P_NATIVE_END;
	}
	void UAtomModulationControlBusMix::StaticRegisterNativesUAtomModulationControlBusMix()
	{
		UClass* Class = UAtomModulationControlBusMix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMix", &UAtomModulationControlBusMix::execActivateMix },
			{ "DeactivateAllMixes", &UAtomModulationControlBusMix::execDeactivateAllMixes },
			{ "DeactivateMix", &UAtomModulationControlBusMix::execDeactivateMix },
			{ "SoloMix", &UAtomModulationControlBusMix::execSoloMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Activates this mix in all active worlds\n" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ToolTip", "Activates this mix in all active worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationControlBusMix, nullptr, "ActivateMix", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Deactivates all mixes in all active worlds\n" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ToolTip", "Deactivates all mixes in all active worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationControlBusMix, nullptr, "DeactivateAllMixes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Deactivates this mix in all active worlds\n" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ToolTip", "Deactivates this mix in all active worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationControlBusMix, nullptr, "DeactivateMix", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Solos this mix, deactivating all others and activating this\n// (if its not already active), while testing in-editor in all\n// active worlds\n" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ToolTip", "Solos this mix, deactivating all others and activating this\n(if its not already active), while testing in-editor in all\nactive worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationControlBusMix, nullptr, "SoloMix", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationControlBusMix);
	UClass* Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister()
	{
		return UAtomModulationControlBusMix::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationControlBusMix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProfileIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixStages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixStages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MixStages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationControlBusMix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomModulationControlBusMix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomModulationControlBusMix_ActivateMix, "ActivateMix" }, // 64291893
		{ &Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateAllMixes, "DeactivateAllMixes" }, // 471221929
		{ &Z_Construct_UFunction_UAtomModulationControlBusMix_DeactivateMix, "DeactivateMix" }, // 2787366585
		{ &Z_Construct_UFunction_UAtomModulationControlBusMix_SoloMix, "SoloMix" }, // 3689099723
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBusMix_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Stage Mix" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_ProfileIndex_MetaData[] = {
		{ "Category", "Mix" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationControlBusMix, ProfileIndex), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_ProfileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_ProfileIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_MixStages_Inner = { "MixStages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 3189786586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_MixStages_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/* Array of stages controlled by mix. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBusMix.h" },
		{ "ToolTip", "Array of stages controlled by mix." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_MixStages = { "MixStages", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationControlBusMix, MixStages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_MixStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_MixStages_MetaData)) }; // 3189786586
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationControlBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_ProfileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_MixStages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBusMix_Statics::NewProp_MixStages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationControlBusMix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationControlBusMix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationControlBusMix_Statics::ClassParams = {
		&UAtomModulationControlBusMix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomModulationControlBusMix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBusMix_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBusMix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBusMix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationControlBusMix()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationControlBusMix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationControlBusMix.OuterSingleton, Z_Construct_UClass_UAtomModulationControlBusMix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationControlBusMix.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationControlBusMix>()
	{
		return UAtomModulationControlBusMix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationControlBusMix);
	UAtomModulationControlBusMix::~UAtomModulationControlBusMix() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_Statics::ScriptStructInfo[] = {
		{ FAtomModulationControlBusMixStage::StaticStruct, Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage_Statics::NewStructOps, TEXT("AtomModulationControlBusMixStage"), &Z_Registration_Info_UScriptStruct_AtomModulationControlBusMixStage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomModulationControlBusMixStage), 3189786586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationControlBusMix, UAtomModulationControlBusMix::StaticClass, TEXT("UAtomModulationControlBusMix"), &Z_Registration_Info_UClass_UAtomModulationControlBusMix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationControlBusMix), 166994105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_3772138730(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBusMix_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
