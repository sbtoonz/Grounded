// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APhotoPawn;
class UTexture;
struct FColorGradingProfile;
struct FPhotoModeValues;
class ACharacter;
class UAnimMontage;
#ifdef OEIPHOTOMODE_PhotoModeStatics_generated_h
#error "PhotoModeStatics.generated.h already included, missing '#pragma once' in PhotoModeStatics.h"
#endif
#define OEIPHOTOMODE_PhotoModeStatics_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangePhotoPawnType); \
	DECLARE_FUNCTION(execGetCameraRoll); \
	DECLARE_FUNCTION(execGetColorGradingIntensityValue); \
	DECLARE_FUNCTION(execGetColorGradingLUT); \
	DECLARE_FUNCTION(execGetColorGradingProfile); \
	DECLARE_FUNCTION(execGetDOFFocusDistance); \
	DECLARE_FUNCTION(execGetDOFFstop); \
	DECLARE_FUNCTION(execGetExponentialHeightFogViewDistance); \
	DECLARE_FUNCTION(execGetFilmbackHeight); \
	DECLARE_FUNCTION(execGetFilmbackWidth); \
	DECLARE_FUNCTION(execGetFilmGrainIntensity); \
	DECLARE_FUNCTION(execGetFOV); \
	DECLARE_FUNCTION(execGetMotionBlurAmount); \
	DECLARE_FUNCTION(execGetOriginalPawnDistanceToCamera); \
	DECLARE_FUNCTION(execGetPhotoModeValues); \
	DECLARE_FUNCTION(execGetSceneFringeIntensity); \
	DECLARE_FUNCTION(execGetTonemapperGamma); \
	DECLARE_FUNCTION(execGetVignetteValue); \
	DECLARE_FUNCTION(execOpenPhotoDirectoryInExplorer); \
	DECLARE_FUNCTION(execSetAnimMontagePose); \
	DECLARE_FUNCTION(execSetCameraRoll); \
	DECLARE_FUNCTION(execSetColorGradingIntensityValue); \
	DECLARE_FUNCTION(execSetColorGradingLUT); \
	DECLARE_FUNCTION(execSetColorGradingProfile); \
	DECLARE_FUNCTION(execSetDOFFocusDistance); \
	DECLARE_FUNCTION(execSetDOFFstop); \
	DECLARE_FUNCTION(execSetExponentialHeightFogViewDistance); \
	DECLARE_FUNCTION(execSetFilmbackHeight); \
	DECLARE_FUNCTION(execSetFilmbackWidth); \
	DECLARE_FUNCTION(execSetFilmGrainIntensity); \
	DECLARE_FUNCTION(execSetFOV); \
	DECLARE_FUNCTION(execSetMotionBlurAmount); \
	DECLARE_FUNCTION(execSetPhotoModeValues); \
	DECLARE_FUNCTION(execSetSceneFringeIntensity); \
	DECLARE_FUNCTION(execSetTonemapperGamma); \
	DECLARE_FUNCTION(execSetVignetteValue); \
	DECLARE_FUNCTION(execTakePhotoWithPhotoPawn);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangePhotoPawnType); \
	DECLARE_FUNCTION(execGetCameraRoll); \
	DECLARE_FUNCTION(execGetColorGradingIntensityValue); \
	DECLARE_FUNCTION(execGetColorGradingLUT); \
	DECLARE_FUNCTION(execGetColorGradingProfile); \
	DECLARE_FUNCTION(execGetDOFFocusDistance); \
	DECLARE_FUNCTION(execGetDOFFstop); \
	DECLARE_FUNCTION(execGetExponentialHeightFogViewDistance); \
	DECLARE_FUNCTION(execGetFilmbackHeight); \
	DECLARE_FUNCTION(execGetFilmbackWidth); \
	DECLARE_FUNCTION(execGetFilmGrainIntensity); \
	DECLARE_FUNCTION(execGetFOV); \
	DECLARE_FUNCTION(execGetMotionBlurAmount); \
	DECLARE_FUNCTION(execGetOriginalPawnDistanceToCamera); \
	DECLARE_FUNCTION(execGetPhotoModeValues); \
	DECLARE_FUNCTION(execGetSceneFringeIntensity); \
	DECLARE_FUNCTION(execGetTonemapperGamma); \
	DECLARE_FUNCTION(execGetVignetteValue); \
	DECLARE_FUNCTION(execOpenPhotoDirectoryInExplorer); \
	DECLARE_FUNCTION(execSetAnimMontagePose); \
	DECLARE_FUNCTION(execSetCameraRoll); \
	DECLARE_FUNCTION(execSetColorGradingIntensityValue); \
	DECLARE_FUNCTION(execSetColorGradingLUT); \
	DECLARE_FUNCTION(execSetColorGradingProfile); \
	DECLARE_FUNCTION(execSetDOFFocusDistance); \
	DECLARE_FUNCTION(execSetDOFFstop); \
	DECLARE_FUNCTION(execSetExponentialHeightFogViewDistance); \
	DECLARE_FUNCTION(execSetFilmbackHeight); \
	DECLARE_FUNCTION(execSetFilmbackWidth); \
	DECLARE_FUNCTION(execSetFilmGrainIntensity); \
	DECLARE_FUNCTION(execSetFOV); \
	DECLARE_FUNCTION(execSetMotionBlurAmount); \
	DECLARE_FUNCTION(execSetPhotoModeValues); \
	DECLARE_FUNCTION(execSetSceneFringeIntensity); \
	DECLARE_FUNCTION(execSetTonemapperGamma); \
	DECLARE_FUNCTION(execSetVignetteValue); \
	DECLARE_FUNCTION(execTakePhotoWithPhotoPawn);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoModeStatics(); \
	friend struct Z_Construct_UClass_UPhotoModeStatics_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeStatics)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPhotoModeStatics(); \
	friend struct Z_Construct_UClass_UPhotoModeStatics_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeStatics)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoModeStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeStatics(UPhotoModeStatics&&); \
	NO_API UPhotoModeStatics(const UPhotoModeStatics&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeStatics(UPhotoModeStatics&&); \
	NO_API UPhotoModeStatics(const UPhotoModeStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoModeStatics)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_14_PROLOG
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_INCLASS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class UPhotoModeStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
