#include "TeamComponent.h"

class UBaseLODActor;
class AActor;

void UTeamComponent::RestoreTeam() {
}

void UTeamComponent::OnDeath(const FDamageInfo& DamageInfo) {
}

bool UTeamComponent::HasTeam() const {
    return false;
}

TEnumAsByte<ETeamAttitude::Type> UTeamComponent::GetRelationshipToLODActor(const UBaseLODActor* Other) const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UTeamComponent::GetRelationship(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

FDataTableRowHandle UTeamComponent::GetDefaultTeamRowHandle() const {
    return FDataTableRowHandle{};
}

FDataTableRowHandle UTeamComponent::GetCurrentTeamRowHandle() const {
    return FDataTableRowHandle{};
}

void UTeamComponent::ChangeTeam(FDataTableRowHandle NewTeamDataTable) {
}

UTeamComponent::UTeamComponent() {
    this->bOverrideReputationOnDeath = false;
    this->ReputationOnDeath = 0;
}

