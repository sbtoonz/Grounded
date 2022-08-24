#pragma once
#include "CoreMinimal.h"
#include "Attack_PreferredMaxAttackDistance.h"
#include "Attack_PreferredMaxAttackDistanceWithTargetRadius.generated.h"

UCLASS(Blueprintable)
class MAINE_API UAttack_PreferredMaxAttackDistanceWithTargetRadius : public UAttack_PreferredMaxAttackDistance {
    GENERATED_BODY()
public:
    UAttack_PreferredMaxAttackDistanceWithTargetRadius();
};

