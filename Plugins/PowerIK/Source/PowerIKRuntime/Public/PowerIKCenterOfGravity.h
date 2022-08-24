#pragma once
#include "CoreMinimal.h"
#include "PowerIKCenterOfGravity.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKCenterOfGravity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VertAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullBodyAmount;
    
    FPowerIKCenterOfGravity();
};

