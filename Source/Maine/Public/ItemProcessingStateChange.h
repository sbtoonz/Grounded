#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
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

