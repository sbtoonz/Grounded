#pragma once
#include "CoreMinimal.h"
#include "OnRestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRest, float, RestDuration);

