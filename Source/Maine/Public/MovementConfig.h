#pragma once
#include "CoreMinimal.h"
#include "MovementConfig.generated.h"

USTRUCT(BlueprintType)
struct FMovementConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxMoveDuration;
    
    UPROPERTY(EditAnywhere)
    float MaxMoveRandomDeviation;
    
    MAINE_API FMovementConfig();
};

