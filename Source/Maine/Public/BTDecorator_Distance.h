#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_BlackboardLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "BTDecorator_Distance.generated.h"

UCLASS()
class MAINE_API UBTDecorator_Distance : public UBTDecorator_BlackboardLocation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EComparisonOperator Operator;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
public:
    UBTDecorator_Distance();
};

