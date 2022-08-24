#pragma once
#include "CoreMinimal.h"
#include "VitalStatConstant.h"
#include "VitalStatFlyingTiredness.generated.h"

UCLASS(Blueprintable)
class MAINE_API UVitalStatFlyingTiredness : public UVitalStatConstant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhileGroundedRate;
    
public:
    UVitalStatFlyingTiredness();
};

