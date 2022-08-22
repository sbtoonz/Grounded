#pragma once
#include "CoreMinimal.h"
#include "BTTask_MaineMoveTo.h"
#include "BTTask_CombatMoveTo.generated.h"

UCLASS()
class MAINE_API UBTTask_CombatMoveTo : public UBTTask_MaineMoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    float ReevaluateTime;
    
    UPROPERTY(Config, EditAnywhere)
    float FacingAngleTolerance;
    
    UPROPERTY(Config, EditAnywhere)
    float TargetMoveDistanceFail;
    
public:
    UBTTask_CombatMoveTo();
};

