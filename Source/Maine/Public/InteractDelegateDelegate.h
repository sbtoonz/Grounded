#pragma once
#include "CoreMinimal.h"
#include "InteractDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractDelegate, AActor*, InstigatedBy);

