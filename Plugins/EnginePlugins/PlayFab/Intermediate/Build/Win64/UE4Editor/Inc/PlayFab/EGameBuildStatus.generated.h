// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EGameBuildStatus_generated_h
#error "EGameBuildStatus.generated.h already included, missing '#pragma once' in EGameBuildStatus.h"
#endif
#define PLAYFAB_EGameBuildStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EGameBuildStatus_h


#define FOREACH_ENUM_EGAMEBUILDSTATUS(op) \
	op(EGameBuildStatus::pfenum_Available) \
	op(EGameBuildStatus::pfenum_Validating) \
	op(EGameBuildStatus::pfenum_InvalidBuildPackage) \
	op(EGameBuildStatus::pfenum_Processing) \
	op(EGameBuildStatus::pfenum_FailedToProcess) 

enum class EGameBuildStatus : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EGameBuildStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
