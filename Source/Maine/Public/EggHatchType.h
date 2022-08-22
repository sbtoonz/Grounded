#pragma once
#include "CoreMinimal.h"
#include "EggHatchType.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FEggHatchType {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> FullActor;
    
    UPROPERTY(EditDefaultsOnly)
    float Ratio;
    
    FEggHatchType();
};

