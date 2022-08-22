#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "EMovementSpeed.h"
#include "BTTask_ClimbSpline.generated.h"

UCLASS()
class MAINE_API UBTTask_ClimbSpline : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMovementSpeed MovementSpeed;
    
    UPROPERTY(EditAnywhere)
    float Direction;
    
    UBTTask_ClimbSpline();
};

