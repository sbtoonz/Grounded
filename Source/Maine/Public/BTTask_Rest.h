#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_Wait -FallbackName=BTTask_Wait
#include "BTTask_Rest.generated.h"

UCLASS()
class MAINE_API UBTTask_Rest : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LerpLocationTime;
    
    UPROPERTY(EditAnywhere)
    float LerpRotationTime;
    
public:
    UBTTask_Rest();
};

