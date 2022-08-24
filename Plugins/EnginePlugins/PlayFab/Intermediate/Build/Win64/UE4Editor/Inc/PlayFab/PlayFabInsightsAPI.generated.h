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
struct FInsightsInsightsGetDetailsResponse;
struct FInsightsInsightsGetLimitsResponse;
struct FInsightsInsightsGetOperationStatusResponse;
struct FInsightsInsightsGetPendingOperationsResponse;
struct FInsightsInsightsOperationResponse;
struct FInsightsInsightsEmptyRequest;
class UPlayFabInsightsAPI;
struct FInsightsInsightsGetOperationStatusRequest;
struct FInsightsInsightsGetPendingOperationsRequest;
struct FPlayFabBaseModel;
struct FInsightsInsightsSetPerformanceRequest;
struct FInsightsInsightsSetStorageRetentionRequest;
#ifdef PLAYFAB_PlayFabInsightsAPI_generated_h
#error "PlayFabInsightsAPI.generated.h already included, missing '#pragma once' in PlayFabInsightsAPI.h"
#endif
#define PLAYFAB_PlayFabInsightsAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_34_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_33_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms \
{ \
	FInsightsInsightsGetDetailsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetDetails_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetDetails, FInsightsInsightsGetDetailsResponse Result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetDetails.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_32_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms \
{ \
	FInsightsInsightsGetLimitsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLimits_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLimits, FInsightsInsightsGetLimitsResponse Result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLimits.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_31_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms \
{ \
	FInsightsInsightsGetOperationStatusResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetOperationStatus_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetOperationStatus, FInsightsInsightsGetOperationStatusResponse Result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetOperationStatus.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_30_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms \
{ \
	FInsightsInsightsGetPendingOperationsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPendingOperations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPendingOperations, FInsightsInsightsGetPendingOperationsResponse Result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPendingOperations.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_29_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms \
{ \
	FInsightsInsightsOperationResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPerformance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPerformance, FInsightsInsightsOperationResponse Result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPerformance.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_28_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms \
{ \
	FInsightsInsightsOperationResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetStorageRetention_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetStorageRetention, FInsightsInsightsOperationResponse Result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetStorageRetention.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDetails); \
	DECLARE_FUNCTION(execGetLimits); \
	DECLARE_FUNCTION(execGetOperationStatus); \
	DECLARE_FUNCTION(execGetPendingOperations); \
	DECLARE_FUNCTION(execHelperGetDetails); \
	DECLARE_FUNCTION(execHelperGetLimits); \
	DECLARE_FUNCTION(execHelperGetOperationStatus); \
	DECLARE_FUNCTION(execHelperGetPendingOperations); \
	DECLARE_FUNCTION(execHelperSetPerformance); \
	DECLARE_FUNCTION(execHelperSetStorageRetention); \
	DECLARE_FUNCTION(execSetPerformance); \
	DECLARE_FUNCTION(execSetStorageRetention);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDetails); \
	DECLARE_FUNCTION(execGetLimits); \
	DECLARE_FUNCTION(execGetOperationStatus); \
	DECLARE_FUNCTION(execGetPendingOperations); \
	DECLARE_FUNCTION(execHelperGetDetails); \
	DECLARE_FUNCTION(execHelperGetLimits); \
	DECLARE_FUNCTION(execHelperGetOperationStatus); \
	DECLARE_FUNCTION(execHelperGetPendingOperations); \
	DECLARE_FUNCTION(execHelperSetPerformance); \
	DECLARE_FUNCTION(execHelperSetStorageRetention); \
	DECLARE_FUNCTION(execSetPerformance); \
	DECLARE_FUNCTION(execSetStorageRetention);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabInsightsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabInsightsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabInsightsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabInsightsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabInsightsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabInsightsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabInsightsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabInsightsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabInsightsAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabInsightsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabInsightsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabInsightsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabInsightsAPI(UPlayFabInsightsAPI&&); \
	NO_API UPlayFabInsightsAPI(const UPlayFabInsightsAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabInsightsAPI(UPlayFabInsightsAPI&&); \
	NO_API UPlayFabInsightsAPI(const UPlayFabInsightsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabInsightsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabInsightsAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabInsightsAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabInsightsAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabInsightsAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabInsightsAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_24_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabInsightsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabInsightsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
