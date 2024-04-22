// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomParameter() {}
// Cross Module References
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomParameterType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomParameter();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelector();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomParameterType;
	static UEnum* EAtomParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomParameterType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomParameterType"));
		}
		return Z_Registration_Info_UEnum_EAtomParameterType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomParameterType>()
	{
		return EAtomParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::Enumerators[] = {
		{ "EAtomParameterType::None", (int64)EAtomParameterType::None },
		{ "EAtomParameterType::Boolean", (int64)EAtomParameterType::Boolean },
		{ "EAtomParameterType::Integer", (int64)EAtomParameterType::Integer },
		{ "EAtomParameterType::Float", (int64)EAtomParameterType::Float },
		{ "EAtomParameterType::String", (int64)EAtomParameterType::String },
		{ "EAtomParameterType::Aisac", (int64)EAtomParameterType::Aisac },
		{ "EAtomParameterType::NoneArray", (int64)EAtomParameterType::NoneArray },
		{ "EAtomParameterType::BooleanArray", (int64)EAtomParameterType::BooleanArray },
		{ "EAtomParameterType::IntegerArray", (int64)EAtomParameterType::IntegerArray },
		{ "EAtomParameterType::FloatArray", (int64)EAtomParameterType::FloatArray },
		{ "EAtomParameterType::StringArray", (int64)EAtomParameterType::StringArray },
		{ "EAtomParameterType::COUNT", (int64)EAtomParameterType::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::Enum_MetaDataParams[] = {
		{ "Aisac.Comment", "// Aisac Value (for AtomSoundCue system)\n" },
		{ "Aisac.DisplayName", "AISAC" },
		{ "Aisac.Name", "EAtomParameterType::Aisac" },
		{ "Aisac.ToolTip", "Aisac Value (for AtomSoundCue system)" },
		{ "Boolean.Comment", "// Boolean value\n" },
		{ "Boolean.Name", "EAtomParameterType::Boolean" },
		{ "Boolean.ToolTip", "Boolean value" },
		{ "BooleanArray.Comment", "// Array of boolean values (for MetaSound system)\n" },
		{ "BooleanArray.DisplayName", "Boolean (Array)" },
		{ "BooleanArray.Name", "EAtomParameterType::BooleanArray" },
		{ "BooleanArray.ToolTip", "Array of boolean values (for MetaSound system)" },
		{ "COUNT.Comment", "// Array of object values (for MetaSound system)\n//ObjectArray UMETA(DisplayName = \"Object (Array)\"),\n" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EAtomParameterType::COUNT" },
		{ "COUNT.ToolTip", "Array of object values (for MetaSound system)\nObjectArray UMETA(DisplayName = \"Object (Array)\")," },
		{ "Float.Comment", "// Float value\n" },
		{ "Float.Name", "EAtomParameterType::Float" },
		{ "Float.ToolTip", "Float value" },
		{ "FloatArray.Comment", "// Array of float values (for MetaSound system)\n" },
		{ "FloatArray.DisplayName", "Float (Array)" },
		{ "FloatArray.Name", "EAtomParameterType::FloatArray" },
		{ "FloatArray.ToolTip", "Array of float values (for MetaSound system)" },
		{ "Integer.Comment", "// Integer value\n" },
		{ "Integer.Name", "EAtomParameterType::Integer" },
		{ "Integer.ToolTip", "Integer value" },
		{ "IntegerArray.Comment", "// Array of integer values (for MetaSound system)\n" },
		{ "IntegerArray.DisplayName", "Integer (Array)" },
		{ "IntegerArray.Name", "EAtomParameterType::IntegerArray" },
		{ "IntegerArray.ToolTip", "Array of integer values (for MetaSound system)" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "None.Comment", "// 'Default' results in behavior that is resolved\n// based on the system interpreting it. \n// AtomSoundCues use type associated with a given \n// parameter name, whereas MetaSounds\n// only use the last typed value set.\n" },
		{ "None.DisplayName", "Default" },
		{ "None.Name", "EAtomParameterType::None" },
		{ "None.ToolTip", "'Default' results in behavior that is resolved\nbased on the system interpreting it.\nAtomSoundCues use type associated with a given\nparameter name, whereas MetaSounds\nonly use the last typed value set." },
		{ "NoneArray.Comment", "// Array of default initialized values (for MetaSound system)\n// Hidden for now as no parameter types exist that support default construction\n" },
		{ "NoneArray.DisplayName", "Default (Array)" },
		{ "NoneArray.Hidden", "" },
		{ "NoneArray.Name", "EAtomParameterType::NoneArray" },
		{ "NoneArray.ToolTip", "Array of default initialized values (for MetaSound system)\nHidden for now as no parameter types exist that support default construction" },
		{ "String.Comment", "// String value\n" },
		{ "String.Name", "EAtomParameterType::String" },
		{ "String.ToolTip", "String value" },
		{ "StringArray.Comment", "// Array of string values (for MetaSound system)\n" },
		{ "StringArray.DisplayName", "String (Array)" },
		{ "StringArray.Name", "EAtomParameterType::StringArray" },
		{ "StringArray.ToolTip", "Array of string values (for MetaSound system)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomParameterType",
		"EAtomParameterType",
		Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomParameterType()
	{
		if (!Z_Registration_Info_UEnum_EAtomParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomParameterType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomParameterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomParameter;
class UScriptStruct* FAtomParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomParameter, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomParameter"));
	}
	return Z_Registration_Info_UScriptStruct_AtomParameter.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomParameter>()
{
	return FAtomParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParam_MetaData[];
#endif
		static void NewProp_BoolParam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntParam_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringParam_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringParam;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrayFloatParam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayFloatParam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayFloatParam;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ArrayBoolParam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayBoolParam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayBoolParam;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIntParam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIntParam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayIntParam;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArrayStringParam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayStringParam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayStringParam;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// Name of the parameter\n" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Name of the parameter" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_FloatParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// Float value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Float)" },
		{ "EditCondition", "ParamType == EAtomParameterType::None || ParamType == EAtomParameterType::Float" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Float value of parameter" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_FloatParam = { "FloatParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, FloatParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_FloatParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_FloatParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_BoolParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// Boolean value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Bool)" },
		{ "EditCondition", "ParamType == EAtomParameterType::None || ParamType == EAtomParameterType::Boolean" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Boolean value of parameter" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_BoolParam_SetBit(void* Obj)
	{
		((FAtomParameter*)Obj)->BoolParam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_BoolParam = { "BoolParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomParameter), &Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_BoolParam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_BoolParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_BoolParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_IntParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// Integer value of parameter. If set to 'Default Construct', value is number of array items to construct.\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Int)" },
		{ "EditCondition", "ParamType == EAtomParameterType::None || ParamType == EAtomParameterType::Integer || ParamType == EAtomParameterType::NoneArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Integer value of parameter. If set to 'Default Construct', value is number of array items to construct." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_IntParam = { "IntParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, IntParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_IntParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_IntParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_StringParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// String value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (String)" },
		{ "EditCondition", "ParamType == EAtomParameterType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "String value of parameter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_StringParam = { "StringParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, StringParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_StringParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_StringParam_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayFloatParam_Inner = { "ArrayFloatParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayFloatParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// Array Float value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Float Array)" },
		{ "EditCondition", "ParamType == EAtomParameterType::FloatArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Array Float value of parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayFloatParam = { "ArrayFloatParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, ArrayFloatParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayFloatParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayFloatParam_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayBoolParam_Inner = { "ArrayBoolParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayBoolParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// Boolean value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Bool Array)" },
		{ "EditCondition", "ParamType == EAtomParameterType::BooleanArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Boolean value of parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayBoolParam = { "ArrayBoolParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, ArrayBoolParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayBoolParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayBoolParam_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayIntParam_Inner = { "ArrayIntParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayIntParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// Integer value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Int Array)" },
		{ "EditCondition", "ParamType == EAtomParameterType::IntegerArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Integer value of parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayIntParam = { "ArrayIntParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, ArrayIntParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayIntParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayIntParam_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayStringParam_Inner = { "ArrayStringParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayStringParam_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "Comment", "// String value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (String Array)" },
		{ "EditCondition", "ParamType == EAtomParameterType::StringArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "String value of parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayStringParam = { "ArrayStringParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, ArrayStringParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayStringParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayStringParam_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamType_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, ParamType), Z_Construct_UEnum_CriWareCore_EAtomParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamType_MetaData)) }; // 2428380659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_TypeName_MetaData[] = {
		{ "Comment", "// Optional TypeName used to describe what constructed type this parameter should be initializing.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Optional TypeName used to describe what constructed type this parameter should be initializing." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomParameter, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_TypeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_FloatParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_BoolParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_IntParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_StringParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayFloatParam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayFloatParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayBoolParam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayBoolParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayIntParam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayIntParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayStringParam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ArrayStringParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_ParamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomParameter_Statics::NewProp_TypeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomParameter",
		sizeof(FAtomParameter),
		alignof(FAtomParameter),
		Z_Construct_UScriptStruct_FAtomParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomParameter.InnerSingleton, Z_Construct_UScriptStruct_FAtomParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSelector;
class UScriptStruct* FAtomSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelector, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSelector"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSelector.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSelector>()
{
	return FAtomSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Labels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Describe an Atom selector with its labels." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "The selector name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelector, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Labels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "The list of labels contained in this selector." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelector, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Labels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Labels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Labels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelector_Statics::NewProp_Labels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSelector",
		sizeof(FAtomSelector),
		alignof(FAtomSelector),
		Z_Construct_UScriptStruct_FAtomSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSelector.InnerSingleton, Z_Construct_UScriptStruct_FAtomSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSelector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSelectorParam;
class UScriptStruct* FAtomSelectorParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSelectorParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSelectorParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorParam, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSelectorParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSelectorParam.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSelectorParam>()
{
	return FAtomSelectorParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSelectorParam_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
		{ "ToolTip", "Structure to setup a selector label as parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Public/Atom/AtomParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorParam, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSelectorParam",
		sizeof(FAtomSelectorParam),
		alignof(FAtomSelectorParam),
		Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSelectorParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSelectorParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSelectorParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_Statics::EnumInfo[] = {
		{ EAtomParameterType_StaticEnum, TEXT("EAtomParameterType"), &Z_Registration_Info_UEnum_EAtomParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2428380659U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_Statics::ScriptStructInfo[] = {
		{ FAtomParameter::StaticStruct, Z_Construct_UScriptStruct_FAtomParameter_Statics::NewStructOps, TEXT("AtomParameter"), &Z_Registration_Info_UScriptStruct_AtomParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomParameter), 1610218692U) },
		{ FAtomSelector::StaticStruct, Z_Construct_UScriptStruct_FAtomSelector_Statics::NewStructOps, TEXT("AtomSelector"), &Z_Registration_Info_UScriptStruct_AtomSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSelector), 1772791025U) },
		{ FAtomSelectorParam::StaticStruct, Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewStructOps, TEXT("AtomSelectorParam"), &Z_Registration_Info_UScriptStruct_AtomSelectorParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSelectorParam), 3545014898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_773550086(TEXT("/Script/CriWareCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomParameter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
