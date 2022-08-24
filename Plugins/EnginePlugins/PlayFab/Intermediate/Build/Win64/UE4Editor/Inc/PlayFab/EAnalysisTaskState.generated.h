// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EAnalysisTaskState_generated_h
#error "EAnalysisTaskState.generated.h already included, missing '#pragma once' in EAnalysisTaskState.h"
#endif
#define PLAYFAB_EAnalysisTaskState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EAnalysisTaskState_h


#define FOREACH_ENUM_EANALYSISTASKSTATE(op) \
	op(EAnalysisTaskState::pfenum_Waiting) \
	op(EAnalysisTaskState::pfenum_ReadyForSubmission) \
	op(EAnalysisTaskState::pfenum_SubmittingToPipeline) \
	op(EAnalysisTaskState::pfenum_Running) \
	op(EAnalysisTaskState::pfenum_Completed) \
	op(EAnalysisTaskState::pfenum_Failed) \
	op(EAnalysisTaskState::pfenum_Canceled) 

enum class EAnalysisTaskState;
template<> PLAYFAB_API UEnum* StaticEnum<EAnalysisTaskState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
