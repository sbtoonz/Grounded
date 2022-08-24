#include "MainMenuWidget.h"



void UMainMenuWidget::SetFocusForCurrentState() {
}

void UMainMenuWidget::PushMainMenuState(EMainMenuState NewState, bool ReplacePriorState) {
}

void UMainMenuWidget::PopToState(EMainMenuState NewState) {
}

void UMainMenuWidget::PopMainMenuState() {
}



void UMainMenuWidget::OnSinglePlayerClicked() {
}


void UMainMenuWidget::OnMultiplayerHostClicked() {
}



void UMainMenuWidget::OnMultiplayerClicked() {
}

void UMainMenuWidget::OnLoadUserGameSettingsComplete() {
}

void UMainMenuWidget::OnButtonExitClicked() {
}

void UMainMenuWidget::OnBackInput() {
}

void UMainMenuWidget::OnActiveUserChanged(EActiveUserChangeType ChangeType) {
}

void UMainMenuWidget::NotifyNewGameClicked() {
}

void UMainMenuWidget::NotifyContinueClicked() {
}

void UMainMenuWidget::HostMultiplayerLobby(bool bPasswordProtected) {
}


void UMainMenuWidget::HandlePlayerInput(int32 UserIndex) {
}

EMainMenuState UMainMenuWidget::GetMainMenuState() const {
    return EMainMenuState::None;
}

void UMainMenuWidget::CreateSinglePlayerLobby() {
}

UMainMenuWidget::UMainMenuWidget() {
    this->PressAnyKeyText = NULL;
    this->MainMenuButtons = NULL;
    this->NewContinueButtonOptions = NULL;
    this->HostJoinButtonOptions = NULL;
}

