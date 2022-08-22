#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnUpdateZoneDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpdateZone, const FDataTableRowHandle, PrevZoneData, const FDataTableRowHandle, NewZoneData, const bool, bIsSubmerged);

