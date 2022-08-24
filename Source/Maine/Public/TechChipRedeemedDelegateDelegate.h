#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TechChipRedeemedDelegateDelegate.generated.h"

class ASurvivalPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTechChipRedeemedDelegate, const FDataTableRowHandle&, Item, ASurvivalPlayerController*, Instigator);

