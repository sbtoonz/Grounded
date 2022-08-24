#pragma once
#include "CoreMinimal.h"
#include "OpenStateChangedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOpenStateChangedDelegate, bool, IsOpen, AActor*, Instigator);

