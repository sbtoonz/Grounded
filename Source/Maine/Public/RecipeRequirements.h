#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RecipeRequirements.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRecipeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle Item;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ItemCount;
    
    FRecipeRequirements();
};

