#pragma once
#include "CoreMinimal.h"
#include "DropletMergeDelegateDelegate.generated.h"

class ASpawnedItemDroplet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropletMergeDelegate, ASpawnedItemDroplet*, Other);

