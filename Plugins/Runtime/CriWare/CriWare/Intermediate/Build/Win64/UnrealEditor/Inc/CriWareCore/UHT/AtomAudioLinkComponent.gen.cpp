// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareAudioLink/CriWareAudioLink/Public/AtomAudioLinkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioLinkComponent() {}
// Cross Module References
	AUDIOLINKENGINE_API UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioLinkComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioLinkComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioLinkSettings_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioLinkSound();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioLinkSound_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWaveProcedural();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSynthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	void UAtomAudioLinkSound::StaticRegisterNativesUAtomAudioLinkSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAudioLinkSound);
	UClass* Z_Construct_UClass_UAtomAudioLinkSound_NoRegister()
	{
		return UAtomAudioLinkSound::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioLinkSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioLinkSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sound with a generator used for pushed source or submix\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Sound with a generator used for pushed source or submix" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioLinkSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioLinkSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioLinkSound_Statics::ClassParams = {
		&UAtomAudioLinkSound::StaticClass,
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
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioLinkSound()
	{
		if (!Z_Registration_Info_UClass_UAtomAudioLinkSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAudioLinkSound.OuterSingleton, Z_Construct_UClass_UAtomAudioLinkSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAudioLinkSound.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAudioLinkSound>()
	{
		return UAtomAudioLinkSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioLinkSound);
	UAtomAudioLinkSound::~UAtomAudioLinkSound() {}
	void UAtomAudioLinkComponent::StaticRegisterNativesUAtomAudioLinkComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAudioLinkComponent);
	UClass* Z_Construct_UClass_UAtomAudioLinkComponent_NoRegister()
	{
		return UAtomAudioLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "//~ End UAtomSynthComponent interface\n" },
		{ "ModuleRelativePath", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkComponent, Settings), Z_Construct_UClass_UAtomAudioLinkSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The sound to be played */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "The sound to be played" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** Whether or not to play the Link on start*/" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Whether or not to play the Link on start" },
	};
#endif
	void Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UAtomAudioLinkComponent*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomAudioLinkComponent), &Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAudioLinkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkComponent_Statics::NewProp_AudioComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomAudioLinkComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister, (int32)VTABLE_OFFSET(UAtomAudioLinkComponent, IAudioLinkBlueprintInterface), false },  // 4184086433
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioLinkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioLinkComponent_Statics::ClassParams = {
		&UAtomAudioLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAudioLinkComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioLinkComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomAudioLinkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAudioLinkComponent.OuterSingleton, Z_Construct_UClass_UAtomAudioLinkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAudioLinkComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAudioLinkComponent>()
	{
		return UAtomAudioLinkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioLinkComponent);
	UAtomAudioLinkComponent::~UAtomAudioLinkComponent() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAudioLinkSound, UAtomAudioLinkSound::StaticClass, TEXT("UAtomAudioLinkSound"), &Z_Registration_Info_UClass_UAtomAudioLinkSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAudioLinkSound), 4249110869U) },
		{ Z_Construct_UClass_UAtomAudioLinkComponent, UAtomAudioLinkComponent::StaticClass, TEXT("UAtomAudioLinkComponent"), &Z_Registration_Info_UClass_UAtomAudioLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAudioLinkComponent), 1407692550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkComponent_h_1991063059(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
