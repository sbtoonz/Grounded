#include "ChairBuilding.h"
#include "Net/UnrealNetwork.h"

class AActor;
class ASurvivalPlayerCharacter;

void AChairBuilding::SetupSittingCharacterTransform(const FTransform& Transform) {
}

void AChairBuilding::ResetChairCooldown() {
}

void AChairBuilding::OnRep_SittingCharacter(ASurvivalPlayerCharacter* PreviousCharacter) {
}

void AChairBuilding::OnCharacterSittingChanged(bool bSitting) {
}

void AChairBuilding::OnCharacterHealthStateChanged(EHealthState NewHealthState) {
}

void AChairBuilding::OnCharacterDestroyed(AActor* DestroyedActor) {
}

bool AChairBuilding::IsOccupied() const {
    return false;
}


void AChairBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AChairBuilding, SittingCharacter);
    DOREPLIFETIME(AChairBuilding, bUseCooldown);
}

AChairBuilding::AChairBuilding() {
    this->SittingCharacter = NULL;
    this->bUseCooldown = false;
    this->SittingMontage = NULL;
}

