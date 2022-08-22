#pragma once
#include "CoreMinimal.h"
#include "EGlidingStyle.h"
#include "GlidingData.generated.h"

USTRUCT(BlueprintType)
struct FGlidingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGlidingStyle Style;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StaminaDrainPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForwardAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxForwardVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DescendSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DescendDrag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LiftAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseWhileSwimming: 1;
    
    MAINE_API FGlidingData();
};

