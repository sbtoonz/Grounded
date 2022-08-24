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
struct FMatchmakerAuthUserResponse;
struct FMatchmakerPlayerJoinedResponse;
struct FMatchmakerPlayerLeftResponse;
struct FMatchmakerStartGameResponse;
struct FMatchmakerUserInfoResponse;
struct FMatchmakerAuthUserRequest;
class UPlayFabMatchmakerAPI;
struct FPlayFabBaseModel;
struct FMatchmakerPlayerJoinedRequest;
struct FMatchmakerPlayerLeftRequest;
struct FMatchmakerStartGameRequest;
struct FMatchmakerUserInfoRequest;
#ifdef PLAYFAB_PlayFabMatchmakerAPI_generated_h
#error "PlayFabMatchmakerAPI.generated.h already included, missing '#pragma once' in PlayFabMatchmakerAPI.h"
#endif
#define PLAYFAB_PlayFabMatchmakerAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_33_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_32_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms \
{ \
	FMatchmakerAuthUserResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAuthUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthUser, FMatchmakerAuthUserResponse Result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessAuthUser.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_31_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms \
{ \
	FMatchmakerPlayerJoinedResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPlayerJoined_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerJoined, FMatchmakerPlayerJoinedResponse Result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessPlayerJoined.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_30_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms \
{ \
	FMatchmakerPlayerLeftResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPlayerLeft_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerLeft, FMatchmakerPlayerLeftResponse Result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessPlayerLeft.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_29_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessStartGame_Parms \
{ \
	FMatchmakerStartGameResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessStartGame_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStartGame, FMatchmakerStartGameResponse Result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessStartGame_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessStartGame.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_28_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms \
{ \
	FMatchmakerUserInfoResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUserInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUserInfo, FMatchmakerUserInfoResponse Result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUserInfo.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthUser); \
	DECLARE_FUNCTION(execHelperAuthUser); \
	DECLARE_FUNCTION(execHelperPlayerJoined); \
	DECLARE_FUNCTION(execHelperPlayerLeft); \
	DECLARE_FUNCTION(execHelperStartGame); \
	DECLARE_FUNCTION(execHelperUserInfo); \
	DECLARE_FUNCTION(execPlayerJoined); \
	DECLARE_FUNCTION(execPlayerLeft); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execUserInfo);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthUser); \
	DECLARE_FUNCTION(execHelperAuthUser); \
	DECLARE_FUNCTION(execHelperPlayerJoined); \
	DECLARE_FUNCTION(execHelperPlayerLeft); \
	DECLARE_FUNCTION(execHelperStartGame); \
	DECLARE_FUNCTION(execHelperUserInfo); \
	DECLARE_FUNCTION(execPlayerJoined); \
	DECLARE_FUNCTION(execPlayerLeft); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execUserInfo);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMatchmakerAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMatchmakerAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerAPI(UPlayFabMatchmakerAPI&&); \
	NO_API UPlayFabMatchmakerAPI(const UPlayFabMatchmakerAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerAPI(UPlayFabMatchmakerAPI&&); \
	NO_API UPlayFabMatchmakerAPI(const UPlayFabMatchmakerAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabMatchmakerAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabMatchmakerAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabMatchmakerAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabMatchmakerAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_24_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMatchmakerAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabMatchmakerAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
