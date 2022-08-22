#pragma once
#include "CoreMinimal.h"
#include "WorldEvaluatorInstance.generated.h"

class UGoapWorldStateEvaluator;

USTRUCT()
struct FWorldEvaluatorInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGoapWorldStateEvaluator* Evaluator;
    
    UPROPERTY()
    float Multiplier;
    
    MAINE_API FWorldEvaluatorInstance();
};

