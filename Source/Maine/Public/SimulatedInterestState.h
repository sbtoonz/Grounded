#pragma once
#include "CoreMinimal.h"
#include "GoapActionInstance.h"
#include "VitalState.h"
#include "InterestStateItemStack.h"
#include "SimulatedInterestState.generated.h"

USTRUCT(BlueprintType)
struct FSimulatedInterestState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TMap<FGoapActionInstance, float> ActionCooldowns;
    
    UPROPERTY()
    FVitalState Vitals;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FInterestStateItemStack> CarriedItems;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FInterestStateItemStack> GroundItems;
    
    MAINE_API FSimulatedInterestState();
};

