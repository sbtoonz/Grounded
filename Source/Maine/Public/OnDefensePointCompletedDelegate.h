#pragma once
#include "CoreMinimal.h"
#include "OnDefensePointCompletedDelegate.generated.h"

class UDefensePointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDefensePointCompleted, UDefensePointComponent*, DefensePoint);

