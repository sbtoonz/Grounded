// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFABCOMMON_PlayFabAuthenticationContext_generated_h
#error "PlayFabAuthenticationContext.generated.h already included, missing '#pragma once' in PlayFabAuthenticationContext.h"
#endif
#define PLAYFABCOMMON_PlayFabAuthenticationContext_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClientAdminSecurityCheck); \
	DECLARE_FUNCTION(execForgetAllCredentials); \
	DECLARE_FUNCTION(execGetClientSessionTicket); \
	DECLARE_FUNCTION(execGetDeveloperSecretKey); \
	DECLARE_FUNCTION(execGetEntityToken); \
	DECLARE_FUNCTION(execGetPlayFabId); \
	DECLARE_FUNCTION(execSetClientSessionTicket); \
	DECLARE_FUNCTION(execSetDeveloperSecretKey); \
	DECLARE_FUNCTION(execSetEntityToken); \
	DECLARE_FUNCTION(execSetPlayFabId);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientAdminSecurityCheck); \
	DECLARE_FUNCTION(execForgetAllCredentials); \
	DECLARE_FUNCTION(execGetClientSessionTicket); \
	DECLARE_FUNCTION(execGetDeveloperSecretKey); \
	DECLARE_FUNCTION(execGetEntityToken); \
	DECLARE_FUNCTION(execGetPlayFabId); \
	DECLARE_FUNCTION(execSetClientSessionTicket); \
	DECLARE_FUNCTION(execSetDeveloperSecretKey); \
	DECLARE_FUNCTION(execSetEntityToken); \
	DECLARE_FUNCTION(execSetPlayFabId);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAuthenticationContext(); \
	friend struct Z_Construct_UClass_UPlayFabAuthenticationContext_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAuthenticationContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFabCommon"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAuthenticationContext)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAuthenticationContext(); \
	friend struct Z_Construct_UClass_UPlayFabAuthenticationContext_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAuthenticationContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFabCommon"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAuthenticationContext)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAuthenticationContext(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAuthenticationContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAuthenticationContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAuthenticationContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAuthenticationContext(UPlayFabAuthenticationContext&&); \
	NO_API UPlayFabAuthenticationContext(const UPlayFabAuthenticationContext&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAuthenticationContext(UPlayFabAuthenticationContext&&); \
	NO_API UPlayFabAuthenticationContext(const UPlayFabAuthenticationContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAuthenticationContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAuthenticationContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabAuthenticationContext)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClientSessionTicket() { return STRUCT_OFFSET(UPlayFabAuthenticationContext, ClientSessionTicket); } \
	FORCEINLINE static uint32 __PPO__EntityToken() { return STRUCT_OFFSET(UPlayFabAuthenticationContext, EntityToken); } \
	FORCEINLINE static uint32 __PPO__DeveloperSecretKey() { return STRUCT_OFFSET(UPlayFabAuthenticationContext, DeveloperSecretKey); } \
	FORCEINLINE static uint32 __PPO__PlayFabId() { return STRUCT_OFFSET(UPlayFabAuthenticationContext, PlayFabId); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_6_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFABCOMMON_API UClass* StaticClass<class UPlayFabAuthenticationContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
