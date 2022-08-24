#pragma once
#include "CoreMinimal.h"
#include "AIEQSParameter.h"
#include "Attack_PreferredMaxAttackDistance.generated.h"

UCLASS(Blueprintable)
class MAINE_API UAttack_PreferredMaxAttackDistance : public UAIEQSParameter {
    GENERATED_BODY()
public:
    UAttack_PreferredMaxAttackDistance();
};

