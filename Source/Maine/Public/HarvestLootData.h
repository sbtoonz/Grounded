#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "HarvestLootData.generated.h"

USTRUCT(BlueprintType)
struct FHarvestLootData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDataTableRowHandle ItemData;
    
    UPROPERTY()
    int32 Count;
    
    MAINE_API FHarvestLootData();
};

