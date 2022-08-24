#pragma once
#include "CoreMinimal.h"
#include "EPoleVectorModeEnum.h"
#include "UObject/NoExportTypes.h"
#include "PowerIKPoleVector.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKPoleVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPoleVectorModeEnum> Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOffset;
    
    FPowerIKPoleVector();
};

