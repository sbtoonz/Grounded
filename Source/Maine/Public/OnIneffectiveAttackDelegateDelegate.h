#pragma once
#include "CoreMinimal.h"
#include "ECannotDamageReason.h"
#include "OnIneffectiveAttackDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIneffectiveAttackDelegate, ECannotDamageReason, CannotDamageReason, int32, FailedDamageTypeFlags);

