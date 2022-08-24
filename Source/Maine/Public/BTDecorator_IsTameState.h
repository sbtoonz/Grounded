#pragma once
#include "CoreMinimal.h"
#include "ETamedState.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsTameState.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsTameState : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETamedState State;
    
public:
    UBTDecorator_IsTameState();
};

