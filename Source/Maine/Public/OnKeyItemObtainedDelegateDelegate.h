#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnKeyItemObtainedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKeyItemObtainedDelegate, FDataTableRowHandle, KeyItemRowHandle, ASurvivalPlayerState*, AcquirerPlayerState, const TArray<FDataTableRowHandle>&, RecipesLearned);

