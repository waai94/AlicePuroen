// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomConfig.h"
#include "CriWareCore/Public/Atom/AtomAisacPatch.h"
#include "CriWareCore/Public/Atom/AtomBus.h"
#include "CriWareCore/Public/Atom/AtomParameter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAisacPatch_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConfig();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConfig_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomDspBusSetting();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomDspBusSetting_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRack_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomRackWithParentBase_NoRegister();
	CRIWARECORE_API UEnum* Z_Construct_UEnum_CriWareCore_EAtomBusSendType();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControl();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBusSendInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDSPSettingInfo();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGameVariable();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomOutputPort();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomPanning();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomRackConfig();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelector();
	CRIWARECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorInfo();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusSendInfo;
class UScriptStruct* FAtomBusSendInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusSendInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusSendInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusSendInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusSendInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusSendInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusSendInfo>()
{
	return FAtomBusSendInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendToBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SendToBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SendType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SendType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a Bus send." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusSendInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendToBusName_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the send to bus." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendToBusName = { "SendToBusName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusSendInfo, SendToBusName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendToBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendToBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Level of the send." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusSendInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendType_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Attach type of the send." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendType = { "SendType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusSendInfo, SendType), Z_Construct_UEnum_CriWareCore_EAtomBusSendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendType_MetaData)) }; // 1357895610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendToBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewProp_SendType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusSendInfo",
		sizeof(FAtomBusSendInfo),
		alignof(FAtomBusSendInfo),
		Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusSendInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusSendInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusSendInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusSendInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusEffectInfo;
class UScriptStruct* FAtomBusEffectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusEffectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusEffectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusEffectInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusEffectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusEffectInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusEffectInfo>()
{
	return FAtomBusEffectInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusEffectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusEffectName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a Bus effect." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusEffectInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_BusEffectName_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the send to bus." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_BusEffectName = { "BusEffectName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectInfo, BusEffectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_BusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_BusEffectName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Float paramters of the bus effect." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusEffectInfo, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Bypass value of the bus effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FAtomBusEffectInfo*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomBusEffectInfo), &Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_BusEffectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusEffectInfo",
		sizeof(FAtomBusEffectInfo),
		alignof(FAtomBusEffectInfo),
		Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusEffectInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusEffectInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusEffectInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusEffectInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomBusInfo;
class UScriptStruct* FAtomBusInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomBusInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomBusInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBusInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomBusInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomBusInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomBusInfo>()
{
	return FAtomBusInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomBusInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panning_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Panning;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sends;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a Bus setting." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBusInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the bus." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Volume of the bus." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusInfo, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Panning_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Pan settings of the bus." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Panning = { "Panning", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusInfo, Panning), Z_Construct_UScriptStruct_FAtomPanning, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Panning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Panning_MetaData)) }; // 1261092419
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Sends_Inner = { "Sends", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBusSendInfo, METADATA_PARAMS(nullptr, 0) }; // 449290456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Sends_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "List of sends of the bus." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Sends = { "Sends", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusInfo, Sends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Sends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Sends_MetaData)) }; // 449290456
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBusEffectInfo, METADATA_PARAMS(nullptr, 0) }; // 2362360573
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "List of effects of the bus." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomBusInfo, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Effects_MetaData)) }; // 2362360573
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomBusInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Panning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Sends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Sends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewProp_Effects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBusInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomBusInfo",
		sizeof(FAtomBusInfo),
		alignof(FAtomBusInfo),
		Z_Construct_UScriptStruct_FAtomBusInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBusInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBusInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomBusInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomBusInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomBusInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomBusInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo;
class UScriptStruct* FAtomDspBusSettingSnapshotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomDspBusSettingSnapshotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomDspBusSettingSnapshotInfo>()
{
	return FAtomDspBusSettingSnapshotInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendBuses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBuses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtendBuses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a Dsp bus setting snapshot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomDspBusSettingSnapshotInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the DSP bus setting." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDspBusSettingSnapshotInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Buses_Inner = { "Buses", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBusInfo, METADATA_PARAMS(nullptr, 0) }; // 4188197007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Buses_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Bus list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Buses = { "Buses", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDspBusSettingSnapshotInfo, Buses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Buses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Buses_MetaData)) }; // 4188197007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_ExtendBuses_Inner = { "ExtendBuses", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBusInfo, METADATA_PARAMS(nullptr, 0) }; // 4188197007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_ExtendBuses_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Extended bus list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_ExtendBuses = { "ExtendBuses", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDspBusSettingSnapshotInfo, ExtendBuses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_ExtendBuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_ExtendBuses_MetaData)) }; // 4188197007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Buses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_Buses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_ExtendBuses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewProp_ExtendBuses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomDspBusSettingSnapshotInfo",
		sizeof(FAtomDspBusSettingSnapshotInfo),
		alignof(FAtomDspBusSettingSnapshotInfo),
		Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo;
class UScriptStruct* FAtomDSPSettingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomDSPSettingInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomDSPSettingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomDSPSettingInfo>()
{
	return FAtomDSPSettingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendBuses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBuses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtendBuses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMixerAisacs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMixerAisacs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a DSP setting. A DSP settings defines bus layout and applied DSP effects for a sound renderer in AtomRack." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomDSPSettingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the category." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDSPSettingInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Buses_Inner = { "Buses", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBusInfo, METADATA_PARAMS(nullptr, 0) }; // 4188197007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Buses_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Bus list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Buses = { "Buses", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDSPSettingInfo, Buses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Buses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Buses_MetaData)) }; // 4188197007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_ExtendBuses_Inner = { "ExtendBuses", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomBusInfo, METADATA_PARAMS(nullptr, 0) }; // 4188197007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_ExtendBuses_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Extended bus list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_ExtendBuses = { "ExtendBuses", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDSPSettingInfo, ExtendBuses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_ExtendBuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_ExtendBuses_MetaData)) }; // 4188197007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo, METADATA_PARAMS(nullptr, 0) }; // 3516345539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Snapshots_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Setting snapshot list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDSPSettingInfo, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Snapshots_MetaData)) }; // 3516345539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_NumMixerAisacs_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Group number where this category belong to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_NumMixerAisacs = { "NumMixerAisacs", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomDSPSettingInfo, NumMixerAisacs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_NumMixerAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_NumMixerAisacs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Buses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Buses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_ExtendBuses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_ExtendBuses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Snapshots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_Snapshots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewProp_NumMixerAisacs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomDSPSettingInfo",
		sizeof(FAtomDSPSettingInfo),
		alignof(FAtomDSPSettingInfo),
		Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomDSPSettingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomGameVariable;
class UScriptStruct* FAtomGameVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomGameVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomGameVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomGameVariable, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomGameVariable"));
	}
	return Z_Registration_Info_UScriptStruct_AtomGameVariable.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomGameVariable>()
{
	return FAtomGameVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomGameVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct that define an Game Variable. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Struct that define an Game Variable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomGameVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Game Variable" },
		{ "Comment", "/** Name of the Game Variable. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the Game Variable." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomGameVariable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Game Variable" },
		{ "Comment", "/** Unique Atom Craft ID of the Game Variable. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Unique Atom Craft ID of the Game Variable." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomGameVariable, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Game Variable" },
		{ "Comment", "/** Unique Atom Craft default value of the Game Variable. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Unique Atom Craft default value of the Game Variable." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomGameVariable, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomGameVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomGameVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomGameVariable",
		sizeof(FAtomGameVariable),
		alignof(FAtomGameVariable),
		Z_Construct_UScriptStruct_FAtomGameVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomGameVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomGameVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomGameVariable.InnerSingleton, Z_Construct_UScriptStruct_FAtomGameVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomGameVariable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacControlInfo;
class UScriptStruct* FAtomAisacControlInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacControlInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacControlInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomAisacControlInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacControlInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomAisacControlInfo>()
{
	return FAtomAisacControlInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a sound category." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the AISAC control." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Identifier of the AISAC control." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAisacControlInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomAisacControlInfo",
		sizeof(FAtomAisacControlInfo),
		alignof(FAtomAisacControlInfo),
		Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAisacControlInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacControlInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAisacControlInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCategoryInfo;
class UScriptStruct* FAtomCategoryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCategoryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCategoryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCategoryInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomCategoryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCategoryInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomCategoryInfo>()
{
	return FAtomCategoryInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a sound category." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCategoryInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the category." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Identifier of the category." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_GroupNumber_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Group number where this category belong to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_GroupNumber = { "GroupNumber", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfo, GroupNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_GroupNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_GroupNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Current volume used by this category." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfo, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "True if this category is paused." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((FAtomCategoryInfo*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomCategoryInfo), &Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_bIsPaused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_GroupNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewProp_bIsPaused,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomCategoryInfo",
		sizeof(FAtomCategoryInfo),
		alignof(FAtomCategoryInfo),
		Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCategoryInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCategoryInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCategoryInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSelectorInfo;
class UScriptStruct* FAtomSelectorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSelectorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSelectorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorInfo, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomSelectorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSelectorInfo.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomSelectorInfo>()
{
	return FAtomSelectorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Labels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Information for a selector." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "The selector name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Labels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "The list of labels contained in this selector." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorInfo, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Labels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Labels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Labels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewProp_Labels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomSelectorInfo",
		sizeof(FAtomSelectorInfo),
		alignof(FAtomSelectorInfo),
		Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSelectorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSelectorInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSelectorInfo.InnerSingleton;
	}
	void UAtomDspBusSetting::StaticRegisterNativesUAtomDspBusSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomDspBusSetting);
	UClass* Z_Construct_UClass_UAtomDspBusSetting_NoRegister()
	{
		return UAtomDspBusSetting::StaticClass();
	}
	struct Z_Construct_UClass_UAtomDspBusSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BusNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapshotNames;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DspSetting;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomDspBusSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomDspBusSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UAtomDspBusSetting Class\n * \n * that can be set to an AtomRack \n * Keep only DSP setting name and tom busse.\n * Other information reflected from ACF data (buses and effects) are editor only data.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Atom/AtomConfig.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAtomDspBusSetting Class\n\nthat can be set to an AtomRack\nKeep only DSP setting name and tom busse.\nOther information reflected from ACF data (buses and effects) are editor only data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DSP Bus Setting" },
		{ "Comment", "/** The DSP setting name. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "The DSP setting name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomDspBusSetting, Name), METADATA_PARAMS(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_BusNames_Inner = { "BusNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_BusNames_MetaData[] = {
		{ "Comment", "/** The bus name list. Premit to spawn UAtomBus instances in UAtomRack when DSPSettings are updated dynamically. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "The bus name list. Premit to spawn UAtomBus instances in UAtomRack when DSPSettings are updated dynamically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_BusNames = { "BusNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomDspBusSetting, BusNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_BusNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_BusNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_SnapshotNames_Inner = { "SnapshotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_SnapshotNames_MetaData[] = {
		{ "Comment", "/** The snapshot name list. Premit to list and check possible value in UAtomRack.*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "The snapshot name list. Premit to list and check possible value in UAtomRack." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_SnapshotNames = { "SnapshotNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomDspBusSetting, SnapshotNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_SnapshotNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_SnapshotNames_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_DspSetting_MetaData[] = {
		{ "Category", "DSP Bus Setting" },
		{ "Comment", "/** The full settings reflection */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "The full settings reflection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_DspSetting = { "DspSetting", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomDspBusSetting, DspSetting), Z_Construct_UScriptStruct_FAtomDSPSettingInfo, METADATA_PARAMS(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_DspSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_DspSetting_MetaData)) }; // 2524235985
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomDspBusSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_BusNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_BusNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_SnapshotNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_SnapshotNames,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDspBusSetting_Statics::NewProp_DspSetting,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomDspBusSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomDspBusSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomDspBusSetting_Statics::ClassParams = {
		&UAtomDspBusSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomDspBusSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDspBusSetting_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomDspBusSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDspBusSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomDspBusSetting()
	{
		if (!Z_Registration_Info_UClass_UAtomDspBusSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomDspBusSetting.OuterSingleton, Z_Construct_UClass_UAtomDspBusSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomDspBusSetting.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomDspBusSetting>()
	{
		return UAtomDspBusSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomDspBusSetting);
	UAtomDspBusSetting::~UAtomDspBusSetting() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomDspBusSetting)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomOutputPort;
class UScriptStruct* FAtomOutputPort::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomOutputPort.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomOutputPort.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomOutputPort, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomOutputPort"));
	}
	return Z_Registration_Info_UScriptStruct_AtomOutputPort.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomOutputPort>()
{
	return FAtomOutputPort::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomOutputPort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRack_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetRack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomOutputPort_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FAtomOutputPort Struct\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "FAtomOutputPort Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomOutputPort>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomOutputPort, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_TargetRack_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_TargetRack = { "TargetRack", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomOutputPort, TargetRack), Z_Construct_UClass_UAtomRackWithParentBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_TargetRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_TargetRack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomOutputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewProp_TargetRack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomOutputPort_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomOutputPort",
		sizeof(FAtomOutputPort),
		alignof(FAtomOutputPort),
		Z_Construct_UScriptStruct_FAtomOutputPort_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPort_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomOutputPort_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPort_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomOutputPort()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomOutputPort.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomOutputPort.InnerSingleton, Z_Construct_UScriptStruct_FAtomOutputPort_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomOutputPort.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomRackConfig;
class UScriptStruct* FAtomRackConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomRackConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomRackConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomRackConfig, Z_Construct_UPackage__Script_CriWareCore(), TEXT("AtomRackConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AtomRackConfig.OuterSingleton;
}
template<> CRIWARECORE_API UScriptStruct* StaticStruct<FAtomRackConfig>()
{
	return FAtomRackConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomRackConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMasterRack_MetaData[];
#endif
		static void NewProp_bOverrideMasterRack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMasterRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpatializationRack_MetaData[];
#endif
		static void NewProp_bOverrideSpatializationRack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpatializationRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultOutputPorts_MetaData[];
#endif
		static void NewProp_bOverrideDefaultOutputPorts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultOutputPorts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterRack_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MasterRack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationRack_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpatializationRack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPorts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPorts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPorts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FAtomRackConfig Struct\n */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "FAtomRackConfig Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomRackConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideMasterRack_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideMasterRack_SetBit(void* Obj)
	{
		((FAtomRackConfig*)Obj)->bOverrideMasterRack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideMasterRack = { "bOverrideMasterRack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomRackConfig), &Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideMasterRack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideMasterRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideMasterRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideSpatializationRack_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideSpatializationRack_SetBit(void* Obj)
	{
		((FAtomRackConfig*)Obj)->bOverrideSpatializationRack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideSpatializationRack = { "bOverrideSpatializationRack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomRackConfig), &Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideSpatializationRack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideSpatializationRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideSpatializationRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideDefaultOutputPorts_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "DisplayAfter", "SpatializationRackOverrides" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideDefaultOutputPorts_SetBit(void* Obj)
	{
		((FAtomRackConfig*)Obj)->bOverrideDefaultOutputPorts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideDefaultOutputPorts = { "bOverrideDefaultOutputPorts", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomRackConfig), &Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideDefaultOutputPorts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideDefaultOutputPorts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideDefaultOutputPorts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_MasterRack_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "DisplayName", "Master Rack Overrides" },
		{ "EditCondition", "bOverrideMasterRack" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_MasterRack = { "MasterRack", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomRackConfig, MasterRack), Z_Construct_UClass_UAtomRack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_MasterRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_MasterRack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_SpatializationRack_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "DisplayName", "Spatialization Rack Overrides" },
		{ "EditCondition", "bOverrideSpatializationRack" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_SpatializationRack = { "SpatializationRack", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomRackConfig, SpatializationRack), Z_Construct_UClass_UAtomRackWithParentBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_SpatializationRack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_SpatializationRack_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_OutputPorts_Inner = { "OutputPorts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomOutputPort, METADATA_PARAMS(nullptr, 0) }; // 3667058529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_OutputPorts_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_OutputPorts = { "OutputPorts", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomRackConfig, OutputPorts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_OutputPorts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_OutputPorts_MetaData)) }; // 3667058529
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomRackConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideMasterRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideSpatializationRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_bOverrideDefaultOutputPorts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_MasterRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_SpatializationRack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_OutputPorts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewProp_OutputPorts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomRackConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
		nullptr,
		&NewStructOps,
		"AtomRackConfig",
		sizeof(FAtomRackConfig),
		alignof(FAtomRackConfig),
		Z_Construct_UScriptStruct_FAtomRackConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomRackConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomRackConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomRackConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomRackConfig.InnerSingleton, Z_Construct_UScriptStruct_FAtomRackConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomRackConfig.InnerSingleton;
	}
	void UAtomConfig::StaticRegisterNativesUAtomConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomConfig);
	UClass* Z_Construct_UClass_UAtomConfig_NoRegister()
	{
		return UAtomConfig::StaticClass();
	}
	struct Z_Construct_UClass_UAtomConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategorieNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorieNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CategorieNames;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GlobalAisacPatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAisacPatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalAisacPatches;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Selectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameVariables;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DspBusSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DspBusSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinauralizerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BinauralizerName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputPortNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPortNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPortNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RackConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RackConfig;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object" },
		{ "IncludePath", "Atom/AtomConfig.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asset holding Atom ConFiguration (ACF) data." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_CategorieNames_Inner = { "CategorieNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_CategorieNames_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Available Atom category name list. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Available Atom category name list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_CategorieNames = { "CategorieNames", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, CategorieNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_CategorieNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_CategorieNames_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_GlobalAisacPatches_Inner = { "GlobalAisacPatches", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomAisacPatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_GlobalAisacPatches_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Available global AISAC patches. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Available global AISAC patches." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_GlobalAisacPatches = { "GlobalAisacPatches", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, GlobalAisacPatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_GlobalAisacPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_GlobalAisacPatches_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_AisacControls_Inner = { "AisacControls", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControl, METADATA_PARAMS(nullptr, 0) }; // 2456867995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_AisacControls_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Available Aisac controls. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Available Aisac controls." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_AisacControls = { "AisacControls", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, AisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_AisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_AisacControls_MetaData)) }; // 2456867995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_Selectors_Inner = { "Selectors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelector, METADATA_PARAMS(nullptr, 0) }; // 1772791025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_Selectors_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Available Cue selectors. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Available Cue selectors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_Selectors = { "Selectors", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, Selectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_Selectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_Selectors_MetaData)) }; // 1772791025
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_GameVariables_Inner = { "GameVariables", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomGameVariable, METADATA_PARAMS(nullptr, 0) }; // 3564971538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_GameVariables_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Available Atom game variables. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Available Atom game variables." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_GameVariables = { "GameVariables", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, GameVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_GameVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_GameVariables_MetaData)) }; // 3564971538
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_DspBusSettings_Inner = { "DspBusSettings", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomDspBusSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_DspBusSettings_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Available DSP bus settings for Atom racks. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Available DSP bus settings for Atom racks." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_DspBusSettings = { "DspBusSettings", nullptr, (EPropertyFlags)0x0024090000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, DspBusSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_DspBusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_DspBusSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_BinauralizerName_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Name of the default HRTF binauralizer. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Name of the default HRTF binauralizer." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_BinauralizerName = { "BinauralizerName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, BinauralizerName), METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_BinauralizerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_BinauralizerName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_OutputPortNames_Inner = { "OutputPortNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_OutputPortNames_MetaData[] = {
		{ "Category", "Atom Configuration" },
		{ "Comment", "/** Output ports used. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ToolTip", "Output ports used." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_OutputPortNames = { "OutputPortNames", nullptr, (EPropertyFlags)0x00200d0000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, OutputPortNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_OutputPortNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_OutputPortNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_RackConfig_MetaData[] = {
		{ "Category", "Rack Configuration" },
		{ "Comment", "/** The Atom rack mapping to use when this Atom configuration is loaded in Atom runtime. */" },
		{ "DisplayAfter", "OutputPortNames" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "The Atom rack mapping to use when this Atom configuration is loaded in Atom runtime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_RackConfig = { "RackConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, RackConfig), Z_Construct_UScriptStruct_FAtomRackConfig, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_RackConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_RackConfig_MetaData)) }; // 2270594562
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomConfig_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Reimport" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Atom/AtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAtomConfig_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0016000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomConfig, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_CategorieNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_CategorieNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_GlobalAisacPatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_GlobalAisacPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_AisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_AisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_Selectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_Selectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_GameVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_GameVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_DspBusSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_DspBusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_BinauralizerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_OutputPortNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_OutputPortNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_RackConfig,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomConfig_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomConfig_Statics::ClassParams = {
		&UAtomConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomConfig()
	{
		if (!Z_Registration_Info_UClass_UAtomConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomConfig.OuterSingleton, Z_Construct_UClass_UAtomConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomConfig.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomConfig>()
	{
		return UAtomConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomConfig);
	UAtomConfig::~UAtomConfig() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomConfig)
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_Statics::ScriptStructInfo[] = {
		{ FAtomBusSendInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomBusSendInfo_Statics::NewStructOps, TEXT("AtomBusSendInfo"), &Z_Registration_Info_UScriptStruct_AtomBusSendInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusSendInfo), 449290456U) },
		{ FAtomBusEffectInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomBusEffectInfo_Statics::NewStructOps, TEXT("AtomBusEffectInfo"), &Z_Registration_Info_UScriptStruct_AtomBusEffectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusEffectInfo), 2362360573U) },
		{ FAtomBusInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomBusInfo_Statics::NewStructOps, TEXT("AtomBusInfo"), &Z_Registration_Info_UScriptStruct_AtomBusInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomBusInfo), 4188197007U) },
		{ FAtomDspBusSettingSnapshotInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomDspBusSettingSnapshotInfo_Statics::NewStructOps, TEXT("AtomDspBusSettingSnapshotInfo"), &Z_Registration_Info_UScriptStruct_AtomDspBusSettingSnapshotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomDspBusSettingSnapshotInfo), 3516345539U) },
		{ FAtomDSPSettingInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomDSPSettingInfo_Statics::NewStructOps, TEXT("AtomDSPSettingInfo"), &Z_Registration_Info_UScriptStruct_AtomDSPSettingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomDSPSettingInfo), 2524235985U) },
		{ FAtomGameVariable::StaticStruct, Z_Construct_UScriptStruct_FAtomGameVariable_Statics::NewStructOps, TEXT("AtomGameVariable"), &Z_Registration_Info_UScriptStruct_AtomGameVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomGameVariable), 3564971538U) },
		{ FAtomAisacControlInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacControlInfo_Statics::NewStructOps, TEXT("AtomAisacControlInfo"), &Z_Registration_Info_UScriptStruct_AtomAisacControlInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacControlInfo), 4240783429U) },
		{ FAtomCategoryInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomCategoryInfo_Statics::NewStructOps, TEXT("AtomCategoryInfo"), &Z_Registration_Info_UScriptStruct_AtomCategoryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCategoryInfo), 621540887U) },
		{ FAtomSelectorInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomSelectorInfo_Statics::NewStructOps, TEXT("AtomSelectorInfo"), &Z_Registration_Info_UScriptStruct_AtomSelectorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSelectorInfo), 3848173597U) },
		{ FAtomOutputPort::StaticStruct, Z_Construct_UScriptStruct_FAtomOutputPort_Statics::NewStructOps, TEXT("AtomOutputPort"), &Z_Registration_Info_UScriptStruct_AtomOutputPort, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomOutputPort), 3667058529U) },
		{ FAtomRackConfig::StaticStruct, Z_Construct_UScriptStruct_FAtomRackConfig_Statics::NewStructOps, TEXT("AtomRackConfig"), &Z_Registration_Info_UScriptStruct_AtomRackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomRackConfig), 2270594562U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomDspBusSetting, UAtomDspBusSetting::StaticClass, TEXT("UAtomDspBusSetting"), &Z_Registration_Info_UClass_UAtomDspBusSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomDspBusSetting), 860501826U) },
		{ Z_Construct_UClass_UAtomConfig, UAtomConfig::StaticClass, TEXT("UAtomConfig"), &Z_Registration_Info_UClass_UAtomConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomConfig), 1376258504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_1531925346(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
