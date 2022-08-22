#pragma once
#include "CoreMinimal.h"
#include "HeatHazardConditionState.generated.h"

USTRUCT(BlueprintType)
struct FHeatHazardConditionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsActive;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeWhenStateChanged;
    
    MAINE_API FHeatHazardConditionState();
};

