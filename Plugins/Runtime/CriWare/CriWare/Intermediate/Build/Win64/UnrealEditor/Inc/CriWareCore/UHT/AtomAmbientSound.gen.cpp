// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAmbientSound() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_AAtomAmbientSound();
	CRIWARECORE_API UClass* Z_Construct_UClass_AAtomAmbientSound_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void AAtomAmbientSound::StaticRegisterNativesAAtomAmbientSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomAmbientSound);
	UClass* Z_Construct_UClass_AAtomAmbientSound_NoRegister()
	{
		return AAtomAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_AAtomAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Atom" },
		{ "ClassGroupNames", "Atom" },
		{ "Comment", "/** A sound actor that can be placed in a level */" },
		{ "HideCategories", "Collision Input Game" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Atom/AtomAmbientSound.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
		{ "ToolTip", "A sound actor that can be placed in a level" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAmbientSound_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atom" },
		{ "Comment", "/** Audio component that handles sound playing */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Atom,Atom|Components|Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomAmbientSound.h" },
		{ "ToolTip", "Audio component that handles sound playing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAtomAmbientSound_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomAmbientSound, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtomAmbientSound_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAmbientSound_Statics::NewProp_AtomComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomAmbientSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAmbientSound_Statics::NewProp_AtomComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomAmbientSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomAmbientSound_Statics::ClassParams = {
		&AAtomAmbientSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtomAmbientSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAmbientSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomAmbientSound()
	{
		if (!Z_Registration_Info_UClass_AAtomAmbientSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomAmbientSound.OuterSingleton, Z_Construct_UClass_AAtomAmbientSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtomAmbientSound.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<AAtomAmbientSound>()
	{
		return AAtomAmbientSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomAmbientSound);
	AAtomAmbientSound::~AAtomAmbientSound() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAmbientSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAmbientSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtomAmbientSound, AAtomAmbientSound::StaticClass, TEXT("AAtomAmbientSound"), &Z_Registration_Info_UClass_AAtomAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomAmbientSound), 3439152371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAmbientSound_h_1799505830(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAmbientSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
