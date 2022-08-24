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
struct FAuthenticationGetEntityTokenResponse;
struct FAuthenticationValidateEntityTokenResponse;
struct FAuthenticationGetEntityTokenRequest;
class UPlayFabAuthenticationAPI;
struct FPlayFabBaseModel;
struct FAuthenticationValidateEntityTokenRequest;
#ifdef PLAYFAB_PlayFabAuthenticationAPI_generated_h
#error "PlayFabAuthenticationAPI.generated.h already included, missing '#pragma once' in PlayFabAuthenticationAPI.h"
#endif
#define PLAYFAB_PlayFabAuthenticationAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_24_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_23_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms \
{ \
	FAuthenticationGetEntityTokenResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetEntityToken_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetEntityToken, FAuthenticationGetEntityTokenResponse Result, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetEntityToken.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_22_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms \
{ \
	FAuthenticationValidateEntityTokenResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessValidateEntityToken_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessValidateEntityToken, FAuthenticationValidateEntityTokenResponse Result, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessValidateEntityToken.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEntityToken); \
	DECLARE_FUNCTION(execHelperGetEntityToken); \
	DECLARE_FUNCTION(execHelperValidateEntityToken); \
	DECLARE_FUNCTION(execValidateEntityToken);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEntityToken); \
	DECLARE_FUNCTION(execHelperGetEntityToken); \
	DECLARE_FUNCTION(execHelperValidateEntityToken); \
	DECLARE_FUNCTION(execValidateEntityToken);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAuthenticationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAuthenticationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAuthenticationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAuthenticationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAuthenticationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAuthenticationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAuthenticationAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAuthenticationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAuthenticationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAuthenticationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAuthenticationAPI(UPlayFabAuthenticationAPI&&); \
	NO_API UPlayFabAuthenticationAPI(const UPlayFabAuthenticationAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAuthenticationAPI(UPlayFabAuthenticationAPI&&); \
	NO_API UPlayFabAuthenticationAPI(const UPlayFabAuthenticationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAuthenticationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAuthenticationAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabAuthenticationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabAuthenticationAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabAuthenticationAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabAuthenticationAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_18_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAuthenticationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabAuthenticationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
