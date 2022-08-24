#pragma once
#include "CoreMinimal.h"
#include "EBuildingState.h"
#include "OnBuildingStateChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingStateChanged, AActor*, InInstigator, EBuildingState, NewState);

