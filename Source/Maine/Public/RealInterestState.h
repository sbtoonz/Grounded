#pragma once
#include "CoreMinimal.h"
#include "VitalState.h"
#include "GoapActionInstance.h"
#include "RealInterestState.generated.h"

USTRUCT(BlueprintType)
struct FRealInterestState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVitalState Vitals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGoapActionInstance, float> ActionCooldowns;
    
    MAINE_API FRealInterestState();
};

