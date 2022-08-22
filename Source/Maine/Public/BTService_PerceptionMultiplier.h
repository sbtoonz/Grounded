#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "BTService_PerceptionMultiplier.generated.h"

UCLASS()
class MAINE_API UBTService_PerceptionMultiplier : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float PerceptionRangeMultiplier;
    
public:
    UBTService_PerceptionMultiplier();
};

