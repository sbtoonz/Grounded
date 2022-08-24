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
struct FProfilesGetGlobalPolicyResponse;
struct FProfilesGetEntityProfileResponse;
struct FProfilesGetEntityProfilesResponse;
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
struct FProfilesSetGlobalPolicyResponse;
struct FProfilesSetProfileLanguageResponse;
struct FProfilesSetEntityProfilePolicyResponse;
struct FProfilesGetGlobalPolicyRequest;
class UPlayFabProfilesAPI;
struct FProfilesGetEntityProfileRequest;
struct FProfilesGetEntityProfilesRequest;
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;
struct FPlayFabBaseModel;
struct FProfilesSetGlobalPolicyRequest;
struct FProfilesSetProfileLanguageRequest;
struct FProfilesSetEntityProfilePolicyRequest;
#ifdef PLAYFAB_PlayFabProfilesAPI_generated_h
#error "PlayFabProfilesAPI.generated.h already included, missing '#pragma once' in PlayFabProfilesAPI.h"
#endif
#define PLAYFAB_PlayFabProfilesAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_39_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_38_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms \
{ \
	FProfilesGetGlobalPolicyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGlobalPolicy, FProfilesGetGlobalPolicyResponse Result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetGlobalPolicy.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_37_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms \
{ \
	FProfilesGetEntityProfileResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetProfile_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfile, FProfilesGetEntityProfileResponse Result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetProfile.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_36_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms \
{ \
	FProfilesGetEntityProfilesResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetProfiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfiles, FProfilesGetEntityProfilesResponse Result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetProfiles.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_35_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms \
{ \
	FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds, FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse Result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_34_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms \
{ \
	FProfilesSetGlobalPolicyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetGlobalPolicy, FProfilesSetGlobalPolicyResponse Result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetGlobalPolicy.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_33_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms \
{ \
	FProfilesSetProfileLanguageResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetProfileLanguage_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfileLanguage, FProfilesSetProfileLanguageResponse Result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetProfileLanguage.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_32_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms \
{ \
	FProfilesSetEntityProfilePolicyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetProfilePolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfilePolicy, FProfilesSetEntityProfilePolicyResponse Result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetProfilePolicy.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGlobalPolicy); \
	DECLARE_FUNCTION(execGetProfile); \
	DECLARE_FUNCTION(execGetProfiles); \
	DECLARE_FUNCTION(execGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperGetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperGetProfile); \
	DECLARE_FUNCTION(execHelperGetProfiles); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperSetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperSetProfileLanguage); \
	DECLARE_FUNCTION(execHelperSetProfilePolicy); \
	DECLARE_FUNCTION(execSetGlobalPolicy); \
	DECLARE_FUNCTION(execSetProfileLanguage); \
	DECLARE_FUNCTION(execSetProfilePolicy);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGlobalPolicy); \
	DECLARE_FUNCTION(execGetProfile); \
	DECLARE_FUNCTION(execGetProfiles); \
	DECLARE_FUNCTION(execGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperGetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperGetProfile); \
	DECLARE_FUNCTION(execHelperGetProfiles); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperSetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperSetProfileLanguage); \
	DECLARE_FUNCTION(execHelperSetProfilePolicy); \
	DECLARE_FUNCTION(execSetGlobalPolicy); \
	DECLARE_FUNCTION(execSetProfileLanguage); \
	DECLARE_FUNCTION(execSetProfilePolicy);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabProfilesAPI(); \
	friend struct Z_Construct_UClass_UPlayFabProfilesAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProfilesAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProfilesAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabProfilesAPI(); \
	friend struct Z_Construct_UClass_UPlayFabProfilesAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProfilesAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProfilesAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProfilesAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProfilesAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProfilesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProfilesAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabProfilesAPI(UPlayFabProfilesAPI&&); \
	NO_API UPlayFabProfilesAPI(const UPlayFabProfilesAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabProfilesAPI(UPlayFabProfilesAPI&&); \
	NO_API UPlayFabProfilesAPI(const UPlayFabProfilesAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProfilesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProfilesAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabProfilesAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabProfilesAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabProfilesAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabProfilesAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_28_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabProfilesAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabProfilesAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
