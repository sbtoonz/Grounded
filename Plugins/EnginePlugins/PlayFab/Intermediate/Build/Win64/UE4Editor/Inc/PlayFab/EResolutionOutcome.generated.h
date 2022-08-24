// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EResolutionOutcome_generated_h
#error "EResolutionOutcome.generated.h already included, missing '#pragma once' in EResolutionOutcome.h"
#endif
#define PLAYFAB_EResolutionOutcome_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EResolutionOutcome_h


#define FOREACH_ENUM_ERESOLUTIONOUTCOME(op) \
	op(EResolutionOutcome::pfenum_Revoke) \
	op(EResolutionOutcome::pfenum_Reinstate) \
	op(EResolutionOutcome::pfenum_Manual) 

enum class EResolutionOutcome : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EResolutionOutcome>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
