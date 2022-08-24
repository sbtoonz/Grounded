// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ESubscriptionProviderStatus_generated_h
#error "ESubscriptionProviderStatus.generated.h already included, missing '#pragma once' in ESubscriptionProviderStatus.h"
#endif
#define PLAYFAB_ESubscriptionProviderStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ESubscriptionProviderStatus_h


#define FOREACH_ENUM_ESUBSCRIPTIONPROVIDERSTATUS(op) \
	op(ESubscriptionProviderStatus::pfenum_NoError) \
	op(ESubscriptionProviderStatus::pfenum_Cancelled) \
	op(ESubscriptionProviderStatus::pfenum_UnknownError) \
	op(ESubscriptionProviderStatus::pfenum_BillingError) \
	op(ESubscriptionProviderStatus::pfenum_ProductUnavailable) \
	op(ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange) \
	op(ESubscriptionProviderStatus::pfenum_FreeTrial) \
	op(ESubscriptionProviderStatus::pfenum_PaymentPending) 

enum class ESubscriptionProviderStatus;
template<> PLAYFAB_API UEnum* StaticEnum<ESubscriptionProviderStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
