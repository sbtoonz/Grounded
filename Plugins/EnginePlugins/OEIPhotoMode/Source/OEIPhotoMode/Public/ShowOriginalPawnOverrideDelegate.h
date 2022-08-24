#pragma once
#include "CoreMinimal.h"
#include "ShowOriginalPawnOverrideDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowOriginalPawnOverride, APawn*, OriginalPawn);

