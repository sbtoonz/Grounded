#pragma once
#include "CoreMinimal.h"
#include "CozinessValueChangedDelegateDelegate.generated.h"

class UCozinessEvaluatorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCozinessValueChangedDelegate, UCozinessEvaluatorComponent*, Sender, int32, OldValue);

