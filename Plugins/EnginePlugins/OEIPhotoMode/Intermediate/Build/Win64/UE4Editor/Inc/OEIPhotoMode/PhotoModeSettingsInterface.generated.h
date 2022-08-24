// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIPHOTOMODE_PhotoModeSettingsInterface_generated_h
#error "PhotoModeSettingsInterface.generated.h already included, missing '#pragma once' in PhotoModeSettingsInterface.h"
#endif
#define OEIPHOTOMODE_PhotoModeSettingsInterface_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_RPC_WRAPPERS \
	virtual void RegisterWithPhotoModeSubsystem_Implementation() {}; \
	virtual void UnregisterWithPhotoModeSubsystem_Implementation() {}; \
 \
	DECLARE_FUNCTION(execRegisterWithPhotoModeSubsystem); \
	DECLARE_FUNCTION(execUnregisterWithPhotoModeSubsystem);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RegisterWithPhotoModeSubsystem_Implementation() {}; \
	virtual void UnregisterWithPhotoModeSubsystem_Implementation() {}; \
 \
	DECLARE_FUNCTION(execRegisterWithPhotoModeSubsystem); \
	DECLARE_FUNCTION(execUnregisterWithPhotoModeSubsystem);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_EVENT_PARMS
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_CALLBACK_WRAPPERS
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OEIPHOTOMODE_API UPhotoModeSettingsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeSettingsInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OEIPHOTOMODE_API, UPhotoModeSettingsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSettingsInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OEIPHOTOMODE_API UPhotoModeSettingsInterface(UPhotoModeSettingsInterface&&); \
	OEIPHOTOMODE_API UPhotoModeSettingsInterface(const UPhotoModeSettingsInterface&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OEIPHOTOMODE_API UPhotoModeSettingsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OEIPHOTOMODE_API UPhotoModeSettingsInterface(UPhotoModeSettingsInterface&&); \
	OEIPHOTOMODE_API UPhotoModeSettingsInterface(const UPhotoModeSettingsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OEIPHOTOMODE_API, UPhotoModeSettingsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSettingsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeSettingsInterface)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPhotoModeSettingsInterface(); \
	friend struct Z_Construct_UClass_UPhotoModeSettingsInterface_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSettingsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), OEIPHOTOMODE_API) \
	DECLARE_SERIALIZER(UPhotoModeSettingsInterface)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_GENERATED_UINTERFACE_BODY() \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_GENERATED_UINTERFACE_BODY() \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPhotoModeSettingsInterface() {} \
public: \
	typedef UPhotoModeSettingsInterface UClassType; \
	typedef IPhotoModeSettingsInterface ThisClass; \
	static void Execute_RegisterWithPhotoModeSubsystem(UObject* O); \
	static void Execute_UnregisterWithPhotoModeSubsystem(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IPhotoModeSettingsInterface() {} \
public: \
	typedef UPhotoModeSettingsInterface UClassType; \
	typedef IPhotoModeSettingsInterface ThisClass; \
	static void Execute_RegisterWithPhotoModeSubsystem(UObject* O); \
	static void Execute_UnregisterWithPhotoModeSubsystem(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_6_PROLOG \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_EVENT_PARMS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class UPhotoModeSettingsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
