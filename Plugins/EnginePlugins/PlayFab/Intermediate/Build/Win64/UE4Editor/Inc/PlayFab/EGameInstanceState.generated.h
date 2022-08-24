// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EGameInstanceState_generated_h
#error "EGameInstanceState.generated.h already included, missing '#pragma once' in EGameInstanceState.h"
#endif
#define PLAYFAB_EGameInstanceState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EGameInstanceState_h


#define FOREACH_ENUM_EGAMEINSTANCESTATE(op) \
	op(EGameInstanceState::pfenum_Open) \
	op(EGameInstanceState::pfenum_Closed) 

enum class EGameInstanceState : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EGameInstanceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
