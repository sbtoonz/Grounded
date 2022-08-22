#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BurgleQuestInstanceKillGroup.generated.h"

class ASurvivalCharacter;
class ASurvivalPlayerState;

UCLASS()
class MAINE_API UBurgleQuestInstanceKillGroup : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FGameplayTag CreatureTag;
    
    UBurgleQuestInstanceKillGroup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnPartyCreatureKill(ASurvivalCharacter* Creature, ASurvivalPlayerState* Player);
    
};

