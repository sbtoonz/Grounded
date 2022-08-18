#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "ItemProcessingStateChange.generated.h"

USTRUCT(BlueprintType)
struct FItemProcessingStateChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ProcessingType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ResultItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ResultItemCount;
    
    MAINE_API FItemProcessingStateChange();
};

