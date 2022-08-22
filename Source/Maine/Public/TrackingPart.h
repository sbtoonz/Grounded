#pragma once
#include "CoreMinimal.h"
#include "TrackingPart.generated.h"

USTRUCT(BlueprintType)
struct FTrackingPart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DelayTurnThreshold;
    
    UPROPERTY(EditAnywhere)
    float DelayTurnTimer;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    MAINE_API FTrackingPart();
};

