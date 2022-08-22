#include "LadderBuilding.h"
#include "Net/UnrealNetwork.h"

void ALadderBuilding::OnRep_CombinedSpline() {
}

void ALadderBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALadderBuilding, CombinedSpline);
}

ALadderBuilding::ALadderBuilding() {
    this->CombinedSpline = NULL;
    this->InteractRangeCap = 150.00f;
}

