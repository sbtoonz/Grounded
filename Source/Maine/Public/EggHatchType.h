#pragma once
#include "CoreMinimal.h"
#include "EggHatchType.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FEggHatchType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> FullActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    FEggHatchType();
};

