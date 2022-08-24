#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeRequirements.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRecipeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    FRecipeRequirements();
};

