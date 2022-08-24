// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ETitleMultiplayerServerEnabledStatus_generated_h
#error "ETitleMultiplayerServerEnabledStatus.generated.h already included, missing '#pragma once' in ETitleMultiplayerServerEnabledStatus.h"
#endif
#define PLAYFAB_ETitleMultiplayerServerEnabledStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ETitleMultiplayerServerEnabledStatus_h


#define FOREACH_ENUM_ETITLEMULTIPLAYERSERVERENABLEDSTATUS(op) \
	op(ETitleMultiplayerServerEnabledStatus::pfenum_Initializing) \
	op(ETitleMultiplayerServerEnabledStatus::pfenum_Enabled) \
	op(ETitleMultiplayerServerEnabledStatus::pfenum_Disabled) 

enum class ETitleMultiplayerServerEnabledStatus : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<ETitleMultiplayerServerEnabledStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
