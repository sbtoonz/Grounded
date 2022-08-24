// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EExperimentState_generated_h
#error "EExperimentState.generated.h already included, missing '#pragma once' in EExperimentState.h"
#endif
#define PLAYFAB_EExperimentState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EExperimentState_h


#define FOREACH_ENUM_EEXPERIMENTSTATE(op) \
	op(EExperimentState::pfenum_New) \
	op(EExperimentState::pfenum_Started) \
	op(EExperimentState::pfenum_Stopped) \
	op(EExperimentState::pfenum_Deleted) 

enum class EExperimentState;
template<> PLAYFAB_API UEnum* StaticEnum<EExperimentState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
