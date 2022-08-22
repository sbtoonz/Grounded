#pragma once
#include "CoreMinimal.h"
#include "VitalState.h"
#include "GoapActionInstance.h"
#include "RealInterestState.generated.h"

USTRUCT(BlueprintType)
struct FRealInterestState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVitalState Vitals;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGoapActionInstance, float> ActionCooldowns;
    
    MAINE_API FRealInterestState();
};

