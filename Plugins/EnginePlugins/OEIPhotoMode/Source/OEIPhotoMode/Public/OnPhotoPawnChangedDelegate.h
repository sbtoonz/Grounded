#pragma once
#include "CoreMinimal.h"
#include "OnPhotoPawnChangedDelegate.generated.h"

class APhotoPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhotoPawnChanged, APhotoPawn*, PhotoPawn);

