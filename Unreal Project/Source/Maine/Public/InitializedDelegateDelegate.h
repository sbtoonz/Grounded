#pragma once
#include "CoreMinimal.h"
#include "InitializedDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInitializedDelegate, AActor*, InteractableActor);

