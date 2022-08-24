#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerIKGroundFoot.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKGroundFoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NormalizePulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositivePullFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NegativePullFactor;
    
    FPowerIKGroundFoot();
};

