// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EPhotoPawnType : uint8;
struct FColor;
#ifdef OEIPHOTOMODE_PhotoPawn_generated_h
#error "PhotoPawn.generated.h already included, missing '#pragma once' in PhotoPawn.h"
#endif
#define OEIPHOTOMODE_PhotoPawn_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_RPC_WRAPPERS \
	virtual void BrowsePhotos_Implementation(); \
	virtual void ChangeCameraType_Implementation(); \
	virtual void ExitPhotoMode_Implementation(); \
	virtual void RequestScreenshot_Implementation(); \
	virtual void TakePhoto_Implementation(); \
 \
	DECLARE_FUNCTION(execBrowsePhotos); \
	DECLARE_FUNCTION(execChangeCameraType); \
	DECLARE_FUNCTION(execExitPhotoMode); \
	DECLARE_FUNCTION(execGetCameraForwardVector); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetPhotoPawnType); \
	DECLARE_FUNCTION(execOnPhotoTaken); \
	DECLARE_FUNCTION(execOnPhotoTakenXbox); \
	DECLARE_FUNCTION(execRequestScreenshot); \
	DECLARE_FUNCTION(execSwapInputAxisBinding); \
	DECLARE_FUNCTION(execTakePhoto);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BrowsePhotos_Implementation(); \
	virtual void ChangeCameraType_Implementation(); \
	virtual void ExitPhotoMode_Implementation(); \
	virtual void RequestScreenshot_Implementation(); \
	virtual void TakePhoto_Implementation(); \
 \
	DECLARE_FUNCTION(execBrowsePhotos); \
	DECLARE_FUNCTION(execChangeCameraType); \
	DECLARE_FUNCTION(execExitPhotoMode); \
	DECLARE_FUNCTION(execGetCameraForwardVector); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetPhotoPawnType); \
	DECLARE_FUNCTION(execOnPhotoTaken); \
	DECLARE_FUNCTION(execOnPhotoTakenXbox); \
	DECLARE_FUNCTION(execRequestScreenshot); \
	DECLARE_FUNCTION(execSwapInputAxisBinding); \
	DECLARE_FUNCTION(execTakePhoto);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_EVENT_PARMS
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_CALLBACK_WRAPPERS
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhotoPawn(); \
	friend struct Z_Construct_UClass_APhotoPawn_Statics; \
public: \
	DECLARE_CLASS(APhotoPawn, ASpectatorPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(APhotoPawn)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPhotoPawn(); \
	friend struct Z_Construct_UClass_APhotoPawn_Statics; \
public: \
	DECLARE_CLASS(APhotoPawn, ASpectatorPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(APhotoPawn)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhotoPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhotoPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhotoPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhotoPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhotoPawn(APhotoPawn&&); \
	NO_API APhotoPawn(const APhotoPawn&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhotoPawn(APhotoPawn&&); \
	NO_API APhotoPawn(const APhotoPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhotoPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhotoPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhotoPawn)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseSpeedMultiplier() { return STRUCT_OFFSET(APhotoPawn, BaseSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__RotationInput() { return STRUCT_OFFSET(APhotoPawn, RotationInput); } \
	FORCEINLINE static uint32 __PPO__ShutterEffectFloatCurve() { return STRUCT_OFFSET(APhotoPawn, ShutterEffectFloatCurve); } \
	FORCEINLINE static uint32 __PPO__CameraShutterPPM() { return STRUCT_OFFSET(APhotoPawn, CameraShutterPPM); } \
	FORCEINLINE static uint32 __PPO__ShutterEffectDuration() { return STRUCT_OFFSET(APhotoPawn, ShutterEffectDuration); } \
	FORCEINLINE static uint32 __PPO__ShutterEffectStartTime() { return STRUCT_OFFSET(APhotoPawn, ShutterEffectStartTime); } \
	FORCEINLINE static uint32 __PPO__ShutterActive() { return STRUCT_OFFSET(APhotoPawn, ShutterActive); } \
	FORCEINLINE static uint32 __PPO__DidUnregisterFromPerception() { return STRUCT_OFFSET(APhotoPawn, DidUnregisterFromPerception); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_15_PROLOG \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_EVENT_PARMS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_INCLASS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class APhotoPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
