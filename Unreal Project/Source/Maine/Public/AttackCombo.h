#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackCombo.generated.h"

class UAttack;

UCLASS(EditInlineNew)
class MAINE_API UAttackCombo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UAttack*> Attacks;
    
public:
    UAttackCombo();
};

