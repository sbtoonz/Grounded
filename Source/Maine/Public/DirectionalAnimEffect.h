#pragma once
#include "CoreMinimal.h"
#include "BaseAnimEffect.h"
#include "EHitMotionType.h"
#include "DirectionalAnimEffect.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class MAINE_API UDirectionalAnimEffect : public UBaseAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EHitMotionType, UAnimMontage*> DirectionalAnims;
    
    UPROPERTY(EditAnywhere)
    float AngleThreshold;
    
public:
    UDirectionalAnimEffect();
};

