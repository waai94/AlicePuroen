// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomSoundSimple.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundSimple() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundSimple();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundSimple_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundWave_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundVariation();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSoundVariation;
class UScriptStruct* FAtomSoundVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSoundVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSoundVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundVariation, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSoundVariation"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSoundVariation.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSoundVariation>()
{
	return FAtomSoundVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSoundVariation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProbabilityWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbabilityWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "SoundVariation" },
		{ "Comment", "/** The Atom sound wave asset to use for this variation. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
		{ "ToolTip", "The Atom sound wave asset to use for this variation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundVariation, SoundWave), Z_Construct_UClass_UAtomSoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_ProbabilityWeight_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "/** The probability weight to use for this variation. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
		{ "ToolTip", "The probability weight to use for this variation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_ProbabilityWeight = { "ProbabilityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundVariation, ProbabilityWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_ProbabilityWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_ProbabilityWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_VolumeRange_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "/** The volume range to use for this variation. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
		{ "ToolTip", "The volume range to use for this variation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_VolumeRange = { "VolumeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundVariation, VolumeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_VolumeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_VolumeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_PitchRange_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "/** The pitch range to use for this variation. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
		{ "ToolTip", "The pitch range to use for this variation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSoundVariation, PitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_PitchRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_PitchRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_ProbabilityWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_VolumeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewProp_PitchRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSoundVariation",
		sizeof(FAtomSoundVariation),
		alignof(FAtomSoundVariation),
		Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSoundVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSoundVariation.InnerSingleton, Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSoundVariation.InnerSingleton;
	}
	void UAtomSoundSimple::StaticRegisterNativesUAtomSoundSimple()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSoundSimple);
	UClass* Z_Construct_UClass_UAtomSoundSimple_NoRegister()
	{
		return UAtomSoundSimple::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundSimple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundSimple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomSoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundSimple_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Atom" },
		{ "Comment", "/** Class which contains a simple list of Atom sound wave variations. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomSoundSimple.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class which contains a simple list of Atom sound wave variations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSoundVariation, METADATA_PARAMS(nullptr, 0) }; // 2014258358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "Variations" },
		{ "Comment", "/** List of variations for the simple sound. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
		{ "ToolTip", "List of variations for the simple sound." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundSimple, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_Variations_MetaData)) }; // 2014258358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Comment", "// The current chosen Atom sound wave.\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomSoundSimple.h" },
		{ "ToolTip", "The current chosen Atom sound wave." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomSoundSimple, SoundWave), Z_Construct_UClass_UAtomSoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_SoundWave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_Variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_Variations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundSimple_Statics::NewProp_SoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundSimple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundSimple>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundSimple_Statics::ClassParams = {
		&UAtomSoundSimple::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundSimple_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundSimple_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundSimple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundSimple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundSimple()
	{
		if (!Z_Registration_Info_UClass_UAtomSoundSimple.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSoundSimple.OuterSingleton, Z_Construct_UClass_UAtomSoundSimple_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSoundSimple.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomSoundSimple>()
	{
		return UAtomSoundSimple::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundSimple);
	UAtomSoundSimple::~UAtomSoundSimple() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomSoundSimple)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_Statics::ScriptStructInfo[] = {
		{ FAtomSoundVariation::StaticStruct, Z_Construct_UScriptStruct_FAtomSoundVariation_Statics::NewStructOps, TEXT("AtomSoundVariation"), &Z_Registration_Info_UScriptStruct_AtomSoundVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSoundVariation), 2014258358U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSoundSimple, UAtomSoundSimple::StaticClass, TEXT("UAtomSoundSimple"), &Z_Registration_Info_UClass_UAtomSoundSimple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSoundSimple), 3024757214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_536626831(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomSoundSimple_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
