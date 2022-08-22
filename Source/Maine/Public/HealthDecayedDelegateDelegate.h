#pragma once
#include "CoreMinimal.h"
#include "HealthDecayedDelegateDelegate.generated.h"

class UHealthComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthDecayedDelegate, UHealthComponent*, Sender);

