#pragma once
#include "CoreMinimal.h"
#include "AddItemResult.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct MAINE_API FAddItemResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UItem*> InventoryItems;
    
    UPROPERTY()
    TArray<UItem*> WorldItems;
    
    FAddItemResult();
};

