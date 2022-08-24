// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EStatisticVersionStatus_generated_h
#error "EStatisticVersionStatus.generated.h already included, missing '#pragma once' in EStatisticVersionStatus.h"
#endif
#define PLAYFAB_EStatisticVersionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EStatisticVersionStatus_h


#define FOREACH_ENUM_ESTATISTICVERSIONSTATUS(op) \
	op(EStatisticVersionStatus::pfenum_Active) \
	op(EStatisticVersionStatus::pfenum_SnapshotPending) \
	op(EStatisticVersionStatus::pfenum_Snapshot) \
	op(EStatisticVersionStatus::pfenum_ArchivalPending) \
	op(EStatisticVersionStatus::pfenum_Archived) 

enum class EStatisticVersionStatus;
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticVersionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
