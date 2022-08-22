#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_SteeringTargeted.generated.h"

UCLASS()
class MAINE_API UBTTask_SteeringTargeted : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SteeringTargeted();
};

