// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCoreEditor/Private/ActorFactories/ActorFactoryAtomAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAtomAmbientSound() {}
// Cross Module References
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UActorFactoryAtomAmbientSound();
	CRIWARECOREEDITOR_API UClass* Z_Construct_UClass_UActorFactoryAtomAmbientSound_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareCoreEditor();
// End Cross Module References
	void UActorFactoryAtomAmbientSound::StaticRegisterNativesUActorFactoryAtomAmbientSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryAtomAmbientSound);
	UClass* Z_Construct_UClass_UActorFactoryAtomAmbientSound_NoRegister()
	{
		return UActorFactoryAtomAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of all Atom ambient sound types\n *****************************************************************************/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryAtomAmbientSound.h" },
		{ "ModuleRelativePath", "Private/ActorFactories/ActorFactoryAtomAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class of all Atom ambient sound types" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAtomAmbientSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics::ClassParams = {
		&UActorFactoryAtomAmbientSound::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryAtomAmbientSound()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryAtomAmbientSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryAtomAmbientSound.OuterSingleton, Z_Construct_UClass_UActorFactoryAtomAmbientSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryAtomAmbientSound.OuterSingleton;
	}
	template<> CRIWARECOREEDITOR_API UClass* StaticClass<UActorFactoryAtomAmbientSound>()
	{
		return UActorFactoryAtomAmbientSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAtomAmbientSound);
	UActorFactoryAtomAmbientSound::~UActorFactoryAtomAmbientSound() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ActorFactories_ActorFactoryAtomAmbientSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ActorFactories_ActorFactoryAtomAmbientSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryAtomAmbientSound, UActorFactoryAtomAmbientSound::StaticClass, TEXT("UActorFactoryAtomAmbientSound"), &Z_Registration_Info_UClass_UActorFactoryAtomAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryAtomAmbientSound), 3304708358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ActorFactories_ActorFactoryAtomAmbientSound_h_2824913591(TEXT("/Script/CriWareCoreEditor"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ActorFactories_ActorFactoryAtomAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCoreEditor_Private_ActorFactories_ActorFactoryAtomAmbientSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
