#include "SaveLoadWidget.h"

void USaveLoadWidget::SetMenuMode(ESaveLoadMenuMode MenuMode) {
}

EImportSaveResult USaveLoadWidget::OpenImportSaveDialog() {
    return EImportSaveResult::Success;
}


void USaveLoadWidget::DeauthorizeFriendFromSharedSave(const FString& SharedSaveUserID, const FString& saveId) {
}

void USaveLoadWidget::AuthorizeFriendForSharedSave(const FString& xuid, const FString& Username, const FString& saveId) {
}

USaveLoadWidget::USaveLoadWidget() {
    this->ImportSaveButton = NULL;
    this->SaveLoadMenuMode = ESaveLoadMenuMode::SaveMode;
}

