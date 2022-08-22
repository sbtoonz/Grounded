#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "AllowableBuildingPenetration.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FAllowableBuildingPenetration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange Depth;
    
    UPROPERTY(EditAnywhere)
    FFloatRange Normal;
    
    FAllowableBuildingPenetration();
};

