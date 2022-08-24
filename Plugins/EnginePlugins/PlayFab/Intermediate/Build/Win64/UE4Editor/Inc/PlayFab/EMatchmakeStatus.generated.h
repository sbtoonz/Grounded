// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EMatchmakeStatus_generated_h
#error "EMatchmakeStatus.generated.h already included, missing '#pragma once' in EMatchmakeStatus.h"
#endif
#define PLAYFAB_EMatchmakeStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EMatchmakeStatus_h


#define FOREACH_ENUM_EMATCHMAKESTATUS(op) \
	op(EMatchmakeStatus::pfenum_Complete) \
	op(EMatchmakeStatus::pfenum_Waiting) \
	op(EMatchmakeStatus::pfenum_GameNotFound) \
	op(EMatchmakeStatus::pfenum_NoAvailableSlots) \
	op(EMatchmakeStatus::pfenum_SessionClosed) 

enum class EMatchmakeStatus : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EMatchmakeStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
