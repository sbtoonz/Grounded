// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_ChatterEvent_generated_h
#error "ChatterEvent.generated.h already included, missing '#pragma once' in ChatterEvent.h"
#endif
#define OEIFLOWCHARTS_ChatterEvent_generated_h

#define Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_ChatterEvent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatterEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ID() { return STRUCT_OFFSET(FChatterEvent, ID); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(FChatterEvent, Name); } \
	FORCEINLINE static uint32 __PPO__Cooldown() { return STRUCT_OFFSET(FChatterEvent, Cooldown); } \
	FORCEINLINE static uint32 __PPO__OnInterrupt() { return STRUCT_OFFSET(FChatterEvent, OnInterrupt); } \
	FORCEINLINE static uint32 __PPO__InterruptionLevel() { return STRUCT_OFFSET(FChatterEvent, InterruptionLevel); } \
	FORCEINLINE static uint32 __PPO__OnQueued() { return STRUCT_OFFSET(FChatterEvent, OnQueued); } \
	FORCEINLINE static uint32 __PPO__MaxWaitTime() { return STRUCT_OFFSET(FChatterEvent, MaxWaitTime); } \
	FORCEINLINE static uint32 __PPO__GruntGroup() { return STRUCT_OFFSET(FChatterEvent, GruntGroup); }


template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<struct FChatterEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_ChatterEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
