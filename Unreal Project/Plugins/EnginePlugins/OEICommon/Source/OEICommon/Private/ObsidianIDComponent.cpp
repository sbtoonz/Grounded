#include "ObsidianIDComponent.h"

void UObsidianIDComponent::ResetID() {
}

UObsidianIDComponent::UObsidianIDComponent() {
    this->DataTag = -1;
    this->bIgnoreSavingOfDestruction = false;
    this->bInstancesShareSavedState = false;
}

