#include "SignBuilding.h"
#include "Net/UnrealNetwork.h"

void ASignBuilding::OnRep_CurrentSignDataHandle() {
}

TArray<FDataTableRowHandle> ASignBuilding::GetValidSignData() const {
    return TArray<FDataTableRowHandle>();
}

FDataTableRowHandle ASignBuilding::GetSelectedSignData() const {
    return FDataTableRowHandle{};
}

void ASignBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASignBuilding, SelectedSignDataHandle);
}

ASignBuilding::ASignBuilding() {
    this->MaterialIndex = 0;
}

