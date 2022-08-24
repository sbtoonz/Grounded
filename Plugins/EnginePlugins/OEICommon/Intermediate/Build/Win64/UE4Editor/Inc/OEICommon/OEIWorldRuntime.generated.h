// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOEIWorldRuntime;
#ifdef OEICOMMON_OEIWorldRuntime_generated_h
#error "OEIWorldRuntime.generated.h already included, missing '#pragma once' in OEIWorldRuntime.h"
#endif
#define OEICOMMON_OEIWorldRuntime_generated_h

#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOEIWorldRuntime);


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOEIWorldRuntime);


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOEIWorldRuntime(); \
	friend struct Z_Construct_UClass_UOEIWorldRuntime_Statics; \
public: \
	DECLARE_CLASS(UOEIWorldRuntime, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/OEICommon"), NO_API) \
	DECLARE_SERIALIZER(UOEIWorldRuntime) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUOEIWorldRuntime(); \
	friend struct Z_Construct_UClass_UOEIWorldRuntime_Statics; \
public: \
	DECLARE_CLASS(UOEIWorldRuntime, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/OEICommon"), NO_API) \
	DECLARE_SERIALIZER(UOEIWorldRuntime) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOEIWorldRuntime(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOEIWorldRuntime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOEIWorldRuntime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIWorldRuntime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOEIWorldRuntime(UOEIWorldRuntime&&); \
	NO_API UOEIWorldRuntime(const UOEIWorldRuntime&); \
public:


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOEIWorldRuntime(UOEIWorldRuntime&&); \
	NO_API UOEIWorldRuntime(const UOEIWorldRuntime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOEIWorldRuntime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIWorldRuntime); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOEIWorldRuntime)


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Subsystems() { return STRUCT_OFFSET(UOEIWorldRuntime, Subsystems); }


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_9_PROLOG
#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_INCLASS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEICOMMON_API UClass* StaticClass<class UOEIWorldRuntime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_OEIWorldRuntime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
