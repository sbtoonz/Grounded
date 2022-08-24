// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIFLOWCHARTS_ECompletionStatus_generated_h
#error "ECompletionStatus.generated.h already included, missing '#pragma once' in ECompletionStatus.h"
#endif
#define OEIFLOWCHARTS_ECompletionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIFlowCharts_Source_OEIFlowCharts_Public_ECompletionStatus_h


#define FOREACH_ENUM_ECOMPLETIONSTATUS(op) \
	op(ECompletionStatus::Invalid) \
	op(ECompletionStatus::NotStarted) \
	op(ECompletionStatus::InProgress) \
	op(ECompletionStatus::Completed) \
	op(ECompletionStatus::Failed) 

enum class ECompletionStatus;
template<> OEIFLOWCHARTS_API UEnum* StaticEnum<ECompletionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
