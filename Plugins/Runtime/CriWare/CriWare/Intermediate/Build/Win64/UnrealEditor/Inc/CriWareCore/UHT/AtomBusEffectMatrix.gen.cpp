// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Effects/AtomBusEffectMatrix.h"
#include "CriWareCore/Public/Atom/AtomBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusEffectMatrix() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMatrixPreset();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMatrixPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMatrixStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectMatrixStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpeaker();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomChannelLevelMatrix();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings;
class UScriptStruct* FAtomBusEffectMatrixSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectMatrixSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectMatrixSettings>()
{
	return FAtomBusEffectMatrixSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n  * FAtomBusEffectMatrixSettings Structure\n  *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ToolTip", "* FAtomBusEffectMatrixSettings Structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectMatrixSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_LevelMatrix_MetaData[] = {
		{ "Category", "Matrix" },
		{ "Comment", "/** Specifies the level matrix to apply to each channels. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Specifies the level matrix to apply to each channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_LevelMatrix = { "LevelMatrix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectMatrixSettings, LevelMatrix), Z_Construct_UScriptStruct_FAtomChannelLevelMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_LevelMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_LevelMatrix_MetaData)) }; // 1712673019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectMatrixSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectMatrixSettings), &Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_LevelMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectMatrixSettings",
		sizeof(FAtomBusEffectMatrixSettings),
		alignof(FAtomBusEffectMatrixSettings),
		Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomBusEffectMatrixStatics::execSetBypass)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMatrixSettings,Z_Param_Out_MatrixSettings);
		P_GET_UBOOL(Z_Param_bBypass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMatrixSettings*)Z_Param__Result=UAtomBusEffectMatrixStatics::SetBypass(Z_Param_Out_MatrixSettings,Z_Param_bBypass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMatrixStatics::execSetLevelMatrix)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMatrixSettings,Z_Param_Out_MatrixSettings);
		P_GET_STRUCT_REF(FAtomChannelLevelMatrix,Z_Param_Out_LevelMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomBusEffectMatrixSettings*)Z_Param__Result=UAtomBusEffectMatrixStatics::SetLevelMatrix(Z_Param_Out_MatrixSettings,Z_Param_Out_LevelMatrix);
		P_NATIVE_END;
	}
	void UAtomBusEffectMatrixStatics::StaticRegisterNativesUAtomBusEffectMatrixStatics()
	{
		UClass* Class = UAtomBusEffectMatrixStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBypass", &UAtomBusEffectMatrixStatics::execSetBypass },
			{ "SetLevelMatrix", &UAtomBusEffectMatrixStatics::execSetLevelMatrix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics
	{
		struct AtomBusEffectMatrixStatics_eventSetBypass_Parms
		{
			FAtomBusEffectMatrixSettings MatrixSettings;
			bool bBypass;
			FAtomBusEffectMatrixSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatrixSettings;
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_MatrixSettings = { "MatrixSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixStatics_eventSetBypass_Parms, MatrixSettings), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(nullptr, 0) }; // 2688321078
	void Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((AtomBusEffectMatrixStatics_eventSetBypass_Parms*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomBusEffectMatrixStatics_eventSetBypass_Parms), &Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixStatics_eventSetBypass_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(nullptr, 0) }; // 2688321078
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_MatrixSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Matrix" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMatrixStatics, nullptr, "SetBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::AtomBusEffectMatrixStatics_eventSetBypass_Parms), Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics
	{
		struct AtomBusEffectMatrixStatics_eventSetLevelMatrix_Parms
		{
			FAtomBusEffectMatrixSettings MatrixSettings;
			FAtomChannelLevelMatrix LevelMatrix;
			FAtomBusEffectMatrixSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatrixSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelMatrix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_MatrixSettings = { "MatrixSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixStatics_eventSetLevelMatrix_Parms, MatrixSettings), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(nullptr, 0) }; // 2688321078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_LevelMatrix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_LevelMatrix = { "LevelMatrix", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixStatics_eventSetLevelMatrix_Parms, LevelMatrix), Z_Construct_UScriptStruct_FAtomChannelLevelMatrix, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_LevelMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_LevelMatrix_MetaData)) }; // 1712673019
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixStatics_eventSetLevelMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(nullptr, 0) }; // 2688321078
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_MatrixSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_LevelMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Matrix" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMatrixStatics, nullptr, "SetLevelMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::AtomBusEffectMatrixStatics_eventSetLevelMatrix_Parms), Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectMatrixStatics);
	UClass* Z_Construct_UClass_UAtomBusEffectMatrixStatics_NoRegister()
	{
		return UAtomBusEffectMatrixStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetBypass, "SetBypass" }, // 3786182201
		{ &Z_Construct_UFunction_UAtomBusEffectMatrixStatics_SetLevelMatrix, "SetLevelMatrix" }, // 2278593842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectMatrixStatics Blueprint Library\n * Helper for blueprint.\n *****************************************************************************/" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ToolTip", "* UAtomBusEffectMatrixStatics Blueprint Library\n* Helper for blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectMatrixStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::ClassParams = {
		&UAtomBusEffectMatrixStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectMatrixStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectMatrixStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectMatrixStatics.OuterSingleton, Z_Construct_UClass_UAtomBusEffectMatrixStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectMatrixStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectMatrixStatics>()
	{
		return UAtomBusEffectMatrixStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectMatrixStatics);
	UAtomBusEffectMatrixStatics::~UAtomBusEffectMatrixStatics() {}
	DEFINE_FUNCTION(UAtomBusEffectMatrixPreset::execSetChannelLevel)
	{
		P_GET_ENUM(EAtomSpeaker,Z_Param_InChannel);
		P_GET_ENUM(EAtomSpeaker,Z_Param_OutChannel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChannelLevel(EAtomSpeaker(Z_Param_InChannel),EAtomSpeaker(Z_Param_OutChannel),Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMatrixPreset::execSetLevelMatrix)
	{
		P_GET_STRUCT_REF(FAtomChannelLevelMatrix,Z_Param_Out_LevelMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelMatrix(Z_Param_Out_LevelMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMatrixPreset::execSetDefaultSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMatrixSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusEffectMatrixPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FAtomBusEffectMatrixSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UAtomBusEffectMatrixPreset::StaticRegisterNativesUAtomBusEffectMatrixPreset()
	{
		UClass* Class = UAtomBusEffectMatrixPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChannelLevel", &UAtomBusEffectMatrixPreset::execSetChannelLevel },
			{ "SetDefaultSettings", &UAtomBusEffectMatrixPreset::execSetDefaultSettings },
			{ "SetLevelMatrix", &UAtomBusEffectMatrixPreset::execSetLevelMatrix },
			{ "SetSettings", &UAtomBusEffectMatrixPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics
	{
		struct AtomBusEffectMatrixPreset_eventSetChannelLevel_Parms
		{
			EAtomSpeaker InChannel;
			EAtomSpeaker OutChannel;
			float Level;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InChannel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutChannel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_InChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixPreset_eventSetChannelLevel_Parms, InChannel), Z_Construct_UEnum_CriWareCore_EAtomSpeaker, METADATA_PARAMS(nullptr, 0) }; // 3354578248
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_OutChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_OutChannel = { "OutChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixPreset_eventSetChannelLevel_Parms, OutChannel), Z_Construct_UEnum_CriWareCore_EAtomSpeaker, METADATA_PARAMS(nullptr, 0) }; // 3354578248
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixPreset_eventSetChannelLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_InChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_OutChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_OutChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Matrix" },
		{ "Comment", "// Set only one channel level.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ToolTip", "Set only one channel level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMatrixPreset, nullptr, "SetChannelLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::AtomBusEffectMatrixPreset_eventSetChannelLevel_Parms), Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics
	{
		struct AtomBusEffectMatrixPreset_eventSetDefaultSettings_Parms
		{
			FAtomBusEffectMatrixSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::NewProp_InSettings_MetaData)) }; // 2688321078
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Matrix" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMatrixPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::AtomBusEffectMatrixPreset_eventSetDefaultSettings_Parms), Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics
	{
		struct AtomBusEffectMatrixPreset_eventSetLevelMatrix_Parms
		{
			FAtomChannelLevelMatrix LevelMatrix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelMatrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::NewProp_LevelMatrix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::NewProp_LevelMatrix = { "LevelMatrix", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixPreset_eventSetLevelMatrix_Parms, LevelMatrix), Z_Construct_UScriptStruct_FAtomChannelLevelMatrix, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::NewProp_LevelMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::NewProp_LevelMatrix_MetaData)) }; // 1712673019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::NewProp_LevelMatrix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects|Matrix" },
		{ "Comment", "// Set the channel level matrix.\n" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ToolTip", "Set the channel level matrix." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMatrixPreset, nullptr, "SetLevelMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::AtomBusEffectMatrixPreset_eventSetLevelMatrix_Parms), Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics
	{
		struct AtomBusEffectMatrixPreset_eventSetSettings_Parms
		{
			FAtomBusEffectMatrixSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomBusEffectMatrixPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2688321078
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Atom|Effects|Matrix" },
		{ "Comment", "// Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ToolTip", "Sets runtime reverb settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusEffectMatrixPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::AtomBusEffectMatrixPreset_eventSetSettings_Parms), Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomBusEffectMatrixPreset);
	UClass* Z_Construct_UClass_UAtomBusEffectMatrixPreset_NoRegister()
	{
		return UAtomBusEffectMatrixPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomBusEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetChannelLevel, "SetChannelLevel" }, // 3367408344
		{ &Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetDefaultSettings, "SetDefaultSettings" }, // 2782289362
		{ &Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetLevelMatrix, "SetLevelMatrix" }, // 2160659714
		{ &Z_Construct_UFunction_UAtomBusEffectMatrixPreset_SetSettings, "SetSettings" }, // 3669473399
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UAtomBusEffectMatrixPreset Class\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* UAtomBusEffectMatrixPreset Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "BusEffectPreset" },
		{ "Comment", "/** The reverb preset Settings. */" },
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The reverb preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectMatrixPreset, Settings), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_Settings_MetaData)) }; // 2688321078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/Effects/AtomBusEffectMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomBusEffectMatrixPreset, DynamicSettings), Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_DynamicSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_DynamicSettings_MetaData)) }; // 2688321078
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::NewProp_DynamicSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusEffectMatrixPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::ClassParams = {
		&UAtomBusEffectMatrixPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusEffectMatrixPreset()
	{
		if (!Z_Registration_Info_UClass_UAtomBusEffectMatrixPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomBusEffectMatrixPreset.OuterSingleton, Z_Construct_UClass_UAtomBusEffectMatrixPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomBusEffectMatrixPreset.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomBusEffectMatrixPreset>()
	{
		return UAtomBusEffectMatrixPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusEffectMatrixPreset);
	UAtomBusEffectMatrixPreset::~UAtomBusEffectMatrixPreset() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusEffectMatrixSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectMatrixSettings_Statics::NewStructOps, TEXT("AtomBusEffectMatrixSettings"), &Z_Registration_Info_UScriptStruct_AtomBusEffectMatrixSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectMatrixSettings), 2688321078U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomBusEffectMatrixStatics, UAtomBusEffectMatrixStatics::StaticClass, TEXT("UAtomBusEffectMatrixStatics"), &Z_Registration_Info_UClass_UAtomBusEffectMatrixStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectMatrixStatics), 2852991813U) },
		{ Z_Construct_UClass_UAtomBusEffectMatrixPreset, UAtomBusEffectMatrixPreset::StaticClass, TEXT("UAtomBusEffectMatrixPreset"), &Z_Registration_Info_UClass_UAtomBusEffectMatrixPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomBusEffectMatrixPreset), 2980291008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_446346101(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Effects_AtomBusEffectMatrix_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
