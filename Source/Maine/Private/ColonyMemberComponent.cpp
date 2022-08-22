#include "ColonyMemberComponent.h"

void UColonyMemberComponent::OnDeathCallback(const FDamageInfo& DamageInfo) {
}

bool UColonyMemberComponent::IsMemberOf(const FColonyIdentifier& Identifier) const {
    return false;
}

FColonyIdentifier UColonyMemberComponent::GetColonyIdentifier() const {
    return FColonyIdentifier{};
}

UColonyMemberComponent::UColonyMemberComponent() {
}

