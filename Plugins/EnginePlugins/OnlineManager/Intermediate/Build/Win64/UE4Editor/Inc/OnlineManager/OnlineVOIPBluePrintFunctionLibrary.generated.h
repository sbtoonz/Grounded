// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APlayerState;
enum class EOnlineVoiceIncomingChannel : uint8;
#ifdef ONLINEMANAGER_OnlineVOIPBluePrintFunctionLibrary_generated_h
#error "OnlineVOIPBluePrintFunctionLibrary.generated.h already included, missing '#pragma once' in OnlineVOIPBluePrintFunctionLibrary.h"
#endif
#define ONLINEMANAGER_OnlineVOIPBluePrintFunctionLibrary_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnlineVoiceEnableMic); \
	DECLARE_FUNCTION(execOnlineVoiceEnablePlayerIncomingChannel); \
	DECLARE_FUNCTION(execOnlineVoiceGetPlayerVolume); \
	DECLARE_FUNCTION(execOnlineVoiceIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execOnlineVoiceIsPlayerIncomingChannelEnabled); \
	DECLARE_FUNCTION(execOnlineVoiceIsPlayerTalking); \
	DECLARE_FUNCTION(execOnlineVoiceMicIsEnabled); \
	DECLARE_FUNCTION(execOnlineVoiceMutePlayer); \
	DECLARE_FUNCTION(execOnlineVoicePlayerIsMuted); \
	DECLARE_FUNCTION(execOnlineVoiceSetPlayerVolume);


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnlineVoiceEnableMic); \
	DECLARE_FUNCTION(execOnlineVoiceEnablePlayerIncomingChannel); \
	DECLARE_FUNCTION(execOnlineVoiceGetPlayerVolume); \
	DECLARE_FUNCTION(execOnlineVoiceIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execOnlineVoiceIsPlayerIncomingChannelEnabled); \
	DECLARE_FUNCTION(execOnlineVoiceIsPlayerTalking); \
	DECLARE_FUNCTION(execOnlineVoiceMicIsEnabled); \
	DECLARE_FUNCTION(execOnlineVoiceMutePlayer); \
	DECLARE_FUNCTION(execOnlineVoicePlayerIsMuted); \
	DECLARE_FUNCTION(execOnlineVoiceSetPlayerVolume);


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineVOIPBluePrintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOnlineVOIPBluePrintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineManager"), ONLINEMANAGER_API) \
	DECLARE_SERIALIZER(UOnlineVOIPBluePrintFunctionLibrary)


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineVOIPBluePrintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOnlineVOIPBluePrintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOnlineVOIPBluePrintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineManager"), ONLINEMANAGER_API) \
	DECLARE_SERIALIZER(UOnlineVOIPBluePrintFunctionLibrary)


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINEMANAGER_API UOnlineVOIPBluePrintFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineVOIPBluePrintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINEMANAGER_API, UOnlineVOIPBluePrintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineVOIPBluePrintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINEMANAGER_API UOnlineVOIPBluePrintFunctionLibrary(UOnlineVOIPBluePrintFunctionLibrary&&); \
	ONLINEMANAGER_API UOnlineVOIPBluePrintFunctionLibrary(const UOnlineVOIPBluePrintFunctionLibrary&); \
public:


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINEMANAGER_API UOnlineVOIPBluePrintFunctionLibrary(UOnlineVOIPBluePrintFunctionLibrary&&); \
	ONLINEMANAGER_API UOnlineVOIPBluePrintFunctionLibrary(const UOnlineVOIPBluePrintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINEMANAGER_API, UOnlineVOIPBluePrintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineVOIPBluePrintFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineVOIPBluePrintFunctionLibrary)


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_10_PROLOG
#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_INCLASS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINEMANAGER_API UClass* StaticClass<class UOnlineVOIPBluePrintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineVOIPBluePrintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
