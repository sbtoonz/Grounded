#pragma once
#include "CoreMinimal.h"
#include "SaveLimits.generated.h"

USTRUCT(BlueprintType)
struct SHAREDSAVEAPI_API FSaveLimits {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ownedSlots;
    
    UPROPERTY(EditAnywhere)
    uint32 memberSlots;
    
    FSaveLimits();
};

