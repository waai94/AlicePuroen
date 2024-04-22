// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomAudioBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioBus() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioBus();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioBus_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomAudioBusChannels;
	static UEnum* EAtomAudioBusChannels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomAudioBusChannels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomAudioBusChannels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomAudioBusChannels"));
		}
		return Z_Registration_Info_UEnum_EAtomAudioBusChannels.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomAudioBusChannels>()
	{
		return EAtomAudioBusChannels_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::Enumerators[] = {
		{ "EAtomAudioBusChannels::Mono", (int64)EAtomAudioBusChannels::Mono },
		{ "EAtomAudioBusChannels::Stereo", (int64)EAtomAudioBusChannels::Stereo },
		{ "EAtomAudioBusChannels::StereoWithCenter", (int64)EAtomAudioBusChannels::StereoWithCenter },
		{ "EAtomAudioBusChannels::Quad", (int64)EAtomAudioBusChannels::Quad },
		{ "EAtomAudioBusChannels::QuadWithCenter", (int64)EAtomAudioBusChannels::QuadWithCenter },
		{ "EAtomAudioBusChannels::FivePointOne", (int64)EAtomAudioBusChannels::FivePointOne },
		{ "EAtomAudioBusChannels::SevenPointOne", (int64)EAtomAudioBusChannels::SevenPointOne },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The number of channels to mix audio into the source bus\n" },
		{ "FivePointOne.Name", "EAtomAudioBusChannels::FivePointOne" },
		{ "ModuleRelativePath", "Public/Atom/AtomAudioBus.h" },
		{ "Mono.Name", "EAtomAudioBusChannels::Mono" },
		{ "Quad.Name", "EAtomAudioBusChannels::Quad" },
		{ "QuadWithCenter.Name", "EAtomAudioBusChannels::QuadWithCenter" },
		{ "SevenPointOne.Name", "EAtomAudioBusChannels::SevenPointOne" },
		{ "Stereo.Name", "EAtomAudioBusChannels::Stereo" },
		{ "StereoWithCenter.Name", "EAtomAudioBusChannels::StereoWithCenter" },
		{ "ToolTip", "The number of channels to mix audio into the source bus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomAudioBusChannels",
		"EAtomAudioBusChannels",
		Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels()
	{
		if (!Z_Registration_Info_UEnum_EAtomAudioBusChannels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomAudioBusChannels.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomAudioBusChannels.InnerSingleton;
	}
	void UAtomAudioBus::StaticRegisterNativesUAtomAudioBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAudioBus);
	UClass* Z_Construct_UClass_UAtomAudioBus_NoRegister()
	{
		return UAtomAudioBus::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioBusChannels_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBusChannels_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioBusChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "Comment", "// An audio bus is an object which represents an audio patch cord. Audio can be sent to it. It can be sonified using USoundSourceBuses.\n// Instances of the audio bus are created in the audio engine. \n" },
		{ "IncludePath", "Atom/AtomAudioBus.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomAudioBus.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An audio bus is an object which represents an audio patch cord. Audio can be sent to it. It can be sonified using USoundSourceBuses.\nInstances of the audio bus are created in the audio engine." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomAudioBus_Statics::NewProp_AudioBusChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioBus_Statics::NewProp_AudioBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** Number of channels to use for the Audio Bus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAudioBus.h" },
		{ "ToolTip", "Number of channels to use for the Audio Bus." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomAudioBus_Statics::NewProp_AudioBusChannels = { "AudioBusChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioBus, AudioBusChannels), Z_Construct_UEnum_CriWareCore_EAtomAudioBusChannels, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioBus_Statics::NewProp_AudioBusChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioBus_Statics::NewProp_AudioBusChannels_MetaData)) }; // 2467732721
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAudioBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioBus_Statics::NewProp_AudioBusChannels_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioBus_Statics::NewProp_AudioBusChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioBus_Statics::ClassParams = {
		&UAtomAudioBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAudioBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioBus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioBus()
	{
		if (!Z_Registration_Info_UClass_UAtomAudioBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAudioBus.OuterSingleton, Z_Construct_UClass_UAtomAudioBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAudioBus.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAudioBus>()
	{
		return UAtomAudioBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioBus);
	UAtomAudioBus::~UAtomAudioBus() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_Statics::EnumInfo[] = {
		{ EAtomAudioBusChannels_StaticEnum, TEXT("EAtomAudioBusChannels"), &Z_Registration_Info_UEnum_EAtomAudioBusChannels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2467732721U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAudioBus, UAtomAudioBus::StaticClass, TEXT("UAtomAudioBus"), &Z_Registration_Info_UClass_UAtomAudioBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAudioBus), 1419356310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_470416217(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAudioBus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
