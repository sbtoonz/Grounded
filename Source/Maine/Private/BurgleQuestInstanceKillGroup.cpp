#include "BurgleQuestInstanceKillGroup.h"
#include "Net/UnrealNetwork.h"

class ASurvivalCharacter;
class ASurvivalPlayerState;

void UBurgleQuestInstanceKillGroup::OnPartyCreatureKill(ASurvivalCharacter* Creature, ASurvivalPlayerState* Player) {
}

void UBurgleQuestInstanceKillGroup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleQuestInstanceKillGroup, CreatureTag);
}

UBurgleQuestInstanceKillGroup::UBurgleQuestInstanceKillGroup() {
}

