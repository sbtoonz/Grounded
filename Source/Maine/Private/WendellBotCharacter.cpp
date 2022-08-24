#include "WendellBotCharacter.h"
#include "Net/UnrealNetwork.h"
#include "PersistenceComponent.h"

class AActor;

void AWendellBotCharacter::HandleGameRest(float RestDuration) {
}

bool AWendellBotCharacter::GetIsActivated() const {
    return false;
}

void AWendellBotCharacter::ActivateFollow(AActor* Activator) {
}

void AWendellBotCharacter::Activate() {
}

void AWendellBotCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWendellBotCharacter, bActivated);
}

AWendellBotCharacter::AWendellBotCharacter() {
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->bActivated = false;
}

