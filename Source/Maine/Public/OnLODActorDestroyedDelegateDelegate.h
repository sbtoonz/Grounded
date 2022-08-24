#pragma once
#include "CoreMinimal.h"
#include "OnLODActorDestroyedDelegateDelegate.generated.h"

class UBaseLODActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLODActorDestroyedDelegate, UBaseLODActor*, LODActor);

