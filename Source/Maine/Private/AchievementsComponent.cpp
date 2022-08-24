#include "AchievementsComponent.h"
#include "Net/UnrealNetwork.h"

class UPlayerStatConfig;
class UPlayerUpgradeComponent;
class ASurvivalPlayerState;
class AActor;

void UAchievementsComponent::ServerRequestAchievementReevaluation_Implementation() {
}
bool UAchievementsComponent::ServerRequestAchievementReevaluation_Validate() {
    return true;
}

void UAchievementsComponent::OnTotalPartyPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value) {
}

void UAchievementsComponent::OnRep_Achievements() {
}

void UAchievementsComponent::OnPlayerUpgradesChanged(UPlayerUpgradeComponent* InPlayerUpgradeComponent) {
}

void UAchievementsComponent::OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value) {
}

void UAchievementsComponent::OnKeyItemObtained(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned) {
}

void UAchievementsComponent::OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

void UAchievementsComponent::OnGameModeChanged() {
}

void UAchievementsComponent::ClientUpdateAchievementProgressOnline_Implementation(const FString& AchievementUnlockTag, int32 Progress) {
}

void UAchievementsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAchievementsComponent, Achievements);
}

UAchievementsComponent::UAchievementsComponent() {
    this->bShowDebug = false;
}

