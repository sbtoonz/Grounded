#pragma once
#include "CoreMinimal.h"
#include "VitalStatConstant.h"
#include "VitalStatFlyingTiredness.generated.h"

UCLASS()
class MAINE_API UVitalStatFlyingTiredness : public UVitalStatConstant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float WhileGroundedRate;
    
public:
    UVitalStatFlyingTiredness();
};

