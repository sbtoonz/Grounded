#include "TypeRestrictedStorageBuilding.h"
#include "Net/UnrealNetwork.h"

class AActor;

void ATypeRestrictedStorageBuilding::OnRep_StoredItems() {
}

void ATypeRestrictedStorageBuilding::MulticastPlaceItem_Implementation() {
}

bool ATypeRestrictedStorageBuilding::HasPlaceableItem(const AActor* InstigatedBy) const {
    return false;
}

void ATypeRestrictedStorageBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATypeRestrictedStorageBuilding, StoredItems);
}

ATypeRestrictedStorageBuilding::ATypeRestrictedStorageBuilding() {
    this->StoredMesh = NULL;
    this->Capacity = 1;
    this->OnItemAddedSFX = NULL;
}

