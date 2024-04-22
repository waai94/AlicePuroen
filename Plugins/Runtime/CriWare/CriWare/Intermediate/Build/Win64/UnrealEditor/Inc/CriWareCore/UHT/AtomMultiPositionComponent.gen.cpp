// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomMultiPositionComponent.h"
#include "CriWareCore/Public/Atom/AtomAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomMultiPositionComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomMultiPositionComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomMultiPositionComponent_NoRegister();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomMultiPositionSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomMultiPositionComponent::execGetAllPositions)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Positions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllPositions(Z_Param_Out_Positions);
		P_NATIVE_END;
	}
	void UAtomMultiPositionComponent::StaticRegisterNativesUAtomMultiPositionComponent()
	{
		UClass* Class = UAtomMultiPositionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllPositions", &UAtomMultiPositionComponent::execGetAllPositions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics
	{
		struct AtomMultiPositionComponent_eventGetAllPositions_Parms
		{
			TArray<FTransform> Positions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomMultiPositionComponent_eventGetAllPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::NewProp_Positions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MultiPosition" },
		{ "Comment", "/** Populates an array with current positions of all attenuation sources. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomMultiPositionComponent.h" },
		{ "ToolTip", "Populates an array with current positions of all attenuation sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomMultiPositionComponent, nullptr, "GetAllPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::AtomMultiPositionComponent_eventGetAllPositions_Parms), Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomMultiPositionComponent);
	UClass* Z_Construct_UClass_UAtomMultiPositionComponent_NoRegister()
	{
		return UAtomMultiPositionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomMultiPositionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiPositionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiPositionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomMultiPositionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomMultiPositionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomMultiPositionComponent_GetAllPositions, "GetAllPositions" }, // 1034719196
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomMultiPositionComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Physics Collision Lighting Rendering Cooking Tags" },
		{ "AutoExpandCategories", "Transform StaticMesh MultiPosition" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Atom" },
		{ "Comment", "/**\n * AtomMultiPositionComponent is an AtomComponent using multiple source positions for attenuation.\n *\n * @see UAtomComponent\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Atom/AtomMultiPositionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomMultiPositionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AtomMultiPositionComponent is an AtomComponent using multiple source positions for attenuation.\n\n@see UAtomComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomMultiPositionComponent_Statics::NewProp_MultiPositionSettings_MetaData[] = {
		{ "Category", "MultiPosition" },
		{ "ModuleRelativePath", "Public/Atom/AtomMultiPositionComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomMultiPositionComponent_Statics::NewProp_MultiPositionSettings = { "MultiPositionSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomMultiPositionComponent, MultiPositionSettings), Z_Construct_UScriptStruct_FAtomMultiPositionSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomMultiPositionComponent_Statics::NewProp_MultiPositionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomMultiPositionComponent_Statics::NewProp_MultiPositionSettings_MetaData)) }; // 1441834366
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomMultiPositionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomMultiPositionComponent_Statics::NewProp_MultiPositionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomMultiPositionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomMultiPositionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomMultiPositionComponent_Statics::ClassParams = {
		&UAtomMultiPositionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomMultiPositionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomMultiPositionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomMultiPositionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomMultiPositionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomMultiPositionComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomMultiPositionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomMultiPositionComponent.OuterSingleton, Z_Construct_UClass_UAtomMultiPositionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomMultiPositionComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomMultiPositionComponent>()
	{
		return UAtomMultiPositionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomMultiPositionComponent);
	UAtomMultiPositionComponent::~UAtomMultiPositionComponent() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomMultiPositionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomMultiPositionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomMultiPositionComponent, UAtomMultiPositionComponent::StaticClass, TEXT("UAtomMultiPositionComponent"), &Z_Registration_Info_UClass_UAtomMultiPositionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomMultiPositionComponent), 2889241473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomMultiPositionComponent_h_466361784(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomMultiPositionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomMultiPositionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
