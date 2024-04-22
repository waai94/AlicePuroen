// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomRack.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomRack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConfig_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomDspBusSetting_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEndpointRack();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEndpointRack_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEndpointSettingsBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRack();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRack_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackWithParentBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackWithParentBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRack();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRack_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundfieldRack();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundfieldRack_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomGainParamMode();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnRackEnvelope_Parms
		{
			TArray<float> Envelope;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Envelope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnRackEnvelope_Parms, Envelope), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::NewProp_Envelope,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when a new rack envelope value is generated on the given runtime id (different for multiple PIE). Array is an envelope value for each channel.\n*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Called when a new rack envelope value is generated on the given runtime id (different for multiple PIE). Array is an envelope value for each channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnRackEnvelope__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::_Script_CriWareCore_eventOnRackEnvelope_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnRackEnvelope__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics
	{
		struct _Script_CriWareCore_eventOnRackSpectralAnalysis_Parms
		{
			TArray<float> Magnitudes;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitudes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitudes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnitudes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_Inner = { "Magnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes = { "Magnitudes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareCore_eventOnRackSpectralAnalysis_Parms, Magnitudes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnRackSpectralAnalysis__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::_Script_CriWareCore_eventOnRackSpectralAnalysis_Parms), Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnRackSpectralAnalysis__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAtomRackBase::StaticRegisterNativesUAtomRackBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRackBase);
	UClass* Z_Construct_UClass_UAtomRackBase_NoRegister()
	{
		return UAtomRackBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRackBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildRacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildRacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildRacks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MasterBus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRackBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomRack.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRackBase_Statics::NewProp_ChildRacks_Inner = { "ChildRacks", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackBase_Statics::NewProp_ChildRacks_MetaData[] = {
		{ "Category", "Atom Rack" },
		{ "Comment", "// Child racks to this rack\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Child racks to this rack" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomRackBase_Statics::NewProp_ChildRacks = { "ChildRacks", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRackBase, ChildRacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomRackBase_Statics::NewProp_ChildRacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackBase_Statics::NewProp_ChildRacks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackBase_Statics::NewProp_MasterBus_MetaData[] = {
		{ "Category", "Buses" },
		{ "Comment", "// Master Bus - always one defined per rack\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Master Bus - always one defined per rack" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRackBase_Statics::NewProp_MasterBus = { "MasterBus", nullptr, (EPropertyFlags)0x00160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRackBase, MasterBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomRackBase_Statics::NewProp_MasterBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackBase_Statics::NewProp_MasterBus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomRackBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackBase_Statics::NewProp_ChildRacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackBase_Statics::NewProp_ChildRacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackBase_Statics::NewProp_MasterBus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRackBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRackBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRackBase_Statics::ClassParams = {
		&UAtomRackBase::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomRackBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackBase_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRackBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRackBase()
	{
		if (!Z_Registration_Info_UClass_UAtomRackBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRackBase.OuterSingleton, Z_Construct_UClass_UAtomRackBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRackBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomRackBase>()
	{
		return UAtomRackBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRackBase);
	UAtomRackBase::~UAtomRackBase() {}
	void UAtomRackWithParentBase::StaticRegisterNativesUAtomRackWithParentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRackWithParentBase);
	UClass* Z_Construct_UClass_UAtomRackWithParentBase_NoRegister()
	{
		return UAtomRackWithParentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRackWithParentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentRack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentRack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRackWithParentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomRackBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackWithParentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This rack class can be derived from for racks that output to a parent rack.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AtomRack.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This rack class can be derived from for racks that output to a parent rack." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRackWithParentBase_Statics::NewProp_ParentRack_MetaData[] = {
		{ "Category", "Atom Rack" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRackWithParentBase_Statics::NewProp_ParentRack = { "ParentRack", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRackWithParentBase, ParentRack), Z_Construct_UClass_UAtomRackBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomRackWithParentBase_Statics::NewProp_ParentRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackWithParentBase_Statics::NewProp_ParentRack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomRackWithParentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRackWithParentBase_Statics::NewProp_ParentRack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRackWithParentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRackWithParentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRackWithParentBase_Statics::ClassParams = {
		&UAtomRackWithParentBase::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomRackWithParentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackWithParentBase_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRackWithParentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRackWithParentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRackWithParentBase()
	{
		if (!Z_Registration_Info_UClass_UAtomRackWithParentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRackWithParentBase.OuterSingleton, Z_Construct_UClass_UAtomRackWithParentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRackWithParentBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomRackWithParentBase>()
	{
		return UAtomRackWithParentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRackWithParentBase);
	UAtomRackWithParentBase::~UAtomRackWithParentBase() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomGainParamMode;
	static UEnum* EAtomGainParamMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomGainParamMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomGainParamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomGainParamMode, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomGainParamMode"));
		}
		return Z_Registration_Info_UEnum_EAtomGainParamMode.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomGainParamMode>()
	{
		return EAtomGainParamMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::Enumerators[] = {
		{ "EAtomGainParamMode::Linear", (int64)EAtomGainParamMode::Linear },
		{ "EAtomGainParamMode::Decibels", (int64)EAtomGainParamMode::Decibels },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Whether to use linear or decibel values for audio gains\n" },
		{ "Decibels.Name", "EAtomGainParamMode::Decibels" },
		{ "Linear.Name", "EAtomGainParamMode::Linear" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Whether to use linear or decibel values for audio gains" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomGainParamMode",
		"EAtomGainParamMode",
		Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomGainParamMode()
	{
		if (!Z_Registration_Info_UEnum_EAtomGainParamMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomGainParamMode.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomGainParamMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomGainParamMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UAtomRack::execGetSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSnapshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRack::execBP_SetSnapshot)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSnapshot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_SetSnapshot(Z_Param_Out_InSnapshot,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRack::execSetSnapshot)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSnapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshot(Z_Param_Out_InSnapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRack::execSetDspBusSetting)
	{
		P_GET_OBJECT(UAtomDspBusSetting,Z_Param_InDspBusSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDspBusSetting(Z_Param_InDspBusSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRack::execGetDspBusSettingName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDspBusSettingName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRack::execSetDspBusSettingName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDspBusSettingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDspBusSettingName(Z_Param_Out_InDspBusSettingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomRack::execSetAtomConfig)
	{
		P_GET_OBJECT(UAtomConfig,Z_Param_InAtomConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtomConfig(Z_Param_InAtomConfig);
		P_NATIVE_END;
	}
	void UAtomRack::StaticRegisterNativesUAtomRack()
	{
		UClass* Class = UAtomRack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_SetSnapshot", &UAtomRack::execBP_SetSnapshot },
			{ "GetDspBusSettingName", &UAtomRack::execGetDspBusSettingName },
			{ "GetSnapshot", &UAtomRack::execGetSnapshot },
			{ "SetAtomConfig", &UAtomRack::execSetAtomConfig },
			{ "SetDspBusSetting", &UAtomRack::execSetDspBusSetting },
			{ "SetDspBusSettingName", &UAtomRack::execSetDspBusSettingName },
			{ "SetSnapshot", &UAtomRack::execSetSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics
	{
		struct AtomRack_eventBP_SetSnapshot_Parms
		{
			FName InSnapshot;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSnapshot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::NewProp_InSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::NewProp_InSnapshot = { "InSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventBP_SetSnapshot_Parms, InSnapshot), METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::NewProp_InSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::NewProp_InSnapshot_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventBP_SetSnapshot_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::NewProp_InSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** Setup a snapshot to this rack and apply it with fade time in seconds. */" },
		{ "DisplayName", "SetSnapshot" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Setup a snapshot to this rack and apply it with fade time in seconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRack, nullptr, "BP_SetSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::AtomRack_eventBP_SetSnapshot_Parms), Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRack_BP_SetSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRack_BP_SetSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics
	{
		struct AtomRack_eventGetDspBusSettingName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventGetDspBusSettingName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buses" },
		{ "Comment", "/** Get the name of currently applied DspBusSetting. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Get the name of currently applied DspBusSetting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRack, nullptr, "GetDspBusSettingName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::AtomRack_eventGetDspBusSettingName_Parms), Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRack_GetDspBusSettingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRack_GetDspBusSettingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics
	{
		struct AtomRack_eventGetSnapshot_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventGetSnapshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Snapshot" },
		{ "Comment", "/** Get the currently applied snapshot to this rack. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Get the currently applied snapshot to this rack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRack, nullptr, "GetSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::AtomRack_eventGetSnapshot_Parms), Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRack_GetSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRack_GetSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics
	{
		struct AtomRack_eventSetAtomConfig_Parms
		{
			const UAtomConfig* InAtomConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAtomConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAtomConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::NewProp_InAtomConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::NewProp_InAtomConfig = { "InAtomConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventSetAtomConfig_Parms, InAtomConfig), Z_Construct_UClass_UAtomConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::NewProp_InAtomConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::NewProp_InAtomConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::NewProp_InAtomConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Buses" },
		{ "Comment", "/** Change the Atom config to use with this rack. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Change the Atom config to use with this rack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRack, nullptr, "SetAtomConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::AtomRack_eventSetAtomConfig_Parms), Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRack_SetAtomConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRack_SetAtomConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics
	{
		struct AtomRack_eventSetDspBusSetting_Parms
		{
			const UAtomDspBusSetting* InDspBusSetting;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDspBusSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDspBusSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::NewProp_InDspBusSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::NewProp_InDspBusSetting = { "InDspBusSetting", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventSetDspBusSetting_Parms, InDspBusSetting), Z_Construct_UClass_UAtomDspBusSetting_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::NewProp_InDspBusSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::NewProp_InDspBusSetting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::NewProp_InDspBusSetting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Buses" },
		{ "Comment", "/** Setup a DSP bus settings and udpate buses. Buses with name that does not exist anymore in settings are wiped out. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Setup a DSP bus settings and udpate buses. Buses with name that does not exist anymore in settings are wiped out." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRack, nullptr, "SetDspBusSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::AtomRack_eventSetDspBusSetting_Parms), Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRack_SetDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRack_SetDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics
	{
		struct AtomRack_eventSetDspBusSettingName_Parms
		{
			FName InDspBusSettingName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDspBusSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDspBusSettingName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::NewProp_InDspBusSettingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::NewProp_InDspBusSettingName = { "InDspBusSettingName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventSetDspBusSettingName_Parms, InDspBusSettingName), METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::NewProp_InDspBusSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::NewProp_InDspBusSettingName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::NewProp_InDspBusSettingName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Buses" },
		{ "Comment", "/** Change the currently applied DspBusSetting by the name. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Change the currently applied DspBusSetting by the name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRack, nullptr, "SetDspBusSettingName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::AtomRack_eventSetDspBusSettingName_Parms), Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRack_SetDspBusSettingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRack_SetDspBusSettingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics
	{
		struct AtomRack_eventSetSnapshot_Parms
		{
			FName InSnapshot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSnapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::NewProp_InSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::NewProp_InSnapshot = { "InSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomRack_eventSetSnapshot_Parms, InSnapshot), METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::NewProp_InSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::NewProp_InSnapshot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::NewProp_InSnapshot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Snapshot" },
		{ "Comment", "/** Setup a snapshot to this rack and apply it without fading. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Setup a snapshot to this rack and apply it without fading." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomRack, nullptr, "SetSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::AtomRack_eventSetSnapshot_Parms), Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomRack_SetSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomRack_SetSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomRack);
	UClass* Z_Construct_UClass_UAtomRack_NoRegister()
	{
		return UAtomRack::StaticClass();
	}
	struct Z_Construct_UClass_UAtomRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMuteWhenBackgrounded_MetaData[];
#endif
		static void NewProp_bMuteWhenBackgrounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuteWhenBackgrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DspBusSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DspBusSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Buses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomRackWithParentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomRack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomRack_BP_SetSnapshot, "BP_SetSnapshot" }, // 190461011
		{ &Z_Construct_UFunction_UAtomRack_GetDspBusSettingName, "GetDspBusSettingName" }, // 611329889
		{ &Z_Construct_UFunction_UAtomRack_GetSnapshot, "GetSnapshot" }, // 2268548024
		{ &Z_Construct_UFunction_UAtomRack_SetAtomConfig, "SetAtomConfig" }, // 2326744362
		{ &Z_Construct_UFunction_UAtomRack_SetDspBusSetting, "SetDspBusSetting" }, // 2094234507
		{ &Z_Construct_UFunction_UAtomRack_SetDspBusSettingName, "SetDspBusSettingName" }, // 3129991564
		{ &Z_Construct_UFunction_UAtomRack_SetSnapshot, "SetSnapshot" }, // 255049922
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Atom Rack class meant for applying an effect to the downmixed sum of multiple audio sources.\n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Atom/AtomRack.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Atom Rack class meant for applying an effect to the downmixed sum of multiple audio sources." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_bMuteWhenBackgrounded_MetaData[] = {
		{ "Category", "Atom Rack" },
		{ "Comment", "/** Mute this rack when the application is muted or in the background. Used to prevent rack effect tails from continuing when tabbing out of application or if application is muted. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Mute this rack when the application is muted or in the background. Used to prevent rack effect tails from continuing when tabbing out of application or if application is muted." },
	};
#endif
	void Z_Construct_UClass_UAtomRack_Statics::NewProp_bMuteWhenBackgrounded_SetBit(void* Obj)
	{
		((UAtomRack*)Obj)->bMuteWhenBackgrounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_bMuteWhenBackgrounded = { "bMuteWhenBackgrounded", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtomRack), &Z_Construct_UClass_UAtomRack_Statics::NewProp_bMuteWhenBackgrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_bMuteWhenBackgrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_bMuteWhenBackgrounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Sound Renderer" },
		{ "ClampMax", "128" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of channels to output.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Number of channels to output." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, NumChannels), METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "Category", "Sound Renderer" },
		{ "ClampMin", "0" },
		{ "Comment", "// Sample Rate to output.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Sample Rate to output." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, SamplingRate), METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_ServerFrequency_MetaData[] = {
		{ "Category", "Sound Renderer" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Atom server frequency to use.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Atom server frequency to use." },
		{ "Units", "Hz" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_ServerFrequency = { "ServerFrequency", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, ServerFrequency), METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_ServerFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_ServerFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_AtomConfig_MetaData[] = {
		{ "BlueprintSetter", "SetAtomConfig" },
		{ "Category", "Buses" },
		{ "Comment", "// AtomConfig to use with this rack\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "AtomConfig to use with this rack" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_AtomConfig = { "AtomConfig", nullptr, (EPropertyFlags)0x0014010000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, AtomConfig), Z_Construct_UClass_UAtomConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_AtomConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_AtomConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSettingName_MetaData[] = {
		{ "BlueprintGetter", "GetDspBusSettingName" },
		{ "BlueprintSetter", "SetDspBusSettingName" },
		{ "Category", "Buses" },
		{ "Comment", "// The name of the DSP bus setting to use\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "The name of the DSP bus setting to use" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSettingName = { "DspBusSettingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, DspBusSettingName), METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSetting_MetaData[] = {
		{ "BlueprintSetter", "SetDspBusSetting" },
		{ "Category", "Buses" },
		{ "Comment", "// Attached Dsp Bus Settings\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Attached Dsp Bus Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSetting = { "DspBusSetting", nullptr, (EPropertyFlags)0x0014010000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, DspBusSetting), Z_Construct_UClass_UAtomDspBusSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_Snapshot_MetaData[] = {
		{ "BlueprintGetter", "GetSnapshot" },
		{ "BlueprintSetter", "SetSnapshot" },
		{ "Category", "Snapshot" },
		{ "Comment", "// Initial snapshot. Will use this snapshot at initialisation of the rack.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Initial snapshot. Will use this snapshot at initialisation of the rack." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, Snapshot), METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_Snapshot_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_Buses_Inner = { "Buses", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_Buses_MetaData[] = {
		{ "Category", "Buses" },
		{ "Comment", "// Buses used in this rack.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Buses used in this rack." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_Buses = { "Buses", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, Buses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_Buses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_Buses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomRack, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_bMuteWhenBackgrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_NumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_SamplingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_ServerFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_AtomConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_DspBusSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_Snapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_Buses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_Buses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomRack_Statics::NewProp_EnvelopeFollowerReleaseTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomRack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomRack_Statics::ClassParams = {
		&UAtomRack::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomRack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomRack()
	{
		if (!Z_Registration_Info_UClass_UAtomRack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomRack.OuterSingleton, Z_Construct_UClass_UAtomRack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomRack.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomRack>()
	{
		return UAtomRack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomRack);
	UAtomRack::~UAtomRack() {}
	void UAtomSoundfieldRack::StaticRegisterNativesUAtomSoundfieldRack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundfieldRack);
	UClass* Z_Construct_UClass_UAtomSoundfieldRack_NoRegister()
	{
		return UAtomSoundfieldRack::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundfieldRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundfieldRendererType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldRendererType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundfieldRendererType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundfieldRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomRackWithParentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundfieldRack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Rack class meant for use with soundfield formats, such as Ambisonics.\n */" },
		{ "DisplayName", "Sound Rack Soundfield" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Atom/AtomRack.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Sound Rack class meant for use with soundfield formats, such as Ambisonics." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomSoundfieldRack_Statics::NewProp_SoundfieldRendererType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundfieldRack_Statics::NewProp_SoundfieldRendererType_MetaData[] = {
		{ "Category", "Sound Renderer" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "Tooltip", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomSoundfieldRack_Statics::NewProp_SoundfieldRendererType = { "SoundfieldRendererType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundfieldRack, SoundfieldRendererType), Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundfieldRack_Statics::NewProp_SoundfieldRendererType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldRack_Statics::NewProp_SoundfieldRendererType_MetaData)) }; // 2800865008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundfieldRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundfieldRack_Statics::NewProp_SoundfieldRendererType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundfieldRack_Statics::NewProp_SoundfieldRendererType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundfieldRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundfieldRack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundfieldRack_Statics::ClassParams = {
		&UAtomSoundfieldRack::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundfieldRack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldRack_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundfieldRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundfieldRack()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundfieldRack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundfieldRack.OuterSingleton, Z_Construct_UClass_UAtomSoundfieldRack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundfieldRack.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundfieldRack>()
	{
		return UAtomSoundfieldRack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundfieldRack);
	UAtomSoundfieldRack::~UAtomSoundfieldRack() {}
	void UAtomEndpointRack::StaticRegisterNativesUAtomEndpointRack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomEndpointRack);
	UClass* Z_Construct_UClass_UAtomEndpointRack_NoRegister()
	{
		return UAtomEndpointRack::StaticClass();
	}
	struct Z_Construct_UClass_UAtomEndpointRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundRendererType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundRendererType;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputPort;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EndpointSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EndpointSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomEndpointRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomRackBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEndpointRack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AtomEndpointRack class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device.\n */" },
		{ "DisplayName", "Atom Rack Endpoint" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AtomRack.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AtomEndpointRack class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_SoundRendererType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_SoundRendererType_MetaData[] = {
		{ "Category", "Sound Renderer" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "Tooltip", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_SoundRendererType = { "SoundRendererType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomEndpointRack, SoundRendererType), Z_Construct_UEnum_CriWareCore_EAtomSoundRendererType, METADATA_PARAMS(Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_SoundRendererType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_SoundRendererType_MetaData)) }; // 1762093159
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_OutputPort_MetaData[] = {
		{ "Comment", "/** This will select the port number of the sound renderer type to use. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "This will select the port number of the sound renderer type to use." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_OutputPort = { "OutputPort", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomEndpointRack, OutputPort_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_OutputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_OutputPort_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_EndpointSettings_Inner = { "EndpointSettings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomEndpointSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Sound Renderer" },
		{ "Comment", "/** Settings for the endpoint. Only one endpoint is used at time but you can set multiple settings for each platforms. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Settings for the endpoint. Only one endpoint is used at time but you can set multiple settings for each platforms." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomEndpointRack, EndpointSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_EndpointSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomEndpointRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_SoundRendererType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_SoundRendererType,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_OutputPort,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_EndpointSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomEndpointRack_Statics::NewProp_EndpointSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomEndpointRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomEndpointRack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomEndpointRack_Statics::ClassParams = {
		&UAtomEndpointRack::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomEndpointRack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEndpointRack_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomEndpointRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEndpointRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomEndpointRack()
	{
		if (!Z_Registration_Info_UClass_UAtomEndpointRack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomEndpointRack.OuterSingleton, Z_Construct_UClass_UAtomEndpointRack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomEndpointRack.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomEndpointRack>()
	{
		return UAtomEndpointRack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomEndpointRack);
	UAtomEndpointRack::~UAtomEndpointRack() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomEndpointRack)
#endif
	void UAtomSoundfieldEndpointRack::StaticRegisterNativesUAtomSoundfieldEndpointRack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundfieldEndpointRack);
	UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRack_NoRegister()
	{
		return UAtomSoundfieldEndpointRack::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundfieldRendererType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldRendererType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundfieldRendererType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomRackBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**    \n * Sound Rack class meant for sending soundfield-encoded audio to an                            external endpoint, such as a hardware binaural renderer that supports ambisonics.\n */" },
		{ "DisplayName", "Sound Rack Soundfield Endpoint" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AtomRack.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "ToolTip", "Sound Rack class meant for sending soundfield-encoded audio to an                            external endpoint, such as a hardware binaural renderer that supports ambisonics." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::NewProp_SoundfieldRendererType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::NewProp_SoundfieldRendererType_MetaData[] = {
		{ "Category", "Sound Renderer" },
		{ "ModuleRelativePath", "Public/Atom/AtomRack.h" },
		{ "Tooltip", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::NewProp_SoundfieldRendererType = { "SoundfieldRendererType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundfieldEndpointRack, SoundfieldRendererType), Z_Construct_UEnum_CriWareCore_EAtomSoundfieldRendererType, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::NewProp_SoundfieldRendererType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::NewProp_SoundfieldRendererType_MetaData)) }; // 2800865008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::NewProp_SoundfieldRendererType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::NewProp_SoundfieldRendererType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundfieldEndpointRack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::ClassParams = {
		&UAtomSoundfieldEndpointRack::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundfieldEndpointRack()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundfieldEndpointRack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundfieldEndpointRack.OuterSingleton, Z_Construct_UClass_UAtomSoundfieldEndpointRack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundfieldEndpointRack.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundfieldEndpointRack>()
	{
		return UAtomSoundfieldEndpointRack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundfieldEndpointRack);
	UAtomSoundfieldEndpointRack::~UAtomSoundfieldEndpointRack() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_Statics::EnumInfo[] = {
		{ EAtomGainParamMode_StaticEnum, TEXT("EAtomGainParamMode"), &Z_Registration_Info_UEnum_EAtomGainParamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4203391367U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomRackBase, UAtomRackBase::StaticClass, TEXT("UAtomRackBase"), &Z_Registration_Info_UClass_UAtomRackBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRackBase), 360855619U) },
		{ Z_Construct_UClass_UAtomRackWithParentBase, UAtomRackWithParentBase::StaticClass, TEXT("UAtomRackWithParentBase"), &Z_Registration_Info_UClass_UAtomRackWithParentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRackWithParentBase), 1487786881U) },
		{ Z_Construct_UClass_UAtomRack, UAtomRack::StaticClass, TEXT("UAtomRack"), &Z_Registration_Info_UClass_UAtomRack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomRack), 350559717U) },
		{ Z_Construct_UClass_UAtomSoundfieldRack, UAtomSoundfieldRack::StaticClass, TEXT("UAtomSoundfieldRack"), &Z_Registration_Info_UClass_UAtomSoundfieldRack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundfieldRack), 1169478186U) },
		{ Z_Construct_UClass_UAtomEndpointRack, UAtomEndpointRack::StaticClass, TEXT("UAtomEndpointRack"), &Z_Registration_Info_UClass_UAtomEndpointRack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomEndpointRack), 3291201910U) },
		{ Z_Construct_UClass_UAtomSoundfieldEndpointRack, UAtomSoundfieldEndpointRack::StaticClass, TEXT("UAtomSoundfieldEndpointRack"), &Z_Registration_Info_UClass_UAtomSoundfieldEndpointRack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundfieldEndpointRack), 3443913503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_79564951(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomRack_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
