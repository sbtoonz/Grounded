// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_EObjectiveState_generated_h
#error "EObjectiveState.generated.h already included, missing '#pragma once' in EObjectiveState.h"
#endif
#define OEIFLOWCHARTS_EObjectiveState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_EObjectiveState_h


#define FOREACH_ENUM_EOBJECTIVESTATE(op) \
	op(EObjectiveState::Invalid) \
	op(EObjectiveState::Active) \
	op(EObjectiveState::Succeeded) \
	op(EObjectiveState::Failed) \
	op(EObjectiveState::Irrelevant) \
	op(EObjectiveState::Pending) 

enum class EObjectiveState;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EObjectiveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
