#pragma once
#include "CoreMinimal.h"
#include "AIEQSParameter.h"
#include "Attack_MinAttackDistance.generated.h"

UCLASS(Blueprintable)
class MAINE_API UAttack_MinAttackDistance : public UAIEQSParameter {
    GENERATED_BODY()
public:
    UAttack_MinAttackDistance();
};

