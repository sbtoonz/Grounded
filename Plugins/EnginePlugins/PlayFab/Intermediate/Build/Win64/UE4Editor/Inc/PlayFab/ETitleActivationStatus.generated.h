// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ETitleActivationStatus_generated_h
#error "ETitleActivationStatus.generated.h already included, missing '#pragma once' in ETitleActivationStatus.h"
#endif
#define PLAYFAB_ETitleActivationStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ETitleActivationStatus_h


#define FOREACH_ENUM_ETITLEACTIVATIONSTATUS(op) \
	op(ETitleActivationStatus::pfenum_None) \
	op(ETitleActivationStatus::pfenum_ActivatedTitleKey) \
	op(ETitleActivationStatus::pfenum_PendingSteam) \
	op(ETitleActivationStatus::pfenum_ActivatedSteam) \
	op(ETitleActivationStatus::pfenum_RevokedSteam) 

enum class ETitleActivationStatus;
template<> PLAYFAB_API UEnum* StaticEnum<ETitleActivationStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
