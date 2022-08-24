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
struct FDataAbortFileUploadsResponse;
struct FDataDeleteFilesResponse;
struct FDataFinalizeFileUploadsResponse;
struct FDataGetFilesResponse;
struct FDataGetObjectsResponse;
struct FDataInitiateFileUploadsResponse;
struct FDataSetObjectsResponse;
struct FDataAbortFileUploadsRequest;
class UPlayFabDataAPI;
struct FDataDeleteFilesRequest;
struct FDataFinalizeFileUploadsRequest;
struct FDataGetFilesRequest;
struct FDataGetObjectsRequest;
struct FPlayFabBaseModel;
struct FDataInitiateFileUploadsRequest;
struct FDataSetObjectsRequest;
#ifdef PLAYFAB_PlayFabDataAPI_generated_h
#error "PlayFabDataAPI.generated.h already included, missing '#pragma once' in PlayFabDataAPI.h"
#endif
#define PLAYFAB_PlayFabDataAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_39_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_38_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms \
{ \
	FDataAbortFileUploadsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAbortFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAbortFileUploads, FDataAbortFileUploadsResponse Result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAbortFileUploads.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_37_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms \
{ \
	FDataDeleteFilesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteFiles, FDataDeleteFilesResponse Result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteFiles.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_36_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms \
{ \
	FDataFinalizeFileUploadsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessFinalizeFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessFinalizeFileUploads, FDataFinalizeFileUploadsResponse Result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessFinalizeFileUploads.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_35_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms \
{ \
	FDataGetFilesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFiles, FDataGetFilesResponse Result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetFiles.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_34_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms \
{ \
	FDataGetObjectsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetObjects, FDataGetObjectsResponse Result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetObjects.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_33_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms \
{ \
	FDataInitiateFileUploadsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessInitiateFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInitiateFileUploads, FDataInitiateFileUploadsResponse Result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessInitiateFileUploads.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_32_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms \
{ \
	FDataSetObjectsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetObjects, FDataSetObjectsResponse Result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetObjects.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbortFileUploads); \
	DECLARE_FUNCTION(execDeleteFiles); \
	DECLARE_FUNCTION(execFinalizeFileUploads); \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execGetObjects); \
	DECLARE_FUNCTION(execHelperAbortFileUploads); \
	DECLARE_FUNCTION(execHelperDeleteFiles); \
	DECLARE_FUNCTION(execHelperFinalizeFileUploads); \
	DECLARE_FUNCTION(execHelperGetFiles); \
	DECLARE_FUNCTION(execHelperGetObjects); \
	DECLARE_FUNCTION(execHelperInitiateFileUploads); \
	DECLARE_FUNCTION(execHelperSetObjects); \
	DECLARE_FUNCTION(execInitiateFileUploads); \
	DECLARE_FUNCTION(execSetObjects);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbortFileUploads); \
	DECLARE_FUNCTION(execDeleteFiles); \
	DECLARE_FUNCTION(execFinalizeFileUploads); \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execGetObjects); \
	DECLARE_FUNCTION(execHelperAbortFileUploads); \
	DECLARE_FUNCTION(execHelperDeleteFiles); \
	DECLARE_FUNCTION(execHelperFinalizeFileUploads); \
	DECLARE_FUNCTION(execHelperGetFiles); \
	DECLARE_FUNCTION(execHelperGetObjects); \
	DECLARE_FUNCTION(execHelperInitiateFileUploads); \
	DECLARE_FUNCTION(execHelperSetObjects); \
	DECLARE_FUNCTION(execInitiateFileUploads); \
	DECLARE_FUNCTION(execSetObjects);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabDataAPI(); \
	friend struct Z_Construct_UClass_UPlayFabDataAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabDataAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabDataAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabDataAPI(); \
	friend struct Z_Construct_UClass_UPlayFabDataAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabDataAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabDataAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabDataAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabDataAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabDataAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabDataAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabDataAPI(UPlayFabDataAPI&&); \
	NO_API UPlayFabDataAPI(const UPlayFabDataAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabDataAPI(UPlayFabDataAPI&&); \
	NO_API UPlayFabDataAPI(const UPlayFabDataAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabDataAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabDataAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabDataAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabDataAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabDataAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabDataAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_28_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabDataAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabDataAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
