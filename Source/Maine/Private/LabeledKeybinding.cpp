#include "LabeledKeybinding.h"

void ULabeledKeybinding::OnControlMapping1Changed(FAnyControlMapping Mapping) {
}

void ULabeledKeybinding::OnControlMapping0Changed(FAnyControlMapping Mapping) {
}

void ULabeledKeybinding::Init() {
}


ULabeledKeybinding::ULabeledKeybinding() {
    this->bGamepadControls = false;
    this->Binding0 = NULL;
    this->Binding1 = NULL;
}

