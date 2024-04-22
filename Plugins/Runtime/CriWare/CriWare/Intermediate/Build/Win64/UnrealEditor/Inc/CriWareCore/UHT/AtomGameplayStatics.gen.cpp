// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareCore/Public/Atom/AtomGameplayStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGameplayStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomAttenuation_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomConcurrency_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayStatics();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomGameplayStatics_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundBase_NoRegister();
	CRIWARECORE_API UClass* Z_Construct_UClass_UAtomSoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UInitialActiveSoundParams_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	UPackage* Z_Construct_UPackage__Script_CriWareCore();
// End Cross Module References
	DEFINE_FUNCTION(UAtomGameplayStatics::execPrimeAllSoundsInSoundClass)
	{
		P_GET_OBJECT(UAtomSoundClass,Z_Param_InSoundClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomGameplayStatics::PrimeAllSoundsInSoundClass(Z_Param_InSoundClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execPrimeSound)
	{
		P_GET_OBJECT(UAtomSoundBase,Z_Param_InSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomGameplayStatics::PrimeSound(Z_Param_InSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execSpawnSoundAttached)
	{
		P_GET_OBJECT(UAtomSoundBase,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UAtomAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(UAtomConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomGameplayStatics::SpawnSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execSpawnSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomSoundBase,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UAtomAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(UAtomConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomGameplayStatics::SpawnSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execPlaySoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomSoundBase,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UAtomAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(UAtomConcurrency,Z_Param_ConcurrencySettings);
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_GET_OBJECT(UInitialActiveSoundParams,Z_Param_InitialParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomGameplayStatics::PlaySoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_OwningActor,Z_Param_InitialParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execCreateSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomSoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UAtomConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomGameplayStatics::CreateSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execSpawnSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomSoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UAtomConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomGameplayStatics::SpawnSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execPlaySound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAtomSoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UAtomConcurrency,Z_Param_ConcurrencySettings);
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_GET_UBOOL(Z_Param_bIsUISound);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomGameplayStatics::PlaySound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_ConcurrencySettings,Z_Param_OwningActor,Z_Param_bIsUISound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execSetGlobalPitchModulation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchModulation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomGameplayStatics::SetGlobalPitchModulation(Z_Param_WorldContextObject,Z_Param_PitchModulation,Z_Param_TimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execGetClosestListenerLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumRange);
		P_GET_UBOOL(Z_Param_bAllowAttenuationOverride);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ListenerPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomGameplayStatics::GetClosestListenerLocation(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_MaximumRange,Z_Param_bAllowAttenuationOverride,Z_Param_Out_ListenerPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomGameplayStatics::execAreAnyListenersWithinRange)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomGameplayStatics::AreAnyListenersWithinRange(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_MaximumRange);
		P_NATIVE_END;
	}
	void UAtomGameplayStatics::StaticRegisterNativesUAtomGameplayStatics()
	{
		UClass* Class = UAtomGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreAnyListenersWithinRange", &UAtomGameplayStatics::execAreAnyListenersWithinRange },
			{ "CreateSound2D", &UAtomGameplayStatics::execCreateSound2D },
			{ "GetClosestListenerLocation", &UAtomGameplayStatics::execGetClosestListenerLocation },
			{ "PlaySound2D", &UAtomGameplayStatics::execPlaySound2D },
			{ "PlaySoundAtLocation", &UAtomGameplayStatics::execPlaySoundAtLocation },
			{ "PrimeAllSoundsInSoundClass", &UAtomGameplayStatics::execPrimeAllSoundsInSoundClass },
			{ "PrimeSound", &UAtomGameplayStatics::execPrimeSound },
			{ "SetGlobalPitchModulation", &UAtomGameplayStatics::execSetGlobalPitchModulation },
			{ "SpawnSound2D", &UAtomGameplayStatics::execSpawnSound2D },
			{ "SpawnSoundAtLocation", &UAtomGameplayStatics::execSpawnSoundAtLocation },
			{ "SpawnSoundAttached", &UAtomGameplayStatics::execSpawnSoundAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics
	{
		struct AtomGameplayStatics_eventAreAnyListenersWithinRange_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			float MaximumRange;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventAreAnyListenersWithinRange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventAreAnyListenersWithinRange_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_MaximumRange = { "MaximumRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventAreAnyListenersWithinRange_Parms, MaximumRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventAreAnyListenersWithinRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventAreAnyListenersWithinRange_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_MaximumRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * Determines if any audio listeners are within range of the specified location\n\x09 * @param Location\x09\x09The location from which test if a listener is in range\n\x09 * @param MaximumRange\x09The distance away from Location to test if any listener is within\n\x09 * @note This will always return false if there is no Atom runtime, or the Atom runtime is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Determines if any audio listeners are within range of the specified location\n@param Location              The location from which test if a listener is in range\n@param MaximumRange  The distance away from Location to test if any listener is within\n@note This will always return false if there is no Atom runtime, or the Atom runtime is disabled." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "AreAnyListenersWithinRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::AtomGameplayStatics_eventAreAnyListenersWithinRange_Parms), Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics
	{
		struct AtomGameplayStatics_eventCreateSound2D_Parms
		{
			const UObject* WorldContextObject;
			UAtomSoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAtomConcurrency* ConcurrencySettings;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventCreateSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventCreateSound2D_Parms, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventCreateSound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventCreateSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventCreateSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventCreateSound2D_Parms, ConcurrencySettings), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventCreateSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventCreateSound2D_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventCreateSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventCreateSound2D_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventCreateSound2D_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * This function allows users to create Atom Components in advance of playback with settings specifically for non-spatialized,\n\x09 * non-distance-attenuated sounds. Atom Components created using this function by default will not have Spatialization applied.\n\x09 * @param Sound - Sound to create.\n\x09 * @param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier - A linear scalar multiplied with the pitch.\n\x09 * @param StartTime - How far into the sound to begin playback at\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n\x09 * @param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes \n\x09 *\x09\x09\x09\x09\x09\x09 (by completing or stopping), or whether it can be reactivated\n\x09 * @return An Atom Component to manipulate the created sound\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "This function allows users to create Atom Components in advance of playback with settings specifically for non-spatialized,\nnon-distance-attenuated sounds. Atom Components created using this function by default will not have Spatialization applied.\n@param Sound - Sound to create.\n@param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier - A linear scalar multiplied with the pitch.\n@param StartTime - How far into the sound to begin playback at\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n@param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes\n                                              (by completing or stopping), or whether it can be reactivated\n@return An Atom Component to manipulate the created sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "CreateSound2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::AtomGameplayStatics_eventCreateSound2D_Parms), Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics
	{
		struct AtomGameplayStatics_eventGetClosestListenerLocation_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			float MaximumRange;
			bool bAllowAttenuationOverride;
			FVector ListenerPosition;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAttenuationOverride_MetaData[];
#endif
		static void NewProp_bAllowAttenuationOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAttenuationOverride;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListenerPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventGetClosestListenerLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventGetClosestListenerLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_MaximumRange = { "MaximumRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventGetClosestListenerLocation_Parms, MaximumRange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventGetClosestListenerLocation_Parms*)Obj)->bAllowAttenuationOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride = { "bAllowAttenuationOverride", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventGetClosestListenerLocation_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ListenerPosition = { "ListenerPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventGetClosestListenerLocation_Parms, ListenerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventGetClosestListenerLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventGetClosestListenerLocation_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_MaximumRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_bAllowAttenuationOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ListenerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * Finds and returns the position of the closest listener to the specified location\n\x09 * @param Location\x09\x09\x09\x09\x09\x09The location from which we'd like to find the closest listener, in world space.\n\x09 * @param MaximumRange\x09\x09\x09\x09\x09The maximum distance away from Location that a listener can be.\n\x09 * @param bAllowAttenuationOverride\x09\x09True for the adjusted listener position (if attenuation override is set), false for the raw listener position (for panning)\n\x09 * @param ListenerPosition\x09\x09\x09\x09[Out] The position of the closest listener in world space, if found.\n\x09 * @return true if we've successfully found a listener within MaximumRange of Location, otherwise false.\n \x09 * @note This will always return false if there is no Atom runtime, or the Atom runtime is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Finds and returns the position of the closest listener to the specified location\n@param Location                                              The location from which we'd like to find the closest listener, in world space.\n@param MaximumRange                                  The maximum distance away from Location that a listener can be.\n@param bAllowAttenuationOverride             True for the adjusted listener position (if attenuation override is set), false for the raw listener position (for panning)\n@param ListenerPosition                              [Out] The position of the closest listener in world space, if found.\n@return true if we've successfully found a listener within MaximumRange of Location, otherwise false.\n@note This will always return false if there is no Atom runtime, or the Atom runtime is disabled." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "GetClosestListenerLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::AtomGameplayStatics_eventGetClosestListenerLocation_Parms), Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics
	{
		struct AtomGameplayStatics_eventPlaySound2D_Parms
		{
			const UObject* WorldContextObject;
			UAtomSoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAtomConcurrency* ConcurrencySettings;
			const AActor* OwningActor;
			bool bIsUISound;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySound2D_Parms, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySound2D_Parms, ConcurrencySettings), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_OwningActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySound2D_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_OwningActor_MetaData)) };
	void Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventPlaySound2D_Parms*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventPlaySound2D_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_OwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::NewProp_bIsUISound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * Plays a sound directly with no attenuation, perfect for UI sounds.\n\x09 *\n\x09 * * Fire and Forget.\n\x09 * * Not Replicated.\n\x09 * @param Sound - Sound to play.\n\x09 * @param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier - A linear scalar multiplied with the pitch.\n\x09 * @param StartTime - How far in to the sound to begin playback at\n \x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes. \n\x09 *\x09\x09\x09\x09\x09\x09""Allows PlaySound calls to do a concurrency limit per owner.\n\x09 * @param bIsUISound - True if sound is UI related, else false\n\x09 */" },
		{ "CPP_Default_bIsUISound", "true" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_OwningActor", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Plays a sound directly with no attenuation, perfect for UI sounds.\n\n* Fire and Forget.\n* Not Replicated.\n@param Sound - Sound to play.\n@param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier - A linear scalar multiplied with the pitch.\n@param StartTime - How far in to the sound to begin playback at\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes.\n                                             Allows PlaySound calls to do a concurrency limit per owner.\n@param bIsUISound - True if sound is UI related, else false" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "PlaySound2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::AtomGameplayStatics_eventPlaySound2D_Parms), Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics
	{
		struct AtomGameplayStatics_eventPlaySoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UAtomSoundBase* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAtomAttenuation* AttenuationSettings;
			UAtomConcurrency* ConcurrencySettings;
			const AActor* OwningActor;
			UInitialActiveSoundParams* InitialParams;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_OwningActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_OwningActor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_InitialParams = { "InitialParams", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPlaySoundAtLocation_Parms, InitialParams), Z_Construct_UClass_UInitialActiveSoundParams_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_OwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::NewProp_InitialParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * Plays a sound at the given location. This is a fire and forget sound and does not travel with any actor. \n\x09 * Replication is also not handled at this point.\n\x09 * @param Sound - sound to play\n\x09 * @param Location - World position to play sound at\n\x09 * @param Rotation - World rotation to play sound at\n\x09 * @param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier - A linear scalar multiplied with the pitch.\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls\n\x09 *\x09\x09\x09\x09\x09\x09to do a concurrency limit per owner.\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_InitialParams", "None" },
		{ "CPP_Default_OwningActor", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Plays a sound at the given location. This is a fire and forget sound and does not travel with any actor.\nReplication is also not handled at this point.\n@param Sound - sound to play\n@param Location - World position to play sound at\n@param Rotation - World rotation to play sound at\n@param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier - A linear scalar multiplied with the pitch.\n@param StartTime - How far in to the sound to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param OwningActor - The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls\n                                             to do a concurrency limit per owner." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "PlaySoundAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::AtomGameplayStatics_eventPlaySoundAtLocation_Parms), Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics
	{
		struct AtomGameplayStatics_eventPrimeAllSoundsInSoundClass_Parms
		{
			UAtomSoundClass* InSoundClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::NewProp_InSoundClass = { "InSoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPrimeAllSoundsInSoundClass_Parms, InSoundClass), Z_Construct_UClass_UAtomSoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::NewProp_InSoundClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Primes the sound in the given UAtomSoundClass, caching the needed data for fast playback with streamed sounds. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Primes the sound in the given UAtomSoundClass, caching the needed data for fast playback with streamed sounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "PrimeAllSoundsInSoundClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::AtomGameplayStatics_eventPrimeAllSoundsInSoundClass_Parms), Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics
	{
		struct AtomGameplayStatics_eventPrimeSound_Parms
		{
			UAtomSoundBase* InSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventPrimeSound_Parms, InSound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::NewProp_InSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Primes the sound, caching the needed data for fast playback with streamed sounds. */" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Primes the sound, caching the needed data for fast playback with streamed sounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "PrimeSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::AtomGameplayStatics_eventPrimeSound_Parms), Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics
	{
		struct AtomGameplayStatics_eventSetGlobalPitchModulation_Parms
		{
			const UObject* WorldContextObject;
			float PitchModulation;
			float TimeSec;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchModulation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSetGlobalPitchModulation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_PitchModulation = { "PitchModulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSetGlobalPitchModulation_Parms, PitchModulation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSetGlobalPitchModulation_Parms, TimeSec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_PitchModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::NewProp_TimeSec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09* Sets a global pitch modulation scalar that will apply to all non-UI sounds\n\x09*\n\x09* * Fire and Forget.\n\x09* * Not Replicated.\n\x09* @param PitchModulation - A pitch modulation value to globally set.\n\x09* @param TimeSec - A time value to linearly interpolate the global modulation pitch over from it's current value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Sets a global pitch modulation scalar that will apply to all non-UI sounds\n\n* Fire and Forget.\n* Not Replicated.\n@param PitchModulation - A pitch modulation value to globally set.\n@param TimeSec - A time value to linearly interpolate the global modulation pitch over from it's current value." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "SetGlobalPitchModulation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::AtomGameplayStatics_eventSetGlobalPitchModulation_Parms), Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics
	{
		struct AtomGameplayStatics_eventSpawnSound2D_Parms
		{
			const UObject* WorldContextObject;
			UAtomSoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAtomConcurrency* ConcurrencySettings;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSound2D_Parms, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSound2D_Parms, ConcurrencySettings), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventSpawnSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventSpawnSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSound2D_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * This function allows users to create Atom Components with settings specifically for non-spatialized,\n\x09 * non-distance-attenuated sounds. Atom Components created using this function by default will not have \n\x09 * Spatialization applied. Sound instances will begin playing upon spawning this Atom Component.\n\x09 *\n\x09 * * Not Replicated.\n\x09 * @param Sound - Sound to play.\n\x09 * @param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier - A linear scalar multiplied with the pitch.\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n\x09 * @param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes \n\x09 *\x09\x09\x09\x09\x09\x09 (by completing or stopping) or whether it can be reactivated\n\x09 * @return An Atom Component to manipulate the spawned sound\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "This function allows users to create Atom Components with settings specifically for non-spatialized,\nnon-distance-attenuated sounds. Atom Components created using this function by default will not have\nSpatialization applied. Sound instances will begin playing upon spawning this Atom Component.\n\n* Not Replicated.\n@param Sound - Sound to play.\n@param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier - A linear scalar multiplied with the pitch.\n@param StartTime - How far in to the sound to begin playback at\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param PersistAcrossLevelTransition - Whether the sound should continue to play when the map it was played in is unloaded\n@param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes\n                                              (by completing or stopping) or whether it can be reactivated\n@return An Atom Component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "SpawnSound2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::AtomGameplayStatics_eventSpawnSound2D_Parms), Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics
	{
		struct AtomGameplayStatics_eventSpawnSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UAtomSoundBase* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAtomAttenuation* AttenuationSettings;
			UAtomConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventSpawnSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * Spawns a sound at the given location. This does not travel with any actor. Replication is also not handled at this point.\n\x09 * @param Sound - sound to play\n\x09 * @param Location - World position to play sound at\n\x09 * @param Rotation - World rotation to play sound at\n\x09 * @param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier - A linear scalar multiplied with the pitch.\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes \n\x09 *\x09\x09\x09\x09\x09\x09 (by completing or stopping) or whether it can be reactivated\n\x09 * @return An Atom Component to manipulate the spawned sound\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "Spawns a sound at the given location. This does not travel with any actor. Replication is also not handled at this point.\n@param Sound - sound to play\n@param Location - World position to play sound at\n@param Rotation - World rotation to play sound at\n@param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier - A linear scalar multiplied with the pitch.\n@param StartTime - How far in to the sound to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes\n                                              (by completing or stopping) or whether it can be reactivated\n@return An Atom Component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "SpawnSoundAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::AtomGameplayStatics_eventSpawnSoundAtLocation_Parms), Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics
	{
		struct AtomGameplayStatics_eventSpawnSoundAttached_Parms
		{
			UAtomSoundBase* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAtomAttenuation* AttenuationSettings;
			UAtomConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, Sound), Z_Construct_UClass_UAtomSoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
	void Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventSpawnSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_UAtomAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, ConcurrencySettings), Z_Construct_UClass_UAtomConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomGameplayStatics_eventSpawnSoundAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomGameplayStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomGameplayStatics_eventSpawnSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/** This function allows users to create and play Atom Components attached to a specific Scene Component. \n\x09 *  Useful for spatialized and/or distance-attenuated sounds that need to follow another object in space.\n\x09 * @param Sound - sound to play\n\x09 * @param AttachComponent - Component to attach to.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at\n\x09 * @param Location - Depending on the value of Location Type this is either a relative offset from \n\x09 *\x09\x09\x09\x09\x09 the attach component/point or an absolute world position that will be translated to a relative offset\n\x09 * @param Rotation - Depending on the value of Location Type this is either a relative offset from\n\x09 *\x09\x09\x09\x09\x09 the attach component/point or an absolute world rotation that will be translated to a relative offset\n\x09 * @param LocationType - Specifies whether Location is a relative offset or an absolute world position\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09 owner of the attach to component is destroyed.\n\x09 * @param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier - A linear scalar multiplied with the pitch.\n\x09 * @param StartTime - How far in to the sound to begin playback at\n\x09 * @param AttenuationSettings - Override attenuation settings package to play sound with\n\x09 * @param ConcurrencySettings - Override concurrency settings package to play sound with\n\x09 * @param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes\n\x09 *\x09\x09\x09\x09\x09\x09 (by completing or stopping) or whether it can be reactivated\n\x09 * @return An Atom Component to manipulate the spawned sound\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ToolTip", "This function allows users to create and play Atom Components attached to a specific Scene Component.\nUseful for spatialized and/or distance-attenuated sounds that need to follow another object in space.\n@param Sound - sound to play\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at\n@param Location - Depending on the value of Location Type this is either a relative offset from\n                                     the attach component/point or an absolute world position that will be translated to a relative offset\n@param Rotation - Depending on the value of Location Type this is either a relative offset from\n                                     the attach component/point or an absolute world rotation that will be translated to a relative offset\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the\n                                                                             owner of the attach to component is destroyed.\n@param VolumeMultiplier - A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier - A linear scalar multiplied with the pitch.\n@param StartTime - How far in to the sound to begin playback at\n@param AttenuationSettings - Override attenuation settings package to play sound with\n@param ConcurrencySettings - Override concurrency settings package to play sound with\n@param bAutoDestroy - Whether the returned Atom Component will be automatically cleaned up when the sound finishes\n                                             (by completing or stopping) or whether it can be reactivated\n@return An Atom Component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomGameplayStatics, nullptr, "SpawnSoundAttached", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::AtomGameplayStatics_eventSpawnSoundAttached_Parms), Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomGameplayStatics);
	UClass* Z_Construct_UClass_UAtomGameplayStatics_NoRegister()
	{
		return UAtomGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomGameplayStatics_AreAnyListenersWithinRange, "AreAnyListenersWithinRange" }, // 142634005
		{ &Z_Construct_UFunction_UAtomGameplayStatics_CreateSound2D, "CreateSound2D" }, // 441756292
		{ &Z_Construct_UFunction_UAtomGameplayStatics_GetClosestListenerLocation, "GetClosestListenerLocation" }, // 3636866282
		{ &Z_Construct_UFunction_UAtomGameplayStatics_PlaySound2D, "PlaySound2D" }, // 2243903728
		{ &Z_Construct_UFunction_UAtomGameplayStatics_PlaySoundAtLocation, "PlaySoundAtLocation" }, // 1440768695
		{ &Z_Construct_UFunction_UAtomGameplayStatics_PrimeAllSoundsInSoundClass, "PrimeAllSoundsInSoundClass" }, // 359995015
		{ &Z_Construct_UFunction_UAtomGameplayStatics_PrimeSound, "PrimeSound" }, // 1170070190
		{ &Z_Construct_UFunction_UAtomGameplayStatics_SetGlobalPitchModulation, "SetGlobalPitchModulation" }, // 3125544280
		{ &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSound2D, "SpawnSound2D" }, // 282799705
		{ &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAtLocation, "SpawnSoundAtLocation" }, // 2386179619
		{ &Z_Construct_UFunction_UAtomGameplayStatics_SpawnSoundAttached, "SpawnSoundAttached" }, // 1260675600
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atom/AtomGameplayStatics.h" },
		{ "ModuleRelativePath", "Public/Atom/AtomGameplayStatics.h" },
		{ "ScriptName", "AtomGameplayStatics" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomGameplayStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomGameplayStatics_Statics::ClassParams = {
		&UAtomGameplayStatics::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomGameplayStatics()
	{
		if (!Z_Registration_Info_UClass_UAtomGameplayStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomGameplayStatics.OuterSingleton, Z_Construct_UClass_UAtomGameplayStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomGameplayStatics.OuterSingleton;
	}
	template<> CRIWARECORE_API UClass* StaticClass<UAtomGameplayStatics>()
	{
		return UAtomGameplayStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomGameplayStatics);
	UAtomGameplayStatics::~UAtomGameplayStatics() {}
	struct Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomGameplayStatics, UAtomGameplayStatics::StaticClass, TEXT("UAtomGameplayStatics"), &Z_Registration_Info_UClass_UAtomGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomGameplayStatics), 3967877310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_2404523610(TEXT("/Script/CriWareCore"),
		Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomGameplayStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
