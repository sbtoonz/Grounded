#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnTechTreeUnlockedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTechTreeUnlockedDelegate, FDataTableRowHandle, TechTreeRowHandle, ASurvivalPlayerState*, UnlockerPlayerState);

