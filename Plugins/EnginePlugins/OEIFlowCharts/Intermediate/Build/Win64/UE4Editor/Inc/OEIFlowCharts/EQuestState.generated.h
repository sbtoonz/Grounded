// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_EQuestState_generated_h
#error "EQuestState.generated.h already included, missing '#pragma once' in EQuestState.h"
#endif
#define OEIFLOWCHARTS_EQuestState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_EQuestState_h


#define FOREACH_ENUM_EQUESTSTATE(op) \
	op(EQuestState::Invalid) \
	op(EQuestState::InProgress) \
	op(EQuestState::Succeeded) \
	op(EQuestState::Failed) \
	op(EQuestState::Mentioned) 

enum class EQuestState;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EQuestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
