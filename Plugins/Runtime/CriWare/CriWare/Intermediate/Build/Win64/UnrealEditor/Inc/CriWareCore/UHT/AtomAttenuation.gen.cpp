// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomAttenuation.h"
#include "Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAttenuation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomBus_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRuntimePluginSettingsBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSourceDataOverridePluginSourceSettingsBase_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationSettings();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomMultiPositionSettings();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm;
	static UEnum* EAtomSpatializationAlgorithm_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomSpatializationAlgorithm"));
		}
		return Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomSpatializationAlgorithm>()
	{
		return EAtomSpatializationAlgorithm_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::Enumerators[] = {
		{ "EAtomSpatializationAlgorithm::Default", (int64)EAtomSpatializationAlgorithm::Default },
		{ "EAtomSpatializationAlgorithm::Binaural", (int64)EAtomSpatializationAlgorithm::Binaural },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::Enum_MetaDataParams[] = {
		{ "Binaural.Comment", "// Binaural spatialization method if available (requires headphones, enabled by plugins)\n" },
		{ "Binaural.DisplayName", "Object Based / Binaural" },
		{ "Binaural.Name", "EAtomSpatializationAlgorithm::Binaural" },
		{ "Binaural.ToolTip", "Binaural spatialization method if available (requires headphones, enabled by plugins)" },
		{ "BlueprintType", "true" },
		{ "Default.Comment", "// Standard panning method for spatialization (linear or equal power method defined in project settings)\n" },
		{ "Default.DisplayName", "Panning" },
		{ "Default.Name", "EAtomSpatializationAlgorithm::Default" },
		{ "Default.ToolTip", "Standard panning method for spatialization (linear or equal power method defined in project settings)" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomSpatializationAlgorithm",
		"EAtomSpatializationAlgorithm",
		Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm()
	{
		if (!Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel;
	static UEnum* EAtomAttenuationDistanceModel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomAttenuationDistanceModel"));
		}
		return Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomAttenuationDistanceModel>()
	{
		return EAtomAttenuationDistanceModel_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::Enumerators[] = {
		{ "EAtomAttenuationDistanceModel::Logarithmic", (int64)EAtomAttenuationDistanceModel::Logarithmic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Logarithmic.Comment", "//Linear,\n" },
		{ "Logarithmic.Name", "EAtomAttenuationDistanceModel::Logarithmic" },
		{ "Logarithmic.ToolTip", "Linear," },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomAttenuationDistanceModel",
		"EAtomAttenuationDistanceModel",
		Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel()
	{
		if (!Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomAttenuationShape;
	static UEnum* EAtomAttenuationShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomAttenuationShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomAttenuationShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomAttenuationShape"));
		}
		return Z_Registration_Info_UEnum_EAtomAttenuationShape.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomAttenuationShape>()
	{
		return EAtomAttenuationShape_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::Enumerators[] = {
		{ "EAtomAttenuationShape::Sphere", (int64)EAtomAttenuationShape::Sphere },
		{ "EAtomAttenuationShape::Cone", (int64)EAtomAttenuationShape::Cone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cone.Name", "EAtomAttenuationShape::Cone" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "Sphere.Name", "EAtomAttenuationShape::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomAttenuationShape",
		"EAtomAttenuationShape",
		Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape()
	{
		if (!Z_Registration_Info_UEnum_EAtomAttenuationShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomAttenuationShape.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomAttenuationShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod;
	static UEnum* EAtomAirAbsorptionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomAirAbsorptionMethod"));
		}
		return Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomAirAbsorptionMethod>()
	{
		return EAtomAirAbsorptionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::Enumerators[] = {
		{ "EAtomAirAbsorptionMethod::Linear", (int64)EAtomAirAbsorptionMethod::Linear },
		{ "EAtomAirAbsorptionMethod::CustomCurve", (int64)EAtomAirAbsorptionMethod::CustomCurve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// The air absorption conforms to a custom distance curve.\n" },
		{ "CustomCurve.Name", "EAtomAirAbsorptionMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "The air absorption conforms to a custom distance curve." },
		{ "Linear.Comment", "// The air absorption conform to a linear distance function\n" },
		{ "Linear.Name", "EAtomAirAbsorptionMethod::Linear" },
		{ "Linear.ToolTip", "The air absorption conform to a linear distance function" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomAirAbsorptionMethod",
		"EAtomAirAbsorptionMethod",
		Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod()
	{
		if (!Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomBusSendMethod;
	static UEnum* EAtomBusSendMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomBusSendMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomBusSendMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomBusSendMethod"));
		}
		return Z_Registration_Info_UEnum_EAtomBusSendMethod.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomBusSendMethod>()
	{
		return EAtomBusSendMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::Enumerators[] = {
		{ "EAtomBusSendMethod::Linear", (int64)EAtomBusSendMethod::Linear },
		{ "EAtomBusSendMethod::CustomCurve", (int64)EAtomBusSendMethod::CustomCurve },
		{ "EAtomBusSendMethod::Manual", (int64)EAtomBusSendMethod::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A bus send based on a supplied curve\n" },
		{ "CustomCurve.Name", "EAtomBusSendMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A bus send based on a supplied curve" },
		{ "Linear.Comment", "// A bus send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "EAtomBusSendMethod::Linear" },
		{ "Linear.ToolTip", "A bus send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual bus send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "EAtomBusSendMethod::Manual" },
		{ "Manual.ToolTip", "A manual bus send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomBusSendMethod",
		"EAtomBusSendMethod",
		Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod()
	{
		if (!Z_Registration_Info_UEnum_EAtomBusSendMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomBusSendMethod.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomBusSendMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod;
	static UEnum* EAtomPriorityAttenuationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomPriorityAttenuationMethod"));
		}
		return Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomPriorityAttenuationMethod>()
	{
		return EAtomPriorityAttenuationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::Enumerators[] = {
		{ "EAtomPriorityAttenuationMethod::Linear", (int64)EAtomPriorityAttenuationMethod::Linear },
		{ "EAtomPriorityAttenuationMethod::CustomCurve", (int64)EAtomPriorityAttenuationMethod::CustomCurve },
		{ "EAtomPriorityAttenuationMethod::Manual", (int64)EAtomPriorityAttenuationMethod::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A priority attenuation based on a supplied curve\n" },
		{ "CustomCurve.Name", "EAtomPriorityAttenuationMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A priority attenuation based on a supplied curve" },
		{ "Linear.Comment", "// A priority attenuation based on linear interpolation between a distance range and priority attenuation range\n" },
		{ "Linear.Name", "EAtomPriorityAttenuationMethod::Linear" },
		{ "Linear.ToolTip", "A priority attenuation based on linear interpolation between a distance range and priority attenuation range" },
		{ "Manual.Comment", "// A manual priority attenuation (Uses the specified constant value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "EAtomPriorityAttenuationMethod::Manual" },
		{ "Manual.ToolTip", "A manual priority attenuation (Uses the specified constant value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomPriorityAttenuationMethod",
		"EAtomPriorityAttenuationMethod",
		Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod()
	{
		if (!Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomMultiPositionType;
	static UEnum* EAtomMultiPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomMultiPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomMultiPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomMultiPositionType"));
		}
		return Z_Registration_Info_UEnum_EAtomMultiPositionType.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomMultiPositionType>()
	{
		return EAtomMultiPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::Enumerators[] = {
		{ "EAtomMultiPositionType::SingleSource", (int64)EAtomMultiPositionType::SingleSource },
		{ "EAtomMultiPositionType::MultiSources", (int64)EAtomMultiPositionType::MultiSources },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "MultiSources.Comment", "// Use all the given positions with the sound attenuation settings.\n" },
		{ "MultiSources.Name", "EAtomMultiPositionType::MultiSources" },
		{ "MultiSources.ToolTip", "Use all the given positions with the sound attenuation settings." },
		{ "SingleSource.Comment", "// Normal attenuation. Uses only the position of the sound or uses the first given position set with SetMultiplePositions().\n" },
		{ "SingleSource.Name", "EAtomMultiPositionType::SingleSource" },
		{ "SingleSource.ToolTip", "Normal attenuation. Uses only the position of the sound or uses the first given position set with SetMultiplePositions()." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomMultiPositionType",
		"EAtomMultiPositionType",
		Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType()
	{
		if (!Z_Registration_Info_UEnum_EAtomMultiPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomMultiPositionType.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomMultiPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomMultiPositionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode;
	static UEnum* EAtomNonSpatializedRadiusSpeakerMapMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode, Z_Construct_UPackage__Script_CriWareCore(), TEXT("EAtomNonSpatializedRadiusSpeakerMapMode"));
		}
		return Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode.OuterSingleton;
	}
	template<> CRIWARECORE_API UEnum* StaticEnum<EAtomNonSpatializedRadiusSpeakerMapMode>()
	{
		return EAtomNonSpatializedRadiusSpeakerMapMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::Enumerators[] = {
		{ "EAtomNonSpatializedRadiusSpeakerMapMode::Direct2D", (int64)EAtomNonSpatializedRadiusSpeakerMapMode::Direct2D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines how to speaker map the sound when using the non-spatialized radius feature\n" },
		{ "Direct2D.Comment", "// Will blend the 3D source to the same representation speaker map used when playing the asset 2D\n" },
		{ "Direct2D.Name", "EAtomNonSpatializedRadiusSpeakerMapMode::Direct2D" },
		{ "Direct2D.ToolTip", "Will blend the 3D source to the same representation speaker map used when playing the asset 2D" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Defines how to speaker map the sound when using the non-spatialized radius feature" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		"EAtomNonSpatializedRadiusSpeakerMapMode",
		"EAtomNonSpatializedRadiusSpeakerMapMode",
		Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode()
	{
		if (!Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode.InnerSingleton, Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings;
class UScriptStruct* FAtomAttenuationPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAttenuationPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAttenuationPluginSettings>()
{
	return FAtomAttenuationPluginSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceDataOverridePluginSettingsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataOverridePluginSettingsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDataOverridePluginSettingsArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimePluginSettingsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimePluginSettingsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimePluginSettingsArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationPluginSettings>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_Inner = { "SourceDataOverridePluginSettingsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomSourceDataOverridePluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationSourceDataOverride" },
		{ "Comment", "/** Settings to use with source data override audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Source Data Override Plugin Settings" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Settings to use with source data override audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray = { "SourceDataOverridePluginSettingsArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationPluginSettings, SourceDataOverridePluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_RuntimePluginSettingsArray_Inner = { "RuntimePluginSettingsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomRuntimePluginSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_RuntimePluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationSourceDataOverride" },
		{ "Comment", "/** Settings to use with runtime audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Runtime Plugin Settings" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Settings to use with runtime audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_RuntimePluginSettingsArray = { "RuntimePluginSettingsArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationPluginSettings, RuntimePluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_RuntimePluginSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_RuntimePluginSettingsArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_RuntimePluginSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewProp_RuntimePluginSettingsArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomAttenuationPluginSettings",
		sizeof(FAtomAttenuationPluginSettings),
		alignof(FAtomAttenuationPluginSettings),
		Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings;
class UScriptStruct* FAtomAttenuationBusSendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAttenuationBusSendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAttenuationBusSendSettings>()
{
	return FAtomAttenuationBusSendSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BusSendMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BusSendMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendDistanceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusSendDistanceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendDistanceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusSendDistanceMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualBusSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualBusSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomBusSendCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomBusSendCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings for attenuation using BusAtom send.\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "* The settings for attenuation using BusAtom send." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationBusSendSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_Bus_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** Bus to send audio to based on distance. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Bus to send audio to based on distance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, Bus), Z_Construct_UClass_UAtomBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_Bus_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendMethod_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** What method to use to use for Bus sends. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "What method to use to use for Bus sends." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendMethod = { "BusSendMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, BusSendMethod), Z_Construct_UEnum_CriWareCore_EAtomBusSendMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendMethod_MetaData)) }; // 664366647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMin_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** The amount to send to the Bus when the sound is located at a distance equal to value specified in the bus send distance min. */" },
		{ "DisplayName", "Bus Min Send Level" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The amount to send to the Bus when the sound is located at a distance equal to value specified in the bus send distance min." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMin = { "BusSendLevelMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, BusSendLevelMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMax_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** The amount to send to the Bus when the sound is located at a distance equal to value specified in the bus send distance max. */" },
		{ "DisplayName", "Bus Max Send Level" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The amount to send to the Bus when the sound is located at a distance equal to value specified in the bus send distance max." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMax = { "BusSendLevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, BusSendLevelMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMin_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** The min distance to send to the Bus. */" },
		{ "DisplayName", "Bus Min Send Distance" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The min distance to send to the Bus." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMin = { "BusSendDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, BusSendDistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMax_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** The max distance to send to the Bus. */" },
		{ "DisplayName", "Bus Max Send Distance" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The max distance to send to the Bus." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMax = { "BusSendDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, BusSendDistanceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_ManualBusSendLevel_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/* The manual Bus send level to use. Doesn't change as a function of distance. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The manual Bus send level to use. Doesn't change as a function of distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_ManualBusSendLevel = { "ManualBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, ManualBusSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_ManualBusSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_ManualBusSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_CustomBusSendCurve_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/* The custom Bus send curve to use for distance-based send level. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The custom Bus send curve to use for distance-based send level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_CustomBusSendCurve = { "CustomBusSendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationBusSendSettings, CustomBusSendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_CustomBusSendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_CustomBusSendCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendLevelMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_BusSendDistanceMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_ManualBusSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewProp_CustomBusSendCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomAttenuationBusSendSettings",
		sizeof(FAtomAttenuationBusSendSettings),
		alignof(FAtomAttenuationBusSendSettings),
		Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings;
class UScriptStruct* FAtomMultiPositionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomMultiPositionSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomMultiPositionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomMultiPositionSettings>()
{
	return FAtomMultiPositionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComponentPositionAsSource_MetaData[];
#endif
		static void NewProp_bUseComponentPositionAsSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComponentPositionAsSource;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SourceComponentClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourcePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings for attenuation from multiple source positions.\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "* The settings for attenuation from multiple source positions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomMultiPositionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_bUseComponentPositionAsSource_MetaData[] = {
		{ "Category", "MultiPosition" },
		{ "Comment", "/** Uses the Atom component position as attenuation source positions. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Uses the Atom component position as attenuation source positions." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_bUseComponentPositionAsSource_SetBit(void* Obj)
	{
		((FAtomMultiPositionSettings*)Obj)->bUseComponentPositionAsSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_bUseComponentPositionAsSource = { "bUseComponentPositionAsSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomMultiPositionSettings), &Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_bUseComponentPositionAsSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_bUseComponentPositionAsSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_bUseComponentPositionAsSource_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceActors_Inner = { "SourceActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceActors_MetaData[] = {
		{ "Category", "MultiPosition" },
		{ "Comment", "/** Actors to use as attenuation source positions. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Actors to use as attenuation source positions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceActors = { "SourceActors", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomMultiPositionSettings, SourceActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceComponentClass_MetaData[] = {
		{ "Category", "MultiPosition" },
		{ "Comment", "/** Classes of scene component in source actors to use as attenuation source positions. If not set, the Actor's root transform is used. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Classes of scene component in source actors to use as attenuation source positions. If not set, the Actor's root transform is used." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceComponentClass = { "SourceComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomMultiPositionSettings, SourceComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceComponentClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourcePositions_Inner = { "SourcePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourcePositions_MetaData[] = {
		{ "Category", "MultiPosition" },
		{ "Comment", "/** Transforms to use as attenuation source positions. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Transforms to use as attenuation source positions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourcePositions = { "SourcePositions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomMultiPositionSettings, SourcePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourcePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourcePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_bUseComponentPositionAsSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourceComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourcePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewProp_SourcePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomMultiPositionSettings",
		sizeof(FAtomMultiPositionSettings),
		alignof(FAtomMultiPositionSettings),
		Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomMultiPositionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAttenuationSettings;
class UScriptStruct* FAtomAttenuationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAttenuationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAttenuationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationSettings, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAttenuationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAttenuationSettings.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAttenuationSettings>()
{
	return FAtomAttenuationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuate_MetaData[];
#endif
		static void NewProp_bAttenuate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpatialize_MetaData[];
#endif
		static void NewProp_bSpatialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpatialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuateWithLPF_MetaData[];
#endif
		static void NewProp_bAttenuateWithLPF_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuateWithLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableListenerFocus_MetaData[];
#endif
		static void NewProp_bEnableListenerFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableListenerFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFocusInterpolation_MetaData[];
#endif
		static void NewProp_bEnableFocusInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[];
#endif
		static void NewProp_bEnableOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[];
#endif
		static void NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePriorityAttenuation_MetaData[];
#endif
		static void NewProp_bEnablePriorityAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePriorityAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNormalizationToStereoSounds_MetaData[];
#endif
		static void NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNormalizationToStereoSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogFrequencyScaling_MetaData[];
#endif
		static void NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogFrequencyScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBusSends_MetaData[];
#endif
		static void NewProp_bEnableBusSends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBusSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSourceDataOverride_MetaData[];
#endif
		static void NewProp_bEnableSourceDataOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceDataOverride;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceAlgorithm_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceAlgorithm;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttenuationShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttenuationShape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbsorptionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbsorptionMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatializationAlgorithm_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatializationAlgorithm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityAttenuationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityAttenuationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationShapeExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationShapeExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeOutsideLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeOutsideLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffDistance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OmniRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OmniRadius;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinauralRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BinauralRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedRadiusStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonSpatializedRadiusStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedRadiusEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonSpatializedRadiusEnd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NonSpatializedRadiusMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedRadiusMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NonSpatializedRadiusMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLowpassAirAbsorptionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLowpassAirAbsorptionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomHighpassAirAbsorptionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHighpassAirAbsorptionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusAzimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusAzimuth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusAzimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusAzimuth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPriorityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusPriorityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusPriorityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusPriorityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusVolumeAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusVolumeAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusVolumeAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusVolumeAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusAttackInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusAttackInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusReleaseInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusReleaseInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionLowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionLowPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionVolumeAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionVolumeAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionInterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionInterpolationTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSendSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSendSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSendSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationDistanceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationDistanceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationDistanceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationDistanceMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualPriorityAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualPriorityAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPriorityAttenuationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPriorityAttenuationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PluginSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings for attenuating a sound with Atom.\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "* The settings for attenuating a sound with Atom." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuate_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* Allows distance-based volume attenuation. */" },
		{ "DisplayName", "Enable Volume Attenuation" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Allows distance-based volume attenuation." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuate_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bAttenuate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuate = { "bAttenuate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bSpatialize_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/* Allows the source to be 3D spatialized. */" },
		{ "DisplayName", "Enable Spatialization" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Allows the source to be 3D spatialized." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bSpatialize_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bSpatialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bSpatialize = { "bSpatialize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bSpatialize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bSpatialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bSpatialize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance. */" },
		{ "DisplayName", "Enable Air Absorption" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bAttenuateWithLPF = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuateWithLPF = { "bAttenuateWithLPF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Enable listener focus-based adjustments. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enable listener focus-based adjustments." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bEnableListenerFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableListenerFocus = { "bEnableListenerFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Enables focus interpolation to smooth transition in and and of focus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables focus interpolation to smooth transition in and and of focus." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bEnableFocusInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation = { "bEnableFocusInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Enables realtime occlusion tracing. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables realtime occlusion tracing." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bEnableOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableOcclusion = { "bEnableOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Enables tracing against complex collision when doing occlusion traces. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables tracing against complex collision when doing occlusion traces." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bUseComplexCollisionForOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion = { "bUseComplexCollisionForOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/** Enables attenuation of sound priority based off distance. */" },
		{ "DisplayName", "Enable Priority Attenuation" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables attenuation of sound priority based off distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bEnablePriorityAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation = { "bEnablePriorityAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/** Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing. */" },
		{ "DisplayName", "Normalize 3D Stereo Sounds" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bApplyNormalizationToStereoSounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds = { "bApplyNormalizationToStereoSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear). */" },
		{ "DisplayName", "Enable Log Frequency Scaling" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bEnableLogFrequencyScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling = { "bEnableLogFrequencyScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableBusSends_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** Enables AtomBus sends based on distance. */" },
		{ "DisplayName", "Enable Bus Sends" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables AtomBus sends based on distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableBusSends_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bEnableBusSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableBusSends = { "bEnableBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableBusSends_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableBusSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_MetaData[] = {
		{ "Category", "AttenuationSourceDataOverride" },
		{ "Comment", "/** Enables overriding PlaybackInstance data using source data override plugin */" },
		{ "DisplayName", "Enable Source Data Override" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Enables overriding PlaybackInstance data using source data override plugin" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_SetBit(void* Obj)
	{
		((FAtomAttenuationSettings*)Obj)->bEnableSourceDataOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride = { "bEnableSourceDataOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomAttenuationSettings), &Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_DistanceAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_DistanceAlgorithm_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The type of attenuation as a function of distance to use. */" },
		{ "DisplayName", "Attenuation Function" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The type of attenuation as a function of distance to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_DistanceAlgorithm = { "DistanceAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, DistanceAlgorithm), Z_Construct_UEnum_CriWareCore_EAtomAttenuationDistanceModel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_DistanceAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_DistanceAlgorithm_MetaData)) }; // 1128230834
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShape_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The shape of the non-custom attenuation method. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The shape of the non-custom attenuation method." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShape = { "AttenuationShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, AttenuationShape), Z_Construct_UEnum_CriWareCore_EAtomAttenuationShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShape_MetaData)) }; // 4114019816
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** What method to use to map distance values to frequency absorption values. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "What method to use to map distance values to frequency absorption values." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AbsorptionMethod = { "AbsorptionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, AbsorptionMethod), Z_Construct_UEnum_CriWareCore_EAtomAirAbsorptionMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData)) }; // 3406079666
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What method we use to spatialize the sound. */" },
		{ "DisplayName", "Spatialization Method" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "What method we use to spatialize the sound." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_SpatializationAlgorithm = { "SpatializationAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, SpatializationAlgorithm), Z_Construct_UEnum_CriWareCore_EAtomSpatializationAlgorithm, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData)) }; // 604256163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/* Which trace channel to use for Atom occlusion checks. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Which trace channel to use for Atom occlusion checks." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionTraceChannel = { "OcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/** What method to use to control priority attenuation */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "What method to use to control priority attenuation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod = { "PriorityAttenuationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, PriorityAttenuationMethod), Z_Construct_UEnum_CriWareCore_EAtomPriorityAttenuationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_MetaData)) }; // 1422049544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShapeExtents_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The dimensions to use for the attenuation shape. Interpretation of the values differ per shape.\n\x09   Sphere  - X is Sphere Radius. Y and Z are unused\n\x09   Cone    - X is Cone Radius, Y is Cone Angle, Z is Cone Falloff Angle\n\x09*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The dimensions to use for the attenuation shape. Interpretation of the values differ per shape.\n         Sphere  - X is Sphere Radius. Y and Z are unused\n         Cone    - X is Cone Radius, Y is Cone Angle, Z is Cone Falloff Angle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShapeExtents = { "AttenuationShapeExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, AttenuationShapeExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShapeExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShapeExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ConeOutsideLevel_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "clampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The volume level back from the sound's origin to begin the cone when using the cone attenuation shape. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The volume level back from the sound's origin to begin the cone when using the cone attenuation shape." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ConeOutsideLevel = { "ConeOutsideLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, ConeOutsideLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ConeOutsideLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ConeOutsideLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FalloffDistance_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance over which volume attenuation occurs. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The distance over which volume attenuation occurs." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FalloffDistance = { "FalloffDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, FalloffDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FalloffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FalloffDistance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OmniRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OmniRadius = { "OmniRadius", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, OmniRadius_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OmniRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OmniRadius_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BinauralRadius_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What min radius to use to swap to non-binaural audio when a sound starts playing. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "What min radius to use to swap to non-binaural audio when a sound starts playing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BinauralRadius = { "BinauralRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, BinauralRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BinauralRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BinauralRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusStart_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The distance below which a sound begins to linearly interpolate towards being non-spatialized (2D). See \"Non Spatialized Radius End\" to define the end of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The distance below which a sound begins to linearly interpolate towards being non-spatialized (2D). See \"Non Spatialized Radius End\" to define the end of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusStart = { "NonSpatializedRadiusStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, NonSpatializedRadiusStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusEnd_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The distance below which a sound is fully non-spatialized (2D). See \"Non Spatialized Radius Start\" to define the start of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The distance below which a sound is fully non-spatialized (2D). See \"Non Spatialized Radius Start\" to define the start of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusEnd = { "NonSpatializedRadiusEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, NonSpatializedRadiusEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusEnd_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Defines how to interpolate a 3D sound towards a 2D sound when using the non-spatialized radius start and end properties. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Defines how to interpolate a 3D sound towards a 2D sound when using the non-spatialized radius start and end properties." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode = { "NonSpatializedRadiusMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, NonSpatializedRadiusMode), Z_Construct_UEnum_CriWareCore_EAtomNonSpatializedRadiusSpeakerMapMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode_MetaData)) }; // 126472295
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_StereoSpread_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The world-space distance between left and right stereo channels when stereo assets are 3D spatialized. */" },
		{ "DisplayName", "3D Stereo Spread" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The world-space distance between left and right stereo channels when stereo assets are 3D spatialized." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_StereoSpread = { "StereoSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, StereoSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_StereoSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_StereoSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The distance min range at which to apply an absorption LPF filter. */" },
		{ "DisplayName", "Min Distance Range" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The distance min range at which to apply an absorption LPF filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMin = { "LPFRadiusMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, LPFRadiusMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values. */" },
		{ "DisplayName", "Max Distance Range" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMax = { "LPFRadiusMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, LPFRadiusMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve = { "CustomLowpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, CustomLowpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis) */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve = { "CustomHighpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, CustomHighpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the lowpass absorption filter. */" },
		{ "DisplayName", "Low Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the lowpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin = { "LPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, LPFFrequencyAtMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the lowpass absorption filter. */" },
		{ "DisplayName", "Low Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the lowpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax = { "LPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, LPFFrequencyAtMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the highpass absorption filter. */" },
		{ "DisplayName", "High Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the highpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin = { "HPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, HPFFrequencyAtMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the highpass absorption filter. */" },
		{ "DisplayName", "High Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the highpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax = { "HPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, HPFFrequencyAtMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAzimuth = { "FocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, FocusAzimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusAzimuth = { "NonFocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, NonFocusAzimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusDistanceScale = { "FocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, FocusDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are.  */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusDistanceScale = { "NonFocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, NonFocusDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusPriorityScale = { "FocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, FocusPriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusPriorityScale = { "NonFocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, NonFocusPriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to attenuate sounds that are in focus. Can be overridden at the sound-level. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation = { "FocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, FocusVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation = { "NonFocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, NonFocusVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar used to increase interpolation speed upwards to the target Focus value */" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed upwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed = { "FocusAttackInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, FocusAttackInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar used to increase interpolation speed downwards to the target Focus value */" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed downwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed = { "FocusReleaseInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, FocusReleaseInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The low pass filter frequency (in Hz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The low pass filter frequency (in Hz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency = { "OcclusionLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, OcclusionLowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The amount of volume attenuation to apply to sounds which are occluded. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The amount of volume attenuation to apply to sounds which are occluded." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation = { "OcclusionVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, OcclusionVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime = { "OcclusionInterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, OcclusionInterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BusSendSettings_Inner = { "BusSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings, METADATA_PARAMS(nullptr, 0) }; // 2126311285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BusSendSettings_MetaData[] = {
		{ "Category", "AttenuationBusSends" },
		{ "Comment", "/** Set of submix send settings to use to send audio to submixes as a function of distance. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Set of submix send settings to use to send audio to submixes as a function of distance." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BusSendSettings = { "BusSendSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, BusSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BusSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BusSendSettings_MetaData)) }; // 2126311285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMin_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolated value to scale priority against when the sound is at the minimum priority attenuation distance from the closest listener. */" },
		{ "DisplayName", "Priority Attenuation At Min Distance" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Interpolated value to scale priority against when the sound is at the minimum priority attenuation distance from the closest listener." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMin = { "PriorityAttenuationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, PriorityAttenuationMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMax_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolated value to scale priority against when the sound is at the maximum priority attenuation distance from the closest listener. */" },
		{ "DisplayName", "Priority Attenuation At Max Distance" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Interpolated value to scale priority against when the sound is at the maximum priority attenuation distance from the closest listener." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMax = { "PriorityAttenuationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, PriorityAttenuationMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The min distance to attenuate priority. */" },
		{ "DisplayName", "Priority Attenuation Min Distance" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The min distance to attenuate priority." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin = { "PriorityAttenuationDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, PriorityAttenuationDistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The max distance to attenuate priority. */" },
		{ "DisplayName", "Priority Attenuation Max Distance" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The max distance to attenuate priority." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax = { "PriorityAttenuationDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, PriorityAttenuationDistanceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Static priority scalar to use (doesn't change as a function of distance). */" },
		{ "DisplayName", "Attenuation Priority" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Static priority scalar to use (doesn't change as a function of distance)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation = { "ManualPriorityAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, ManualPriorityAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/* The custom curve to use for distance-based priority attenuation. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "The custom curve to use for distance-based priority attenuation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve = { "CustomPriorityAttenuationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, CustomPriorityAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PluginSettings_MetaData[] = {
		{ "Category", "AttenuationPluginSettings" },
		{ "Comment", "/** Sound attenuation plugin settings to use with sounds that play with this attenuation setting. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sound attenuation plugin settings to use with sounds that play with this attenuation setting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PluginSettings = { "PluginSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAttenuationSettings, PluginSettings), Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PluginSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PluginSettings_MetaData)) }; // 2005584790
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bSpatialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bAttenuateWithLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableListenerFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_DistanceAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_DistanceAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AbsorptionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_SpatializationAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_AttenuationShapeExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ConeOutsideLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FalloffDistance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OmniRadius,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BinauralRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_StereoSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFRadiusMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAzimuth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusAzimuth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusPriorityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusPriorityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BusSendSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_BusSendSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewProp_PluginSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomAttenuationSettings",
		sizeof(FAtomAttenuationSettings),
		alignof(FAtomAttenuationSettings),
		Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAttenuationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAttenuationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAttenuationSettings.InnerSingleton;
	}
	void UAtomAttenuation::StaticRegisterNativesUAtomAttenuation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAttenuation);
	UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister()
	{
		return UAtomAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attenuation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[];
#endif
		static void NewProp_bIsEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines how a sound changes volume with distance to the listener.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomAttenuation.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Defines how a sound changes volume with distance to the listener." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "CustomizeProperty", "" },
		{ "EditCondition", "bIsEditable" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAttenuation, Attenuation), Z_Construct_UScriptStruct_FAtomAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_Attenuation_MetaData)) }; // 1019755818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_bIsEditable_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/**\n\x09 * Was this asset created by a external or procedural tool?\n\x09 * It's used to tell the users that they shouldn't modify the asset by themselves.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomAttenuation.h" },
		{ "ToolTip", "Was this asset created by a external or procedural tool?\nIt's used to tell the users that they shouldn't modify the asset by themselves." },
	};
#endif
	void Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_bIsEditable_SetBit(void* Obj)
	{
		((UAtomAttenuation*)Obj)->bIsEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0010040800020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAtomAttenuation), &Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_bIsEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_bIsEditable_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_Attenuation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAttenuation_Statics::NewProp_bIsEditable,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAttenuation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAttenuation_Statics::ClassParams = {
		&UAtomAttenuation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAttenuation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuation_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAttenuation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAttenuation()
	{
		if (!Z_Registration_Info_UClass_UAtomAttenuation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAttenuation.OuterSingleton, Z_Construct_UClass_UAtomAttenuation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAttenuation.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomAttenuation>()
	{
		return UAtomAttenuation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAttenuation);
	UAtomAttenuation::~UAtomAttenuation() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::EnumInfo[] = {
		{ EAtomSpatializationAlgorithm_StaticEnum, TEXT("EAtomSpatializationAlgorithm"), &Z_Registration_Info_UEnum_EAtomSpatializationAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 604256163U) },
		{ EAtomAttenuationDistanceModel_StaticEnum, TEXT("EAtomAttenuationDistanceModel"), &Z_Registration_Info_UEnum_EAtomAttenuationDistanceModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1128230834U) },
		{ EAtomAttenuationShape_StaticEnum, TEXT("EAtomAttenuationShape"), &Z_Registration_Info_UEnum_EAtomAttenuationShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4114019816U) },
		{ EAtomAirAbsorptionMethod_StaticEnum, TEXT("EAtomAirAbsorptionMethod"), &Z_Registration_Info_UEnum_EAtomAirAbsorptionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3406079666U) },
		{ EAtomBusSendMethod_StaticEnum, TEXT("EAtomBusSendMethod"), &Z_Registration_Info_UEnum_EAtomBusSendMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 664366647U) },
		{ EAtomPriorityAttenuationMethod_StaticEnum, TEXT("EAtomPriorityAttenuationMethod"), &Z_Registration_Info_UEnum_EAtomPriorityAttenuationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1422049544U) },
		{ EAtomMultiPositionType_StaticEnum, TEXT("EAtomMultiPositionType"), &Z_Registration_Info_UEnum_EAtomMultiPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1812021839U) },
		{ EAtomNonSpatializedRadiusSpeakerMapMode_StaticEnum, TEXT("EAtomNonSpatializedRadiusSpeakerMapMode"), &Z_Registration_Info_UEnum_EAtomNonSpatializedRadiusSpeakerMapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 126472295U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::ScriptStructInfo[] = {
		{ FAtomAttenuationPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomAttenuationPluginSettings_Statics::NewStructOps, TEXT("AtomAttenuationPluginSettings"), &Z_Registration_Info_UScriptStruct_AtomAttenuationPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAttenuationPluginSettings), 2005584790U) },
		{ FAtomAttenuationBusSendSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomAttenuationBusSendSettings_Statics::NewStructOps, TEXT("AtomAttenuationBusSendSettings"), &Z_Registration_Info_UScriptStruct_AtomAttenuationBusSendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAttenuationBusSendSettings), 2126311285U) },
		{ FAtomMultiPositionSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomMultiPositionSettings_Statics::NewStructOps, TEXT("AtomMultiPositionSettings"), &Z_Registration_Info_UScriptStruct_AtomMultiPositionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomMultiPositionSettings), 1441834366U) },
		{ FAtomAttenuationSettings::StaticStruct, Z_Construct_UScriptStruct_FAtomAttenuationSettings_Statics::NewStructOps, TEXT("AtomAttenuationSettings"), &Z_Registration_Info_UScriptStruct_AtomAttenuationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAttenuationSettings), 1019755818U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAttenuation, UAtomAttenuation::StaticClass, TEXT("UAtomAttenuation"), &Z_Registration_Info_UClass_UAtomAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAttenuation), 1535944353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_1092348165(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomAttenuation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
