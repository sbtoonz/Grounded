// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EPlayerConnectionState_generated_h
#error "EPlayerConnectionState.generated.h already included, missing '#pragma once' in EPlayerConnectionState.h"
#endif
#define PLAYFAB_EPlayerConnectionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EPlayerConnectionState_h


#define FOREACH_ENUM_EPLAYERCONNECTIONSTATE(op) \
	op(EPlayerConnectionState::pfenum_Unassigned) \
	op(EPlayerConnectionState::pfenum_Connecting) \
	op(EPlayerConnectionState::pfenum_Participating) \
	op(EPlayerConnectionState::pfenum_Participated) 

enum class EPlayerConnectionState : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EPlayerConnectionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
