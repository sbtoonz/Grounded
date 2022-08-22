#pragma once
#include "CoreMinimal.h"
#include "GoapWorldStateEvaluator.h"
#include "GoapColonyPopulationEvaluator.generated.h"

class UCurveFloat;

UCLASS()
class MAINE_API UGoapColonyPopulationEvaluator : public UGoapWorldStateEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* PopulationValue;
    
    UGoapColonyPopulationEvaluator();
};

