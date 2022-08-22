#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ItemAddedDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FItemAddedDelegate, UInventoryComponent*, InventoryComponentOwner, FDataTableRowHandle, ItemHandle, bool, IsNewItem, int32, Count, int32, TotalCount);

