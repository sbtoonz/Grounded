#pragma once
#include "CoreMinimal.h"
#include "CloseDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCloseDelegate, AActor*, InteractableActor);

