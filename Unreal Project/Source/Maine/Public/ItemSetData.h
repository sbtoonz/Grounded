#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "ItemSetData.generated.h"

USTRUCT(BlueprintType)
struct FItemSetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> Items;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> StatusEffects;
    
    MAINE_API FItemSetData();
};

