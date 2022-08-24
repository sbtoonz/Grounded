#pragma once
#include "CoreMinimal.h"
#include "HeatHazardConditionState.generated.h"

USTRUCT(BlueprintType)
struct FHeatHazardConditionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeWhenStateChanged;
    
    MAINE_API FHeatHazardConditionState();
};

