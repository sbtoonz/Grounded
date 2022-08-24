#pragma once
#include "CoreMinimal.h"
#include "OnInteractableChangedDelegateDelegate.generated.h"

class UInteractableInterface;
class IInteractableInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableChangedDelegate, TScriptInterface<IInteractableInterface>, Interactable);

