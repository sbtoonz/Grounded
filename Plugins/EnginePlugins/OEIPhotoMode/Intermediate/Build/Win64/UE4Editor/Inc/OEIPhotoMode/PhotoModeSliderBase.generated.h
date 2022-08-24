// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIPHOTOMODE_PhotoModeSliderBase_generated_h
#error "PhotoModeSliderBase.generated.h already included, missing '#pragma once' in PhotoModeSliderBase.h"
#endif
#define OEIPHOTOMODE_PhotoModeSliderBase_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleValueChanged); \
	DECLARE_FUNCTION(execOnCaptureBegin); \
	DECLARE_FUNCTION(execOnCaptureEnd); \
	DECLARE_FUNCTION(execOnFocusChanged);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleValueChanged); \
	DECLARE_FUNCTION(execOnCaptureBegin); \
	DECLARE_FUNCTION(execOnCaptureEnd); \
	DECLARE_FUNCTION(execOnFocusChanged);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoModeSliderBase(); \
	friend struct Z_Construct_UClass_UPhotoModeSliderBase_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSliderBase, USlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSliderBase)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPhotoModeSliderBase(); \
	friend struct Z_Construct_UClass_UPhotoModeSliderBase_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSliderBase, USlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSliderBase)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoModeSliderBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeSliderBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSliderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSliderBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSliderBase(UPhotoModeSliderBase&&); \
	NO_API UPhotoModeSliderBase(const UPhotoModeSliderBase&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSliderBase(UPhotoModeSliderBase&&); \
	NO_API UPhotoModeSliderBase(const UPhotoModeSliderBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSliderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSliderBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoModeSliderBase)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultSliderColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, DefaultSliderColor); } \
	FORCEINLINE static uint32 __PPO__DefaultBarColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, DefaultBarColor); } \
	FORCEINLINE static uint32 __PPO__CapturedSliderColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, CapturedSliderColor); } \
	FORCEINLINE static uint32 __PPO__CapturedBarColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, CapturedBarColor); } \
	FORCEINLINE static uint32 __PPO__FocusReceivedSliderColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, FocusReceivedSliderColor); } \
	FORCEINLINE static uint32 __PPO__FocusReceivedBarColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, FocusReceivedBarColor); } \
	FORCEINLINE static uint32 __PPO__DisabledSliderColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, DisabledSliderColor); } \
	FORCEINLINE static uint32 __PPO__DisabledBarColor() { return STRUCT_OFFSET(UPhotoModeSliderBase, DisabledBarColor); } \
	FORCEINLINE static uint32 __PPO__Focused() { return STRUCT_OFFSET(UPhotoModeSliderBase, Focused); } \
	FORCEINLINE static uint32 __PPO__PreviousValue() { return STRUCT_OFFSET(UPhotoModeSliderBase, PreviousValue); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_7_PROLOG
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_INCLASS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class UPhotoModeSliderBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSliderBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
