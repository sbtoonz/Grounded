#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnResourceResaerchedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnResourceResaerchedDelegate, FDataTableRowHandle, ItemRowHandle, ASurvivalPlayerState*, AcquirerPlayerState, const TArray<FDataTableRowHandle>&, RecipesLearned);

