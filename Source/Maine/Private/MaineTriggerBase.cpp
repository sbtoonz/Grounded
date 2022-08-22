#include "MaineTriggerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
#include "PersistenceComponent.h"

class AActor;

void AMaineTriggerBase::ResetTriggerCount() {
}


void AMaineTriggerBase::OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* ActorInstigator) {
}

int32 AMaineTriggerBase::GetTriggerCount() const {
    return 0;
}

AMaineTriggerBase::AMaineTriggerBase() {
    this->MaxTriggerCount = 0;
    this->bPlayersOnly = true;
    this->TriggerType = ETriggerType::BeginOverlap;
    this->CollisionComponent = NULL;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
}

