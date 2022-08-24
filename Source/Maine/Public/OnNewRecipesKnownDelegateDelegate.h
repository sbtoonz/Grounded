#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERecipeUnlockSource.h"
#include "OnNewRecipesKnownDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnNewRecipesKnownDelegate, const TArray<FDataTableRowHandle>&, RecipeRowHandles, ASurvivalPlayerState*, AcquirerPlayerState, ERecipeUnlockSource, RecipeUnlockSource, const FString&, DisplayName);

