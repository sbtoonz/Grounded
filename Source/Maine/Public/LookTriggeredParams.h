#pragma once
#include "CoreMinimal.h"
#include "LookTriggeredParams.generated.h"

class ASurvivalCharacter;

USTRUCT(BlueprintType)
struct FLookTriggeredParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASurvivalCharacter* TriggeringCharacter;
    
    MAINE_API FLookTriggeredParams();
};

