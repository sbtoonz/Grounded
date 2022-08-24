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
struct FExperimentationCreateExclusionGroupResult;
struct FExperimentationCreateExperimentResult;
struct FExperimentationEmptyResponse;
struct FExperimentationGetExclusionGroupsResult;
struct FExperimentationGetExclusionGroupTrafficResult;
struct FExperimentationGetExperimentsResult;
struct FExperimentationGetLatestScorecardResult;
struct FExperimentationGetTreatmentAssignmentResult;
struct FExperimentationCreateExclusionGroupRequest;
class UPlayFabExperimentationAPI;
struct FExperimentationCreateExperimentRequest;
struct FExperimentationDeleteExclusionGroupRequest;
struct FExperimentationDeleteExperimentRequest;
struct FExperimentationGetExclusionGroupsRequest;
struct FExperimentationGetExclusionGroupTrafficRequest;
struct FExperimentationGetExperimentsRequest;
struct FExperimentationGetLatestScorecardRequest;
struct FExperimentationGetTreatmentAssignmentRequest;
struct FPlayFabBaseModel;
struct FExperimentationStartExperimentRequest;
struct FExperimentationStopExperimentRequest;
struct FExperimentationUpdateExclusionGroupRequest;
struct FExperimentationUpdateExperimentRequest;
#ifdef PLAYFAB_PlayFabExperimentationAPI_generated_h
#error "PlayFabExperimentationAPI.generated.h already included, missing '#pragma once' in PlayFabExperimentationAPI.h"
#endif
#define PLAYFAB_PlayFabExperimentationAPI_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_52_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError Error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError Error, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.Error=Error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_51_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms \
{ \
	FExperimentationCreateExclusionGroupResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExclusionGroup, FExperimentationCreateExclusionGroupResult Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateExclusionGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_50_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms \
{ \
	FExperimentationCreateExperimentResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExperiment, FExperimentationCreateExperimentResult Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_49_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms \
{ \
	FExperimentationEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExclusionGroup, FExperimentationEmptyResponse Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteExclusionGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_48_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms \
{ \
	FExperimentationEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExperiment, FExperimentationEmptyResponse Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_47_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms \
{ \
	FExperimentationGetExclusionGroupsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetExclusionGroups_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroups, FExperimentationGetExclusionGroupsResult Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetExclusionGroups.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_46_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms \
{ \
	FExperimentationGetExclusionGroupTrafficResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetExclusionGroupTraffic_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroupTraffic, FExperimentationGetExclusionGroupTrafficResult Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetExclusionGroupTraffic.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_45_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms \
{ \
	FExperimentationGetExperimentsResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetExperiments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExperiments, FExperimentationGetExperimentsResult Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetExperiments.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_44_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms \
{ \
	FExperimentationGetLatestScorecardResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLatestScorecard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLatestScorecard, FExperimentationGetLatestScorecardResult Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLatestScorecard.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_43_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms \
{ \
	FExperimentationGetTreatmentAssignmentResult Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTreatmentAssignment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTreatmentAssignment, FExperimentationGetTreatmentAssignmentResult Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTreatmentAssignment.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_42_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms \
{ \
	FExperimentationEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessStartExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStartExperiment, FExperimentationEmptyResponse Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessStartExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_41_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms \
{ \
	FExperimentationEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessStopExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStopExperiment, FExperimentationEmptyResponse Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessStopExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_40_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms \
{ \
	FExperimentationEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExclusionGroup, FExperimentationEmptyResponse Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateExclusionGroup.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_39_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms \
{ \
	FExperimentationEmptyResponse Result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExperiment, FExperimentationEmptyResponse Result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms Parms; \
	Parms.Result=Result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_SPARSE_DATA
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateExclusionGroup); \
	DECLARE_FUNCTION(execCreateExperiment); \
	DECLARE_FUNCTION(execDeleteExclusionGroup); \
	DECLARE_FUNCTION(execDeleteExperiment); \
	DECLARE_FUNCTION(execGetExclusionGroups); \
	DECLARE_FUNCTION(execGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execGetExperiments); \
	DECLARE_FUNCTION(execGetLatestScorecard); \
	DECLARE_FUNCTION(execGetTreatmentAssignment); \
	DECLARE_FUNCTION(execHelperCreateExclusionGroup); \
	DECLARE_FUNCTION(execHelperCreateExperiment); \
	DECLARE_FUNCTION(execHelperDeleteExclusionGroup); \
	DECLARE_FUNCTION(execHelperDeleteExperiment); \
	DECLARE_FUNCTION(execHelperGetExclusionGroups); \
	DECLARE_FUNCTION(execHelperGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execHelperGetExperiments); \
	DECLARE_FUNCTION(execHelperGetLatestScorecard); \
	DECLARE_FUNCTION(execHelperGetTreatmentAssignment); \
	DECLARE_FUNCTION(execHelperStartExperiment); \
	DECLARE_FUNCTION(execHelperStopExperiment); \
	DECLARE_FUNCTION(execHelperUpdateExclusionGroup); \
	DECLARE_FUNCTION(execHelperUpdateExperiment); \
	DECLARE_FUNCTION(execStartExperiment); \
	DECLARE_FUNCTION(execStopExperiment); \
	DECLARE_FUNCTION(execUpdateExclusionGroup); \
	DECLARE_FUNCTION(execUpdateExperiment);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateExclusionGroup); \
	DECLARE_FUNCTION(execCreateExperiment); \
	DECLARE_FUNCTION(execDeleteExclusionGroup); \
	DECLARE_FUNCTION(execDeleteExperiment); \
	DECLARE_FUNCTION(execGetExclusionGroups); \
	DECLARE_FUNCTION(execGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execGetExperiments); \
	DECLARE_FUNCTION(execGetLatestScorecard); \
	DECLARE_FUNCTION(execGetTreatmentAssignment); \
	DECLARE_FUNCTION(execHelperCreateExclusionGroup); \
	DECLARE_FUNCTION(execHelperCreateExperiment); \
	DECLARE_FUNCTION(execHelperDeleteExclusionGroup); \
	DECLARE_FUNCTION(execHelperDeleteExperiment); \
	DECLARE_FUNCTION(execHelperGetExclusionGroups); \
	DECLARE_FUNCTION(execHelperGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execHelperGetExperiments); \
	DECLARE_FUNCTION(execHelperGetLatestScorecard); \
	DECLARE_FUNCTION(execHelperGetTreatmentAssignment); \
	DECLARE_FUNCTION(execHelperStartExperiment); \
	DECLARE_FUNCTION(execHelperStopExperiment); \
	DECLARE_FUNCTION(execHelperUpdateExclusionGroup); \
	DECLARE_FUNCTION(execHelperUpdateExperiment); \
	DECLARE_FUNCTION(execStartExperiment); \
	DECLARE_FUNCTION(execStopExperiment); \
	DECLARE_FUNCTION(execUpdateExclusionGroup); \
	DECLARE_FUNCTION(execUpdateExperiment);


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabExperimentationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabExperimentationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabExperimentationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabExperimentationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabExperimentationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabExperimentationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabExperimentationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabExperimentationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabExperimentationAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabExperimentationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabExperimentationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabExperimentationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabExperimentationAPI(UPlayFabExperimentationAPI&&); \
	NO_API UPlayFabExperimentationAPI(const UPlayFabExperimentationAPI&); \
public:


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabExperimentationAPI(UPlayFabExperimentationAPI&&); \
	NO_API UPlayFabExperimentationAPI(const UPlayFabExperimentationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabExperimentationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabExperimentationAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayFabExperimentationAPI)


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabExperimentationAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabExperimentationAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabExperimentationAPI, ResponseJsonObj); }


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_35_PROLOG
#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_INCLASS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_SPARSE_DATA \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabExperimentationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_PlayFabExperimentationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
