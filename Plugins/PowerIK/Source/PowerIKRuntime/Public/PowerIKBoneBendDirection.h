#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PowerIKBoneBendDirection.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKBoneBendDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BendDirection;
    
    FPowerIKBoneBendDirection();
};

