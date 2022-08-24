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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGoapActionInstance, float> ActionCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVitalState Vitals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterestStateItemStack> CarriedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterestStateItemStack> GroundItems;
    
    MAINE_API FSimulatedInterestState();
};

