#pragma once
#include "CoreMinimal.h"
#include "ESwimmingMovementType.h"
#include "SwimmingCharacterMovementSettings.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FSwimmingCharacterMovementSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwimmingMovementType MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalPullFactor;
    
    FSwimmingCharacterMovementSettings();
};

