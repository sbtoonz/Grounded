// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EScheduledTaskType_generated_h
#error "EScheduledTaskType.generated.h already included, missing '#pragma once' in EScheduledTaskType.h"
#endif
#define PLAYFAB_EScheduledTaskType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EScheduledTaskType_h


#define FOREACH_ENUM_ESCHEDULEDTASKTYPE(op) \
	op(EScheduledTaskType::pfenum_CloudScript) \
	op(EScheduledTaskType::pfenum_ActionsOnPlayerSegment) \
	op(EScheduledTaskType::pfenum_CloudScriptAzureFunctions) \
	op(EScheduledTaskType::pfenum_InsightsScheduledScaling) 

enum class EScheduledTaskType : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EScheduledTaskType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
