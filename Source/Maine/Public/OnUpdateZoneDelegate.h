#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnUpdateZoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpdateZone, const FDataTableRowHandle, PrevZoneData, const FDataTableRowHandle, NewZoneData, const bool, bIsSubmerged);

