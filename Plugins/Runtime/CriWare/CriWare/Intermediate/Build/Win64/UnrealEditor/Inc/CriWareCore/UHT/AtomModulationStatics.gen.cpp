// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationStatics.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationControlBusMix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationControlBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGenerator_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameter_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomModulationStatics::execUpdateModulator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::UpdateModulator(Z_Param_WorldContextObject,Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execUpdateMixFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBusMix,Z_Param_Mix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::UpdateMixFromObject(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execUpdateMixByFilter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBusMix,Z_Param_Mix);
		P_GET_PROPERTY(FStrProperty,Z_Param_AddressFilter);
		P_GET_OBJECT(UClass,Z_Param_ParamClassFilter);
		P_GET_OBJECT(UAtomModulationParameter,Z_Param_ParamFilter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::UpdateMixByFilter(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_AddressFilter,Z_Param_ParamClassFilter,Z_Param_ParamFilter,Z_Param_Value,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execClearAllGlobalBusMixValues)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::ClearAllGlobalBusMixValues(Z_Param_WorldContextObject,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execClearGlobalBusMixValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBus,Z_Param_Bus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::ClearGlobalBusMixValue(Z_Param_WorldContextObject,Z_Param_Bus,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execSetGlobalBusMixValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBus,Z_Param_Bus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::SetGlobalBusMixValue(Z_Param_WorldContextObject,Z_Param_Bus,Z_Param_Value,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execUpdateMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBusMix,Z_Param_Mix);
		P_GET_TARRAY(FAtomModulationControlBusMixStage,Z_Param_Stages);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::UpdateMix(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_Stages,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execDeactivateGenerator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationGenerator,Z_Param_Generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::DeactivateGenerator(Z_Param_WorldContextObject,Z_Param_Generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execDeactivateBusMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBusMix,Z_Param_Mix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::DeactivateBusMix(Z_Param_WorldContextObject,Z_Param_Mix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execDeactivateBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBus,Z_Param_Bus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::DeactivateBus(Z_Param_WorldContextObject,Z_Param_Bus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execCreateBusMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY(FAtomModulationControlBusMixStage,Z_Param_Stages);
		P_GET_UBOOL(Z_Param_Activate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomModulationControlBusMix**)Z_Param__Result=UAtomModulationStatics::CreateBusMix(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Stages,Z_Param_Activate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execCreateBusMixStage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBus,Z_Param_Bus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomModulationControlBusMixStage*)Z_Param__Result=UAtomModulationStatics::CreateBusMixStage(Z_Param_WorldContextObject,Z_Param_Bus,Z_Param_Value,Z_Param_AttackTime,Z_Param_ReleaseTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execCreateBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UAtomModulationParameter,Z_Param_Parameter);
		P_GET_UBOOL(Z_Param_Activate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomModulationControlBus**)Z_Param__Result=UAtomModulationStatics::CreateBus(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Parameter,Z_Param_Activate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execActivateGenerator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationGenerator,Z_Param_Generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::ActivateGenerator(Z_Param_WorldContextObject,Z_Param_Generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execActivateBusMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBusMix,Z_Param_Mix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::ActivateBusMix(Z_Param_WorldContextObject,Z_Param_Mix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomModulationStatics::execActivateBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomModulationControlBus,Z_Param_Bus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomModulationStatics::ActivateBus(Z_Param_WorldContextObject,Z_Param_Bus);
		P_NATIVE_END;
	}
	void UAtomModulationStatics::StaticRegisterNativesUAtomModulationStatics()
	{
		UClass* Class = UAtomModulationStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBus", &UAtomModulationStatics::execActivateBus },
			{ "ActivateBusMix", &UAtomModulationStatics::execActivateBusMix },
			{ "ActivateGenerator", &UAtomModulationStatics::execActivateGenerator },
			{ "ClearAllGlobalBusMixValues", &UAtomModulationStatics::execClearAllGlobalBusMixValues },
			{ "ClearGlobalBusMixValue", &UAtomModulationStatics::execClearGlobalBusMixValue },
			{ "CreateBus", &UAtomModulationStatics::execCreateBus },
			{ "CreateBusMix", &UAtomModulationStatics::execCreateBusMix },
			{ "CreateBusMixStage", &UAtomModulationStatics::execCreateBusMixStage },
			{ "DeactivateBus", &UAtomModulationStatics::execDeactivateBus },
			{ "DeactivateBusMix", &UAtomModulationStatics::execDeactivateBusMix },
			{ "DeactivateGenerator", &UAtomModulationStatics::execDeactivateGenerator },
			{ "SetGlobalBusMixValue", &UAtomModulationStatics::execSetGlobalBusMixValue },
			{ "UpdateMix", &UAtomModulationStatics::execUpdateMix },
			{ "UpdateMixByFilter", &UAtomModulationStatics::execUpdateMixByFilter },
			{ "UpdateMixFromObject", &UAtomModulationStatics::execUpdateMixFromObject },
			{ "UpdateModulator", &UAtomModulationStatics::execUpdateModulator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics
	{
		struct AtomModulationStatics_eventActivateBus_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBus* Bus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventActivateBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventActivateBus_Parms, Bus), Z_Construct_UClass_UAtomModulationControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::NewProp_Bus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Manually activates a modulation bus. If called, deactivation will only occur\n\x09 * if bus is manually deactivated or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 */" },
		{ "DisplayName", "Activate Control Bus" },
		{ "Keywords", "modulation modulator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Manually activates a modulation bus. If called, deactivation will only occur\nif bus is manually deactivated or destroyed (i.e. will not deactivate\nwhen all references become inactive)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "ActivateBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::AtomModulationStatics_eventActivateBus_Parms), Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_ActivateBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_ActivateBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics
	{
		struct AtomModulationStatics_eventActivateBusMix_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBusMix* Mix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventActivateBusMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventActivateBusMix_Parms, Mix), Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::NewProp_Mix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Manually activates a bus modulator mix. If called, deactivation will only occur\n\x09 * if mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @param BusMix - Mix to activate\n\x09 */" },
		{ "DisplayName", "Activate Control Bus Mix" },
		{ "Keywords", "modulation modulator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Manually activates a bus modulator mix. If called, deactivation will only occur\nif mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@param BusMix - Mix to activate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "ActivateBusMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::AtomModulationStatics_eventActivateBusMix_Parms), Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics
	{
		struct AtomModulationStatics_eventActivateGenerator_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationGenerator* Generator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventActivateGenerator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventActivateGenerator_Parms, Generator), Z_Construct_UClass_UAtomModulationGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::NewProp_Generator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Manually activates a modulation generator. If called, deactivation will only occur\n\x09 * if generator is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @param Modulator - Modulator to activate\n\x09 */" },
		{ "DisplayName", "Activate Modulation Generator" },
		{ "Keywords", "modulator lfo envelope follower" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Manually activates a modulation generator. If called, deactivation will only occur\nif generator is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@param Modulator - Modulator to activate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "ActivateGenerator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::AtomModulationStatics_eventActivateGenerator_Parms), Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics
	{
		struct AtomModulationStatics_eventClearAllGlobalBusMixValues_Parms
		{
			const UObject* WorldContextObject;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventClearAllGlobalBusMixValues_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventClearAllGlobalBusMixValues_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Clears all global control bus mix values if set, using the applied fade time to return all to their respective bus's parameter default value.\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If non-positive, change is immediate.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Clear All Global Control Bus Mix Values" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Clears all global control bus mix values if set, using the applied fade time to return all to their respective bus's parameter default value.\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If non-positive, change is immediate." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "ClearAllGlobalBusMixValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::AtomModulationStatics_eventClearAllGlobalBusMixValues_Parms), Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics
	{
		struct AtomModulationStatics_eventClearGlobalBusMixValue_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBus* Bus;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventClearGlobalBusMixValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventClearGlobalBusMixValue_Parms, Bus), Z_Construct_UClass_UAtomModulationControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventClearGlobalBusMixValue_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Clears global control bus mix if set, using the applied fade time to return to the provided bus's parameter default value.\n\x09 * @param Bus - Bus associated with mix to update\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If non-positive, change is immediate.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Clear Global Control Bus Mix Value" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Clears global control bus mix if set, using the applied fade time to return to the provided bus's parameter default value.\n@param Bus - Bus associated with mix to update\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If non-positive, change is immediate." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "ClearGlobalBusMixValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::AtomModulationStatics_eventClearGlobalBusMixValue_Parms), Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics
	{
		struct AtomModulationStatics_eventCreateBus_Parms
		{
			UObject* WorldContextObject;
			FName Name;
			UAtomModulationParameter* Parameter;
			bool Activate;
			UAtomModulationControlBus* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parameter;
		static void NewProp_Activate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBus_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBus_Parms, Parameter), Z_Construct_UClass_UAtomModulationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Activate_SetBit(void* Obj)
	{
		((AtomModulationStatics_eventCreateBus_Parms*)Obj)->Activate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomModulationStatics_eventCreateBus_Parms), &Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bus" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBus_Parms, ReturnValue), Z_Construct_UClass_UAtomModulationControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_Activate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/** Creates a modulation bus with the provided default value.\n\x09 * @param Name - Name of bus\n\x09 * @param Parameter - Default value for created bus\n\x09 * @param Activate - Whether or not to activate bus on creation. If true, deactivation will only occur\n\x09 * if returned bus is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @return Capture this in a Blueprint variable to prevent it from being automatically garbage collected. \n\x09 */" },
		{ "CPP_Default_Activate", "true" },
		{ "DisplayName", "Create Control Bus" },
		{ "Keywords", "make modulation LPF modulator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Creates a modulation bus with the provided default value.\n@param Name - Name of bus\n@param Parameter - Default value for created bus\n@param Activate - Whether or not to activate bus on creation. If true, deactivation will only occur\nif returned bus is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@return Capture this in a Blueprint variable to prevent it from being automatically garbage collected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "CreateBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::AtomModulationStatics_eventCreateBus_Parms), Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_CreateBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_CreateBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics
	{
		struct AtomModulationStatics_eventCreateBusMix_Parms
		{
			UObject* WorldContextObject;
			FName Name;
			TArray<FAtomModulationControlBusMixStage> Stages;
			bool Activate;
			UAtomModulationControlBusMix* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stages;
		static void NewProp_Activate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMix_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Stages_Inner = { "Stages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 3189786586
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMix_Parms, Stages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3189786586
	void Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Activate_SetBit(void* Obj)
	{
		((AtomModulationStatics_eventCreateBusMix_Parms*)Obj)->Activate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomModulationStatics_eventCreateBusMix_Parms), &Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "BusMix" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMix_Parms, ReturnValue), Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Stages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_Activate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Creates a modulation bus mix, with a bus stage set to the provided target value.\n\x09 * @param Name - Name of mix.\n\x09 * @param Stages - Stages mix is responsible for.\n\x09 * @param Activate - Whether or not to activate mix on creation. If true, deactivation will only occur\n\x09 * if returned mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @return Capture this in a Blueprint variable to prevent it from being automatically garbage collected. \n\x09 */" },
		{ "DisplayName", "Create Control Bus Mix" },
		{ "Keywords", "make modulation modulator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Creates a modulation bus mix, with a bus stage set to the provided target value.\n@param Name - Name of mix.\n@param Stages - Stages mix is responsible for.\n@param Activate - Whether or not to activate mix on creation. If true, deactivation will only occur\nif returned mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@return Capture this in a Blueprint variable to prevent it from being automatically garbage collected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "CreateBusMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::AtomModulationStatics_eventCreateBusMix_Parms), Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics
	{
		struct AtomModulationStatics_eventCreateBusMixStage_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBus* Bus;
			float Value;
			float AttackTime;
			float ReleaseTime;
			FAtomModulationControlBusMixStage ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMixStage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMixStage_Parms, Bus), Z_Construct_UClass_UAtomModulationControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMixStage_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMixStage_Parms, AttackTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMixStage_Parms, ReleaseTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventCreateBusMixStage_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 3189786586
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_ReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/** Creates a stage used to mix a control bus.\n\x09 * @param Bus - Bus stage is in charge of applying mix value to.\n\x09 * @param Value - Value for added bus stage to target when mix is active.\n\x09 * @param AttackTime - Time in seconds for stage to mix in.\n\x09 * @param ReleaseTime - Time in seconds for stage to mix out.\n\x09 */" },
		{ "CPP_Default_AttackTime", "0.100000" },
		{ "CPP_Default_ReleaseTime", "0.100000" },
		{ "DisplayName", "Create Control Bus Mix Stage" },
		{ "Keywords", "make modulation modulator stage" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Creates a stage used to mix a control bus.\n@param Bus - Bus stage is in charge of applying mix value to.\n@param Value - Value for added bus stage to target when mix is active.\n@param AttackTime - Time in seconds for stage to mix in.\n@param ReleaseTime - Time in seconds for stage to mix out." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "CreateBusMixStage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::AtomModulationStatics_eventCreateBusMixStage_Parms), Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics
	{
		struct AtomModulationStatics_eventDeactivateBus_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBus* Bus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventDeactivateBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventDeactivateBus_Parms, Bus), Z_Construct_UClass_UAtomModulationControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::NewProp_Bus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Deactivates a bus. Does nothing if the provided bus is already inactive.\n\x09 * @param Bus - Scope of modulator\n\x09 */" },
		{ "DisplayName", "Deactivate Control Bus" },
		{ "Keywords", "modulation modulator bus" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Deactivates a bus. Does nothing if the provided bus is already inactive.\n@param Bus - Scope of modulator" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "DeactivateBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::AtomModulationStatics_eventDeactivateBus_Parms), Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics
	{
		struct AtomModulationStatics_eventDeactivateBusMix_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBusMix* Mix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventDeactivateBusMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventDeactivateBusMix_Parms, Mix), Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::NewProp_Mix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Deactivates a modulation bus mix. Does nothing if an instance of the provided bus mix is already inactive.\n\x09 * @param BusMix - Mix to deactivate\n\x09 */" },
		{ "DisplayName", "Deactivate Control Bus Mix" },
		{ "Keywords", "modulation modulator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Deactivates a modulation bus mix. Does nothing if an instance of the provided bus mix is already inactive.\n@param BusMix - Mix to deactivate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "DeactivateBusMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::AtomModulationStatics_eventDeactivateBusMix_Parms), Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics
	{
		struct AtomModulationStatics_eventDeactivateGenerator_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationGenerator* Generator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventDeactivateGenerator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventDeactivateGenerator_Parms, Generator), Z_Construct_UClass_UAtomModulationGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::NewProp_Generator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Deactivates a modulation generator. Does nothing if an instance of the provided generator is already inactive.\n\x09 * @param Generator - Generator to activate\n\x09 * @param Scope - Scope of modulator\n\x09 */" },
		{ "DisplayName", "Deactivate Modulation Generator" },
		{ "Keywords", "bus modulation modulator generator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Deactivates a modulation generator. Does nothing if an instance of the provided generator is already inactive.\n@param Generator - Generator to activate\n@param Scope - Scope of modulator" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "DeactivateGenerator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::AtomModulationStatics_eventDeactivateGenerator_Parms), Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics
	{
		struct AtomModulationStatics_eventSetGlobalBusMixValue_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBus* Bus;
			float Value;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventSetGlobalBusMixValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventSetGlobalBusMixValue_Parms, Bus), Z_Construct_UClass_UAtomModulationControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventSetGlobalBusMixValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventSetGlobalBusMixValue_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Sets a Global Control Bus Mix with a single stage associated with the provided Bus to the given float value.  This call should\n\x09 * be reserved for buses that are to be always active. It is *NOT* recommended for transient buses, as not calling clear can keep\n\x09 * buses active indefinitely.\n\x09 * @param Bus - Bus associated with mix to update\n\x09 * @param Value - Value to set global stage to.\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new value. If negative, falls back to last fade\n\x09 * time set on stage. If fade time never set on stage, defaults to 100ms.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Set Global Control Bus Mix Value" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Sets a Global Control Bus Mix with a single stage associated with the provided Bus to the given float value.  This call should\nbe reserved for buses that are to be always active. It is *NOT* recommended for transient buses, as not calling clear can keep\nbuses active indefinitely.\n@param Bus - Bus associated with mix to update\n@param Value - Value to set global stage to.\n@param FadeTime - Fade time to user when interpolating between current value and new value. If negative, falls back to last fade\ntime set on stage. If fade time never set on stage, defaults to 100ms." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "SetGlobalBusMixValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::AtomModulationStatics_eventSetGlobalBusMixValue_Parms), Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics
	{
		struct AtomModulationStatics_eventUpdateMix_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBusMix* Mix;
			TArray<FAtomModulationControlBusMixStage> Stages;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stages;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMix_Parms, Mix), Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_Stages_Inner = { "Stages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomModulationControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 3189786586
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMix_Parms, Stages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3189786586
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMix_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_Stages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Sets a Control Bus Mix with the provided stage data, if the stages\n\x09 *  are provided in an active instance proxy of the mix. \n\x09 *  Does not update UObject definition of the mix. \n\x09 * @param Mix - Mix to update\n\x09 * @param Stages - Stages to set.  If stage's bus is not referenced by mix, stage's update request is ignored.\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If negative, falls back to last fade time set on stage. If fade time never set on stage,\n\x09 *\x09\x09\x09\x09\x09 uses attack time set on stage in mix asset.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Set Control Bus Mix" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Sets a Control Bus Mix with the provided stage data, if the stages\nare provided in an active instance proxy of the mix.\nDoes not update UObject definition of the mix.\n@param Mix - Mix to update\n@param Stages - Stages to set.  If stage's bus is not referenced by mix, stage's update request is ignored.\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If negative, falls back to last fade time set on stage. If fade time never set on stage,\n                                     uses attack time set on stage in mix asset." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "UpdateMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::AtomModulationStatics_eventUpdateMix_Parms), Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_UpdateMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_UpdateMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics
	{
		struct AtomModulationStatics_eventUpdateMixByFilter_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBusMix* Mix;
			FString AddressFilter;
			TSubclassOf<UAtomModulationParameter>  ParamClassFilter;
			UAtomModulationParameter* ParamFilter;
			float Value;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AddressFilter;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParamClassFilter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParamFilter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixByFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixByFilter_Parms, Mix), Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_AddressFilter = { "AddressFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixByFilter_Parms, AddressFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamClassFilter = { "ParamClassFilter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixByFilter_Parms, ParamClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UAtomModulationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamFilter = { "ParamFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixByFilter_Parms, ParamFilter), Z_Construct_UClass_UAtomModulationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixByFilter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixByFilter_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_AddressFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamClassFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Atom" },
		{ "Comment", "/** Sets filtered stages of a given class to a provided target value for active instance of mix.\n\x09 * Does not update UObject definition of mix.\n\x09 * @param Mix - Mix to modify\n\x09 * @param AddressFilter - (Optional) Address filter to apply to provided mix's stages.\n\x09 * @param ParamClassFilter - (Optional) Filters buses by parameter class.\n\x09 * @param ParamFilter - (Optional) Filters buses by parameter.\n\x09 * @param Value - Target value to mix filtered stages to.\n\x09 * @param FadeTime - If non-negative, updates the fade time for the resulting bus stages found matching the provided filter.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "CPP_Default_Value", "1.000000" },
		{ "DisplayName", "Set Control Bus Mix By Filter" },
		{ "Keywords", "control class modulation modulator stage value" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Sets filtered stages of a given class to a provided target value for active instance of mix.\nDoes not update UObject definition of mix.\n@param Mix - Mix to modify\n@param AddressFilter - (Optional) Address filter to apply to provided mix's stages.\n@param ParamClassFilter - (Optional) Filters buses by parameter class.\n@param ParamFilter - (Optional) Filters buses by parameter.\n@param Value - Target value to mix filtered stages to.\n@param FadeTime - If non-negative, updates the fade time for the resulting bus stages found matching the provided filter." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "UpdateMixByFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::AtomModulationStatics_eventUpdateMixByFilter_Parms), Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics
	{
		struct AtomModulationStatics_eventUpdateMixFromObject_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulationControlBusMix* Mix;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixFromObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixFromObject_Parms, Mix), Z_Construct_UClass_UAtomModulationControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateMixFromObject_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Commits updates from a UObject definition of a bus mix to active instance in audio thread\n\x09 * (ignored if mix has not been activated).\n\x09 * @param Mix - Mix to update\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If negative, falls back to last fade time set on stage. If fade time never set on stage,\n\x09 *\x09\x09\x09\x09\x09 uses attack time set on stage in mix asset.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Update Control Bus Mix" },
		{ "Keywords", "set modulation modulator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Commits updates from a UObject definition of a bus mix to active instance in audio thread\n(ignored if mix has not been activated).\n@param Mix - Mix to update\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If negative, falls back to last fade time set on stage. If fade time never set on stage,\n                                     uses attack time set on stage in mix asset." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "UpdateMixFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::AtomModulationStatics_eventUpdateMixFromObject_Parms), Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics
	{
		struct AtomModulationStatics_eventUpdateModulator_Parms
		{
			const UObject* WorldContextObject;
			UAtomModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateModulator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomModulationStatics_eventUpdateModulator_Parms, Modulator), Z_Construct_UClass_UAtomModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Commits updates from a UObject definition of a modulator (e.g. Bus, Bus Mix, Generator)\n\x09 *  to active instance in audio thread (ignored if modulator type has not been activated).\n\x09 * @param Modulator - Modulator to update\n\x09 */" },
		{ "DisplayName", "Update Modulator" },
		{ "Keywords", "set control bus mix modulation modulator generator" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
		{ "ToolTip", "Commits updates from a UObject definition of a modulator (e.g. Bus, Bus Mix, Generator)\nto active instance in audio thread (ignored if modulator type has not been activated).\n@param Modulator - Modulator to update" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomModulationStatics, nullptr, "UpdateModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::AtomModulationStatics_eventUpdateModulator_Parms), Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationStatics);
	UClass* Z_Construct_UClass_UAtomModulationStatics_NoRegister()
	{
		return UAtomModulationStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomModulationStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomModulationStatics_ActivateBus, "ActivateBus" }, // 2974015807
		{ &Z_Construct_UFunction_UAtomModulationStatics_ActivateBusMix, "ActivateBusMix" }, // 593687267
		{ &Z_Construct_UFunction_UAtomModulationStatics_ActivateGenerator, "ActivateGenerator" }, // 237959659
		{ &Z_Construct_UFunction_UAtomModulationStatics_ClearAllGlobalBusMixValues, "ClearAllGlobalBusMixValues" }, // 1575694109
		{ &Z_Construct_UFunction_UAtomModulationStatics_ClearGlobalBusMixValue, "ClearGlobalBusMixValue" }, // 1517292885
		{ &Z_Construct_UFunction_UAtomModulationStatics_CreateBus, "CreateBus" }, // 4228775683
		{ &Z_Construct_UFunction_UAtomModulationStatics_CreateBusMix, "CreateBusMix" }, // 2485554373
		{ &Z_Construct_UFunction_UAtomModulationStatics_CreateBusMixStage, "CreateBusMixStage" }, // 1552220814
		{ &Z_Construct_UFunction_UAtomModulationStatics_DeactivateBus, "DeactivateBus" }, // 1405599794
		{ &Z_Construct_UFunction_UAtomModulationStatics_DeactivateBusMix, "DeactivateBusMix" }, // 3368460886
		{ &Z_Construct_UFunction_UAtomModulationStatics_DeactivateGenerator, "DeactivateGenerator" }, // 2754775084
		{ &Z_Construct_UFunction_UAtomModulationStatics_SetGlobalBusMixValue, "SetGlobalBusMixValue" }, // 1630936790
		{ &Z_Construct_UFunction_UAtomModulationStatics_UpdateMix, "UpdateMix" }, // 3317001228
		{ &Z_Construct_UFunction_UAtomModulationStatics_UpdateMixByFilter, "UpdateMixByFilter" }, // 2247563527
		{ &Z_Construct_UFunction_UAtomModulationStatics_UpdateMixFromObject, "UpdateMixFromObject" }, // 4201542027
		{ &Z_Construct_UFunction_UAtomModulationStatics_UpdateModulator, "UpdateModulator" }, // 3229644676
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atom/Modulation/AtomModulationStatics.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationStatics_Statics::ClassParams = {
		&UAtomModulationStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationStatics.OuterSingleton, Z_Construct_UClass_UAtomModulationStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationStatics>()
	{
		return UAtomModulationStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationStatics);
	UAtomModulationStatics::~UAtomModulationStatics() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationStatics, UAtomModulationStatics::StaticClass, TEXT("UAtomModulationStatics"), &Z_Registration_Info_UClass_UAtomModulationStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationStatics), 2064938289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_2817803044(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
