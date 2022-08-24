#pragma once
#include "CoreMinimal.h"
#include "OnEndHaulingDelegate.generated.h"

class UHaulingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndHauling, UHaulingComponent*, Sender);

