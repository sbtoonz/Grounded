// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_Speaker_generated_h
#error "Speaker.generated.h already included, missing '#pragma once' in Speaker.h"
#endif
#define OEIFLOWCHARTS_Speaker_generated_h

#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_RPC_WRAPPERS
#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeaker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeaker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeaker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeaker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeaker(USpeaker&&); \
	NO_API USpeaker(const USpeaker&); \
public:


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeaker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeaker(USpeaker&&); \
	NO_API USpeaker(const USpeaker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeaker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeaker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeaker)


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSpeaker(); \
	friend struct Z_Construct_UClass_USpeaker_Statics; \
public: \
	DECLARE_CLASS(USpeaker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OEIFlowCharts"), NO_API) \
	DECLARE_SERIALIZER(USpeaker)


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_GENERATED_UINTERFACE_BODY() \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_GENERATED_UINTERFACE_BODY() \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISpeaker() {} \
public: \
	typedef USpeaker UClassType; \
	typedef ISpeaker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISpeaker() {} \
public: \
	typedef USpeaker UClassType; \
	typedef ISpeaker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_6_PROLOG
#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIFLOWCHARTS_API UClass* StaticClass<class USpeaker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_Speaker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
