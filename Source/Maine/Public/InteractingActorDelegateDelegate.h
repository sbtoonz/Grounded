#pragma once
#include "CoreMinimal.h"
#include "InteractingActorDelegateDelegate.generated.h"

class UWidgetInteractComponent;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractingActorDelegate, UWidgetInteractComponent*, Sender, AActor*, InteractingActor);

