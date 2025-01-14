#pragma once
#include "CoreMinimal.h"
#include "OnProcessingItemsChangedDelegate.generated.h"

class AItemProcessingBuilding;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProcessingItemsChanged, AItemProcessingBuilding*, Sender);

