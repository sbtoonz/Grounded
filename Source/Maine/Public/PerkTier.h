#pragma once
#include "CoreMinimal.h"
#include "PerkCondition.h"
#include "PerkReward.h"
#include "PerkTier.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPerkTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerkCondition Condition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPerkReward Reward;
    
    FPerkTier();
};

