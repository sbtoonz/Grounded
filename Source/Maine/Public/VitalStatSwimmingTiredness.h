#pragma once
#include "CoreMinimal.h"
#include "VitalStatConstant.h"
#include "VitalStatSwimmingTiredness.generated.h"

UCLASS(Blueprintable)
class MAINE_API UVitalStatSwimmingTiredness : public UVitalStatConstant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhileRestingRate;
    
public:
    UVitalStatSwimmingTiredness();
};

