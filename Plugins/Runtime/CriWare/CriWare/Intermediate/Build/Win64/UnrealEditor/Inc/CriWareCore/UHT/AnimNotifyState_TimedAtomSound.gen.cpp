// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedAtomSound() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedAtomSound();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAnimNotifyState_TimedAtomSound::StaticRegisterNativesUAnimNotifyState_TimedAtomSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_TimedAtomSound);
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_NoRegister()
	{
		return UAnimNotifyState_TimedAtomSound::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtomComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AtomComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Timed Atom Sound" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Sound to Play\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
		{ "ToolTip", "Sound to Play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0015000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedAtomSound, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Volume Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
		{ "ToolTip", "Volume Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedAtomSound, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Pitch Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
		{ "ToolTip", "Pitch Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedAtomSound, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bFollow_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// If this sound should follow its owner\n" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
		{ "ToolTip", "If this sound should follow its owner" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((UAnimNotifyState_TimedAtomSound*)Obj)->bFollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotifyState_TimedAtomSound), &Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bFollow_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit(void* Obj)
	{
		((UAnimNotifyState_TimedAtomSound*)Obj)->bPreviewIgnoreAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation = { "bPreviewIgnoreAttenuation", nullptr, (EPropertyFlags)0x0010000800004011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotifyState_TimedAtomSound), &Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AttachName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Socket or bone name to attach sound to\n" },
		{ "EditCondition", "bFollow" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
		{ "ToolTip", "Socket or bone name to attach sound to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedAtomSound, AttachName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AttachName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AttachName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AtomComponents_Inner = { "AtomComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AtomComponents_MetaData[] = {
		{ "Comment", "// AtomComponents currently playing until NotifyEnd\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/AnimNotifies/AnimNotifyState_TimedAtomSound.h" },
		{ "ToolTip", "AtomComponents currently playing until NotifyEnd" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AtomComponents = { "AtomComponents", nullptr, (EPropertyFlags)0x0044008000002018, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedAtomSound, AtomComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AtomComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AtomComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bFollow,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_bPreviewIgnoreAttenuation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AttachName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AtomComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::NewProp_AtomComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TimedAtomSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::ClassParams = {
		&UAnimNotifyState_TimedAtomSound::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::PropPointers),
		0,
		0x009130A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedAtomSound()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_TimedAtomSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_TimedAtomSound.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_TimedAtomSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_TimedAtomSound.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAnimNotifyState_TimedAtomSound>()
	{
		return UAnimNotifyState_TimedAtomSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedAtomSound);
	UAnimNotifyState_TimedAtomSound::~UAnimNotifyState_TimedAtomSound() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotifyState_TimedAtomSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotifyState_TimedAtomSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_TimedAtomSound, UAnimNotifyState_TimedAtomSound::StaticClass, TEXT("UAnimNotifyState_TimedAtomSound"), &Z_Registration_Info_UClass_UAnimNotifyState_TimedAtomSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_TimedAtomSound), 1518328355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotifyState_TimedAtomSound_h_3072992359(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotifyState_TimedAtomSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AnimNotifies_AnimNotifyState_TimedAtomSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
