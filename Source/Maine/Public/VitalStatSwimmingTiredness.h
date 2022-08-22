#pragma once
#include "CoreMinimal.h"
#include "VitalStatConstant.h"
#include "VitalStatSwimmingTiredness.generated.h"

UCLASS()
class MAINE_API UVitalStatSwimmingTiredness : public UVitalStatConstant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float WhileRestingRate;
    
public:
    UVitalStatSwimmingTiredness();
};

