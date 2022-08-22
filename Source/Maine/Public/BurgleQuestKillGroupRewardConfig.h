#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BurgleQuestKillGroupRewardConfig.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FBurgleQuestKillGroupRewardConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag CreatureTag;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SciencePerKill;
    
    FBurgleQuestKillGroupRewardConfig();
};

