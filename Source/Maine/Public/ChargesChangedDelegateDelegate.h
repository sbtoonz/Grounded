#pragma once
#include "CoreMinimal.h"
#include "ChargesChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargesChangedDelegate, int32, CurrentChargeCount);

