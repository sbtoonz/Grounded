// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayFabError;
class UObject;
struct FEventsWriteEventsResponse;
struct FPlayFabBaseModel;
struct FEventsWriteEventsRequest;
class UPlayFabEventsAPI;
#ifdef PLAYFAB_PlayFabEventsAPI_generated_h
#error "PlayFabEventsAPI.generated.h already included, missing '#pragma once' in PlayFabEventsAPI.h"
#endif
#define PLAYFAB_PlayFabEventsAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_22_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_21_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms \
{ \
	FEventsWriteEventsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteEvents, FEventsWriteEventsResponse Result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteEvents.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_20_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms \
{ \
	FEventsWriteEventsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteTelemetryEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse Result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteTelemetryEvents.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperWriteEvents); \
	DECLARE_FUNCTION(execHelperWriteTelemetryEvents); \
	DECLARE_FUNCTION(execWriteEvents); \
	DECLARE_FUNCTION(execWriteTelemetryEvents);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperWriteEvents); \
	DECLARE_FUNCTION(execHelperWriteTelemetryEvents); \
	DECLARE_FUNCTION(execWriteEvents); \
	DECLARE_FUNCTION(execWriteTelemetryEvents);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabEventsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEventsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabEventsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEventsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEventsAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEventsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEventsAPI(UPlayFabEventsAPI&&); \
	NO_API UPlayFabEventsAPI(const UPlayFabEventsAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEventsAPI(UPlayFabEventsAPI&&); \
	NO_API UPlayFabEventsAPI(const UPlayFabEventsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabEventsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabEventsAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabEventsAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabEventsAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_16_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEventsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabEventsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
