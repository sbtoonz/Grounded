#include "SpawnAssociatedActor.h"
#include "Net/UnrealNetwork.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

class UBaseLODActor;

void ASpawnAssociatedActor::OnRep_IsEnabled() {
}

void ASpawnAssociatedActor::OnRegisteredActorDestroyed(UBaseLODActor* LODActor) {
}

bool ASpawnAssociatedActor::IsEnabled() const {
    return false;
}

void ASpawnAssociatedActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnAssociatedActor, bIsEnabled);
}

ASpawnAssociatedActor::ASpawnAssociatedActor() {
    this->bIsEnabled = false;
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

