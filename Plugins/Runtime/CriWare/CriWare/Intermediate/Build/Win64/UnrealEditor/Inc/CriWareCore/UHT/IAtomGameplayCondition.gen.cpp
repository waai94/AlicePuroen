// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/Gameplay/Interfaces/IAtomGameplayCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAtomGameplayCondition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayCondition();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayCondition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(IAtomGameplayCondition::execConditionMet_Position)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConditionMet_Position_Implementation(Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAtomGameplayCondition::execConditionMet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConditionMet_Implementation();
		P_NATIVE_END;
	}
	struct AtomGameplayCondition_eventConditionMet_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AtomGameplayCondition_eventConditionMet_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AtomGameplayCondition_eventConditionMet_Position_Parms
	{
		FVector Position;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AtomGameplayCondition_eventConditionMet_Position_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IAtomGameplayCondition::ConditionMet() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConditionMet instead.");
		AtomGameplayCondition_eventConditionMet_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IAtomGameplayCondition::ConditionMet_Position(FVector const& Position) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConditionMet_Position instead.");
		AtomGameplayCondition_eventConditionMet_Position_Parms Parms;
		return Parms.ReturnValue;
	}
	void UAtomGameplayCondition::StaticRegisterNativesUAtomGameplayCondition()
	{
		UClass* Class = UAtomGameplayCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConditionMet", &IAtomGameplayCondition::execConditionMet },
			{ "ConditionMet_Position", &IAtomGameplayCondition::execConditionMet_Position },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomGameplayCondition_eventConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayCondition_eventConditionMet_Parms), &Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplayCondition" },
		{ "Comment", "/**\n\x09 * Basic condition check\n\x09 * \n\x09 * @returns true if condition is met\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/Interfaces/IAtomGameplayCondition.h" },
		{ "ToolTip", "Basic condition check\n\n@returns true if condition is met" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayCondition, nullptr, "ConditionMet", nullptr, nullptr, sizeof(AtomGameplayCondition_eventConditionMet_Parms), Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayCondition_eventConditionMet_Position_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_Position_MetaData)) };
	void Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomGameplayCondition_eventConditionMet_Position_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayCondition_eventConditionMet_Position_Parms), &Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomGameplayCondition" },
		{ "Comment", "/**\n\x09 * Allows testing a condition against a provided position.\n\x09 *\n\x09 * @param Position - The location to be considered\n\x09 * \n\x09 * @returns true if condition is met\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/Interfaces/IAtomGameplayCondition.h" },
		{ "ToolTip", "Allows testing a condition against a provided position.\n\n@param Position - The location to be considered\n\n@returns true if condition is met" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayCondition, nullptr, "ConditionMet_Position", nullptr, nullptr, sizeof(AtomGameplayCondition_eventConditionMet_Position_Parms), Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayCondition);
	UClass* Z_Construct_UClass_UAtomGameplayCondition_NoRegister()
	{
		return UAtomGameplayCondition::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomGameplayCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet, "ConditionMet" }, // 3945479988
		{ &Z_Construct_UFunction_UAtomGameplayCondition_ConditionMet_Position, "ConditionMet_Position" }, // 339927222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/Gameplay/Interfaces/IAtomGameplayCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomGameplayCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayCondition_Statics::ClassParams = {
		&UAtomGameplayCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayCondition()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayCondition.OuterSingleton, Z_Construct_UClass_UAtomGameplayCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayCondition.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayCondition>()
	{
		return UAtomGameplayCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayCondition);
	UAtomGameplayCondition::~UAtomGameplayCondition() {}
	static FName NAME_UAtomGameplayCondition_ConditionMet = FName(TEXT("ConditionMet"));
	bool IAtomGameplayCondition::Execute_ConditionMet(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomGameplayCondition::StaticClass()));
		AtomGameplayCondition_eventConditionMet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAtomGameplayCondition_ConditionMet);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAtomGameplayCondition*)(O->GetNativeInterfaceAddress(UAtomGameplayCondition::StaticClass())))
		{
			Parms.ReturnValue = I->ConditionMet_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAtomGameplayCondition_ConditionMet_Position = FName(TEXT("ConditionMet_Position"));
	bool IAtomGameplayCondition::Execute_ConditionMet_Position(const UObject* O, FVector const& Position)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomGameplayCondition::StaticClass()));
		AtomGameplayCondition_eventConditionMet_Position_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAtomGameplayCondition_ConditionMet_Position);
		if (Func)
		{
			Parms.Position=Position;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAtomGameplayCondition*)(O->GetNativeInterfaceAddress(UAtomGameplayCondition::StaticClass())))
		{
			Parms.ReturnValue = I->ConditionMet_Position_Implementation(Position);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomGameplayCondition, UAtomGameplayCondition::StaticClass, TEXT("UAtomGameplayCondition"), &Z_Registration_Info_UClass_UAtomGameplayCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayCondition), 962210818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_19196808(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_Gameplay_Interfaces_IAtomGameplayCondition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
