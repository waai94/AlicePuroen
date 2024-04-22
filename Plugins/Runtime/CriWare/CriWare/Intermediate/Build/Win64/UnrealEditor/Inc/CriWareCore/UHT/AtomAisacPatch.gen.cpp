// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomAisacPatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacPatch() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacPatch();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacPatch_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConfig_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControl();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacControl;
class UScriptStruct* FAtomAisacControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControl, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAisacControl"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacControl.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAisacControl>()
{
	return FAtomAisacControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAisacControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct that define an AISAC control. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Struct that define an AISAC control." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** Name of the AISAC control. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Name of the AISAC control." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControl, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** Unique Atom Craft ID of the AISAC control. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Unique Atom Craft ID of the AISAC control." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControl, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomAisacControl",
		sizeof(FAtomAisacControl),
		alignof(FAtomAisacControl),
		Z_Construct_UScriptStruct_FAtomAisacControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControl()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAisacControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacControl.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAisacControl.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomAisacPatch::execGetConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomConfig**)Z_Param__Result=P_THIS->GetConfig();
		P_NATIVE_END;
	}
	void UAtomAisacPatch::StaticRegisterNativesUAtomAisacPatch()
	{
		UClass* Class = UAtomAisacPatch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConfig", &UAtomAisacPatch::execGetConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics
	{
		struct AtomAisacPatch_eventGetConfig_Parms
		{
			UAtomConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAisacPatch_eventGetConfig_Parms, ReturnValue), Z_Construct_UClass_UAtomConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Gets the Atom configuaration this AISAC patch belong to. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Gets the Atom configuaration this AISAC patch belong to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAisacPatch, nullptr, "GetConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::AtomAisacPatch_eventGetConfig_Parms), Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAisacPatch_GetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAisacPatch_GetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAisacPatch);
	UClass* Z_Construct_UClass_UAtomAisacPatch_NoRegister()
	{
		return UAtomAisacPatch::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAisacPatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlFlag_MetaData[];
#endif
		static void NewProp_DefaultControlFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultControlFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultControlValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Control;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAisacPatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomAisacPatch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomAisacPatch_GetConfig, "GetConfig" }, // 1512685696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacPatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class to fully define an AISAC patch. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomAisacPatch.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Class to fully define an AISAC patch." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** Name of AISAC patch. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Name of AISAC patch." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAisacPatch, Name), METADATA_PARAMS(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlFlag_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** Flag wether a control value is specified. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Flag wether a control value is specified." },
	};
#endif
	void Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlFlag_SetBit(void* Obj)
	{
		((UAtomAisacPatch*)Obj)->DefaultControlFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlFlag = { "DefaultControlFlag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomAisacPatch), &Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlValue_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** Default control value when specified. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "Default control value when specified." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlValue = { "DefaultControlValue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAisacPatch, DefaultControlValue), METADATA_PARAMS(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Control_MetaData[] = {
		{ "Category", "AISAC" },
		{ "Comment", "/** The control used */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAisacPatch.h" },
		{ "ToolTip", "The control used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAisacPatch, Control), Z_Construct_UScriptStruct_FAtomAisacControl, METADATA_PARAMS(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Control_MetaData)) }; // 2456867995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAisacPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_DefaultControlValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAisacPatch_Statics::NewProp_Control,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAisacPatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAisacPatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAisacPatch_Statics::ClassParams = {
		&UAtomAisacPatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomAisacPatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatch_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAisacPatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAisacPatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAisacPatch()
	{
		if (!Z_Registration_Info_UClass_UAtomAisacPatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAisacPatch.OuterSingleton, Z_Construct_UClass_UAtomAisacPatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAisacPatch.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAisacPatch>()
	{
		return UAtomAisacPatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAisacPatch);
	UAtomAisacPatch::~UAtomAisacPatch() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_Statics::ScriptStructInfo[] = {
		{ FAtomAisacControl::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacControl_Statics::NewStructOps, TEXT("AtomAisacControl"), &Z_Registration_Info_UScriptStruct_AtomAisacControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacControl), 2456867995U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAisacPatch, UAtomAisacPatch::StaticClass, TEXT("UAtomAisacPatch"), &Z_Registration_Info_UClass_UAtomAisacPatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAisacPatch), 2326990424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_3004193045(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAisacPatch_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
