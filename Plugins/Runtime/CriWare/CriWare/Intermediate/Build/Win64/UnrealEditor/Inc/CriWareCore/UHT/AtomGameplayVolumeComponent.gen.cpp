// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/AtomGameplayVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGameplayVolumeComponent() {}
// Cross Module References
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeComponent();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeComponentBase();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeComponentBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeInteraction_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeProxy_NoRegister();
	CRIWARECORE_API UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareCore, nullptr, "OnAtomGameplayVolumeProxyStateChange__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAtomGameplayVolumeComponent::StaticRegisterNativesUAtomGameplayVolumeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumeComponent);
	UClass* Z_Construct_UClass_UAtomGameplayVolumeComponent_NoRegister()
	{
		return UAtomGameplayVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProxyEnter_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProxyEnter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProxyExit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProxyExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AtomGameplay" },
		{ "Comment", "/**\n *  UAtomGameplayVolumeComponent - Component used to drive interaction with AtomGameplayVolumeSubsystem.\n *   NOTE: Do not inherit from this class, use UAtomGameplayVolumeComponentBase or UAtomGameplayVolumeMutator to create extendable functionality\n */" },
		{ "DisplayName", "Volume Proxy" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayVolumeComponent.h" },
		{ "IsBlueprintBase", "FALSE" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomGameplayVolumeComponent - Component used to drive interaction with AtomGameplayVolumeSubsystem.\n NOTE: Do not inherit from this class, use UAtomGameplayVolumeComponentBase or UAtomGameplayVolumeMutator to create extendable functionality" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyEnter_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Blueprint event for proxy enter */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeComponent.h" },
		{ "ToolTip", "Blueprint event for proxy enter" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyEnter = { "OnProxyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomGameplayVolumeComponent, OnProxyEnter), Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyEnter_MetaData)) }; // 1391504592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyExit_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Blueprint event for proxy exit */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeComponent.h" },
		{ "ToolTip", "Blueprint event for proxy exit" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyExit = { "OnProxyExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomGameplayVolumeComponent, OnProxyExit), Z_Construct_UDelegateFunction_CriWareCore_OnAtomGameplayVolumeProxyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyExit_MetaData)) }; // 1391504592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_Proxy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AtomGameplay" },
		{ "Comment", "// A representation of this volume for the audio thread\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "A representation of this volume for the audio thread" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x002608000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomGameplayVolumeComponent, Proxy), Z_Construct_UClass_UAtomGameplayVolumeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_Proxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyEnter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_OnProxyExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::NewProp_Proxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::ClassParams = {
		&UAtomGameplayVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumeComponent.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumeComponent.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumeComponent>()
	{
		return UAtomGameplayVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumeComponent);
	void UAtomGameplayVolumeComponentBase::StaticRegisterNativesUAtomGameplayVolumeComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumeComponentBase);
	UClass* Z_Construct_UClass_UAtomGameplayVolumeComponentBase_NoRegister()
	{
		return UAtomGameplayVolumeComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomGameplayComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AtomGameplay" },
		{ "Comment", "/**\n *  UAtomGameplayVolumeComponentBase - Blueprintable component used to craft custom functionality with AtomGameplayVolumes.\n *  NOTE: Inherit from this class to get easy access to OnListenerEnter and OnListenerExit Blueprint Events\n */" },
		{ "HideCategories", "Tags Collision" },
		{ "IncludePath", "Atom/Gameplay/AtomGameplayVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/AtomGameplayVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomGameplayVolumeComponentBase - Blueprintable component used to craft custom functionality with AtomGameplayVolumes.\nNOTE: Inherit from this class to get easy access to OnListenerEnter and OnListenerExit Blueprint Events" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAtomGameplayVolumeInteraction_NoRegister, (int32)VTABLE_OFFSET(UAtomGameplayVolumeComponentBase, IAtomGameplayVolumeInteraction), false },  // 1438223546
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayVolumeComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::ClassParams = {
		&UAtomGameplayVolumeComponentBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumeComponentBase()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumeComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumeComponentBase.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumeComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumeComponentBase.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumeComponentBase>()
	{
		return UAtomGameplayVolumeComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumeComponentBase);
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomGameplayVolumeComponent, UAtomGameplayVolumeComponent::StaticClass, TEXT("UAtomGameplayVolumeComponent"), &Z_Registration_Info_UClass_UAtomGameplayVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumeComponent), 290150776U) },
		{ Z_Construct_UClass_UAtomGameplayVolumeComponentBase, UAtomGameplayVolumeComponentBase::StaticClass, TEXT("UAtomGameplayVolumeComponentBase"), &Z_Registration_Info_UClass_UAtomGameplayVolumeComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumeComponentBase), 451190804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeComponent_h_14436388(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_AtomGameplayVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
