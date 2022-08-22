#pragma once
#include "CoreMinimal.h"
#include "MovementConfig.h"
#include "BehaviorMovementConfig.generated.h"

USTRUCT(BlueprintType)
struct FBehaviorMovementConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovementConfig DefaultConfig;
    
    MAINE_API FBehaviorMovementConfig();
};

