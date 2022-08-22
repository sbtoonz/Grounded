#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "TechChipRedeemedDelegateDelegate.generated.h"

class ASurvivalPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTechChipRedeemedDelegate, const FDataTableRowHandle&, Item, ASurvivalPlayerController*, Instigator);

