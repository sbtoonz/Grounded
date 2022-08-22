#pragma once
#include "CoreMinimal.h"
#include "ESwimmingMovementType.h"
#include "SwimmingCharacterMovementSettings.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FSwimmingCharacterMovementSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESwimmingMovementType MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizontalFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalPullFactor;
    
    FSwimmingCharacterMovementSettings();
};

