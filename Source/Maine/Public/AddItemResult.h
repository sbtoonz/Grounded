#pragma once
#include "CoreMinimal.h"
#include "AddItemResult.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct MAINE_API FAddItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> WorldItems;
    
    FAddItemResult();
};

