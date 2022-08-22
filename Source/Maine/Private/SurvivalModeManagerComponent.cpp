#include "SurvivalModeManagerComponent.h"
#include "Net/UnrealNetwork.h"

class USurvivalGameModeSettings;

void USurvivalModeManagerComponent::UpdateDifficulty(EGameDifficulty GameDifficulty) {
}

void USurvivalModeManagerComponent::UpdateCustomSettings(FCustomGameModeSettings SelectedCustomSettings) {
}

void USurvivalModeManagerComponent::SwapToCustom() {
}

bool USurvivalModeManagerComponent::ShouldEnableBuildingIntegrity() const {
    return false;
}

bool USurvivalModeManagerComponent::ShouldAutoCompleteBuildings() const {
    return false;
}

void USurvivalModeManagerComponent::SetGameMode(EGameMode SelectedGameMode) {
}

void USurvivalModeManagerComponent::OnRep_CurrentGameMode() {
}

USurvivalGameModeSettings* USurvivalModeManagerComponent::GetGameModeSettings() const {
    return NULL;
}

EGameMode USurvivalModeManagerComponent::GetGameMode() const {
    return EGameMode::None;
}

FCustomGameModeSettings USurvivalModeManagerComponent::GetCustomGameSettings() const {
    return FCustomGameModeSettings{};
}

bool USurvivalModeManagerComponent::DoRecipesRequireIngredients() const {
    return false;
}

bool USurvivalModeManagerComponent::AreQuestsEnabled() const {
    return false;
}

bool USurvivalModeManagerComponent::AreAllRecipesUnlocked() const {
    return false;
}

void USurvivalModeManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USurvivalModeManagerComponent, CurrentGameMode);
    DOREPLIFETIME(USurvivalModeManagerComponent, CustomSettings);
}

USurvivalModeManagerComponent::USurvivalModeManagerComponent() {
    this->CurrentGameMode = EGameMode::None;
    this->GameModeSettings = NULL;
}

