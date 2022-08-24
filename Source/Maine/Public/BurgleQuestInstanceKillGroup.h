#pragma once
#include "CoreMinimal.h"
#include "BurgleQuestInstance.h"
#include "GameplayTagContainer.h"
#include "BurgleQuestInstanceKillGroup.generated.h"

class ASurvivalCharacter;
class ASurvivalPlayerState;

UCLASS(Blueprintable)
class MAINE_API UBurgleQuestInstanceKillGroup : public UBurgleQuestInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CreatureTag;
    
    UBurgleQuestInstanceKillGroup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPartyCreatureKill(ASurvivalCharacter* Creature, ASurvivalPlayerState* Player);
    
};

