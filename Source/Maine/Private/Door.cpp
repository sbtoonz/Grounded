#include "Door.h"
#include "PersistenceComponent.h"
#include "OCLComponent.h"
#include "TerminalSwitchListener.h"
#include "ObsidianIDComponent.h"

class AActor;


void ADoor::OnTimelineCoreEvent(int32 Event) {
}



void ADoor::OnDeath(const FDamageInfo& DamageInfo) {
}

void ADoor::NativeOnUpdateVisualState(bool IsOpen) {
}

void ADoor::NativeOnOpenStateChanged(bool IsOpen, AActor* ActorInstigator) {
}

void ADoor::NativeOnLockStateChanged(bool IsLocked) {
}

ADoor::ADoor() {
    this->OCLComponent = CreateDefaultSubobject<UOCLComponent>(TEXT("OCLComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->TimelineComponent = NULL;
    this->HealthComponent = NULL;
    this->TerminalSwitchListener = CreateDefaultSubobject<UTerminalSwitchListener>(TEXT("TerminalSwitchListener"));
}

