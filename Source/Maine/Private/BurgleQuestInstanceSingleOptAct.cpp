#include "BurgleQuestInstanceSingleOptAct.h"
#include "Net/UnrealNetwork.h"

void UBurgleQuestInstanceSingleOptAct::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleQuestInstanceSingleOptAct, LocationOption);
}

UBurgleQuestInstanceSingleOptAct::UBurgleQuestInstanceSingleOptAct() {
    this->LocationOption = NULL;
}

