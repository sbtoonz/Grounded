#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "GoapWorldStateEvaluator.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API UGoapWorldStateEvaluator : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange MemberWeightVariance;
    
    UGoapWorldStateEvaluator();
};

