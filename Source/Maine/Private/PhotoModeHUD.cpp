#include "PhotoModeHUD.h"

class APhotoPawn;

void UPhotoModeHUD::ToggleUIVisibility() {
}

void UPhotoModeHUD::TogglePhotoModeSettings() {
}

void UPhotoModeHUD::TakePhotoOverride(APhotoPawn* PhotoPawn) {
}

void UPhotoModeHUD::ShowUI() {
}

void UPhotoModeHUD::RestoreDefaults() {
}

void UPhotoModeHUD::OpenPhotoModeSettings() {
}



void UPhotoModeHUD::OnPhotoTaken() {
}

void UPhotoModeHUD::OnPhotoModePreExit() {
}

bool UPhotoModeHUD::IsHUDVisible() const {
    return false;
}

void UPhotoModeHUD::HideUI() {
}


void UPhotoModeHUD::ExitPhotoMode() {
}

void UPhotoModeHUD::ClosePhotoModeSettings() {
}

bool UPhotoModeHUD::AreSettingsOpen() const {
    return false;
}

UPhotoModeHUD::UPhotoModeHUD() {
    this->CanvasPanel = NULL;
    this->NewSettings = NULL;
    this->UIToggledVisibleSound = NULL;
    this->UIToggledHiddenSound = NULL;
    this->ButtonDownActionSound = NULL;
}

