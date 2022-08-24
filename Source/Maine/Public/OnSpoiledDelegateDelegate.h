#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnSpoiledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpoiledDelegate, FDataTableRowHandle, OriginalItemHandle, FDataTableRowHandle, SpoiledResultItemHandle);

