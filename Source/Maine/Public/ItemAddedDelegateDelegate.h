#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemAddedDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FItemAddedDelegate, UInventoryComponent*, InventoryComponentOwner, FDataTableRowHandle, ItemHandle, bool, IsNewItem, int32, Count, int32, TotalCount);

