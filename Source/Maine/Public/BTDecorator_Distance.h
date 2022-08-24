#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_BlackboardLocation.h"
#include "EComparisonOperator.h"
#include "BTDecorator_Distance.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_Distance : public UBTDecorator_BlackboardLocation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UBTDecorator_Distance();
};

