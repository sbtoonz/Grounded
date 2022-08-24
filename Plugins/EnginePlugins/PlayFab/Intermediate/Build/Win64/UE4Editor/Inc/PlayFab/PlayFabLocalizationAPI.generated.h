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
struct FLocalizationGetLanguageListResponse;
struct FLocalizationGetLanguageListRequest;
class UPlayFabLocalizationAPI;
struct FPlayFabBaseModel;
#ifdef PLAYFAB_PlayFabLocalizationAPI_generated_h
#error "PlayFabLocalizationAPI.generated.h already included, missing '#pragma once' in PlayFabLocalizationAPI.h"
#endif
#define PLAYFAB_PlayFabLocalizationAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_21_DELEGATE \
struct PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_20_DELEGATE \
struct PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms \
{ \
	FLocalizationGetLanguageListResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLanguageList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLanguageList, FLocalizationGetLanguageListResponse Result, UObject* customData) \
{ \
	PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLanguageList.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLanguageList); \
	DECLARE_FUNCTION(execHelperGetLanguageList);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLanguageList); \
	DECLARE_FUNCTION(execHelperGetLanguageList);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabLocalizationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabLocalizationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabLocalizationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabLocalizationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabLocalizationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabLocalizationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabLocalizationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabLocalizationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabLocalizationAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabLocalizationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabLocalizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabLocalizationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabLocalizationAPI(UPlayFabLocalizationAPI&&); \
	NO_API UPlayFabLocalizationAPI(const UPlayFabLocalizationAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabLocalizationAPI(UPlayFabLocalizationAPI&&); \
	NO_API UPlayFabLocalizationAPI(const UPlayFabLocalizationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabLocalizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabLocalizationAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabLocalizationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabLocalizationAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabLocalizationAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabLocalizationAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_16_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabLocalizationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabLocalizationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
