#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnTechUnlockDataUnlockedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTechUnlockDataUnlockedDelegate, FDataTableRowHandle, TechUnlockDataRowHandle, ASurvivalPlayerState*, UnlockerPlayerState);

