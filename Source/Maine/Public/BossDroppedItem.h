#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BossDroppedItem.generated.h"

USTRUCT(BlueprintType)
struct FBossDroppedItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDataTableRowHandle ItemHandle;
    
    UPROPERTY()
    FVector WorldLocation;
    
    MAINE_API FBossDroppedItem();
};

