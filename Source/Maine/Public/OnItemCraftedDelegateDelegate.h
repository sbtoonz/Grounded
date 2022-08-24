#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnItemCraftedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemCraftedDelegate, FDataTableRowHandle, ItemHandle, ASurvivalPlayerState*, InstigatorPlayerState);

