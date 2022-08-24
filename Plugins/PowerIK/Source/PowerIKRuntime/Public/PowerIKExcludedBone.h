#pragma once
#include "CoreMinimal.h"
#include "PowerIKExcludedBone.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKExcludedBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    FPowerIKExcludedBone();
};

