#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BTTask_SetBlackboardFloat.generated.h"

UCLASS()
class MAINE_API UBTTask_SetBlackboardFloat : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Value;
    
public:
    UBTTask_SetBlackboardFloat();
};

