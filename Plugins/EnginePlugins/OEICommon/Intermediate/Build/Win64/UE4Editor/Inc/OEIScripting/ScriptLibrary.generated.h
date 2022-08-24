// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGlobalScriptReference;
struct FGuid;
#ifdef OEISCRIPTING_ScriptLibrary_generated_h
#error "ScriptLibrary.generated.h already included, missing '#pragma once' in ScriptLibrary.h"
#endif
#define OEISCRIPTING_ScriptLibrary_generated_h

#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGlobalScriptID); \
	DECLARE_FUNCTION(execMakeGlobalScriptReference);


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGlobalScriptID); \
	DECLARE_FUNCTION(execMakeGlobalScriptReference);


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptLibrary(); \
	friend struct Z_Construct_UClass_UScriptLibrary_Statics; \
public: \
	DECLARE_CLASS(UScriptLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIScripting"), NO_API) \
	DECLARE_SERIALIZER(UScriptLibrary)


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUScriptLibrary(); \
	friend struct Z_Construct_UClass_UScriptLibrary_Statics; \
public: \
	DECLARE_CLASS(UScriptLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIScripting"), NO_API) \
	DECLARE_SERIALIZER(UScriptLibrary)


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptLibrary(UScriptLibrary&&); \
	NO_API UScriptLibrary(const UScriptLibrary&); \
public:


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptLibrary(UScriptLibrary&&); \
	NO_API UScriptLibrary(const UScriptLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptLibrary)


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_PRIVATE_PROPERTY_OFFSET
#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_8_PROLOG
#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_INCLASS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEISCRIPTING_API UClass* StaticClass<class UScriptLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEIScripting_Public_ScriptLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
