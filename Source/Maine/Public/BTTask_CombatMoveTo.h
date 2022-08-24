#pragma once
#include "CoreMinimal.h"
#include "BTTask_MaineMoveTo.h"
#include "BTTask_CombatMoveTo.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_CombatMoveTo : public UBTTask_MaineMoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReevaluateTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacingAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetMoveDistanceFail;
    
public:
    UBTTask_CombatMoveTo();
};

