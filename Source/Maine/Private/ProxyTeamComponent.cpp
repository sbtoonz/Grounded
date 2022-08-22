#include "ProxyTeamComponent.h"

class UBaseLODActor;
class AActor;

TEnumAsByte<ETeamAttitude::Type> UProxyTeamComponent::GetRelationshipToLODActor(const UBaseLODActor* Other) const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UProxyTeamComponent::GetRelationshipToActor(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

FDataTableRowHandle UProxyTeamComponent::GetCurrentTeamRowHandle() const {
    return FDataTableRowHandle{};
}

UProxyTeamComponent::UProxyTeamComponent() {
}

