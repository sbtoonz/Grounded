#pragma once
#include "CoreMinimal.h"
#include "BaseAnimEffect.h"
#include "AnimEffect.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class MAINE_API UAnimEffect : public UBaseAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Anim;
    
public:
    UAnimEffect();
};

