#pragma once
#include "CoreMinimal.h"
#include "ETamedState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BTDecorator_IsTameState.generated.h"

UCLASS()
class MAINE_API UBTDecorator_IsTameState : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETamedState State;
    
public:
    UBTDecorator_IsTameState();
};

