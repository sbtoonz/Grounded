// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_PlayFabUtilities_generated_h
#error "PlayFabUtilities.generated.h already included, missing '#pragma once' in PlayFabUtilities.h"
#endif
#define PLAYFAB_PlayFabUtilities_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetErrorText); \
	DECLARE_FUNCTION(execgetPhotonAppId); \
	DECLARE_FUNCTION(execsetPlayFabSettings);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetErrorText); \
	DECLARE_FUNCTION(execgetPhotonAppId); \
	DECLARE_FUNCTION(execsetPlayFabSettings);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabUtilities(); \
	friend struct Z_Construct_UClass_UPlayFabUtilities_Statics; \
public: \
	DECLARE_CLASS(UPlayFabUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabUtilities)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabUtilities(); \
	friend struct Z_Construct_UClass_UPlayFabUtilities_Statics; \
public: \
	DECLARE_CLASS(UPlayFabUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabUtilities)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabUtilities(UPlayFabUtilities&&); \
	NO_API UPlayFabUtilities(const UPlayFabUtilities&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabUtilities(UPlayFabUtilities&&); \
	NO_API UPlayFabUtilities(const UPlayFabUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabUtilities)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_6_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
