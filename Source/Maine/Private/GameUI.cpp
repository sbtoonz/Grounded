#include "GameUI.h"

class ASurvivalPlayerState;
class UHUDWidget;
class ASurvivalPlayerCharacter;
class UTexture2D;

void AGameUI::PostPlayerChatMessage(const FString& Message, ASurvivalPlayerState* PlayerState) {
}

void AGameUI::PostGenericMessage(const FString& Message, UTexture2D* MessageTexture) {
}

void AGameUI::PostChatMessage(const FChatBoxMessage& Message) {
}

void AGameUI::OnDayNightChange(bool bIsDayTime) {
}

void AGameUI::NotifyPossessedPlayerChanged(ASurvivalPlayerCharacter* NewPlayerCharacter) {
}

void AGameUI::NotifyPlayerStateRegistered(ASurvivalPlayerState* NewPlayerState) {
}

void AGameUI::NotifyGlobalColorChanged() {
}

bool AGameUI::GetShowSubtitles() const {
    return false;
}

UHUDWidget* AGameUI::GetHUD() const {
    return NULL;
}

AGameUI::AGameUI() {
}

