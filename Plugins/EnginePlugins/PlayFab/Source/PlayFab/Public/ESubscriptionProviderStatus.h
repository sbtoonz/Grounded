#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionProviderStatus.generated.h"

UENUM()
enum class ESubscriptionProviderStatus {
    pfenum_NoError,
    pfenum_Cancelled,
    pfenum_UnknownError,
    pfenum_BillingError,
    pfenum_ProductUnavailable,
    pfenum_CustomerDidNotAcceptPriceChange,
    pfenum_FreeTrial,
    pfenum_PaymentPending,
    pfenum_MAX UMETA(Hidden),
};

