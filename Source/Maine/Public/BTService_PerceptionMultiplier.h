#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_PerceptionMultiplier.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTService_PerceptionMultiplier : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerceptionRangeMultiplier;
    
public:
    UBTService_PerceptionMultiplier();
};

