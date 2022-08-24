#include "AttractionLODComponent.h"

class UGoapAction;
class UCharacterLODActor;

int32 UAttractionLODComponent::GetSlotCount() const {
    return 0;
}

bool UAttractionLODComponent::GetProjectToGround() const {
    return false;
}

EGeneratedLocationType UAttractionLODComponent::GetGeneratedLocationType() const {
    return EGeneratedLocationType::NavMesh;
}

TArray<UGoapAction*> UAttractionLODComponent::GetAdvertisedActions() const {
    return TArray<UGoapAction*>();
}

bool UAttractionLODComponent::CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const {
    return false;
}

bool UAttractionLODComponent::CanCharacterUse(const UCharacterLODActor* Character) const {
    return false;
}

UAttractionLODComponent::UAttractionLODComponent() {
    this->ProxyAttractionComponent = NULL;
    this->FullAttractionComponent = NULL;
}

