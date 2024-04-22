// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomWaveBank.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWaveBank() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBank();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWave_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWaveBank();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWaveBank_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomWaveBank::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWaveBank::execGetSoundWave)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomSoundWave**)Z_Param__Result=P_THIS->GetSoundWave(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWaveBank::execGetNumWaves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumWaves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWaveBank::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	void UAtomWaveBank::StaticRegisterNativesUAtomWaveBank()
	{
		UClass* Class = UAtomWaveBank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumWaves", &UAtomWaveBank::execGetNumWaves },
			{ "GetSoundWave", &UAtomWaveBank::execGetSoundWave },
			{ "IsLoaded", &UAtomWaveBank::execIsLoaded },
			{ "Validate", &UAtomWaveBank::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics
	{
		struct AtomWaveBank_eventGetNumWaves_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWaveBank_eventGetNumWaves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|WaveBank" },
		{ "Comment", "/**\n\x09 * Gets the number of wave in this bank.\n\x09 *\n\x09 * @return The number of waves.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWaveBank.h" },
		{ "ToolTip", "Gets the number of wave in this bank.\n\n@return The number of waves." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWaveBank, nullptr, "GetNumWaves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::AtomWaveBank_eventGetNumWaves_Parms), Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWaveBank_GetNumWaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWaveBank_GetNumWaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics
	{
		struct AtomWaveBank_eventGetSoundWave_Parms
		{
			int32 Index;
			UAtomSoundWave* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWaveBank_eventGetSoundWave_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomWaveBank_eventGetSoundWave_Parms, ReturnValue), Z_Construct_UClass_UAtomSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|WaveBank" },
		{ "Comment", "/**\n\x09 * Gets the wave object from this bank at choosen index.\n\x09 *\n\x09 * @return The UAtomSoundWave at the index in the bank or nullptr if an invalid index was provided.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWaveBank.h" },
		{ "ToolTip", "Gets the wave object from this bank at choosen index.\n\n@return The UAtomSoundWave at the index in the bank or nullptr if an invalid index was provided." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWaveBank, nullptr, "GetSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::AtomWaveBank_eventGetSoundWave_Parms), Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWaveBank_GetSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWaveBank_GetSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics
	{
		struct AtomWaveBank_eventIsLoaded_Parms
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
	void Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWaveBank_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWaveBank_eventIsLoaded_Parms), &Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|WaveBank" },
		{ "Comment", "/**\n\x09 * Returns load status of the the bank in Atom library and if ready to be accessed.\n\x09 *\n\x09 * @return true if the bank is loaded.\n\x09 * @see SetFilePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWaveBank.h" },
		{ "ToolTip", "Returns load status of the the bank in Atom library and if ready to be accessed.\n\n@return true if the bank is loaded.\n@see SetFilePath" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWaveBank, nullptr, "IsLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::AtomWaveBank_eventIsLoaded_Parms), Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWaveBank_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWaveBank_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWaveBank_Validate_Statics
	{
		struct AtomWaveBank_eventValidate_Parms
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
	void Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWaveBank_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomWaveBank_eventValidate_Parms), &Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|WaveBank" },
		{ "Comment", "/**\n\x09 * Validates the Atom wave bank settings.\n\x09 *\n\x09 * @return true if validation passed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomWaveBank.h" },
		{ "ToolTip", "Validates the Atom wave bank settings.\n\n@return true if validation passed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWaveBank, nullptr, "Validate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::AtomWaveBank_eventValidate_Parms), Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWaveBank_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomWaveBank_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomWaveBank);
	UClass* Z_Construct_UClass_UAtomWaveBank_NoRegister()
	{
		return UAtomWaveBank::StaticClass();
	}
	struct Z_Construct_UClass_UAtomWaveBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomWaveBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBank,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomWaveBank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomWaveBank_GetNumWaves, "GetNumWaves" }, // 41076113
		{ &Z_Construct_UFunction_UAtomWaveBank_GetSoundWave, "GetSoundWave" }, // 731569807
		{ &Z_Construct_UFunction_UAtomWaveBank_IsLoaded, "IsLoaded" }, // 1536528690
		{ &Z_Construct_UFunction_UAtomWaveBank_Validate, "Validate" }, // 3765657140
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWaveBank_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Atom/AtomWaveBank.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomWaveBank.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asset holding Atom Wave Bank (AWB) file or data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomWaveBank_Statics::NewProp_SoundWaves_Inner = { "SoundWaves", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWaveBank_Statics::NewProp_SoundWaves_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/Atom/AtomWaveBank.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomWaveBank_Statics::NewProp_SoundWaves = { "SoundWaves", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomWaveBank, SoundWaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomWaveBank_Statics::NewProp_SoundWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWaveBank_Statics::NewProp_SoundWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomWaveBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWaveBank_Statics::NewProp_SoundWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWaveBank_Statics::NewProp_SoundWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomWaveBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomWaveBank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomWaveBank_Statics::ClassParams = {
		&UAtomWaveBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomWaveBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWaveBank_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomWaveBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWaveBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomWaveBank()
	{
		if (!Z_Registration_Info_UClass_UAtomWaveBank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomWaveBank.OuterSingleton, Z_Construct_UClass_UAtomWaveBank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomWaveBank.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomWaveBank>()
	{
		return UAtomWaveBank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomWaveBank);
	UAtomWaveBank::~UAtomWaveBank() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomWaveBank)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWaveBank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWaveBank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomWaveBank, UAtomWaveBank::StaticClass, TEXT("UAtomWaveBank"), &Z_Registration_Info_UClass_UAtomWaveBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomWaveBank), 1409132042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWaveBank_h_148876180(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWaveBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomWaveBank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
