#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BTTask_WaitButKeepUp.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UBTTask_WaitButKeepUp : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterDistanceTolerance;
    
public:
    UBTTask_WaitButKeepUp();
};

