#pragma once
#include "CoreMinimal.h"
#include "CozinessLevelChangedDelegateDelegate.generated.h"

class UCozinessEvaluatorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCozinessLevelChangedDelegate, UCozinessEvaluatorComponent*, Sender, int32, OldLevel);

