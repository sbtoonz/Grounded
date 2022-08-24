#include "BurgleObjectiveSimple.h"
#include "Net/UnrealNetwork.h"

void UBurgleObjectiveSimple::CompleteObjective() {
}

void UBurgleObjectiveSimple::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurgleObjectiveSimple, bIsComplete);
}

UBurgleObjectiveSimple::UBurgleObjectiveSimple() {
    this->bIsComplete = false;
}

