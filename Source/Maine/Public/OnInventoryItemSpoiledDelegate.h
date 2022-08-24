#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnInventoryItemSpoiledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemSpoiled, FDataTableRowHandle, OriginalItemHandle, FDataTableRowHandle, SpoiledResultItemHandle);

