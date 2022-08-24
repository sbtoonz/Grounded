// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_EQuestType_generated_h
#error "EQuestType.generated.h already included, missing '#pragma once' in EQuestType.h"
#endif
#define OEIFLOWCHARTS_EQuestType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_EQuestType_h


#define FOREACH_ENUM_EQUESTTYPE(op) \
	op(EQuestType::MajorStoryQuest) \
	op(EQuestType::MajorSideQuest) \
	op(EQuestType::Task) \
	op(EQuestType::MinorStoryQuest) \
	op(EQuestType::MinorSideQuest) \
	op(EQuestType::MajorFaction) \
	op(EQuestType::MinorFaction) \
	op(EQuestType::Companion) \
	op(EQuestType::Count) 

enum class EQuestType : uint8;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EQuestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
