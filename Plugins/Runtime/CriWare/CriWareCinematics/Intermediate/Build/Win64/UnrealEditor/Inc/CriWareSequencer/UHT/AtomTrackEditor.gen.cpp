// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareSequencer/Private/Sequencer/AtomTrackEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTrackEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARESEQUENCER_API UClass* Z_Construct_UClass_UAtomAddTrackSoundHolder();
	CRIWARESEQUENCER_API UClass* Z_Construct_UClass_UAtomAddTrackSoundHolder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareSequencer();
// End Cross Module References
	void UAtomAddTrackSoundHolder::StaticRegisterNativesUAtomAddTrackSoundHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAddTrackSoundHolder);
	UClass* Z_Construct_UClass_UAtomAddTrackSoundHolder_NoRegister()
	{
		return UAtomAddTrackSoundHolder::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** class to hold a Sound property to permit a Sound selection. (Internal Use only) */" },
		{ "IncludePath", "Sequencer/AtomTrackEditor.h" },
		{ "ModuleRelativePath", "Private/Sequencer/AtomTrackEditor.h" },
		{ "ToolTip", "class to hold a Sound property to permit a Sound selection. (Internal Use only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Private/Sequencer/AtomTrackEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAddTrackSoundHolder, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::NewProp_Sound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAddTrackSoundHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::ClassParams = {
		&UAtomAddTrackSoundHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAddTrackSoundHolder()
	{
		if (!Z_Registration_Info_UClass_UAtomAddTrackSoundHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAddTrackSoundHolder.OuterSingleton, Z_Construct_UClass_UAtomAddTrackSoundHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAddTrackSoundHolder.OuterSingleton;
	}
	template<> CRIWARESEQUENCER_API UClass* StaticClass<UAtomAddTrackSoundHolder>()
	{
		return UAtomAddTrackSoundHolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAddTrackSoundHolder);
	UAtomAddTrackSoundHolder::~UAtomAddTrackSoundHolder() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareSequencer_Private_Sequencer_AtomTrackEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareSequencer_Private_Sequencer_AtomTrackEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAddTrackSoundHolder, UAtomAddTrackSoundHolder::StaticClass, TEXT("UAtomAddTrackSoundHolder"), &Z_Registration_Info_UClass_UAtomAddTrackSoundHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAddTrackSoundHolder), 3425355412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareSequencer_Private_Sequencer_AtomTrackEditor_h_2543615917(TEXT("/Script/CriWareSequencer"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareSequencer_Private_Sequencer_AtomTrackEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareSequencer_Private_Sequencer_AtomTrackEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
