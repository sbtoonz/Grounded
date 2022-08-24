// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_EQuestEventType_generated_h
#error "EQuestEventType.generated.h already included, missing '#pragma once' in EQuestEventType.h"
#endif
#define OEIFLOWCHARTS_EQuestEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_EQuestEventType_h


#define FOREACH_ENUM_EQUESTEVENTTYPE(op) \
	op(EQuestEventType::Talk) \
	op(EQuestEventType::Kill) \
	op(EQuestEventType::Location) \
	op(EQuestEventType::AcquireItem) \
	op(EQuestEventType::Interact) \
	op(EQuestEventType::GlobalVariable) \
	op(EQuestEventType::Inspect) 

enum class EQuestEventType;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EQuestEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
