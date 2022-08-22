#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RecipeProductionItem.generated.h"

class AProductionBuilding;
class UItem;

USTRUCT(BlueprintType)
struct MAINE_API FRecipeProductionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FDataTableRowHandle RecipeRowHandle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FinishTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    AProductionBuilding* Owner;
    
public:
    FRecipeProductionItem();
};

