#pragma once
#include "CoreMinimal.h"
#include "BaseAnimEffect.h"
#include "RandomAnimEffect.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class MAINE_API URandomAnimEffect : public UBaseAnimEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> Anims;
    
public:
    URandomAnimEffect();
};

