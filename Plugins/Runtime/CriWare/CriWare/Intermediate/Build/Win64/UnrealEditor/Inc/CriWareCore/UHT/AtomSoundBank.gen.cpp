// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundBank.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundBank() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundAsset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBank();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBank_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundResource();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundResource_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomSoundResource::StaticRegisterNativesUAtomSoundResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundResource);
	UClass* Z_Construct_UClass_UAtomSoundResource_NoRegister()
	{
		return UAtomSoundResource::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundResource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBank.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomSoundResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundResource_Statics::ClassParams = {
		&UAtomSoundResource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundResource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundResource()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundResource.OuterSingleton, Z_Construct_UClass_UAtomSoundResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundResource.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundResource>()
	{
		return UAtomSoundResource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundResource);
	UAtomSoundResource::~UAtomSoundResource() {}
	DEFINE_FUNCTION(UAtomSoundBank::execGetSound)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomSoundBase**)Z_Param__Result=P_THIS->GetSound(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSoundBank::execGetNumSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSoundBank::execGetSoundClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetSoundClass();
		P_NATIVE_END;
	}
	void UAtomSoundBank::StaticRegisterNativesUAtomSoundBank()
	{
		UClass* Class = UAtomSoundBank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumSounds", &UAtomSoundBank::execGetNumSounds },
			{ "GetSound", &UAtomSoundBank::execGetSound },
			{ "GetSoundClass", &UAtomSoundBank::execGetSoundClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics
	{
		struct AtomSoundBank_eventGetNumSounds_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSoundBank_eventGetNumSounds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Sound" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBank.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSoundBank, nullptr, "GetNumSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::AtomSoundBank_eventGetNumSounds_Parms), Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSoundBank_GetNumSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSoundBank_GetNumSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics
	{
		struct AtomSoundBank_eventGetSound_Parms
		{
			int32 Index;
			UAtomSoundBase* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSoundBank_eventGetSound_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSoundBank_eventGetSound_Parms, ReturnValue), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Sound" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBank.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSoundBank, nullptr, "GetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::AtomSoundBank_eventGetSound_Parms), Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSoundBank_GetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSoundBank_GetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics
	{
		struct AtomSoundBank_eventGetSoundClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSoundBank_eventGetSoundClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|Sound" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBank.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSoundBank, nullptr, "GetSoundClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::AtomSoundBank_eventGetSoundClass_Parms), Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSoundBank_GetSoundClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSoundBank_GetSoundClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundBank);
	UClass* Z_Construct_UClass_UAtomSoundBank_NoRegister()
	{
		return UAtomSoundBank::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingBehavior;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomSoundBank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSoundBank_GetNumSounds, "GetNumSounds" }, // 3200039316
		{ &Z_Construct_UFunction_UAtomSoundBank_GetSound, "GetSound" }, // 4180798753
		{ &Z_Construct_UFunction_UAtomSoundBank_GetSoundClass, "GetSoundClass" }, // 2015400163
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Common class for Wave Bank and Cue Sheet\n *****************************************************************************/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomSoundBank.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBank.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Common class for Wave Bank and Cue Sheet" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_LoadingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_LoadingBehavior_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Specifies how and when wave data are loaded for asset if stream cache is enabled. */" },
		{ "DisplayName", "Loading Behavior Override" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBank.h" },
		{ "ToolTip", "Specifies how and when wave data are loaded for asset if stream cache is enabled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_LoadingBehavior = { "LoadingBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBank, LoadingBehavior), Z_Construct_UEnum_CriWareCore_EAtomSoundWaveLoadingBehavior, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_LoadingBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_LoadingBehavior_MetaData)) }; // 553665384
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Reimport" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundBank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0016000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundBank, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_LoadingBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_LoadingBehavior,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundBank_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomSoundBank_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAtomSoundResource_NoRegister, (int32)VTABLE_OFFSET(UAtomSoundBank, IAtomSoundResource), false },  // 3379985488
			{ Z_Construct_UClass_UAtomSoundAsset_NoRegister, (int32)VTABLE_OFFSET(UAtomSoundBank, IAtomSoundAsset), false },  // 1060465604
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundBank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundBank_Statics::ClassParams = {
		&UAtomSoundBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomSoundBank_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBank_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundBank()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundBank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundBank.OuterSingleton, Z_Construct_UClass_UAtomSoundBank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundBank.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundBank>()
	{
		return UAtomSoundBank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundBank);
	UAtomSoundBank::~UAtomSoundBank() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomSoundBank)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundResource, UAtomSoundResource::StaticClass, TEXT("UAtomSoundResource"), &Z_Registration_Info_UClass_UAtomSoundResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundResource), 3379985488U) },
		{ Z_Construct_UClass_UAtomSoundBank, UAtomSoundBank::StaticClass, TEXT("UAtomSoundBank"), &Z_Registration_Info_UClass_UAtomSoundBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundBank), 2263440364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBank_h_326708431(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundBank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
