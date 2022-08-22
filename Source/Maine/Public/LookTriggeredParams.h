#pragma once
#include "CoreMinimal.h"
#include "LookTriggeredParams.generated.h"

class ASurvivalCharacter;

USTRUCT(BlueprintType)
struct FLookTriggeredParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ASurvivalCharacter* TriggeringCharacter;
    
    MAINE_API FLookTriggeredParams();
};

