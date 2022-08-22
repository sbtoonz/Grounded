#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_Wait -FallbackName=BTTask_Wait
#include "BTTask_WaitButKeepUp.generated.h"

UCLASS(Abstract)
class MAINE_API UBTTask_WaitButKeepUp : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MasterDistanceTolerance;
    
public:
    UBTTask_WaitButKeepUp();
};

