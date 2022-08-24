// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ETradeStatus_generated_h
#error "ETradeStatus.generated.h already included, missing '#pragma once' in ETradeStatus.h"
#endif
#define PLAYFAB_ETradeStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ETradeStatus_h


#define FOREACH_ENUM_ETRADESTATUS(op) \
	op(ETradeStatus::pfenum_Invalid) \
	op(ETradeStatus::pfenum_Opening) \
	op(ETradeStatus::pfenum_Open) \
	op(ETradeStatus::pfenum_Accepting) \
	op(ETradeStatus::pfenum_Accepted) \
	op(ETradeStatus::pfenum_Filled) \
	op(ETradeStatus::pfenum_Cancelled) 

enum class ETradeStatus : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<ETradeStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
