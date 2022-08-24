#pragma once
#include "CoreMinimal.h"
#include "GoapWorldStateEvaluator.h"
#include "GoapColonyPopulationEvaluator.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class MAINE_API UGoapColonyPopulationEvaluator : public UGoapWorldStateEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PopulationValue;
    
    UGoapColonyPopulationEvaluator();
};

