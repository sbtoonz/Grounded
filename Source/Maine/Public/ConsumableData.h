#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ChatterEventReference -FallbackName=ChatterEventReference
#include "EChatterConsumableType.h"
#include "ConsumableData.generated.h"

USTRUCT(BlueprintType)
struct FConsumableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDataTableRowHandle> StatusEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FChatterEventReference ConsumeChatterEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EChatterConsumableType ConsumeChatterType;
    
    MAINE_API FConsumableData();
};

