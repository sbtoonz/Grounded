#include "ControlOptions.h"

void UControlOptions::UnbindGame() {
}

void UControlOptions::SetSprintToggle(bool bNewSprintToggle) {
}

void UControlOptions::SetSensitivityY(float NewSensitivity) {
}

void UControlOptions::SetSensitivityX(float NewSensitivity) {
}

void UControlOptions::SetSensitivity(FVector2D NewSensitivity) {
}

void UControlOptions::SetInvertY(bool NewInvertY) {
}

void UControlOptions::SetInvertX(bool NewInvertX) {
}

void UControlOptions::SetGlideToggle(bool bNewGlideToggle) {
}

void UControlOptions::SetDefaults() {
}

void UControlOptions::SetCrouchToggle(bool bNewCrouchToggle) {
}

void UControlOptions::Save() const {
}

void UControlOptions::Load() {
}

bool UControlOptions::GetSprintToggle() const {
    return false;
}

FVector2D UControlOptions::GetSensitivity() const {
    return FVector2D{};
}

bool UControlOptions::GetInvertY() const {
    return false;
}

bool UControlOptions::GetInvertX() const {
    return false;
}

bool UControlOptions::GetGlideToggle() const {
    return false;
}

bool UControlOptions::GetCrouchToggle() const {
    return false;
}

void UControlOptions::BindGame() {
}

UControlOptions::UControlOptions() {
    this->ControlSet = EControlSet::Mouse;
}

