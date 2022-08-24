#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnInventoryItemStashedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemStashed, FDataTableRowHandle, ItemRowHandle, int32, Count);

