#include "ColonyMemberLODComponent.h"

bool UColonyMemberLODComponent::IsMemberOf(const FColonyIdentifier& ColonyId) const {
    return false;
}

FColonyIdentifier UColonyMemberLODComponent::GetColonyIdentifier() const {
    return FColonyIdentifier{};
}

UColonyMemberLODComponent::UColonyMemberLODComponent() {
}

