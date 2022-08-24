#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BuildingCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingCompleteDelegate, FDataTableRowHandle, BuildingRowHandle);

