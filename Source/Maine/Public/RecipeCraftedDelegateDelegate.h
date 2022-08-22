#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RecipeCraftedDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecipeCraftedDelegate, UInventoryComponent*, Sender, FDataTableRowHandle, RecipeHandle);

