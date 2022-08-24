#pragma once
#include "CoreMinimal.h"
#include "AICombatAction.generated.h"

class UAnimMontage;
class UAttack;
class AActor;

USTRUCT(BlueprintType)
struct FAICombatAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttack* DesiredAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimPreAttack;
    
    MAINE_API FAICombatAction();
};

