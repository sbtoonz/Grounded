#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnNewRecipeKnownDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNewRecipeKnownDelegate, FDataTableRowHandle, RecipeRowHandle, ASurvivalPlayerState*, AcquirerPlayerState);

