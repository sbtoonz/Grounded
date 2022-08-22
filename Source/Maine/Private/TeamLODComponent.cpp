#include "TeamLODComponent.h"

class UObject;
class UBaseLODActor;
class AActor;

TEnumAsByte<ETeamAttitude::Type> UTeamLODComponent::GetRelationshipToObject(const UObject* Other) const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UTeamLODComponent::GetRelationshipToLODActor(const UBaseLODActor* Other) const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UTeamLODComponent::GetRelationshipToActor(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

FDataTableRowHandle UTeamLODComponent::GetCurrentTeamRowHandle() const {
    return FDataTableRowHandle{};
}

UTeamLODComponent::UTeamLODComponent() {
}

