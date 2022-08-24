#pragma once
#include "CoreMinimal.h"
#include "OnInteractionWarningDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionWarningDelegate, UObject*, Interactable, FText, WarningText);

