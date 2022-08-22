#include "BaseLookTriggerComponent.h"

class AActor;

void UBaseLookTriggerComponent::OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

void UBaseLookTriggerComponent::HandleHealthStateChanged(EHealthState NewHealthState) {
}

UBaseLookTriggerComponent::UBaseLookTriggerComponent() {
    this->MaxRange = 4000.00f;
    this->AngleRange = 180.00f;
    this->bBlockedByAttachParent = true;
    this->bDisableIfDead = true;
    this->OwnerHealthComponent = NULL;
}

