#include "ProxyColonyMemberComponent.h"

bool UProxyColonyMemberComponent::IsMemberOf(const FColonyIdentifier& ColonyId) const {
    return false;
}

FColonyIdentifier UProxyColonyMemberComponent::GetColonyIdentifier() const {
    return FColonyIdentifier{};
}

UProxyColonyMemberComponent::UProxyColonyMemberComponent() {
}

