#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeCraftedDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecipeCraftedDelegate, UInventoryComponent*, Sender, FDataTableRowHandle, RecipeHandle);

