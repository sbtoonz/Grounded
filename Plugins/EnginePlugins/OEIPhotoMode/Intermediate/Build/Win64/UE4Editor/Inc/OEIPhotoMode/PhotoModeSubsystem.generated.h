// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPhotoPawnType : uint8;
class APhotoPawn;
class APlayerController;
class UObject;
class APawn;
class ACharacter;
struct FPhotoModeGeneralOptions;
class UMaterialParameterCollection;
struct FPhotoModeUIOptions;
struct FPhotoModeValues;
class UPhotoModeUIDelegates;
struct FPhotoModeConfig;
#ifdef OEIPHOTOMODE_PhotoModeSubsystem_generated_h
#error "PhotoModeSubsystem.generated.h already included, missing '#pragma once' in PhotoModeSubsystem.h"
#endif
#define OEIPHOTOMODE_PhotoModeSubsystem_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangePawnType); \
	DECLARE_FUNCTION(execEnterPhotoMode); \
	DECLARE_FUNCTION(execExitPhotoMode); \
	DECLARE_FUNCTION(execGetActivatingPlayerController); \
	DECLARE_FUNCTION(execGetGlobalActivatingPlayerController); \
	DECLARE_FUNCTION(execGetGlobalOriginalPawn); \
	DECLARE_FUNCTION(execGetGlobalPhotoModePawn); \
	DECLARE_FUNCTION(execGetGlobalPoseableClone); \
	DECLARE_FUNCTION(execGetOriginalPawn); \
	DECLARE_FUNCTION(execGetPhotoBaseFilename); \
	DECLARE_FUNCTION(execGetPhotoModeGeneralOptions); \
	DECLARE_FUNCTION(execGetPhotoModeMPC); \
	DECLARE_FUNCTION(execGetPhotoModePawn); \
	DECLARE_FUNCTION(execGetPhotoModeUIOptions); \
	DECLARE_FUNCTION(execGetPhotoOutputPath); \
	DECLARE_FUNCTION(execGetPoseableClone); \
	DECLARE_FUNCTION(execGetPrePhotoModeSettingValues); \
	DECLARE_FUNCTION(execGetUIDelegatesObject); \
	DECLARE_FUNCTION(execHideOriginalPawn); \
	DECLARE_FUNCTION(execHidePoseableClone); \
	DECLARE_FUNCTION(execIsInPhotoMode); \
	DECLARE_FUNCTION(execIsTimePaused); \
	DECLARE_FUNCTION(execOnRequestEnterPhotoMode); \
	DECLARE_FUNCTION(execOnRequestExitPhotoMode); \
	DECLARE_FUNCTION(execPauseTime); \
	DECLARE_FUNCTION(execResumeTime); \
	DECLARE_FUNCTION(execSetPhotoModeConfig); \
	DECLARE_FUNCTION(execSetPhotoModeQualityCVars); \
	DECLARE_FUNCTION(execSetPoseableClone); \
	DECLARE_FUNCTION(execShowOriginalPawn); \
	DECLARE_FUNCTION(execShowPoseableClone); \
	DECLARE_FUNCTION(execTogglePhotoMode); \
	DECLARE_FUNCTION(execToggleTIme);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangePawnType); \
	DECLARE_FUNCTION(execEnterPhotoMode); \
	DECLARE_FUNCTION(execExitPhotoMode); \
	DECLARE_FUNCTION(execGetActivatingPlayerController); \
	DECLARE_FUNCTION(execGetGlobalActivatingPlayerController); \
	DECLARE_FUNCTION(execGetGlobalOriginalPawn); \
	DECLARE_FUNCTION(execGetGlobalPhotoModePawn); \
	DECLARE_FUNCTION(execGetGlobalPoseableClone); \
	DECLARE_FUNCTION(execGetOriginalPawn); \
	DECLARE_FUNCTION(execGetPhotoBaseFilename); \
	DECLARE_FUNCTION(execGetPhotoModeGeneralOptions); \
	DECLARE_FUNCTION(execGetPhotoModeMPC); \
	DECLARE_FUNCTION(execGetPhotoModePawn); \
	DECLARE_FUNCTION(execGetPhotoModeUIOptions); \
	DECLARE_FUNCTION(execGetPhotoOutputPath); \
	DECLARE_FUNCTION(execGetPoseableClone); \
	DECLARE_FUNCTION(execGetPrePhotoModeSettingValues); \
	DECLARE_FUNCTION(execGetUIDelegatesObject); \
	DECLARE_FUNCTION(execHideOriginalPawn); \
	DECLARE_FUNCTION(execHidePoseableClone); \
	DECLARE_FUNCTION(execIsInPhotoMode); \
	DECLARE_FUNCTION(execIsTimePaused); \
	DECLARE_FUNCTION(execOnRequestEnterPhotoMode); \
	DECLARE_FUNCTION(execOnRequestExitPhotoMode); \
	DECLARE_FUNCTION(execPauseTime); \
	DECLARE_FUNCTION(execResumeTime); \
	DECLARE_FUNCTION(execSetPhotoModeConfig); \
	DECLARE_FUNCTION(execSetPhotoModeQualityCVars); \
	DECLARE_FUNCTION(execSetPoseableClone); \
	DECLARE_FUNCTION(execShowOriginalPawn); \
	DECLARE_FUNCTION(execShowPoseableClone); \
	DECLARE_FUNCTION(execTogglePhotoMode); \
	DECLARE_FUNCTION(execToggleTIme);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoModeSubsystem(); \
	friend struct Z_Construct_UClass_UPhotoModeSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSubsystem)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUPhotoModeSubsystem(); \
	friend struct Z_Construct_UClass_UPhotoModeSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeSubsystem)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoModeSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSubsystem(UPhotoModeSubsystem&&); \
	NO_API UPhotoModeSubsystem(const UPhotoModeSubsystem&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeSubsystem(UPhotoModeSubsystem&&); \
	NO_API UPhotoModeSubsystem(const UPhotoModeSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoModeSubsystem)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Config() { return STRUCT_OFFSET(UPhotoModeSubsystem, Config); } \
	FORCEINLINE static uint32 __PPO__PhotoPawn() { return STRUCT_OFFSET(UPhotoModeSubsystem, PhotoPawn); } \
	FORCEINLINE static uint32 __PPO__PhotoModeMPC() { return STRUCT_OFFSET(UPhotoModeSubsystem, PhotoModeMPC); } \
	FORCEINLINE static uint32 __PPO__PoseableClone() { return STRUCT_OFFSET(UPhotoModeSubsystem, PoseableClone); } \
	FORCEINLINE static uint32 __PPO__UIDelegateObject() { return STRUCT_OFFSET(UPhotoModeSubsystem, UIDelegateObject); } \
	FORCEINLINE static uint32 __PPO__UISettingsInterface() { return STRUCT_OFFSET(UPhotoModeSubsystem, UISettingsInterface); } \
	FORCEINLINE static uint32 __PPO__PrePhotoModeValues() { return STRUCT_OFFSET(UPhotoModeSubsystem, PrePhotoModeValues); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_40_PROLOG
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_INCLASS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class UPhotoModeSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
