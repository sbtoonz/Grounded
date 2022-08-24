#pragma once
#include "CoreMinimal.h"
#include "ConditionalCall.h"
#include "ConditionalExpression.h"
#include "Conditional.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FConditional {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalExpression> ExpressionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalCall> CallComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionalExpression Root;
    
public:
    FConditional();
};

