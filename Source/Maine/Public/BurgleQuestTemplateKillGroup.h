#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestTemplate.h"
#include "BurgleQuestInstanceKillConfiguration.h"
#include "BurgleQuestKillGroupRewardConfig.h"
#include "GameplayTagContainer.h"
#include "BurgleQuestTemplateKillGroup.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBurgleQuestTemplateKillGroup : public UBurgleQuestTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBurgleQuestInstanceKillConfiguration> Configs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBurgleQuestKillGroupRewardConfig> Rewards;
    
    UBurgleQuestTemplateKillGroup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSciencePerKill(const FGameplayTag& CreatureTag) const;
    
};

