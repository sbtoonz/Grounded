#pragma once
#include "CoreMinimal.h"
#include "BaseAnimEffect.h"
#include "RandomAnimEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MAINE_API URandomAnimEffect : public UBaseAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Anims;
    
public:
    URandomAnimEffect();
};

