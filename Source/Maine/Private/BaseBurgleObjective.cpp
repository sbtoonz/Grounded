#include "BaseBurgleObjective.h"
#include "Net/UnrealNetwork.h"

class UBurgleQuestInstance;

void UBaseBurgleObjective::Initialize(UBurgleQuestInstance* InParentQuest, int32 InObjectiveIndex) {
}

int32 UBaseBurgleObjective::GetObjectiveIndex() const {
    return 0;
}

void UBaseBurgleObjective::ActivateObjective() {
}

void UBaseBurgleObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBaseBurgleObjective, ObjectiveIndex);
    DOREPLIFETIME(UBaseBurgleObjective, bActive);
}

UBaseBurgleObjective::UBaseBurgleObjective() {
    this->ObjectiveIndex = 0;
    this->bActive = false;
}

