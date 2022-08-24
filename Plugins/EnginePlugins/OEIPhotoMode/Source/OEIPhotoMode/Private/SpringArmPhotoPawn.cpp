#include "SpringArmPhotoPawn.h"

void ASpringArmPhotoPawn::SetBoomAdjustOut(float Val) {
}

void ASpringArmPhotoPawn::SetBoomAdjustIn(float Val) {
}

ASpringArmPhotoPawn::ASpringArmPhotoPawn() {
    this->BoomNearSpeed = 100.00f;
    this->BoomFarSpeed = 3000.00f;
    this->BoomMaxLength = 8000.00f;
    this->StartingBoomLength = 400.00f;
    this->bAutoMinBoomLength = true;
    this->BoomMinLength = 0.00f;
    this->BoomPanSpeed = 150.00f;
    this->MaxVerticalOffset = 800.00f;
    this->BoomAdjustAccumulatorIn = 0.00f;
    this->BoomAdjustAccumulatorOut = 0.00f;
}

