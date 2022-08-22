#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_CreepyWatson.generated.h"

class UEQSRequest;

UCLASS()
class MAINE_API UBTTask_CreepyWatson : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float VisibleWarpDistance;
    
    UPROPERTY(EditAnywhere)
    float HiddenWarpDistance;
    
    UPROPERTY(EditAnywhere)
    UEQSRequest* WarpTargetQuery;
    
public:
    UBTTask_CreepyWatson();
};

