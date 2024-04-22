// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareAudioLink/CriWareAudioLink/Public/AtomAudioLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioLinkSettings() {}
// Cross Module References
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioLinkSettings();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAudioLinkSettings_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendStage();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomAudioLinkRoute;
	static UEnum* EAtomAudioLinkRoute_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomAudioLinkRoute.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomAudioLinkRoute.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomAudioLinkRoute"));
		}
		return Z_Registration_Info_UEnum_EAtomAudioLinkRoute.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomAudioLinkRoute>()
	{
		return EAtomAudioLinkRoute_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::Enumerators[] = {
		{ "EAtomAudioLinkRoute::Source", (int64)EAtomAudioLinkRoute::Source },
		{ "EAtomAudioLinkRoute::Bus", (int64)EAtomAudioLinkRoute::Bus },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::Enum_MetaDataParams[] = {
		{ "Bus.DisplayName", "Direct to Bus" },
		{ "Bus.Name", "EAtomAudioLinkRoute::Bus" },
		{ "ModuleRelativePath", "" },
		{ "Source.DisplayName", "As Sound Source" },
		{ "Source.Name", "EAtomAudioLinkRoute::Source" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomAudioLinkRoute",
		"EAtomAudioLinkRoute",
		Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute()
	{
		if (!Z_Registration_Info_UEnum_EAtomAudioLinkRoute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomAudioLinkRoute.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomAudioLinkRoute.InnerSingleton;
	}
	void UAtomAudioLinkSettings::StaticRegisterNativesUAtomAudioLinkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAudioLinkSettings);
	UClass* Z_Construct_UClass_UAtomAudioLinkSettings_NoRegister()
	{
		return UAtomAudioLinkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioLinkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationRoute_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationRoute_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationRoute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationBus_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DestinationBus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationBusStage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationBusStage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationBusStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[];
#endif
		static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationBusResolved_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DestinationBusResolved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioLinkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioLinkSettingsAbstract,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationRoute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationRoute_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether use link as a sound source or route audio to an Atom DSP bus. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Whether use link as a sound source or route audio to an Atom DSP bus." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationRoute = { "DestinationRoute", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkSettings, DestinationRoute), Z_Construct_UEnum_CriWareCore_EAtomAudioLinkRoute, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationRoute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationRoute_MetaData)) }; // 2072148391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBus_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** The destination DSP bus to send audio. */" },
		{ "EditCondition", "DestinationRoute == EAtomAudioLinkRoute::Bus" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "The destination DSP bus to send audio." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBus = { "DestinationBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkSettings, DestinationBus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBus_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusStage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusStage_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** The stage of the destination DSP bus to send audio.*/" },
		{ "EditCondition", "DestinationRoute == EAtomAudioLinkRoute::Bus" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "The stage of the destination DSP bus to send audio." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusStage = { "DestinationBusStage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkSettings, DestinationBusStage), Z_Construct_UEnum_CriWareCore_EAtomBusSendStage, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusStage_MetaData)) }; // 2714685404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once." },
	};
#endif
	void Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
	{
		((UAtomAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomAudioLinkSettings), &Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusResolved_MetaData[] = {
		{ "Comment", "/** Once the SoftObjectReference has been resolved, attach the reference here so it's owned. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Once the SoftObjectReference has been resolved, attach the reference here so it's owned." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusResolved = { "DestinationBusResolved", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAudioLinkSettings, DestinationBusResolved), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusResolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusResolved_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAudioLinkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationRoute_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationRoute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusStage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioLinkSettings_Statics::NewProp_DestinationBusResolved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioLinkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioLinkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioLinkSettings_Statics::ClassParams = {
		&UAtomAudioLinkSettings::StaticClass,
		"CriWare",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAudioLinkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::PropPointers),
		0,
		0x001010A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioLinkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioLinkSettings()
	{
		if (!Z_Registration_Info_UClass_UAtomAudioLinkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAudioLinkSettings.OuterSingleton, Z_Construct_UClass_UAtomAudioLinkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAudioLinkSettings.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAudioLinkSettings>()
	{
		return UAtomAudioLinkSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioLinkSettings);
	UAtomAudioLinkSettings::~UAtomAudioLinkSettings() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_Statics::EnumInfo[] = {
		{ EAtomAudioLinkRoute_StaticEnum, TEXT("EAtomAudioLinkRoute"), &Z_Registration_Info_UEnum_EAtomAudioLinkRoute, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2072148391U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAudioLinkSettings, UAtomAudioLinkSettings::StaticClass, TEXT("UAtomAudioLinkSettings"), &Z_Registration_Info_UClass_UAtomAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAudioLinkSettings), 2525353703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_1263200583(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareAudioLink_CriWareAudioLink_Public_AtomAudioLinkSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
