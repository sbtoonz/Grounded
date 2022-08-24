#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnTechUnlockDataUnlockedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTechUnlockDataUnlockedDelegate, FDataTableRowHandle, TechUnlockDataRowHandle, ASurvivalPlayerState*, UnlockerPlayerState);

