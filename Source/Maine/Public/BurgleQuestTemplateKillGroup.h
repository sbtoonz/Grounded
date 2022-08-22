#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BurgleQuestTemplate.h"
#include "BurgleQuestInstanceKillConfiguration.h"
#include "BurgleQuestKillGroupRewardConfig.h"
#include "BurgleQuestTemplateKillGroup.generated.h"

UCLASS(BlueprintType)
class MAINE_API UBurgleQuestTemplateKillGroup : public UBurgleQuestTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBurgleQuestInstanceKillConfiguration> Configs;
    
    UPROPERTY(EditAnywhere)
    TArray<FBurgleQuestKillGroupRewardConfig> Rewards;
    
    UBurgleQuestTemplateKillGroup();
    UFUNCTION(BlueprintPure)
    int32 GetSciencePerKill(const FGameplayTag& CreatureTag) const;
    
};

