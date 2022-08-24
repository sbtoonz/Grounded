#pragma once
#include "CoreMinimal.h"
#include "PowerIKBoneLimit.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKBoneLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    FPowerIKBoneLimit();
};

