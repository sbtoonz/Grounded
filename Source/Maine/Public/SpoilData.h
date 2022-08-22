#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ESpoilState.h"
#include "SpoilData.generated.h"

USTRUCT(BlueprintType)
struct FSpoilData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESpoilState SpoilState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle SpoiledResultItem;
    
    MAINE_API FSpoilData();
};

