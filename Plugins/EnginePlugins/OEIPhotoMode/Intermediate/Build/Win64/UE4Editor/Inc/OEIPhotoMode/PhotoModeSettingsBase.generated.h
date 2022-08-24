// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhotoModeSettingsGroupBase;
class UPhotoModeSettingWidget;
enum class EPhotoModeSetting : uint8;
#ifdef OEIPHOTOMODE_PhotoModeSettingsBase_generated_h
#error "PhotoModeSettingsBase.generated.h already included, missing '#pragma once' in PhotoModeSettingsBase.h"
#endif
#define OEIPHOTOMODE_PhotoModeSettingsBase_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentSettingsGroup); \
	DECLARE_FUNCTION(execGetFocusedSetting); \
	DECLARE_FUNCTION(execGetHoveredSetting); \
	DECLARE_FUNCTION(execGetSettingWidget); \
	DECLARE_FUNCTION(execGetSettingWidgetWithTag); \
	DECLARE_FUNCTION(execGoToGroupByIndex); \
	DECLARE_FUNCTION(execGoToNextGroup); \
	DECLARE_FUNCTION(execGoToPreviousGroup); \
	DECLARE_FUNCTION(execRefreshAllSettings);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentSettingsGroup); \
	DECLARE_FUNCTION(execGetFocusedSetting); \
	DECLARE_FUNCTION(execGetHoveredSetting); \
	DECLARE_FUNCTION(execGetSettingWidget); \
	DECLARE_FUNCTION(execGetSettingWidgetWithTag); \
	DECLARE_FUNCTION(execGoToGroupByIndex); \
	DECLARE_FUNCTION(execGoToNextGroup); \
	DECLARE_FUNCTION(execGoToPreviousGroup); \
	DECLARE_FUNCTION(execRefreshAllSettings);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoModeSettingsBase(); \
	friend struct Z_Construct_UClass_UPhotoModeSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSettingsBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSettingsBase) \
	virtual UObject* _getUObject() const override { return const_cast<UPhotoModeSettingsBase*>(this); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPhotoModeSettingsBase(); \
	friend struct Z_Construct_UClass_UPhotoModeSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSettingsBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSettingsBase) \
	virtual UObject* _getUObject() const override { return const_cast<UPhotoModeSettingsBase*>(this); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoModeSettingsBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeSettingsBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSettingsBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSettingsBase(UPhotoModeSettingsBase&&); \
	NO_API UPhotoModeSettingsBase(const UPhotoModeSettingsBase&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSettingsBase(UPhotoModeSettingsBase&&); \
	NO_API UPhotoModeSettingsBase(const UPhotoModeSettingsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSettingsBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoModeSettingsBase)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MouseDownInWidget() { return STRUCT_OFFSET(UPhotoModeSettingsBase, MouseDownInWidget); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_13_PROLOG
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_INCLASS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class UPhotoModeSettingsBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingsBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
