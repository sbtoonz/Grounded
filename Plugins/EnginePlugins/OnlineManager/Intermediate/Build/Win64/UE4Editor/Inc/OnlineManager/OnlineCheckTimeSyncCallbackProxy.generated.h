// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOnlineCheckTimeSyncCallbackProxy;
#ifdef ONLINEMANAGER_OnlineCheckTimeSyncCallbackProxy_generated_h
#error "OnlineCheckTimeSyncCallbackProxy.generated.h already included, missing '#pragma once' in OnlineCheckTimeSyncCallbackProxy.h"
#endif
#define ONLINEMANAGER_OnlineCheckTimeSyncCallbackProxy_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_14_DELEGATE \
struct OnlineCheckTimeSyncCallbackProxy_eventOnCompletedDelegate_Parms \
{ \
	float TimeOffsetSec; \
	float NetworkDelaySec; \
}; \
static inline void FOnCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCompletedDelegate, float TimeOffsetSec, float NetworkDelaySec) \
{ \
	OnlineCheckTimeSyncCallbackProxy_eventOnCompletedDelegate_Parms Parms; \
	Parms.TimeOffsetSec=TimeOffsetSec; \
	Parms.NetworkDelaySec=NetworkDelaySec; \
	OnCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnlineCheckTimeSync);


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnlineCheckTimeSync);


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineCheckTimeSyncCallbackProxy(); \
	friend struct Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UOnlineCheckTimeSyncCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineManager"), ONLINEMANAGER_API) \
	DECLARE_SERIALIZER(UOnlineCheckTimeSyncCallbackProxy)


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineCheckTimeSyncCallbackProxy(); \
	friend struct Z_Construct_UClass_UOnlineCheckTimeSyncCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UOnlineCheckTimeSyncCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineManager"), ONLINEMANAGER_API) \
	DECLARE_SERIALIZER(UOnlineCheckTimeSyncCallbackProxy)


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINEMANAGER_API UOnlineCheckTimeSyncCallbackProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineCheckTimeSyncCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINEMANAGER_API, UOnlineCheckTimeSyncCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineCheckTimeSyncCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINEMANAGER_API UOnlineCheckTimeSyncCallbackProxy(UOnlineCheckTimeSyncCallbackProxy&&); \
	ONLINEMANAGER_API UOnlineCheckTimeSyncCallbackProxy(const UOnlineCheckTimeSyncCallbackProxy&); \
public:


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINEMANAGER_API UOnlineCheckTimeSyncCallbackProxy(UOnlineCheckTimeSyncCallbackProxy&&); \
	ONLINEMANAGER_API UOnlineCheckTimeSyncCallbackProxy(const UOnlineCheckTimeSyncCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINEMANAGER_API, UOnlineCheckTimeSyncCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineCheckTimeSyncCallbackProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineCheckTimeSyncCallbackProxy)


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_10_PROLOG
#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_INCLASS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINEMANAGER_API UClass* StaticClass<class UOnlineCheckTimeSyncCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineCheckTimeSyncCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
