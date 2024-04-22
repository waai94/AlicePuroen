// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/Interfaces/IAtomGameplayVolumeInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAtomGameplayVolumeInteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeInteraction();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayVolumeInteraction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(IAtomGameplayVolumeInteraction::execOnListenerExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListenerExit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAtomGameplayVolumeInteraction::execOnListenerEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListenerEnter_Implementation();
		P_NATIVE_END;
	}
	void IAtomGameplayVolumeInteraction::OnListenerEnter()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnListenerEnter instead.");
	}
	void IAtomGameplayVolumeInteraction::OnListenerExit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnListenerExit instead.");
	}
	void UAtomGameplayVolumeInteraction::StaticRegisterNativesUAtomGameplayVolumeInteraction()
	{
		UClass* Class = UAtomGameplayVolumeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnListenerEnter", &IAtomGameplayVolumeInteraction::execOnListenerEnter },
			{ "OnListenerExit", &IAtomGameplayVolumeInteraction::execOnListenerExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplayVolume" },
		{ "Comment", "/**\n\x09 * Called when a listener 'enters' the associated proxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/Interfaces/IAtomGameplayVolumeInteraction.h" },
		{ "ToolTip", "Called when a listener 'enters' the associated proxy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayVolumeInteraction, nullptr, "OnListenerEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplayVolume" },
		{ "Comment", "/**\n\x09 * Called when a listener 'exits' the associated proxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/Interfaces/IAtomGameplayVolumeInteraction.h" },
		{ "ToolTip", "Called when a listener 'exits' the associated proxy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayVolumeInteraction, nullptr, "OnListenerExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayVolumeInteraction);
	UClass* Z_Construct_UClass_UAtomGameplayVolumeInteraction_NoRegister()
	{
		return UAtomGameplayVolumeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerEnter, "OnListenerEnter" }, // 2418172146
		{ &Z_Construct_UFunction_UAtomGameplayVolumeInteraction_OnListenerExit, "OnListenerExit" }, // 686614058
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/Interfaces/IAtomGameplayVolumeInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomGameplayVolumeInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::ClassParams = {
		&UAtomGameplayVolumeInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayVolumeInteraction()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayVolumeInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayVolumeInteraction.OuterSingleton, Z_Construct_UClass_UAtomGameplayVolumeInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayVolumeInteraction.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayVolumeInteraction>()
	{
		return UAtomGameplayVolumeInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayVolumeInteraction);
	UAtomGameplayVolumeInteraction::~UAtomGameplayVolumeInteraction() {}
	static FName NAME_UAtomGameplayVolumeInteraction_OnListenerEnter = FName(TEXT("OnListenerEnter"));
	void IAtomGameplayVolumeInteraction::Execute_OnListenerEnter(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomGameplayVolumeInteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAtomGameplayVolumeInteraction_OnListenerEnter);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAtomGameplayVolumeInteraction*)(O->GetNativeInterfaceAddress(UAtomGameplayVolumeInteraction::StaticClass())))
		{
			I->OnListenerEnter_Implementation();
		}
	}
	static FName NAME_UAtomGameplayVolumeInteraction_OnListenerExit = FName(TEXT("OnListenerExit"));
	void IAtomGameplayVolumeInteraction::Execute_OnListenerExit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomGameplayVolumeInteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAtomGameplayVolumeInteraction_OnListenerExit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAtomGameplayVolumeInteraction*)(O->GetNativeInterfaceAddress(UAtomGameplayVolumeInteraction::StaticClass())))
		{
			I->OnListenerExit_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomGameplayVolumeInteraction, UAtomGameplayVolumeInteraction::StaticClass, TEXT("UAtomGameplayVolumeInteraction"), &Z_Registration_Info_UClass_UAtomGameplayVolumeInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayVolumeInteraction), 1438223546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_379418627(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayVolumeInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
