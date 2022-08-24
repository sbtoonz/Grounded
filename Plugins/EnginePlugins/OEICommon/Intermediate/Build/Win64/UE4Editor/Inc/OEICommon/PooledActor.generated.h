// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEICOMMON_PooledActor_generated_h
#error "PooledActor.generated.h already included, missing '#pragma once' in PooledActor.h"
#endif
#define OEICOMMON_PooledActor_generated_h

#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSpawned);


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSpawned);


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPooledActor(); \
	friend struct Z_Construct_UClass_APooledActor_Statics; \
public: \
	DECLARE_CLASS(APooledActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OEICommon"), NO_API) \
	DECLARE_SERIALIZER(APooledActor)


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAPooledActor(); \
	friend struct Z_Construct_UClass_APooledActor_Statics; \
public: \
	DECLARE_CLASS(APooledActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OEICommon"), NO_API) \
	DECLARE_SERIALIZER(APooledActor)


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APooledActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APooledActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APooledActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APooledActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APooledActor(APooledActor&&); \
	NO_API APooledActor(const APooledActor&); \
public:


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APooledActor(APooledActor&&); \
	NO_API APooledActor(const APooledActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APooledActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APooledActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APooledActor)


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Spawned() { return STRUCT_OFFSET(APooledActor, Spawned); }


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_6_PROLOG
#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_INCLASS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEICOMMON_API UClass* StaticClass<class APooledActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEICommon_Source_OEICommon_Public_PooledActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
