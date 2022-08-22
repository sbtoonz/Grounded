#pragma once
#include "CoreMinimal.h"
#include "BTTask_SetDestinationBase.h"
#include "ERandomDestinationType.h"
#include "BTTask_SetRandomDestination.generated.h"

UCLASS()
class MAINE_API UBTTask_SetRandomDestination : public UBTTask_SetDestinationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ERandomDestinationType DestinationType;
    
public:
    UBTTask_SetRandomDestination();
};

