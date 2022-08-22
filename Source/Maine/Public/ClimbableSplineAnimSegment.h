#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "ClimbableSplineAnimSegment.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FClimbableSplineAnimSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange TimeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Animation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    MAINE_API FClimbableSplineAnimSegment();
};

