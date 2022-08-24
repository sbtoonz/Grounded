#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HarvestLootData.generated.h"

USTRUCT(BlueprintType)
struct FHarvestLootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    MAINE_API FHarvestLootData();
};

