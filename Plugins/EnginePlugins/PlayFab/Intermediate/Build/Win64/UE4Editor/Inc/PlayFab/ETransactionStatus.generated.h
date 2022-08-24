// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ETransactionStatus_generated_h
#error "ETransactionStatus.generated.h already included, missing '#pragma once' in ETransactionStatus.h"
#endif
#define PLAYFAB_ETransactionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ETransactionStatus_h


#define FOREACH_ENUM_ETRANSACTIONSTATUS(op) \
	op(ETransactionStatus::pfenum_CreateCart) \
	op(ETransactionStatus::pfenum_Init) \
	op(ETransactionStatus::pfenum_Approved) \
	op(ETransactionStatus::pfenum_Succeeded) \
	op(ETransactionStatus::pfenum_FailedByProvider) \
	op(ETransactionStatus::pfenum_DisputePending) \
	op(ETransactionStatus::pfenum_RefundPending) \
	op(ETransactionStatus::pfenum_Refunded) \
	op(ETransactionStatus::pfenum_RefundFailed) \
	op(ETransactionStatus::pfenum_ChargedBack) \
	op(ETransactionStatus::pfenum_FailedByUber) \
	op(ETransactionStatus::pfenum_FailedByPlayFab) \
	op(ETransactionStatus::pfenum_Revoked) \
	op(ETransactionStatus::pfenum_TradePending) \
	op(ETransactionStatus::pfenum_Traded) \
	op(ETransactionStatus::pfenum_Upgraded) \
	op(ETransactionStatus::pfenum_StackPending) \
	op(ETransactionStatus::pfenum_Stacked) \
	op(ETransactionStatus::pfenum_Other) \
	op(ETransactionStatus::pfenum_Failed) 

enum class ETransactionStatus : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<ETransactionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
