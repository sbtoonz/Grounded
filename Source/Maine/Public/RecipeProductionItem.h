#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeProductionItem.generated.h"

class AProductionBuilding;
class UItem;

USTRUCT(BlueprintType)
struct MAINE_API FRecipeProductionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RecipeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FinishTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AProductionBuilding* Owner;
    
public:
    FRecipeProductionItem();
};

