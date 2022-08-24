#pragma once
#include "CoreMinimal.h"
#include "OnInteractDelegateDelegate.generated.h"

class UInteractableInterface;
class IInteractableInterface;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractDelegate, TScriptInterface<IInteractableInterface>, Interactable, AActor*, ThisActor);

