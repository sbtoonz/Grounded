#pragma once
#include "CoreMinimal.h"
#include "BaseAnimEffect.h"
#include "EHitMotionType.h"
#include "DirectionalAnimEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MAINE_API UDirectionalAnimEffect : public UBaseAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHitMotionType, UAnimMontage*> DirectionalAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThreshold;
    
public:
    UDirectionalAnimEffect();
};

