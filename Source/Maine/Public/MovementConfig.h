#pragma once
#include "CoreMinimal.h"
#include "MovementConfig.generated.h"

USTRUCT(BlueprintType)
struct FMovementConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveRandomDeviation;
    
    MAINE_API FMovementConfig();
};

