// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ETaskInstanceStatus_generated_h
#error "ETaskInstanceStatus.generated.h already included, missing '#pragma once' in ETaskInstanceStatus.h"
#endif
#define PLAYFAB_ETaskInstanceStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ETaskInstanceStatus_h


#define FOREACH_ENUM_ETASKINSTANCESTATUS(op) \
	op(ETaskInstanceStatus::pfenum_Succeeded) \
	op(ETaskInstanceStatus::pfenum_Starting) \
	op(ETaskInstanceStatus::pfenum_InProgress) \
	op(ETaskInstanceStatus::pfenum_Failed) \
	op(ETaskInstanceStatus::pfenum_Aborted) \
	op(ETaskInstanceStatus::pfenum_Stalled) 

enum class ETaskInstanceStatus : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<ETaskInstanceStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
