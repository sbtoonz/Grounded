#pragma once
#include "CoreMinimal.h"
#include "PerkCondition.h"
#include "PerkReward.h"
#include "PerkTier.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FPerkTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkReward Reward;
    
    FPerkTier();
};

