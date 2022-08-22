#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnInventoryItemSpoiledDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemSpoiled, FDataTableRowHandle, OriginalItemHandle, FDataTableRowHandle, SpoiledResultItemHandle);

