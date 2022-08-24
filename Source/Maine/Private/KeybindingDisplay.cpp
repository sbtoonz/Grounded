#include "KeybindingDisplay.h"

void UKeybindingDisplay::UpdateText() {
}

void UKeybindingDisplay::UpdateControl(const FAnyControlMapping& Control) {
}

void UKeybindingDisplay::UnsetKey(bool bNotify) {
}

void UKeybindingDisplay::SetControl(const FAnyControlMapping& Control, bool bInGamepadControls, bool bNotify) {
}

void UKeybindingDisplay::SetAxis(const FInputAxisKeyMapping& Axis, bool bInGamepadControls, bool bNotify) {
}

void UKeybindingDisplay::SetAction(const FInputActionKeyMapping& Key, bool bInGamepadControls, bool bNotify) {
}

UKeybindingDisplay::UKeybindingDisplay() {
    this->Text = NULL;
    this->ButtonImage = NULL;
    this->bGamepadControls = false;
}

