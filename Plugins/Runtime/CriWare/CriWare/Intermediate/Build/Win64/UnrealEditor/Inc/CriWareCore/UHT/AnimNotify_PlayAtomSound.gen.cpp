// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayAtomSound() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAnimNotify_PlayAtomSound();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAnimNotify_PlayAtomSound_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAnimNotify_PlayAtomSound::StaticRegisterNativesUAnimNotify_PlayAtomSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlayAtomSound);
	UClass* Z_Construct_UClass_UAnimNotify_PlayAtomSound_NoRegister()
	{
		return UAnimNotify_PlayAtomSound::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[];
#endif
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewIgnoreAttenuation_MetaData[];
#endif
		static void NewProp_bPreviewIgnoreAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewIgnoreAttenuation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Play Atom Sound" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Sound to Play\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
		{ "ToolTip", "Sound to Play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0015000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayAtomSound, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Volume Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
		{ "ToolTip", "Volume Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayAtomSound, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Pitch Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
		{ "ToolTip", "Pitch Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayAtomSound, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bFollow_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// If this sound should follow its owner\n" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
		{ "ToolTip", "If this sound should follow its owner" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((UAnimNotify_PlayAtomSound*)Obj)->bFollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_PlayAtomSound), &Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bFollow_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit(void* Obj)
	{
		((UAnimNotify_PlayAtomSound*)Obj)->bPreviewIgnoreAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation = { "bPreviewIgnoreAttenuation", nullptr, (EPropertyFlags)0x0010000800004011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_PlayAtomSound), &Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_AttachName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Socket or bone name to attach sound to\n" },
		{ "EditCondition", "bFollow" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotify_PlayAtomSound.h" },
		{ "ToolTip", "Socket or bone name to attach sound to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayAtomSound, AttachName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_AttachName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_AttachName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bFollow,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::NewProp_AttachName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayAtomSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::ClassParams = {
		&UAnimNotify_PlayAtomSound::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::PropPointers),
		0,
		0x001120A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayAtomSound()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_PlayAtomSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlayAtomSound.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlayAtomSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_PlayAtomSound.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAnimNotify_PlayAtomSound>()
	{
		return UAnimNotify_PlayAtomSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayAtomSound);
	UAnimNotify_PlayAtomSound::~UAnimNotify_PlayAtomSound() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotify_PlayAtomSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotify_PlayAtomSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PlayAtomSound, UAnimNotify_PlayAtomSound::StaticClass, TEXT("UAnimNotify_PlayAtomSound"), &Z_Registration_Info_UClass_UAnimNotify_PlayAtomSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlayAtomSound), 376896987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotify_PlayAtomSound_h_951409788(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotify_PlayAtomSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotify_PlayAtomSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
