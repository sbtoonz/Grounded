#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnResourceResaerchedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnResourceResaerchedDelegate, FDataTableRowHandle, ItemRowHandle, ASurvivalPlayerState*, AcquirerPlayerState, const TArray<FDataTableRowHandle>&, RecipesLearned);

