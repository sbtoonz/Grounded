#pragma once
#include "CoreMinimal.h"
#include "AICombatAction.generated.h"

class UAttack;
class AActor;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FAICombatAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* TargetActor;
    
    UPROPERTY(EditAnywhere)
    UAttack* DesiredAttack;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* AnimPreAttack;
    
    MAINE_API FAICombatAction();
};

