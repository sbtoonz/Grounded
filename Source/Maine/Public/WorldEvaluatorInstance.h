#pragma once
#include "CoreMinimal.h"
#include "WorldEvaluatorInstance.generated.h"

class UGoapWorldStateEvaluator;

USTRUCT(BlueprintType)
struct FWorldEvaluatorInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapWorldStateEvaluator* Evaluator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    MAINE_API FWorldEvaluatorInstance();
};

