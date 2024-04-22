// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom/AtomEffectPresetWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomEffectPreset;
#ifdef CRIWARECORE_AtomEffectPresetWidgetInterface_generated_h
#error "AtomEffectPresetWidgetInterface.generated.h already included, missing '#pragma once' in AtomEffectPresetWidgetInterface.h"
#endif
#define CRIWARECORE_AtomEffectPresetWidgetInterface_generated_h

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_CALLBACK_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomPanelWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomPanelWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomPanelWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomPanelWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomPanelWidgetInterface(UAtomPanelWidgetInterface&&); \
	NO_API UAtomPanelWidgetInterface(const UAtomPanelWidgetInterface&); \
public: \
	NO_API virtual ~UAtomPanelWidgetInterface();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomPanelWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomPanelWidgetInterface(UAtomPanelWidgetInterface&&); \
	NO_API UAtomPanelWidgetInterface(const UAtomPanelWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomPanelWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomPanelWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomPanelWidgetInterface) \
	NO_API virtual ~UAtomPanelWidgetInterface();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAtomPanelWidgetInterface(); \
	friend struct Z_Construct_UClass_UAtomPanelWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UAtomPanelWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomPanelWidgetInterface)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAtomPanelWidgetInterface() {} \
public: \
	typedef UAtomPanelWidgetInterface UClassType; \
	typedef IAtomPanelWidgetInterface ThisClass; \
	static FText Execute_GetEditorName(UObject* O); \
	static FName Execute_GetIconBrushName(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_INCLASS_IINTERFACE \
protected: \
	virtual ~IAtomPanelWidgetInterface() {} \
public: \
	typedef UAtomPanelWidgetInterface UClassType; \
	typedef IAtomPanelWidgetInterface ThisClass; \
	static FText Execute_GetEditorName(UObject* O); \
	static FName Execute_GetIconBrushName(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_28_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomPanelWidgetInterface>();

#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_SPARSE_DATA
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_RPC_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_ACCESSORS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_CALLBACK_WRAPPERS
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomEffectPresetWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomEffectPresetWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomEffectPresetWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomEffectPresetWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomEffectPresetWidgetInterface(UAtomEffectPresetWidgetInterface&&); \
	NO_API UAtomEffectPresetWidgetInterface(const UAtomEffectPresetWidgetInterface&); \
public: \
	NO_API virtual ~UAtomEffectPresetWidgetInterface();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomEffectPresetWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomEffectPresetWidgetInterface(UAtomEffectPresetWidgetInterface&&); \
	NO_API UAtomEffectPresetWidgetInterface(const UAtomEffectPresetWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomEffectPresetWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomEffectPresetWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomEffectPresetWidgetInterface) \
	NO_API virtual ~UAtomEffectPresetWidgetInterface();


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAtomEffectPresetWidgetInterface(); \
	friend struct Z_Construct_UClass_UAtomEffectPresetWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UAtomEffectPresetWidgetInterface, UAtomPanelWidgetInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CriWareCore"), NO_API) \
	DECLARE_SERIALIZER(UAtomEffectPresetWidgetInterface)


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_GENERATED_UINTERFACE_BODY() \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAtomEffectPresetWidgetInterface() {} \
public: \
	typedef UAtomEffectPresetWidgetInterface UClassType; \
	typedef IAtomEffectPresetWidgetInterface ThisClass; \
	static TSubclassOf<UAtomEffectPreset>  Execute_GetClass(UObject* O); \
	static void Execute_OnConstructed(UObject* O, UAtomEffectPreset* Preset); \
	static void Execute_OnPropertyChanged(UObject* O, UAtomEffectPreset* Preset, FName PropertyName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_INCLASS_IINTERFACE \
protected: \
	virtual ~IAtomEffectPresetWidgetInterface() {} \
public: \
	typedef UAtomEffectPresetWidgetInterface UClassType; \
	typedef IAtomEffectPresetWidgetInterface ThisClass; \
	static TSubclassOf<UAtomEffectPreset>  Execute_GetClass(UObject* O); \
	static void Execute_OnConstructed(UObject* O, UAtomEffectPreset* Preset); \
	static void Execute_OnPropertyChanged(UObject* O, UAtomEffectPreset* Preset, FName PropertyName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_47_PROLOG
#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_RPC_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_SPARSE_DATA \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_ACCESSORS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_CALLBACK_WRAPPERS \
	FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h_51_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARECORE_API UClass* StaticClass<class UAtomEffectPresetWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AlicePuroen_Plugins_Runtime_CriWare_CriWare_Source_CriWareCore_Public_Atom_AtomEffectPresetWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
