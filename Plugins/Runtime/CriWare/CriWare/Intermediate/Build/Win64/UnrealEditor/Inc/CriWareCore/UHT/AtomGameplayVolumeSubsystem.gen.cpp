// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomGameplayVolumeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGameplayVolumeSubsystem() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomActiveSoundUpdate_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEngineSubsystem();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeSubsystem();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomGameplayVolumeSubsystem::StaticRegisterNativesUAtomGameplayVolumeSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumeSubsystem);
	UClass* Z_Construct_UClass_UAtomGameplayVolumeSubsystem_NoRegister()
	{
		return UAtomGameplayVolumeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AGVComponents_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AGVComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AGVComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AGVComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAtomGameplayVolumeSubsystem\n */" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayVolumeSubsystem.h" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeSubsystem.h" },
		{ "ToolTip", "UAtomGameplayVolumeSubsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_ValueProp = { "AGVComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAtomGameplayVolumeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_Key_KeyProp = { "AGVComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_MetaData[] = {
		{ "Comment", "// Components in our system.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeSubsystem.h" },
		{ "ToolTip", "Components in our system." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents = { "AGVComponents", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomGameplayVolumeSubsystem, AGVComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::NewProp_AGVComponents,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAtomActiveSoundUpdate_NoRegister, (int32)VTABLE_OFFSET(UAtomGameplayVolumeSubsystem, IAtomActiveSoundUpdate), false },  // 2214304939
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayVolumeSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::ClassParams = {
		&UAtomGameplayVolumeSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumeSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumeSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumeSubsystem.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumeSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumeSubsystem.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumeSubsystem>()
	{
		return UAtomGameplayVolumeSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumeSubsystem);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomGameplayVolumeSubsystem, UAtomGameplayVolumeSubsystem::StaticClass, TEXT("UAtomGameplayVolumeSubsystem"), &Z_Registration_Info_UClass_UAtomGameplayVolumeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumeSubsystem), 2662815679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeSubsystem_h_3366274148(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
