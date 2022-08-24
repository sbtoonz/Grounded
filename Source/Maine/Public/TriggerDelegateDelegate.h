#pragma once
#include "CoreMinimal.h"
#include "TriggerDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTriggerDelegate, AActor*, TriggerActor, AActor*, OtherActor);

