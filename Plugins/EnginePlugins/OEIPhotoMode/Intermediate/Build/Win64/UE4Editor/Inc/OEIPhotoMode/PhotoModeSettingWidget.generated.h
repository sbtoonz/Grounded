// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhotoModeSettingWidget;
enum class ECheckBoxState : uint8;
struct FLocString;
class AActor;
#ifdef OEIPHOTOMODE_PhotoModeSettingWidget_generated_h
#error "PhotoModeSettingWidget.generated.h already included, missing '#pragma once' in PhotoModeSettingWidget.h"
#endif
#define OEIPHOTOMODE_PhotoModeSettingWidget_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsInputHovered); \
	DECLARE_FUNCTION(execOnPhotoModeSettingChanged); \
	DECLARE_FUNCTION(execOnSettingChangedCheckBox); \
	DECLARE_FUNCTION(execOnSettingChangedComboBox); \
	DECLARE_FUNCTION(execOnSettingChangedSlider); \
	DECLARE_FUNCTION(execOnSliderValueChanged); \
	DECLARE_FUNCTION(execRefreshSetting); \
	DECLARE_FUNCTION(execRestorePrePhotoModeState); \
	DECLARE_FUNCTION(execSetChecked); \
	DECLARE_FUNCTION(execSetComboBoxOptions); \
	DECLARE_FUNCTION(execSetEnabledState); \
	DECLARE_FUNCTION(execSetEquipmentVisibility); \
	DECLARE_FUNCTION(execSetEquipmentVisibilityForActor); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execSetValue);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsInputHovered); \
	DECLARE_FUNCTION(execOnPhotoModeSettingChanged); \
	DECLARE_FUNCTION(execOnSettingChangedCheckBox); \
	DECLARE_FUNCTION(execOnSettingChangedComboBox); \
	DECLARE_FUNCTION(execOnSettingChangedSlider); \
	DECLARE_FUNCTION(execOnSliderValueChanged); \
	DECLARE_FUNCTION(execRefreshSetting); \
	DECLARE_FUNCTION(execRestorePrePhotoModeState); \
	DECLARE_FUNCTION(execSetChecked); \
	DECLARE_FUNCTION(execSetComboBoxOptions); \
	DECLARE_FUNCTION(execSetEnabledState); \
	DECLARE_FUNCTION(execSetEquipmentVisibility); \
	DECLARE_FUNCTION(execSetEquipmentVisibilityForActor); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execSetValue);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_EVENT_PARMS \
	struct PhotoModeSettingWidget_eventOnEnabledChanged_Parms \
	{ \
		bool Enabled; \
	}; \
	struct PhotoModeSettingWidget_eventOnFocusedHoveredChanged_Parms \
	{ \
		bool FocusedOrHovered; \
	};


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_CALLBACK_WRAPPERS
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoModeSettingWidget(); \
	friend struct Z_Construct_UClass_UPhotoModeSettingWidget_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSettingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSettingWidget)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPhotoModeSettingWidget(); \
	friend struct Z_Construct_UClass_UPhotoModeSettingWidget_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSettingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSettingWidget)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoModeSettingWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeSettingWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSettingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSettingWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSettingWidget(UPhotoModeSettingWidget&&); \
	NO_API UPhotoModeSettingWidget(const UPhotoModeSettingWidget&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSettingWidget(UPhotoModeSettingWidget&&); \
	NO_API UPhotoModeSettingWidget(const UPhotoModeSettingWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSettingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSettingWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoModeSettingWidget)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrePhotoModeShowHideState() { return STRUCT_OFFSET(UPhotoModeSettingWidget, PrePhotoModeShowHideState); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_21_PROLOG \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_EVENT_PARMS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_INCLASS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class UPhotoModeSettingWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSettingWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
