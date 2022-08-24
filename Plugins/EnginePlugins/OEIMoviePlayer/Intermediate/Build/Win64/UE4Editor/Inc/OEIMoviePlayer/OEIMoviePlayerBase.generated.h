// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef OEIMOVIEPLAYER_OEIMoviePlayerBase_generated_h
#error "OEIMoviePlayerBase.generated.h already included, missing '#pragma once' in OEIMoviePlayerBase.h"
#endif
#define OEIMOVIEPLAYER_OEIMoviePlayerBase_generated_h

#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearMovie); \
	DECLARE_FUNCTION(execOnMovieFinished); \
	DECLARE_FUNCTION(execOnMovieSourceOpened); \
	DECLARE_FUNCTION(execPauseMovie); \
	DECLARE_FUNCTION(execPlayMovieFromMediaObject); \
	DECLARE_FUNCTION(execPlayMovieFromMediaObjectDelayed); \
	DECLARE_FUNCTION(execResumeMovie); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execStartDelayedPlayback); \
	DECLARE_FUNCTION(execStopMovie);


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearMovie); \
	DECLARE_FUNCTION(execOnMovieFinished); \
	DECLARE_FUNCTION(execOnMovieSourceOpened); \
	DECLARE_FUNCTION(execPauseMovie); \
	DECLARE_FUNCTION(execPlayMovieFromMediaObject); \
	DECLARE_FUNCTION(execPlayMovieFromMediaObjectDelayed); \
	DECLARE_FUNCTION(execResumeMovie); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execStartDelayedPlayback); \
	DECLARE_FUNCTION(execStopMovie);


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOEIMoviePlayerBase(); \
	friend struct Z_Construct_UClass_UOEIMoviePlayerBase_Statics; \
public: \
	DECLARE_CLASS(UOEIMoviePlayerBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OEIMoviePlayer"), NO_API) \
	DECLARE_SERIALIZER(UOEIMoviePlayerBase)


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUOEIMoviePlayerBase(); \
	friend struct Z_Construct_UClass_UOEIMoviePlayerBase_Statics; \
public: \
	DECLARE_CLASS(UOEIMoviePlayerBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OEIMoviePlayer"), NO_API) \
	DECLARE_SERIALIZER(UOEIMoviePlayerBase)


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOEIMoviePlayerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOEIMoviePlayerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOEIMoviePlayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIMoviePlayerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOEIMoviePlayerBase(UOEIMoviePlayerBase&&); \
	NO_API UOEIMoviePlayerBase(const UOEIMoviePlayerBase&); \
public:


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOEIMoviePlayerBase(UOEIMoviePlayerBase&&); \
	NO_API UOEIMoviePlayerBase(const UOEIMoviePlayerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOEIMoviePlayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIMoviePlayerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOEIMoviePlayerBase)


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovieDisplay() { return STRUCT_OFFSET(UOEIMoviePlayerBase, MovieDisplay); } \
	FORCEINLINE static uint32 __PPO__MovieOverlay() { return STRUCT_OFFSET(UOEIMoviePlayerBase, MovieOverlay); } \
	FORCEINLINE static uint32 __PPO__bShouldLoopVideo() { return STRUCT_OFFSET(UOEIMoviePlayerBase, bShouldLoopVideo); } \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(UOEIMoviePlayerBase, MediaPlayer); }


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_15_PROLOG
#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_INCLASS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIMOVIEPLAYER_API UClass* StaticClass<class UOEIMoviePlayerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMoviePlayerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
