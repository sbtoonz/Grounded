#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_StopPhysMovement.generated.h"

UCLASS()
class MAINE_API UBTTask_StopPhysMovement : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_StopPhysMovement();
};

