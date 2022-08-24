#pragma once
#include "CoreMinimal.h"
#include "HideOriginalPawnOverrideDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHideOriginalPawnOverride, APawn*, OriginalPawn);

