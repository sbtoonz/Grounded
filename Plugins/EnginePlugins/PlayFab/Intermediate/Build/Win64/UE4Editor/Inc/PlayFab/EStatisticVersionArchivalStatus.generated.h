// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EStatisticVersionArchivalStatus_generated_h
#error "EStatisticVersionArchivalStatus.generated.h already included, missing '#pragma once' in EStatisticVersionArchivalStatus.h"
#endif
#define PLAYFAB_EStatisticVersionArchivalStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EStatisticVersionArchivalStatus_h


#define FOREACH_ENUM_ESTATISTICVERSIONARCHIVALSTATUS(op) \
	op(EStatisticVersionArchivalStatus::pfenum_NotScheduled) \
	op(EStatisticVersionArchivalStatus::pfenum_Scheduled) \
	op(EStatisticVersionArchivalStatus::pfenum_Queued) \
	op(EStatisticVersionArchivalStatus::pfenum_InProgress) \
	op(EStatisticVersionArchivalStatus::pfenum_Complete) 

enum class EStatisticVersionArchivalStatus;
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticVersionArchivalStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
