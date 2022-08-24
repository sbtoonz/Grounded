#include "SwimmingCharacterMovementSettings.h"

FSwimmingCharacterMovementSettings::FSwimmingCharacterMovementSettings() {
    this->MovementType = ESwimmingMovementType::None;
    this->MinimumDistanceFactor = 0.00f;
    this->HorizontalFactor = 0.00f;
    this->VerticalPullFactor = 0.00f;
}

