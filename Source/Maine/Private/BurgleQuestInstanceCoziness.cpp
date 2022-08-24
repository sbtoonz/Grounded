#include "BurgleQuestInstanceCoziness.h"
#include "Net/UnrealNetwork.h"

class UPartyComponent;

void UBurgleQuestInstanceCoziness::OnCozinessLevelAchieved(UPartyComponent* Sender, int32 NewLevel) {
}

void UBurgleQuestInstanceCoziness::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleQuestInstanceCoziness, CozinessLevel);
}

UBurgleQuestInstanceCoziness::UBurgleQuestInstanceCoziness() {
    this->CozinessLevel = 0;
}

