// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomCueSheet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueSheet() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomCueSheet();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomCueSheet_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBank();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundCue_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWaveBank_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomCueSheet::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCueSheet::execGetSoundCueByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomSoundCue**)Z_Param__Result=P_THIS->GetSoundCueByName(Z_Param_CueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCueSheet::execGetSoundCue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomSoundCue**)Z_Param__Result=P_THIS->GetSoundCue(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCueSheet::execGetNumCues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCueSheet::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	void UAtomCueSheet::StaticRegisterNativesUAtomCueSheet()
	{
		UClass* Class = UAtomCueSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumCues", &UAtomCueSheet::execGetNumCues },
			{ "GetSoundCue", &UAtomCueSheet::execGetSoundCue },
			{ "GetSoundCueByName", &UAtomCueSheet::execGetSoundCueByName },
			{ "IsLoaded", &UAtomCueSheet::execIsLoaded },
			{ "Validate", &UAtomCueSheet::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics
	{
		struct AtomCueSheet_eventGetNumCues_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheet_eventGetNumCues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|CueSheet" },
		{ "Comment", "/**\n\x09 * Gets the number of wave in this bank.\n\x09 *\n\x09 * @return The number of waves.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
		{ "ToolTip", "Gets the number of wave in this bank.\n\n@return The number of waves." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheet, nullptr, "GetNumCues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::AtomCueSheet_eventGetNumCues_Parms), Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheet_GetNumCues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheet_GetNumCues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics
	{
		struct AtomCueSheet_eventGetSoundCue_Parms
		{
			int32 Index;
			UAtomSoundCue* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheet_eventGetSoundCue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheet_eventGetSoundCue_Parms, ReturnValue), Z_Construct_UClass_UAtomSoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|CueSheet" },
		{ "Comment", "/**\n\x09 * Gets the cue object from this bank at choosen index.\n\x09 *\n\x09 * @return The UAtomSoundCue at the index in the bank or nullptr if an invalid index was provided.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
		{ "ToolTip", "Gets the cue object from this bank at choosen index.\n\n@return The UAtomSoundCue at the index in the bank or nullptr if an invalid index was provided." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheet, nullptr, "GetSoundCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::AtomCueSheet_eventGetSoundCue_Parms), Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheet_GetSoundCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheet_GetSoundCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics
	{
		struct AtomCueSheet_eventGetSoundCueByName_Parms
		{
			FString CueName;
			UAtomSoundCue* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheet_eventGetSoundCueByName_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::NewProp_CueName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheet_eventGetSoundCueByName_Parms, ReturnValue), Z_Construct_UClass_UAtomSoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::NewProp_CueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|CueSheet" },
		{ "Comment", "/**\n\x09 * Retreive the cue object from this bank by its name.\n\x09 *\n\x09 * @return The UAtomSoundCue with the chosen name in the bank or nullptr if the cue was not found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
		{ "ToolTip", "Retreive the cue object from this bank by its name.\n\n@return The UAtomSoundCue with the chosen name in the bank or nullptr if the cue was not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheet, nullptr, "GetSoundCueByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::AtomCueSheet_eventGetSoundCueByName_Parms), Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics
	{
		struct AtomCueSheet_eventIsLoaded_Parms
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
	void Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCueSheet_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomCueSheet_eventIsLoaded_Parms), &Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|CueSheet" },
		{ "Comment", "/**\n\x09 * Returns load status of the the bank in Atom library and if ready to be accessed.\n\x09 *\n\x09 * @return true if the bank is loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
		{ "ToolTip", "Returns load status of the the bank in Atom library and if ready to be accessed.\n\n@return true if the bank is loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheet, nullptr, "IsLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::AtomCueSheet_eventIsLoaded_Parms), Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheet_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheet_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCueSheet_Validate_Statics
	{
		struct AtomCueSheet_eventValidate_Parms
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
	void Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCueSheet_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomCueSheet_eventValidate_Parms), &Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|CueSheet" },
		{ "Comment", "/**\n\x09 * Validates the Atom cue sheet settings.\n\x09 *\n\x09 * @return true if validation passed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
		{ "ToolTip", "Validates the Atom cue sheet settings.\n\n@return true if validation passed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheet, nullptr, "Validate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::AtomCueSheet_eventValidate_Parms), Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheet_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheet_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomCueSheet);
	UClass* Z_Construct_UClass_UAtomCueSheet_NoRegister()
	{
		return UAtomCueSheet::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCueSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaveBanks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveBanks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveBanks;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundCues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundCues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCueSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBank,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomCueSheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomCueSheet_GetNumCues, "GetNumCues" }, // 2276652660
		{ &Z_Construct_UFunction_UAtomCueSheet_GetSoundCue, "GetSoundCue" }, // 1600682483
		{ &Z_Construct_UFunction_UAtomCueSheet_GetSoundCueByName, "GetSoundCueByName" }, // 1029378768
		{ &Z_Construct_UFunction_UAtomCueSheet_IsLoaded, "IsLoaded" }, // 1525717185
		{ &Z_Construct_UFunction_UAtomCueSheet_Validate, "Validate" }, // 3255146823
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheet_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AtomCueSheet.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asset holding Atom CueSheet Binary (ACB) file or data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_WaveBanks_Inner = { "WaveBanks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomWaveBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_WaveBanks_MetaData[] = {
		{ "Category", "WaveBanks" },
		{ "Comment", "/** AtomWaveBank used by this AtomCueSheet. (Property is hidden in editor if ACB does not request any AtomWaveBanks.) */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
		{ "ToolTip", "AtomWaveBank used by this AtomCueSheet. (Property is hidden in editor if ACB does not request any AtomWaveBanks.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_WaveBanks = { "WaveBanks", nullptr, (EPropertyFlags)0x0014000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheet, WaveBanks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_WaveBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_WaveBanks_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_SoundCues_Inner = { "SoundCues", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomSoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_SoundCues_MetaData[] = {
		{ "Category", "Cues" },
		{ "ModuleRelativePath", "Public/Atom/AtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_SoundCues = { "SoundCues", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheet, SoundCues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_SoundCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_SoundCues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomCueSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_WaveBanks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_WaveBanks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_SoundCues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheet_Statics::NewProp_SoundCues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCueSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCueSheet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomCueSheet_Statics::ClassParams = {
		&UAtomCueSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomCueSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCueSheet()
	{
		if (!Z_Registration_Info_UClass_UAtomCueSheet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomCueSheet.OuterSingleton, Z_Construct_UClass_UAtomCueSheet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomCueSheet.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomCueSheet>()
	{
		return UAtomCueSheet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCueSheet);
	UAtomCueSheet::~UAtomCueSheet() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomCueSheet)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomCueSheet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomCueSheet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomCueSheet, UAtomCueSheet::StaticClass, TEXT("UAtomCueSheet"), &Z_Registration_Info_UClass_UAtomCueSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomCueSheet), 2265094397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomCueSheet_h_2823784595(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomCueSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomCueSheet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
