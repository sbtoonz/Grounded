#include "ProxyAttractionComponent.h"

class UCharacterLODActor;

bool UProxyAttractionComponent::CanColonyUse(const FColonyIdentifier& ColonyIdentifier) const {
    return false;
}

bool UProxyAttractionComponent::CanCharacterUse(const UCharacterLODActor* Character) const {
    return false;
}

UProxyAttractionComponent::UProxyAttractionComponent() {
    this->OwnerAttractionLODComponent = NULL;
}

