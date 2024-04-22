// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Modulation/AtomModulationControlBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomModulationControlBus() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationControlBus();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationControlBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationGenerator_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulationParameter_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomModulatorBase();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomModulationControlBus::StaticRegisterNativesUAtomModulationControlBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomModulationControlBus);
	UClass* Z_Construct_UClass_UAtomModulationControlBus_NoRegister()
	{
		return UAtomModulationControlBus::StaticClass();
	}
	struct Z_Construct_UClass_UAtomModulationControlBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAddress_MetaData[];
#endif
		static void NewProp_bOverrideAddress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAddress;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Generators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Generators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomModulationControlBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomModulatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class to assign settings allowing modulation AISAC control override. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/Modulation/AtomModulationControlBus.h" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class to assign settings allowing modulation AISAC control override." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If true, bypasses control bus from being modulated by parameters, patches, or mixed (control bus remains active and computed). */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBus.h" },
		{ "ToolTip", "If true, bypasses control bus from being modulated by parameters, patches, or mixed (control bus remains active and computed)." },
	};
#endif
	void Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((UAtomModulationControlBus*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomModulationControlBus), &Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bBypass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bOverrideAddress_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/** If true, Address field is used in place of object name for address used when applying mix changes using filtering. */" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBus.h" },
		{ "ToolTip", "If true, Address field is used in place of object name for address used when applying mix changes using filtering." },
	};
#endif
	void Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bOverrideAddress_SetBit(void* Obj)
	{
		((UAtomModulationControlBus*)Obj)->bOverrideAddress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bOverrideAddress = { "bOverrideAddress", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomModulationControlBus), &Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bOverrideAddress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bOverrideAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bOverrideAddress_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBus.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationControlBus, Parameter), Z_Construct_UClass_UAtomModulationParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/** Address to use when applying mix changes. */" },
		{ "EditCondition", "bOverrideAddress" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBus.h" },
		{ "ToolTip", "Address to use when applying mix changes." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationControlBus, Address), METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomModulationGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Generators_MetaData[] = {
		{ "Category", "Generators" },
		{ "ModuleRelativePath", "Public/Atom/Modulation/AtomModulationControlBus.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomModulationControlBus, Generators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Generators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Generators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomModulationControlBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bBypass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_bOverrideAddress,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Generators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomModulationControlBus_Statics::NewProp_Generators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomModulationControlBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomModulationControlBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomModulationControlBus_Statics::ClassParams = {
		&UAtomModulationControlBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomModulationControlBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBus_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomModulationControlBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomModulationControlBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomModulationControlBus()
	{
		if (!Z_Registration_Info_UClass_UAtomModulationControlBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomModulationControlBus.OuterSingleton, Z_Construct_UClass_UAtomModulationControlBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomModulationControlBus.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomModulationControlBus>()
	{
		return UAtomModulationControlBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomModulationControlBus);
	UAtomModulationControlBus::~UAtomModulationControlBus() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomModulationControlBus, UAtomModulationControlBus::StaticClass, TEXT("UAtomModulationControlBus"), &Z_Registration_Info_UClass_UAtomModulationControlBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomModulationControlBus), 2779521769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBus_h_2770756969(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Modulation_AtomModulationControlBus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
