#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnRecipeCraftedDelegateDelegate.generated.h"

class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRecipeCraftedDelegate, FDataTableRowHandle, RecipeHandle, ASurvivalPlayerState*, InstigatorPlayerState);

