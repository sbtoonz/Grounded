#pragma once
#include "CoreMinimal.h"
#include "BaseAnimEffect.h"
#include "AnimEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MAINE_API UAnimEffect : public UBaseAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Anim;
    
public:
    UAnimEffect();
};

