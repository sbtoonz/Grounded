#include "Switch.h"
#include "Net/UnrealNetwork.h"
#include "ObsidianIDComponent.h"
#include "PersistenceComponent.h"
#include "OCLComponent.h"

class AActor;

void ASwitch::SetUsesRemaining(float UsesRemaining) {
}




void ASwitch::NativeOnUpdateVisualState(bool IsOpen) {
}

void ASwitch::NativeOnOpenStateChanged(bool IsOpen, AActor* ActorInstigator) {
}

void ASwitch::NativeOnLockStateChanged(bool IsLocked) {
}

void ASwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASwitch, NumUsesRemaining);
}

ASwitch::ASwitch() {
    this->SwitchMode = ESwitchMode::AllowNumUses;
    this->NumUsesRemaining = 1;
    this->OCLComponent = CreateDefaultSubobject<UOCLComponent>(TEXT("OCLComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

