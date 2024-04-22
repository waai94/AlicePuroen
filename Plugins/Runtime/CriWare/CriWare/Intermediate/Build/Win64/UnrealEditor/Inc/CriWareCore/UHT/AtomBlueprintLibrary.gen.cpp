// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBusEffectPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomCueSheet_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRack_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackWithParentBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRuntimeBlueprintLibrary();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomWaveBank_NoRegister();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomSoundLoadComplete_Parms
		{
			const UAtomSoundBase* LoadedSound;
			bool WasCancelled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasCancelled_MetaData[];
#endif
		static void NewProp_WasCancelled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSound = { "LoadedSound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomSoundLoadComplete_Parms, LoadedSound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit(void* Obj)
	{
		((_Script_CriWareCore_eventOnAtomSoundLoadComplete_Parms*)Obj)->WasCancelled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled = { "WasCancelled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CriWareCore_eventOnAtomSoundLoadComplete_Parms), &Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n  * Called when a load request for a sound has completed.\n  */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Called when a load request for a sound has completed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomSoundLoadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomSoundLoadComplete_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomWaveBankLoadComplete_Parms
		{
			const UAtomWaveBank* LoadedWaveBank;
			bool WasCancelled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedWaveBank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedWaveBank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasCancelled_MetaData[];
#endif
		static void NewProp_WasCancelled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_LoadedWaveBank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_LoadedWaveBank = { "LoadedWaveBank", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomWaveBankLoadComplete_Parms, LoadedWaveBank), Z_Construct_UClass_UAtomWaveBank_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_LoadedWaveBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_LoadedWaveBank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit(void* Obj)
	{
		((_Script_CriWareCore_eventOnAtomWaveBankLoadComplete_Parms*)Obj)->WasCancelled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled = { "WasCancelled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CriWareCore_eventOnAtomWaveBankLoadComplete_Parms), &Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_LoadedWaveBank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomWaveBankLoadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomWaveBankLoadComplete_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomCueSheetLoadComplete_Parms
		{
			const UAtomCueSheet* LoadedCueSheet;
			bool WasCancelled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedCueSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedCueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasCancelled_MetaData[];
#endif
		static void NewProp_WasCancelled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_LoadedCueSheet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_LoadedCueSheet = { "LoadedCueSheet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomCueSheetLoadComplete_Parms, LoadedCueSheet), Z_Construct_UClass_UAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_LoadedCueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_LoadedCueSheet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit(void* Obj)
	{
		((_Script_CriWareCore_eventOnAtomCueSheetLoadComplete_Parms*)Obj)->WasCancelled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled = { "WasCancelled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CriWareCore_eventOnAtomCueSheetLoadComplete_Parms), &Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_LoadedCueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomCueSheetLoadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomCueSheetLoadComplete_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms
		{
			FName CategoryName;
			bool IsPaused;
			bool IsMuted;
			bool IsSoloed;
			float Volume;
			int32 PlayCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPaused_MetaData[];
#endif
		static void NewProp_IsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMuted_MetaData[];
#endif
		static void NewProp_IsMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMuted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSoloed_MetaData[];
#endif
		static void NewProp_IsSoloed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSoloed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsPaused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsPaused_SetBit(void* Obj)
	{
		((_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms*)Obj)->IsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsPaused = { "IsPaused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms), &Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsPaused_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsMuted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsMuted_SetBit(void* Obj)
	{
		((_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms*)Obj)->IsMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsMuted = { "IsMuted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms), &Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsMuted_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsMuted_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsMuted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsSoloed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsSoloed_SetBit(void* Obj)
	{
		((_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms*)Obj)->IsSoloed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsSoloed = { "IsSoloed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms), &Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsSoloed_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsSoloed_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsSoloed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms, Volume), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_PlayCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_PlayCount = { "PlayCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms, PlayCount), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_PlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_PlayCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsMuted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_IsSoloed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::NewProp_PlayCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Legacy Atom category - Called when category status values are retreived from Atom runtime. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Legacy Atom category - Called when category status values are retreived from Atom runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomGetCategoryStatus__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomGetCategoryStatus_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnAtomGetGameVariableValue_Parms
		{
			FName Name;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomGetGameVariableValue_Parms, Name), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnAtomGetGameVariableValue_Parms, Value), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when game variable value is retreived from Atom runtime.*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Called when game variable value is retreived from Atom runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomGetGameVariableValue__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::_Script_CriWareCore_eventOnAtomGetGameVariableValue_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execMapOutputPortToRack)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputPortName);
		P_GET_OBJECT(UAtomRackWithParentBase,Z_Param_AtomRack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomRuntimeBlueprintLibrary::MapOutputPortToRack(Z_Param_WorldContextObject,Z_Param_OutputPortName,Z_Param_AtomRack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execGetGameVariableValueByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::GetGameVariableValueByName(Z_Param_WorldContextObject,Z_Param_CategoryName,FOnAtomGetGameVariableValue(Z_Param_OnGetValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execSetGameVariableValueByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_GameVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::SetGameVariableValueByName(Z_Param_WorldContextObject,Z_Param_GameVariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execGetCategoryStatusByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::GetCategoryStatusByName(Z_Param_WorldContextObject,Z_Param_CategoryName,FOnAtomGetCategoryStatus(Z_Param_OnGetStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execSetCategoryVolumeByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::SetCategoryVolumeByName(Z_Param_WorldContextObject,Z_Param_CategoryName,Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execSoloCategoryByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_bSolo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MuteVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::SoloCategoryByName(Z_Param_WorldContextObject,Z_Param_CategoryName,Z_Param_bSolo,Z_Param_MuteVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execMuteCategoryByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_bMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::MuteCategoryByName(Z_Param_WorldContextObject,Z_Param_CategoryName,Z_Param_bMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execPauseCategoryByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::PauseCategoryByName(Z_Param_WorldContextObject,Z_Param_CategoryName,Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execStopCategoryByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::StopCategoryByName(Z_Param_WorldContextObject,Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execIsBinauralizerEnabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomRuntimeBlueprintLibrary::IsBinauralizerEnabled(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execEnableBinauralizer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::EnableBinauralizer(Z_Param_WorldContextObject,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execClearRackEffectPresets)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomRack,Z_Param_AtomRack);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::ClearRackEffectPresets(Z_Param_WorldContextObject,Z_Param_AtomRack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execRemoveRackEffectPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomRack,Z_Param_AtomRack);
		P_GET_OBJECT(UAtomBusEffectPreset,Z_Param_BusEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::RemoveRackEffectPreset(Z_Param_WorldContextObject,Z_Param_AtomRack,Z_Param_BusEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execClearBusEffectPresets)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomBus,Z_Param_AtomBus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::ClearBusEffectPresets(Z_Param_WorldContextObject,Z_Param_AtomBus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execRemoveBusEffectPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomBus,Z_Param_AtomBus);
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::RemoveBusEffectPreset(Z_Param_WorldContextObject,Z_Param_AtomBus,Z_Param_EffectIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execSetBusEffectPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomBus,Z_Param_AtomBus);
		P_GET_OBJECT(UAtomBusEffectPreset,Z_Param_BusEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAtomRuntimeBlueprintLibrary::SetBusEffectPreset(Z_Param_WorldContextObject,Z_Param_AtomBus,Z_Param_BusEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execClearMasterEffectPresets)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::ClearMasterEffectPresets(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execRemoveMasterEffectPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomBusEffectPreset,Z_Param_BusEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::RemoveMasterEffectPreset(Z_Param_WorldContextObject,Z_Param_BusEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execSetMasterEffectPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomBusEffectPreset,Z_Param_BusEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::SetMasterEffectPreset(Z_Param_WorldContextObject,Z_Param_BusEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execPrimeWaveBankForPlayback)
	{
		P_GET_OBJECT(UAtomWaveBank,Z_Param_WaveBank);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLoadCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::PrimeWaveBankForPlayback(Z_Param_WaveBank,FOnAtomWaveBankLoadComplete(Z_Param_OnLoadCompletion));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execPrimeCueSheetForPlayback)
	{
		P_GET_OBJECT(UAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLoadCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::PrimeCueSheetForPlayback(Z_Param_CueSheet,FOnAtomCueSheetLoadComplete(Z_Param_OnLoadCompletion));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRuntimeBlueprintLibrary::execPrimeSoundForPlayback)
	{
		P_GET_OBJECT(UAtomSoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLoadCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomRuntimeBlueprintLibrary::PrimeSoundForPlayback(Z_Param_Sound,FOnAtomSoundLoadComplete(Z_Param_OnLoadCompletion));
		P_NATIVE_END;
	}
	void UAtomRuntimeBlueprintLibrary::StaticRegisterNativesUAtomRuntimeBlueprintLibrary()
	{
		UClass* Class = UAtomRuntimeBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearBusEffectPresets", &UAtomRuntimeBlueprintLibrary::execClearBusEffectPresets },
			{ "ClearMasterEffectPresets", &UAtomRuntimeBlueprintLibrary::execClearMasterEffectPresets },
			{ "ClearRackEffectPresets", &UAtomRuntimeBlueprintLibrary::execClearRackEffectPresets },
			{ "EnableBinauralizer", &UAtomRuntimeBlueprintLibrary::execEnableBinauralizer },
			{ "GetCategoryStatusByName", &UAtomRuntimeBlueprintLibrary::execGetCategoryStatusByName },
			{ "GetGameVariableValueByName", &UAtomRuntimeBlueprintLibrary::execGetGameVariableValueByName },
			{ "IsBinauralizerEnabled", &UAtomRuntimeBlueprintLibrary::execIsBinauralizerEnabled },
			{ "MapOutputPortToRack", &UAtomRuntimeBlueprintLibrary::execMapOutputPortToRack },
			{ "MuteCategoryByName", &UAtomRuntimeBlueprintLibrary::execMuteCategoryByName },
			{ "PauseCategoryByName", &UAtomRuntimeBlueprintLibrary::execPauseCategoryByName },
			{ "PrimeCueSheetForPlayback", &UAtomRuntimeBlueprintLibrary::execPrimeCueSheetForPlayback },
			{ "PrimeSoundForPlayback", &UAtomRuntimeBlueprintLibrary::execPrimeSoundForPlayback },
			{ "PrimeWaveBankForPlayback", &UAtomRuntimeBlueprintLibrary::execPrimeWaveBankForPlayback },
			{ "RemoveBusEffectPreset", &UAtomRuntimeBlueprintLibrary::execRemoveBusEffectPreset },
			{ "RemoveMasterEffectPreset", &UAtomRuntimeBlueprintLibrary::execRemoveMasterEffectPreset },
			{ "RemoveRackEffectPreset", &UAtomRuntimeBlueprintLibrary::execRemoveRackEffectPreset },
			{ "SetBusEffectPreset", &UAtomRuntimeBlueprintLibrary::execSetBusEffectPreset },
			{ "SetCategoryVolumeByName", &UAtomRuntimeBlueprintLibrary::execSetCategoryVolumeByName },
			{ "SetGameVariableValueByName", &UAtomRuntimeBlueprintLibrary::execSetGameVariableValueByName },
			{ "SetMasterEffectPreset", &UAtomRuntimeBlueprintLibrary::execSetMasterEffectPreset },
			{ "SoloCategoryByName", &UAtomRuntimeBlueprintLibrary::execSoloCategoryByName },
			{ "StopCategoryByName", &UAtomRuntimeBlueprintLibrary::execStopCategoryByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventClearBusEffectPresets_Parms
		{
			const UObject* WorldContextObject;
			UAtomBus* AtomBus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomBus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventClearBusEffectPresets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::NewProp_AtomBus = { "AtomBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventClearBusEffectPresets_Parms, AtomBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::NewProp_AtomBus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Clears all submix effect perests on the given bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Clears all submix effect perests on the given bus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "ClearBusEffectPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::AtomRuntimeBlueprintLibrary_eventClearBusEffectPresets_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventClearMasterEffectPresets_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventClearMasterEffectPresets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Clears all effect presets from the master rack, master out bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Clears all effect presets from the master rack, master out bus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "ClearMasterEffectPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::AtomRuntimeBlueprintLibrary_eventClearMasterEffectPresets_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventClearRackEffectPresets_Parms
		{
			const UObject* WorldContextObject;
			UAtomRack* AtomRack;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomRack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventClearRackEffectPresets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::NewProp_AtomRack = { "AtomRack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventClearRackEffectPresets_Parms, AtomRack), Z_Construct_UClass_UAtomRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::NewProp_AtomRack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Clears all effect presets from any buses of the given rack. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Clears all effect presets from any buses of the given rack." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "ClearRackEffectPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::AtomRuntimeBlueprintLibrary_eventClearRackEffectPresets_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventEnableBinauralizer_Parms
		{
			const UObject* WorldContextObject;
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventEnableBinauralizer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AtomRuntimeBlueprintLibrary_eventEnableBinauralizer_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomRuntimeBlueprintLibrary_eventEnableBinauralizer_Parms), &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Enable or disable binauralizer for all Atom soundfield racks. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Enable or disable binauralizer for all Atom soundfield racks." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "EnableBinauralizer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::AtomRuntimeBlueprintLibrary_eventEnableBinauralizer_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventGetCategoryStatusByName_Parms
		{
			const UObject* WorldContextObject;
			FName CategoryName;
			FScriptDelegate OnGetStatus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetStatus_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGetStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventGetCategoryStatusByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventGetCategoryStatusByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_OnGetStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_OnGetStatus = { "OnGetStatus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventGetCategoryStatusByName_Parms, OnGetStatus), Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetCategoryStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_OnGetStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_OnGetStatus_MetaData)) }; // 1475433916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::NewProp_OnGetStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Category|Legacy" },
		{ "Comment", "/** Legacy Atom category - Retrieves category status values from Atom runtime. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Legacy Atom category - Retrieves category status values from Atom runtime." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "GetCategoryStatusByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::AtomRuntimeBlueprintLibrary_eventGetCategoryStatusByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventGetGameVariableValueByName_Parms
		{
			const UObject* WorldContextObject;
			FName CategoryName;
			FScriptDelegate OnGetValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetValue_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGetValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventGetGameVariableValueByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventGetGameVariableValueByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_OnGetValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_OnGetValue = { "OnGetValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventGetGameVariableValueByName_Parms, OnGetValue), Z_Construct_UDelegateFunction_CriWareCore_OnAtomGetGameVariableValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_OnGetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_OnGetValue_MetaData)) }; // 2144138796
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::NewProp_OnGetValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Game Variables" },
		{ "Comment", "/** Retrives value of an Atom Game Variable from Atom runtime. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Retrives value of an Atom Game Variable from Atom runtime." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "GetGameVariableValueByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::AtomRuntimeBlueprintLibrary_eventGetGameVariableValueByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventIsBinauralizerEnabled_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventIsBinauralizerEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomRuntimeBlueprintLibrary_eventIsBinauralizerEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomRuntimeBlueprintLibrary_eventIsBinauralizerEnabled_Parms), &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Gets whether binauralizer is enabled or disabled for all Atom soundfield racks. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Gets whether binauralizer is enabled or disabled for all Atom soundfield racks." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "IsBinauralizerEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::AtomRuntimeBlueprintLibrary_eventIsBinauralizerEnabled_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventMapOutputPortToRack_Parms
		{
			const UObject* WorldContextObject;
			FName OutputPortName;
			UAtomRackWithParentBase* AtomRack;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputPortName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomRack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventMapOutputPortToRack_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_OutputPortName = { "OutputPortName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventMapOutputPortToRack_Parms, OutputPortName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_AtomRack = { "AtomRack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventMapOutputPortToRack_Parms, AtomRack), Z_Construct_UClass_UAtomRackWithParentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomRuntimeBlueprintLibrary_eventMapOutputPortToRack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomRuntimeBlueprintLibrary_eventMapOutputPortToRack_Parms), &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_OutputPortName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_AtomRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Output Ports" },
		{ "Comment", "/** Maps a named output port to existing rack (default mapping is master rack.) [Experimental] */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Maps a named output port to existing rack (default mapping is master rack.) [Experimental]" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "MapOutputPortToRack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::AtomRuntimeBlueprintLibrary_eventMapOutputPortToRack_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventMuteCategoryByName_Parms
		{
			const UObject* WorldContextObject;
			FName CategoryName;
			bool bMute;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static void NewProp_bMute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventMuteCategoryByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventMuteCategoryByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_bMute_SetBit(void* Obj)
	{
		((AtomRuntimeBlueprintLibrary_eventMuteCategoryByName_Parms*)Obj)->bMute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomRuntimeBlueprintLibrary_eventMuteCategoryByName_Parms), &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::NewProp_bMute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Category|Legacy" },
		{ "Comment", "/** Legacy Atom category - Mutes all sounds using this category in current Atom runtime. (This by-pass all Unreal Engine gameplay layers.) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Legacy Atom category - Mutes all sounds using this category in current Atom runtime. (This by-pass all Unreal Engine gameplay layers.)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "MuteCategoryByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::AtomRuntimeBlueprintLibrary_eventMuteCategoryByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventPauseCategoryByName_Parms
		{
			const UObject* WorldContextObject;
			FName CategoryName;
			bool bPause;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static void NewProp_bPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPauseCategoryByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPauseCategoryByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomRuntimeBlueprintLibrary_eventPauseCategoryByName_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomRuntimeBlueprintLibrary_eventPauseCategoryByName_Parms), &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Category|Legacy" },
		{ "Comment", "/** Legacy Atom category - Pauses all sounds using this category in current Atom runtime. (This by-pass all Unreal Engine gameplay layers.) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Legacy Atom category - Pauses all sounds using this category in current Atom runtime. (This by-pass all Unreal Engine gameplay layers.)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "PauseCategoryByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::AtomRuntimeBlueprintLibrary_eventPauseCategoryByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventPrimeCueSheetForPlayback_Parms
		{
			UAtomCueSheet* CueSheet;
			FScriptDelegate OnLoadCompletion;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompletion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPrimeCueSheetForPlayback_Parms, CueSheet), Z_Construct_UClass_UAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::NewProp_OnLoadCompletion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::NewProp_OnLoadCompletion = { "OnLoadCompletion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPrimeCueSheetForPlayback_Parms, OnLoadCompletion), Z_Construct_UDelegateFunction_CriWareCore_OnAtomCueSheetLoadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::NewProp_OnLoadCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::NewProp_OnLoadCompletion_MetaData)) }; // 3645787859
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::NewProp_OnLoadCompletion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Cache" },
		{ "Comment", "/** Begin loading any sound cue referenced by a sound cue sheet into the cache so that it can be played immediately. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Begin loading any sound cue referenced by a sound cue sheet into the cache so that it can be played immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "PrimeCueSheetForPlayback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::AtomRuntimeBlueprintLibrary_eventPrimeCueSheetForPlayback_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventPrimeSoundForPlayback_Parms
		{
			UAtomSoundBase* Sound;
			FScriptDelegate OnLoadCompletion;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompletion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPrimeSoundForPlayback_Parms, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion = { "OnLoadCompletion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPrimeSoundForPlayback_Parms, OnLoadCompletion), Z_Construct_UDelegateFunction_CriWareCore_OnAtomSoundLoadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData)) }; // 3178670691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Cache" },
		{ "Comment", "/** Begin loading a sound into the cache so that it can be played immediately. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Begin loading a sound into the cache so that it can be played immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "PrimeSoundForPlayback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::AtomRuntimeBlueprintLibrary_eventPrimeSoundForPlayback_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventPrimeWaveBankForPlayback_Parms
		{
			UAtomWaveBank* WaveBank;
			FScriptDelegate OnLoadCompletion;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaveBank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompletion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::NewProp_WaveBank = { "WaveBank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPrimeWaveBankForPlayback_Parms, WaveBank), Z_Construct_UClass_UAtomWaveBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::NewProp_OnLoadCompletion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::NewProp_OnLoadCompletion = { "OnLoadCompletion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventPrimeWaveBankForPlayback_Parms, OnLoadCompletion), Z_Construct_UDelegateFunction_CriWareCore_OnAtomWaveBankLoadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::NewProp_OnLoadCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::NewProp_OnLoadCompletion_MetaData)) }; // 888587763
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::NewProp_WaveBank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::NewProp_OnLoadCompletion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Cache" },
		{ "Comment", "/** Begin loading any sound wave referenced by a sound wave bank into the cache so that it can be played immediately. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Begin loading any sound wave referenced by a sound wave bank into the cache so that it can be played immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "PrimeWaveBankForPlayback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::AtomRuntimeBlueprintLibrary_eventPrimeWaveBankForPlayback_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventRemoveBusEffectPreset_Parms
		{
			const UObject* WorldContextObject;
			UAtomBus* AtomBus;
			int32 EffectIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomBus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffectIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveBusEffectPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_AtomBus = { "AtomBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveBusEffectPreset_Parms, AtomBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_EffectIndex = { "EffectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveBusEffectPreset_Parms, EffectIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_AtomBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::NewProp_EffectIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Removes the bus effect preset at the given bus, given effect index, if there is an effect preset set at that index. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Removes the bus effect preset at the given bus, given effect index, if there is an effect preset set at that index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "RemoveBusEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::AtomRuntimeBlueprintLibrary_eventRemoveBusEffectPreset_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventRemoveMasterEffectPreset_Parms
		{
			const UObject* WorldContextObject;
			UAtomBusEffectPreset* BusEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BusEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveMasterEffectPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::NewProp_BusEffectPreset = { "BusEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveMasterEffectPreset_Parms, BusEffectPreset), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::NewProp_BusEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Removes a bus effect preset from the master rack, master out bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Removes a bus effect preset from the master rack, master out bus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "RemoveMasterEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::AtomRuntimeBlueprintLibrary_eventRemoveMasterEffectPreset_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventRemoveRackEffectPreset_Parms
		{
			const UObject* WorldContextObject;
			UAtomRack* AtomRack;
			UAtomBusEffectPreset* BusEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomRack;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BusEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveRackEffectPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_AtomRack = { "AtomRack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveRackEffectPreset_Parms, AtomRack), Z_Construct_UClass_UAtomRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_BusEffectPreset = { "BusEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventRemoveRackEffectPreset_Parms, BusEffectPreset), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_AtomRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::NewProp_BusEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Removes all instances of a bus effect preset from any buses of the given Atom rack. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Removes all instances of a bus effect preset from any buses of the given Atom rack." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "RemoveRackEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::AtomRuntimeBlueprintLibrary_eventRemoveRackEffectPreset_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventSetBusEffectPreset_Parms
		{
			const UObject* WorldContextObject;
			UAtomBus* AtomBus;
			UAtomBusEffectPreset* BusEffectPreset;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomBus;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BusEffectPreset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetBusEffectPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_AtomBus = { "AtomBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetBusEffectPreset_Parms, AtomBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_BusEffectPreset = { "BusEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetBusEffectPreset_Parms, BusEffectPreset), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetBusEffectPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_AtomBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_BusEffectPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Set a bus effect preset to the given bus. Returns the index of the effect in the bus or index none if not found. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Set a bus effect preset to the given bus. Returns the index of the effect in the bus or index none if not found." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "SetBusEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::AtomRuntimeBlueprintLibrary_eventSetBusEffectPreset_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventSetCategoryVolumeByName_Parms
		{
			const UObject* WorldContextObject;
			FName CategoryName;
			float VolumeMultiplier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetCategoryVolumeByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetCategoryVolumeByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetCategoryVolumeByName_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::NewProp_VolumeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Category|Legacy" },
		{ "Comment", "/** Legacy Atom category - Sets category volume to current Atom runtime. (This by-pass all Unreal Engine gameplay layers.) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Legacy Atom category - Sets category volume to current Atom runtime. (This by-pass all Unreal Engine gameplay layers.)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "SetCategoryVolumeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::AtomRuntimeBlueprintLibrary_eventSetCategoryVolumeByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventSetGameVariableValueByName_Parms
		{
			const UObject* WorldContextObject;
			FName GameVariableName;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GameVariableName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetGameVariableValueByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_GameVariableName = { "GameVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetGameVariableValueByName_Parms, GameVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetGameVariableValueByName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_GameVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Game Variables" },
		{ "Comment", "/** Sets value of an Atom Game Variable in current Atom runtime. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Sets value of an Atom Game Variable in current Atom runtime." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "SetGameVariableValueByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::AtomRuntimeBlueprintLibrary_eventSetGameVariableValueByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventSetMasterEffectPreset_Parms
		{
			const UObject* WorldContextObject;
			UAtomBusEffectPreset* BusEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BusEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetMasterEffectPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::NewProp_BusEffectPreset = { "BusEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSetMasterEffectPreset_Parms, BusEffectPreset), Z_Construct_UClass_UAtomBusEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::NewProp_BusEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Effects" },
		{ "Comment", "/** Set a bus effect preset to the master rack, master out bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Set a bus effect preset to the master rack, master out bus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "SetMasterEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::AtomRuntimeBlueprintLibrary_eventSetMasterEffectPreset_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventSoloCategoryByName_Parms
		{
			const UObject* WorldContextObject;
			FName CategoryName;
			bool bSolo;
			float MuteVolume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static void NewProp_bSolo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MuteVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSoloCategoryByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSoloCategoryByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_bSolo_SetBit(void* Obj)
	{
		((AtomRuntimeBlueprintLibrary_eventSoloCategoryByName_Parms*)Obj)->bSolo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_bSolo = { "bSolo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomRuntimeBlueprintLibrary_eventSoloCategoryByName_Parms), &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_bSolo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_MuteVolume = { "MuteVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventSoloCategoryByName_Parms, MuteVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_bSolo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::NewProp_MuteVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Category|Legacy" },
		{ "Comment", "/** Legacy Atom category - Solo all sounds using this category in current Atom runtime and mute other categories using the given volume value. (This by-pass all Unreal Engine gameplay layers.) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Legacy Atom category - Solo all sounds using this category in current Atom runtime and mute other categories using the given volume value. (This by-pass all Unreal Engine gameplay layers.)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "SoloCategoryByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::AtomRuntimeBlueprintLibrary_eventSoloCategoryByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics
	{
		struct AtomRuntimeBlueprintLibrary_eventStopCategoryByName_Parms
		{
			const UObject* WorldContextObject;
			FName CategoryName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventStopCategoryByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRuntimeBlueprintLibrary_eventStopCategoryByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Category|Legacy" },
		{ "Comment", "/** Legacy Atom category - Stops all sounds using this category in current Atom runtime. (This by-pass all Unreal Engine gameplay layers.) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Legacy Atom category - Stops all sounds using this category in current Atom runtime. (This by-pass all Unreal Engine gameplay layers.)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, nullptr, "StopCategoryByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::AtomRuntimeBlueprintLibrary_eventStopCategoryByName_Parms), Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRuntimeBlueprintLibrary);
	UClass* Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_NoRegister()
	{
		return UAtomRuntimeBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearBusEffectPresets, "ClearBusEffectPresets" }, // 2454726654
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearMasterEffectPresets, "ClearMasterEffectPresets" }, // 467365861
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_ClearRackEffectPresets, "ClearRackEffectPresets" }, // 1742990598
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_EnableBinauralizer, "EnableBinauralizer" }, // 2073381032
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetCategoryStatusByName, "GetCategoryStatusByName" }, // 941635070
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_GetGameVariableValueByName, "GetGameVariableValueByName" }, // 3012333838
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_IsBinauralizerEnabled, "IsBinauralizerEnabled" }, // 2409618419
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MapOutputPortToRack, "MapOutputPortToRack" }, // 60088501
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_MuteCategoryByName, "MuteCategoryByName" }, // 3307807852
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PauseCategoryByName, "PauseCategoryByName" }, // 982841632
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeCueSheetForPlayback, "PrimeCueSheetForPlayback" }, // 2688273843
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeSoundForPlayback, "PrimeSoundForPlayback" }, // 452796422
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_PrimeWaveBankForPlayback, "PrimeWaveBankForPlayback" }, // 1215514167
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveBusEffectPreset, "RemoveBusEffectPreset" }, // 313661403
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveMasterEffectPreset, "RemoveMasterEffectPreset" }, // 2245491232
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_RemoveRackEffectPreset, "RemoveRackEffectPreset" }, // 3312533045
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetBusEffectPreset, "SetBusEffectPreset" }, // 667700131
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetCategoryVolumeByName, "SetCategoryVolumeByName" }, // 87441833
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetGameVariableValueByName, "SetGameVariableValueByName" }, // 456910702
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SetMasterEffectPreset, "SetMasterEffectPreset" }, // 449111438
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_SoloCategoryByName, "SoloCategoryByName" }, // 2066816732
		{ &Z_Construct_UFunction_UAtomRuntimeBlueprintLibrary_StopCategoryByName, "StopCategoryByName" }, // 73510518
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atom/AtomBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ScriptName", "AtomRuntimeLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRuntimeBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::ClassParams = {
		&UAtomRuntimeBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRuntimeBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAtomRuntimeBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRuntimeBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAtomRuntimeBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRuntimeBlueprintLibrary.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomRuntimeBlueprintLibrary>()
	{
		return UAtomRuntimeBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRuntimeBlueprintLibrary);
	UAtomRuntimeBlueprintLibrary::~UAtomRuntimeBlueprintLibrary() {}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execGetLinearFrequencyClamped)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InDomain);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::GetLinearFrequencyClamped(Z_Param_InValue,Z_Param_Out_InDomain,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execGetLogFrequencyClamped)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InDomain);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::GetLogFrequencyClamped(Z_Param_InValue,Z_Param_Out_InDomain,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execConvertDecibelsToLinearSlowerFromFloor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDecibels);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::ConvertDecibelsToLinearSlowerFromFloor(Z_Param_InDecibels,Z_Param_Out_InRange,Z_Param_InFloor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execConvertLinearToDecibelsSlowerFromFloor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLinear);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::ConvertLinearToDecibelsSlowerFromFloor(Z_Param_InLinear,Z_Param_Out_InRange,Z_Param_InFloor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execConvertDecibelsToLinearSlower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDecibels);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::ConvertDecibelsToLinearSlower(Z_Param_InDecibels,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execConvertLinearToDecibelsSlower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLinear);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::ConvertLinearToDecibelsSlower(Z_Param_InLinear,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execConvertDecibelsToLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDecibels);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::ConvertDecibelsToLinear(Z_Param_InDecibels,Z_Param_Out_InRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomUtilitiesBlueprintLibrary::execConvertLinearToDecibels)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLinear);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomUtilitiesBlueprintLibrary::ConvertLinearToDecibels(Z_Param_InLinear,Z_Param_Out_InRange,Z_Param_InFloor);
		P_NATIVE_END;
	}
	void UAtomUtilitiesBlueprintLibrary::StaticRegisterNativesUAtomUtilitiesBlueprintLibrary()
	{
		UClass* Class = UAtomUtilitiesBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertDecibelsToLinear", &UAtomUtilitiesBlueprintLibrary::execConvertDecibelsToLinear },
			{ "ConvertDecibelsToLinearSlower", &UAtomUtilitiesBlueprintLibrary::execConvertDecibelsToLinearSlower },
			{ "ConvertDecibelsToLinearSlowerFromFloor", &UAtomUtilitiesBlueprintLibrary::execConvertDecibelsToLinearSlowerFromFloor },
			{ "ConvertLinearToDecibels", &UAtomUtilitiesBlueprintLibrary::execConvertLinearToDecibels },
			{ "ConvertLinearToDecibelsSlower", &UAtomUtilitiesBlueprintLibrary::execConvertLinearToDecibelsSlower },
			{ "ConvertLinearToDecibelsSlowerFromFloor", &UAtomUtilitiesBlueprintLibrary::execConvertLinearToDecibelsSlowerFromFloor },
			{ "GetLinearFrequencyClamped", &UAtomUtilitiesBlueprintLibrary::execGetLinearFrequencyClamped },
			{ "GetLogFrequencyClamped", &UAtomUtilitiesBlueprintLibrary::execGetLogFrequencyClamped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinear_Parms
		{
			float InDecibels;
			FVector2D InRange;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDecibels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_InDecibels = { "InDecibels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinear_Parms, InDecibels), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinear_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_InDecibels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/**\n\x09 * Converts decibel to linear scale.\n\x09 * @param InDecibels\x09The decibels to convert to a linear gain scalar.\n\x09 * @param InRange\x09\x09The range to use when converting between linear and logarithmic scales.\n\x09 * @return\x09\x09\x09\x09The resulting linear gain.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Converts decibel to linear scale.\n@param InDecibels    The decibels to convert to a linear gain scalar.\n@param InRange               The range to use when converting between linear and logarithmic scales.\n@return                              The resulting linear gain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "ConvertDecibelsToLinear", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinear_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlower_Parms
		{
			float InDecibels;
			FVector2D InRange;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDecibels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_InDecibels = { "InDecibels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlower_Parms, InDecibels), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlower_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_InDecibels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/**\n\x09 * Converts decibel to linear scale with a slower end from 1.e-3 (60dB).\n\x09 * @param InDecibels\x09The decibels to convert to a linear gain scalar.\n\x09 * @param InRange\x09\x09The range to use when converting between linear and logarithmic scales.\n\x09 * @return\x09\x09\x09\x09The resulting linear gain.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Converts decibel to linear scale with a slower end from 1.e-3 (60dB).\n@param InDecibels    The decibels to convert to a linear gain scalar.\n@param InRange               The range to use when converting between linear and logarithmic scales.\n@return                              The resulting linear gain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "ConvertDecibelsToLinearSlower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlower_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlowerFromFloor_Parms
		{
			float InDecibels;
			FVector2D InRange;
			float InFloor;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDecibels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InDecibels = { "InDecibels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlowerFromFloor_Parms, InDecibels), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlowerFromFloor_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InFloor = { "InFloor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlowerFromFloor_Parms, InFloor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlowerFromFloor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InDecibels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_InFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/*KINDA_SMALL_NUMBER*/" },
		{ "CPP_Default_InFloor", "0.000100" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "KINDA_SMALL_NUMBER" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "ConvertDecibelsToLinearSlowerFromFloor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::AtomUtilitiesBlueprintLibrary_eventConvertDecibelsToLinearSlowerFromFloor_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibels_Parms
		{
			float InLinear;
			FVector2D InRange;
			float InFloor;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InLinear = { "InLinear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibels_Parms, InLinear), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibels_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InFloor = { "InFloor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibels_Parms, InFloor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_InFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/*SMALL_NUMBER*/" },
		{ "CPP_Default_InFloor", "0.000000" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "SMALL_NUMBER" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "ConvertLinearToDecibels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibels_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlower_Parms
		{
			float InLinear;
			FVector2D InRange;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_InLinear = { "InLinear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlower_Parms, InLinear), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlower_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_InLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/**\n\x09 * Converts linear scale volume to decibels with a slower end from 1.e-3 (60dB).\n\x09 * @param InLinear\x09\x09The linear scalar value to convert to decibels.\n\x09 * @param InRange\x09\x09The range to use when converting between linear and logarithmic scales.\n\x09 * @return\x09\x09\x09\x09The decibel value of the inputted linear scale.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Converts linear scale volume to decibels with a slower end from 1.e-3 (60dB).\n@param InLinear              The linear scalar value to convert to decibels.\n@param InRange               The range to use when converting between linear and logarithmic scales.\n@return                              The decibel value of the inputted linear scale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "ConvertLinearToDecibelsSlower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlower_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlowerFromFloor_Parms
		{
			float InLinear;
			FVector2D InRange;
			float InFloor;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InLinear = { "InLinear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlowerFromFloor_Parms, InLinear), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlowerFromFloor_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InFloor = { "InFloor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlowerFromFloor_Parms, InFloor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlowerFromFloor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_InFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/*KINDA_SMALL_NUMBER*/" },
		{ "CPP_Default_InFloor", "0.000100" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "KINDA_SMALL_NUMBER" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "ConvertLinearToDecibelsSlowerFromFloor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::AtomUtilitiesBlueprintLibrary_eventConvertLinearToDecibelsSlowerFromFloor_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventGetLinearFrequencyClamped_Parms
		{
			float InValue;
			FVector2D InDomain;
			FVector2D InRange;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLinearFrequencyClamped_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain = { "InDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLinearFrequencyClamped_Parms, InDomain), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLinearFrequencyClamped_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLinearFrequencyClamped_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/**\n\x09 * Returns the linear frequency of the input value. Maps log domain and range values to linear output (good for linear \n\x09 * slider representation/visualization of log frequency). Reverse of GetLogFrequencyClamped. \n\x09 * @param InValue\x09\x09\x09\x09\x09The logarithmic value to convert to linear frequency\n\x09 * @param InDomain\x09\x09\x09\x09\x09The domain to use when converting between linear and logarithmic scales\n\x09 * @param InRange\x09\x09\x09\x09\x09The range to use when converting between linear and logarithmic scales\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09The linear frequency of the given logarithmic input\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Returns the linear frequency of the input value. Maps log domain and range values to linear output (good for linear\nslider representation/visualization of log frequency). Reverse of GetLogFrequencyClamped.\n@param InValue                                       The logarithmic value to convert to linear frequency\n@param InDomain                                      The domain to use when converting between linear and logarithmic scales\n@param InRange                                       The range to use when converting between linear and logarithmic scales\n@return                                                      The linear frequency of the given logarithmic input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "GetLinearFrequencyClamped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::AtomUtilitiesBlueprintLibrary_eventGetLinearFrequencyClamped_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics
	{
		struct AtomUtilitiesBlueprintLibrary_eventGetLogFrequencyClamped_Parms
		{
			float InValue;
			FVector2D InDomain;
			FVector2D InRange;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLogFrequencyClamped_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain = { "InDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLogFrequencyClamped_Parms, InDomain), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLogFrequencyClamped_Parms, InRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomUtilitiesBlueprintLibrary_eventGetLogFrequencyClamped_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Utilities" },
		{ "Comment", "/** \n\x09 * Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency) \n\x09 * @param InValue\x09\x09\x09\x09\x09The linear value to convert to logarithmic frequency\n\x09 * @param InDomain\x09\x09\x09\x09\x09The domain to use when converting between linear and logarithmic scales\n\x09 * @param InRange\x09\x09\x09\x09\x09The range to use when converting between linear and logarithmic scales\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09The log frequency of the given input\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ToolTip", "Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)\n@param InValue                                       The linear value to convert to logarithmic frequency\n@param InDomain                                      The domain to use when converting between linear and logarithmic scales\n@param InRange                                       The range to use when converting between linear and logarithmic scales\n@return                                                      The log frequency of the given input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, nullptr, "GetLogFrequencyClamped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::AtomUtilitiesBlueprintLibrary_eventGetLogFrequencyClamped_Parms), Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomUtilitiesBlueprintLibrary);
	UClass* Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_NoRegister()
	{
		return UAtomUtilitiesBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinear, "ConvertDecibelsToLinear" }, // 2531690510
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlower, "ConvertDecibelsToLinearSlower" }, // 951819665
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertDecibelsToLinearSlowerFromFloor, "ConvertDecibelsToLinearSlowerFromFloor" }, // 2140121688
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibels, "ConvertLinearToDecibels" }, // 3258675174
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlower, "ConvertLinearToDecibelsSlower" }, // 1101006315
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_ConvertLinearToDecibelsSlowerFromFloor, "ConvertLinearToDecibelsSlowerFromFloor" }, // 219425270
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLinearFrequencyClamped, "GetLinearFrequencyClamped" }, // 1716678678
		{ &Z_Construct_UFunction_UAtomUtilitiesBlueprintLibrary_GetLogFrequencyClamped, "GetLogFrequencyClamped" }, // 1062210360
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Atom Utilities Blueprint Function Library\n *  A library of Atom related functions for use in Blueprints\n */" },
		{ "IncludePath", "Atom/AtomBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomBlueprintLibrary.h" },
		{ "ScriptName", "AtomUtilitiesLibrary" },
		{ "ToolTip", "Atom Utilities Blueprint Function Library\nA library of Atom related functions for use in Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomUtilitiesBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::ClassParams = {
		&UAtomUtilitiesBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAtomUtilitiesBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomUtilitiesBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomUtilitiesBlueprintLibrary.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomUtilitiesBlueprintLibrary>()
	{
		return UAtomUtilitiesBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomUtilitiesBlueprintLibrary);
	UAtomUtilitiesBlueprintLibrary::~UAtomUtilitiesBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRuntimeBlueprintLibrary, UAtomRuntimeBlueprintLibrary::StaticClass, TEXT("UAtomRuntimeBlueprintLibrary"), &Z_Registration_Info_UClass_UAtomRuntimeBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRuntimeBlueprintLibrary), 3345467388U) },
		{ Z_Construct_UClass_UAtomUtilitiesBlueprintLibrary, UAtomUtilitiesBlueprintLibrary::StaticClass, TEXT("UAtomUtilitiesBlueprintLibrary"), &Z_Registration_Info_UClass_UAtomUtilitiesBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomUtilitiesBlueprintLibrary), 2899662637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_4183902471(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
