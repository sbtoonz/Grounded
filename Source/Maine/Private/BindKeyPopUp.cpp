#include "BindKeyPopUp.h"

void UBindKeyPopUp::SelectControl(FInputChord Chord) {
}

void UBindKeyPopUp::InitControlMapping(const FAnyControlMapping& Control, bool bInIsGamepad) {
}

bool UBindKeyPopUp::GetIsMapped() const {
    return false;
}

FText UBindKeyPopUp::GetInstructionsText() const {
    return FText::GetEmpty();
}

FAnyControlMappingKey UBindKeyPopUp::GetCurrentMappingKey() const {
    return FAnyControlMappingKey{};
}

FInputChord UBindKeyPopUp::GetCurrentInputChord() const {
    return FInputChord{};
}

UBindKeyPopUp::UBindKeyPopUp() {
    this->bIsGamepad = false;
}

