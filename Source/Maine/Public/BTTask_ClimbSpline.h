#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EMovementSpeed.h"
#include "BTTask_ClimbSpline.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_ClimbSpline : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementSpeed MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UBTTask_ClimbSpline();
};

