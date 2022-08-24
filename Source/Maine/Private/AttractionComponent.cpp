#include "AttractionComponent.h"

class UGoapAction;
class UCharacterLODActor;

FColonyIdentifier UAttractionComponent::GetRestrictedToColonyId() const {
    return FColonyIdentifier{};
}

UClass* UAttractionComponent::GetLODComponentClass_Implementation() const {
    return NULL;
}

TArray<UGoapAction*> UAttractionComponent::GetAdvertisedActions() const {
    return TArray<UGoapAction*>();
}

bool UAttractionComponent::CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const {
    return false;
}

bool UAttractionComponent::CanCharacterUse(const UCharacterLODActor* Character) const {
    return false;
}

UAttractionComponent::UAttractionComponent() {
    this->AreaRadius = 0.00f;
    this->SlotCount = -1;
    this->RestrictedToClassLiteData = NULL;
    this->bProjectToGround = false;
    this->bForceNoTrack = false;
    this->bForceRuntimeActionAlloc = false;
    this->GeneratedLocationType = EGeneratedLocationType::NavMesh;
}

