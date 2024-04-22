// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/CriWare.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWare() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConfig_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWare();
	CRIWARECORE_API UClass* Z_Construct_UClass_UCriWare_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UCriWare::execGetAtomConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UAtomConfig**)Z_Param__Result=P_THIS->GetAtomConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWare::execResetAtomConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAtomConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWare::execSetAtomConfiguration)
	{
		P_GET_OBJECT(UAtomConfig,Z_Param_InAtomConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAtomConfiguration(Z_Param_InAtomConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWare::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWare::execUninitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Uninitialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWare::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Initialize();
		P_NATIVE_END;
	}
	void UCriWare::StaticRegisterNativesUCriWare()
	{
		UClass* Class = UCriWare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtomConfiguration", &UCriWare::execGetAtomConfiguration },
			{ "Initialize", &UCriWare::execInitialize },
			{ "IsInitialized", &UCriWare::execIsInitialized },
			{ "ResetAtomConfiguration", &UCriWare::execResetAtomConfiguration },
			{ "SetAtomConfiguration", &UCriWare::execSetAtomConfiguration },
			{ "Uninitialize", &UCriWare::execUninitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics
	{
		struct CriWare_eventGetAtomConfiguration_Parms
		{
			const UAtomConfig* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriWare_eventGetAtomConfiguration_Parms, ReturnValue), Z_Construct_UClass_UAtomConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
		{ "Tooltip", "The currently registered AtomConfig." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWare, nullptr, "GetAtomConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::CriWare_eventGetAtomConfiguration_Parms), Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWare_GetAtomConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWare_GetAtomConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWare_Initialize_Statics
	{
		struct CriWare_eventInitialize_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCriWare_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CriWare_eventInitialize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCriWare_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CriWare_eventInitialize_Parms), &Z_Construct_UFunction_UCriWare_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWare_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWare_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "CriWare" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWare_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWare, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriWare_Initialize_Statics::CriWare_eventInitialize_Parms), Z_Construct_UFunction_UCriWare_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWare_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWare_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWare_IsInitialized_Statics
	{
		struct CriWare_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCriWare_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CriWare_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCriWare_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CriWare_eventIsInitialized_Parms), &Z_Construct_UFunction_UCriWare_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWare_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWare_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "CriWare" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWare_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWare, nullptr, "IsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriWare_IsInitialized_Statics::CriWare_eventIsInitialized_Parms), Z_Construct_UFunction_UCriWare_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWare_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWare_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWare_ResetAtomConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_ResetAtomConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
		{ "Tooltip", "Unregister current AtomConfig data from Atom library." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWare_ResetAtomConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWare, nullptr, "ResetAtomConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_ResetAtomConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_ResetAtomConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWare_ResetAtomConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWare_ResetAtomConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics
	{
		struct CriWare_eventSetAtomConfiguration_Parms
		{
			const UAtomConfig* InAtomConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAtomConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAtomConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_InAtomConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_InAtomConfig = { "InAtomConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriWare_eventSetAtomConfiguration_Parms, InAtomConfig), Z_Construct_UClass_UAtomConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_InAtomConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_InAtomConfig_MetaData)) };
	void Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CriWare_eventSetAtomConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CriWare_eventSetAtomConfiguration_Parms), &Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_InAtomConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
		{ "Tooltip", "Registers AtomConfig data to Atom library." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWare, nullptr, "SetAtomConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::CriWare_eventSetAtomConfiguration_Parms), Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWare_SetAtomConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWare_SetAtomConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWare_Uninitialize_Statics
	{
		struct CriWare_eventUninitialize_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCriWare_Uninitialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CriWare_eventUninitialize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCriWare_Uninitialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CriWare_eventUninitialize_Parms), &Z_Construct_UFunction_UCriWare_Uninitialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWare_Uninitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWare_Uninitialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWare_Uninitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "CriWare" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWare_Uninitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWare, nullptr, "Uninitialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriWare_Uninitialize_Statics::CriWare_eventUninitialize_Parms), Z_Construct_UFunction_UCriWare_Uninitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_Uninitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWare_Uninitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWare_Uninitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWare_Uninitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWare_Uninitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWare);
	UClass* Z_Construct_UClass_UCriWare_NoRegister()
	{
		return UCriWare::StaticClass();
	}
	struct Z_Construct_UClass_UCriWare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriWare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriWare_GetAtomConfiguration, "GetAtomConfiguration" }, // 1067520633
		{ &Z_Construct_UFunction_UCriWare_Initialize, "Initialize" }, // 637224922
		{ &Z_Construct_UFunction_UCriWare_IsInitialized, "IsInitialized" }, // 116509866
		{ &Z_Construct_UFunction_UCriWare_ResetAtomConfiguration, "ResetAtomConfiguration" }, // 594159277
		{ &Z_Construct_UFunction_UCriWare_SetAtomConfiguration, "SetAtomConfiguration" }, // 1206907690
		{ &Z_Construct_UFunction_UCriWare_Uninitialize, "Uninitialize" }, // 2042513104
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Main UObject class for CriWare.\n * Interface to CriWare libraries and global features.\n */" },
		{ "IncludePath", "CriWare.h" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
		{ "ToolTip", "Main UObject class for CriWare.\nInterface to CriWare libraries and global features." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWare_Statics::NewProp_AtomConfig_MetaData[] = {
		{ "BlueprintGetter", "GetAtomConfiguration" },
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/CriWare.h" },
		{ "NativeConstTemplateArg", "" },
		{ "Tooltip", "The Atom configuration currently used by Atom." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCriWare_Statics::NewProp_AtomConfig = { "AtomConfig", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWare, AtomConfig), Z_Construct_UClass_UAtomConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWare_Statics::NewProp_AtomConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWare_Statics::NewProp_AtomConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWare_Statics::NewProp_AtomConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWare>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWare_Statics::ClassParams = {
		&UCriWare::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriWare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWare_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWare()
	{
		if (!Z_Registration_Info_UClass_UCriWare.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWare.OuterSingleton, Z_Construct_UClass_UCriWare_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWare.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UCriWare>()
	{
		return UCriWare::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWare);
	UCriWare::~UCriWare() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWare_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWare_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWare, UCriWare::StaticClass, TEXT("UCriWare"), &Z_Registration_Info_UClass_UCriWare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWare), 2775035685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWare_h_4264275656(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWare_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_CriWare_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
