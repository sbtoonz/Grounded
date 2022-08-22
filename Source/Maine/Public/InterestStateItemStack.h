#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "InterestStateItemStack.generated.h"

USTRUCT(BlueprintType)
struct FInterestStateItemStack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDataTableRowHandle Item;
    
    MAINE_API FInterestStateItemStack();
};

