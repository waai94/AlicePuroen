// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomEffectPresetWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomEffectPresetWidgetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEffectPreset_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEffectPresetWidgetInterface();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomEffectPresetWidgetInterface_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomPanelWidgetInterface();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomPanelWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	struct AtomPanelWidgetInterface_eventGetEditorName_Parms
	{
		FText ReturnValue;
	};
	struct AtomPanelWidgetInterface_eventGetIconBrushName_Parms
	{
		FName ReturnValue;
	};
	FText IAtomPanelWidgetInterface::GetEditorName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEditorName instead.");
		AtomPanelWidgetInterface_eventGetEditorName_Parms Parms;
		return Parms.ReturnValue;
	}
	FName IAtomPanelWidgetInterface::GetIconBrushName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIconBrushName instead.");
		AtomPanelWidgetInterface_eventGetIconBrushName_Parms Parms;
		return Parms.ReturnValue;
	}
	void UAtomPanelWidgetInterface::StaticRegisterNativesUAtomPanelWidgetInterface()
	{
	}
	struct Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomPanelWidgetInterface_eventGetEditorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPresetWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomPanelWidgetInterface, nullptr, "GetEditorName", nullptr, nullptr, sizeof(AtomPanelWidgetInterface_eventGetEditorName_Parms), Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomPanelWidgetInterface_eventGetIconBrushName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPresetWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomPanelWidgetInterface, nullptr, "GetIconBrushName", nullptr, nullptr, sizeof(AtomPanelWidgetInterface_eventGetIconBrushName_Parms), Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomPanelWidgetInterface);
	UClass* Z_Construct_UClass_UAtomPanelWidgetInterface_NoRegister()
	{
		return UAtomPanelWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAtomPanelWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomPanelWidgetInterface_GetEditorName, "GetEditorName" }, // 663572810
		{ &Z_Construct_UFunction_UAtomPanelWidgetInterface_GetIconBrushName, "GetIconBrushName" }, // 3693005107
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPresetWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomPanelWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::ClassParams = {
		&UAtomPanelWidgetInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomPanelWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_UAtomPanelWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomPanelWidgetInterface.OuterSingleton, Z_Construct_UClass_UAtomPanelWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomPanelWidgetInterface.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomPanelWidgetInterface>()
	{
		return UAtomPanelWidgetInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomPanelWidgetInterface);
	UAtomPanelWidgetInterface::~UAtomPanelWidgetInterface() {}
	static FName NAME_UAtomPanelWidgetInterface_GetEditorName = FName(TEXT("GetEditorName"));
	FText IAtomPanelWidgetInterface::Execute_GetEditorName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomPanelWidgetInterface::StaticClass()));
		AtomPanelWidgetInterface_eventGetEditorName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAtomPanelWidgetInterface_GetEditorName);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAtomPanelWidgetInterface_GetIconBrushName = FName(TEXT("GetIconBrushName"));
	FName IAtomPanelWidgetInterface::Execute_GetIconBrushName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomPanelWidgetInterface::StaticClass()));
		AtomPanelWidgetInterface_eventGetIconBrushName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAtomPanelWidgetInterface_GetIconBrushName);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct AtomEffectPresetWidgetInterface_eventGetClass_Parms
	{
		TSubclassOf<UAtomEffectPreset>  ReturnValue;

		/** Constructor, initializes return property only **/
		AtomEffectPresetWidgetInterface_eventGetClass_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AtomEffectPresetWidgetInterface_eventOnConstructed_Parms
	{
		UAtomEffectPreset* Preset;
	};
	struct AtomEffectPresetWidgetInterface_eventOnPropertyChanged_Parms
	{
		UAtomEffectPreset* Preset;
		FName PropertyName;
	};
	TSubclassOf<UAtomEffectPreset>  IAtomEffectPresetWidgetInterface::GetClass()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetClass instead.");
		AtomEffectPresetWidgetInterface_eventGetClass_Parms Parms;
		return Parms.ReturnValue;
	}
	void IAtomEffectPresetWidgetInterface::OnConstructed(UAtomEffectPreset* Preset)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnConstructed instead.");
	}
	void IAtomEffectPresetWidgetInterface::OnPropertyChanged(UAtomEffectPreset* Preset, FName PropertyName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPropertyChanged instead.");
	}
	void UAtomEffectPresetWidgetInterface::StaticRegisterNativesUAtomEffectPresetWidgetInterface()
	{
	}
	struct Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomEffectPresetWidgetInterface_eventGetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAtomEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns the class of Preset the widget supports\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Returns the class of Preset the widget supports" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomEffectPresetWidgetInterface, nullptr, "GetClass", nullptr, nullptr, sizeof(AtomEffectPresetWidgetInterface_eventGetClass_Parms), Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomEffectPresetWidgetInterface_eventOnConstructed_Parms, Preset), Z_Construct_UClass_UAtomEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::NewProp_Preset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the preset widget is constructed\n" },
		{ "DisplayName", "On AtomEffectPreset Widget Constructed" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Called when the preset widget is constructed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomEffectPresetWidgetInterface, nullptr, "OnConstructed", nullptr, nullptr, sizeof(AtomEffectPresetWidgetInterface_eventOnConstructed_Parms), Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomEffectPresetWidgetInterface_eventOnPropertyChanged_Parms, Preset), Z_Construct_UClass_UAtomEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomEffectPresetWidgetInterface_eventOnPropertyChanged_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the preset object is changed\n" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Called when the preset object is changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomEffectPresetWidgetInterface, nullptr, "OnPropertyChanged", nullptr, nullptr, sizeof(AtomEffectPresetWidgetInterface_eventOnPropertyChanged_Parms), Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomEffectPresetWidgetInterface);
	UClass* Z_Construct_UClass_UAtomEffectPresetWidgetInterface_NoRegister()
	{
		return UAtomEffectPresetWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtomPanelWidgetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_GetClass, "GetClass" }, // 1036466215
		{ &Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnConstructed, "OnConstructed" }, // 1836250068
		{ &Z_Construct_UFunction_UAtomEffectPresetWidgetInterface_OnPropertyChanged, "OnPropertyChanged" }, // 1406898608
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomEffectPresetWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomEffectPresetWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::ClassParams = {
		&UAtomEffectPresetWidgetInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomEffectPresetWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_UAtomEffectPresetWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomEffectPresetWidgetInterface.OuterSingleton, Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomEffectPresetWidgetInterface.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomEffectPresetWidgetInterface>()
	{
		return UAtomEffectPresetWidgetInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomEffectPresetWidgetInterface);
	UAtomEffectPresetWidgetInterface::~UAtomEffectPresetWidgetInterface() {}
	static FName NAME_UAtomEffectPresetWidgetInterface_GetClass = FName(TEXT("GetClass"));
	TSubclassOf<UAtomEffectPreset>  IAtomEffectPresetWidgetInterface::Execute_GetClass(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomEffectPresetWidgetInterface::StaticClass()));
		AtomEffectPresetWidgetInterface_eventGetClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAtomEffectPresetWidgetInterface_GetClass);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAtomEffectPresetWidgetInterface_OnConstructed = FName(TEXT("OnConstructed"));
	void IAtomEffectPresetWidgetInterface::Execute_OnConstructed(UObject* O, UAtomEffectPreset* Preset)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomEffectPresetWidgetInterface::StaticClass()));
		AtomEffectPresetWidgetInterface_eventOnConstructed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAtomEffectPresetWidgetInterface_OnConstructed);
		if (Func)
		{
			Parms.Preset=Preset;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAtomEffectPresetWidgetInterface_OnPropertyChanged = FName(TEXT("OnPropertyChanged"));
	void IAtomEffectPresetWidgetInterface::Execute_OnPropertyChanged(UObject* O, UAtomEffectPreset* Preset, FName PropertyName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAtomEffectPresetWidgetInterface::StaticClass()));
		AtomEffectPresetWidgetInterface_eventOnPropertyChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAtomEffectPresetWidgetInterface_OnPropertyChanged);
		if (Func)
		{
			Parms.Preset=Preset;
			Parms.PropertyName=PropertyName;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomPanelWidgetInterface, UAtomPanelWidgetInterface::StaticClass, TEXT("UAtomPanelWidgetInterface"), &Z_Registration_Info_UClass_UAtomPanelWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomPanelWidgetInterface), 1753760214U) },
		{ Z_Construct_UClass_UAtomEffectPresetWidgetInterface, UAtomEffectPresetWidgetInterface::StaticClass, TEXT("UAtomEffectPresetWidgetInterface"), &Z_Registration_Info_UClass_UAtomEffectPresetWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomEffectPresetWidgetInterface), 1928987186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_2335872131(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
