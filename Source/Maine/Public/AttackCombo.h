#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
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

