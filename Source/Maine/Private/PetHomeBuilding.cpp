#include "PetHomeBuilding.h"
#include "Net/UnrealNetwork.h"

class UBaseLODActor;
class UTamedCreatureData;
class ASurvivalCreature;
class UCreatureLODActor;

void APetHomeBuilding::OnRep_StoredPetFull() {
}

void APetHomeBuilding::HandleStoredPetLODActorConvertedToProxyActor(UBaseLODActor* LODActor) {
}

void APetHomeBuilding::HandleStoredPetLODActorConvertedToFullActor(UBaseLODActor* LODActor) {
}

UTamedCreatureData* APetHomeBuilding::GetStoredTameData() const {
    return NULL;
}

ASurvivalCreature* APetHomeBuilding::GetStoredPetFull() const {
    return NULL;
}

UCreatureLODActor* APetHomeBuilding::GetStoredPet() const {
    return NULL;
}

void APetHomeBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APetHomeBuilding, StoredPetFull);
}

APetHomeBuilding::APetHomeBuilding() {
    this->StoredPetFull = NULL;
}

