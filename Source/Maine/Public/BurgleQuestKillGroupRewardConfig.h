#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BurgleQuestKillGroupRewardConfig.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestKillGroupRewardConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CreatureTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SciencePerKill;
    
    FBurgleQuestKillGroupRewardConfig();
};

