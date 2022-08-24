#pragma once
#include "CoreMinimal.h"
#include "DropletInteractionDelegateDelegate.generated.h"

class ASpawnedItemDroplet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropletInteractionDelegate, ASpawnedItemDroplet*, Droplet);

