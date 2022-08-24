#pragma once
#include "CoreMinimal.h"
#include "ELogicalOperator.h"
#include "ExpressionComponent.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FExpressionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELogicalOperator Operator;
    
public:
    FExpressionComponent();
};

