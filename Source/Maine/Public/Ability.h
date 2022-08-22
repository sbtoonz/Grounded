#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Ability.generated.h"

class UAttack;

UCLASS(BlueprintType, EditInlineNew)
class MAINE_API UAbility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UAttack* Attack;
    
public:
    UAbility();
    UFUNCTION(BlueprintPure)
    float GetCooldownTimeRemaining() const;
    
};

