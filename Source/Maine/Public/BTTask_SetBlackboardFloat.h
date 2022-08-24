#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_SetBlackboardFloat.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SetBlackboardFloat : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    UBTTask_SetBlackboardFloat();
};

