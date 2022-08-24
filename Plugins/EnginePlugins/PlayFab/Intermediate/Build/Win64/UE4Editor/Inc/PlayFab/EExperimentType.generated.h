// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EExperimentType_generated_h
#error "EExperimentType.generated.h already included, missing '#pragma once' in EExperimentType.h"
#endif
#define PLAYFAB_EExperimentType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EExperimentType_h


#define FOREACH_ENUM_EEXPERIMENTTYPE(op) \
	op(EExperimentType::pfenum_Active) \
	op(EExperimentType::pfenum_Snapshot) 

enum class EExperimentType : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EExperimentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
