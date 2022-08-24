#pragma once
#include "CoreMinimal.h"
#include "DefensePointActivateDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefensePointActivateDelegate, AActor*, Instigator);

