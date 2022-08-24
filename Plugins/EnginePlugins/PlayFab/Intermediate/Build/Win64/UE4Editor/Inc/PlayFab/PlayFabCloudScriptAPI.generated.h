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
struct FCloudScriptExecuteCloudScriptResult;
struct FCloudScriptExecuteFunctionResult;
struct FCloudScriptListFunctionsResult;
struct FCloudScriptListHttpFunctionsResult;
struct FCloudScriptListQueuedFunctionsResult;
struct FCloudScriptEmptyResult;
struct FCloudScriptExecuteEntityCloudScriptRequest;
class UPlayFabCloudScriptAPI;
struct FCloudScriptExecuteFunctionRequest;
struct FPlayFabBaseModel;
struct FCloudScriptListFunctionsRequest;
struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest;
struct FCloudScriptPostFunctionResultForFunctionExecutionRequest;
struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest;
struct FCloudScriptPostFunctionResultForScheduledTaskRequest;
struct FCloudScriptRegisterHttpFunctionRequest;
struct FCloudScriptRegisterQueuedFunctionRequest;
struct FCloudScriptUnregisterFunctionRequest;
#ifdef PLAYFAB_PlayFabCloudScriptAPI_generated_h
#error "PlayFabCloudScriptAPI.generated.h already included, missing '#pragma once' in PlayFabCloudScriptAPI.h"
#endif
#define PLAYFAB_PlayFabCloudScriptAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_46_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_45_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms \
{ \
	FCloudScriptExecuteCloudScriptResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExecuteEntityCloudScript_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteEntityCloudScript, FCloudScriptExecuteCloudScriptResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessExecuteEntityCloudScript.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_44_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms \
{ \
	FCloudScriptExecuteFunctionResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExecuteFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteFunction, FCloudScriptExecuteFunctionResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessExecuteFunction.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_43_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms \
{ \
	FCloudScriptListFunctionsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListFunctions, FCloudScriptListFunctionsResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListFunctions.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_42_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms \
{ \
	FCloudScriptListHttpFunctionsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListHttpFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListHttpFunctions, FCloudScriptListHttpFunctionsResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListHttpFunctions.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_41_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms \
{ \
	FCloudScriptListQueuedFunctionsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListQueuedFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListQueuedFunctions, FCloudScriptListQueuedFunctionsResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessListQueuedFunctions.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_40_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms \
{ \
	FCloudScriptEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForEntityTriggeredAction, FCloudScriptEmptyResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForEntityTriggeredAction.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_39_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms \
{ \
	FCloudScriptEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForFunctionExecution_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForFunctionExecution, FCloudScriptEmptyResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForFunctionExecution.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_38_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms \
{ \
	FCloudScriptEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction, FCloudScriptEmptyResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_37_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms \
{ \
	FCloudScriptEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForScheduledTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForScheduledTask, FCloudScriptEmptyResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForScheduledTask.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_36_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms \
{ \
	FCloudScriptEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRegisterHttpFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterHttpFunction, FCloudScriptEmptyResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRegisterHttpFunction.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_35_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms \
{ \
	FCloudScriptEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRegisterQueuedFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterQueuedFunction, FCloudScriptEmptyResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessRegisterQueuedFunction.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_34_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms \
{ \
	FCloudScriptEmptyResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnregisterFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnregisterFunction, FCloudScriptEmptyResult Result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnregisterFunction.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteEntityCloudScript); \
	DECLARE_FUNCTION(execExecuteFunction); \
	DECLARE_FUNCTION(execHelperExecuteEntityCloudScript); \
	DECLARE_FUNCTION(execHelperExecuteFunction); \
	DECLARE_FUNCTION(execHelperListFunctions); \
	DECLARE_FUNCTION(execHelperListHttpFunctions); \
	DECLARE_FUNCTION(execHelperListQueuedFunctions); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execHelperRegisterHttpFunction); \
	DECLARE_FUNCTION(execHelperRegisterQueuedFunction); \
	DECLARE_FUNCTION(execHelperUnregisterFunction); \
	DECLARE_FUNCTION(execListFunctions); \
	DECLARE_FUNCTION(execListHttpFunctions); \
	DECLARE_FUNCTION(execListQueuedFunctions); \
	DECLARE_FUNCTION(execPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execRegisterHttpFunction); \
	DECLARE_FUNCTION(execRegisterQueuedFunction); \
	DECLARE_FUNCTION(execUnregisterFunction);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteEntityCloudScript); \
	DECLARE_FUNCTION(execExecuteFunction); \
	DECLARE_FUNCTION(execHelperExecuteEntityCloudScript); \
	DECLARE_FUNCTION(execHelperExecuteFunction); \
	DECLARE_FUNCTION(execHelperListFunctions); \
	DECLARE_FUNCTION(execHelperListHttpFunctions); \
	DECLARE_FUNCTION(execHelperListQueuedFunctions); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execHelperRegisterHttpFunction); \
	DECLARE_FUNCTION(execHelperRegisterQueuedFunction); \
	DECLARE_FUNCTION(execHelperUnregisterFunction); \
	DECLARE_FUNCTION(execListFunctions); \
	DECLARE_FUNCTION(execListHttpFunctions); \
	DECLARE_FUNCTION(execListQueuedFunctions); \
	DECLARE_FUNCTION(execPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execRegisterHttpFunction); \
	DECLARE_FUNCTION(execRegisterQueuedFunction); \
	DECLARE_FUNCTION(execUnregisterFunction);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabCloudScriptAPI(); \
	friend struct Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabCloudScriptAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabCloudScriptAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabCloudScriptAPI(); \
	friend struct Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabCloudScriptAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabCloudScriptAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabCloudScriptAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabCloudScriptAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabCloudScriptAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabCloudScriptAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabCloudScriptAPI(UPlayFabCloudScriptAPI&&); \
	NO_API UPlayFabCloudScriptAPI(const UPlayFabCloudScriptAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabCloudScriptAPI(UPlayFabCloudScriptAPI&&); \
	NO_API UPlayFabCloudScriptAPI(const UPlayFabCloudScriptAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabCloudScriptAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabCloudScriptAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabCloudScriptAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabCloudScriptAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabCloudScriptAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabCloudScriptAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_30_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabCloudScriptAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabCloudScriptAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
