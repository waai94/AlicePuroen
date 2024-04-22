// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomAudioBusSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioBusSubsystem() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioBusSubsystem();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioBusSubsystem_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomAudioBusSubsystem::StaticRegisterNativesUAtomAudioBusSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAudioBusSubsystem);
	UClass* Z_Construct_UClass_UAtomAudioBusSubsystem_NoRegister()
	{
		return UAtomAudioBusSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioBusSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioBusSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioBusSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*  UAtomAudioBusSubsystem\n*/" },
		{ "IncludePath", "Atom/AtomAudioBusSubsystem.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomAudioBusSubsystem.h" },
		{ "ToolTip", "UAtomAudioBusSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioBusSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioBusSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioBusSubsystem_Statics::ClassParams = {
		&UAtomAudioBusSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioBusSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioBusSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioBusSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAtomAudioBusSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAudioBusSubsystem.OuterSingleton, Z_Construct_UClass_UAtomAudioBusSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAudioBusSubsystem.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAudioBusSubsystem>()
	{
		return UAtomAudioBusSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioBusSubsystem);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBusSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBusSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAudioBusSubsystem, UAtomAudioBusSubsystem::StaticClass, TEXT("UAtomAudioBusSubsystem"), &Z_Registration_Info_UClass_UAtomAudioBusSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAudioBusSubsystem), 3694372619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBusSubsystem_h_145332304(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBusSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBusSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
