#include "GlidingData.h"

FGlidingData::FGlidingData() {
    this->Style = EGlidingStyle::None;
    this->StaminaDrainPerSecond = 0.00f;
    this->ForwardAcceleration = 0.00f;
    this->MaxForwardVelocity = 0.00f;
    this->DescendSpeed = 0.00f;
    this->DescendDrag = 0.00f;
    this->LiftAcceleration = 0.00f;
    this->bUseWhileSwimming = false;
}

