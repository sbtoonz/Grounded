#include "PowerIKSmoothing.h"

FPowerIKSmoothing::FPowerIKSmoothing() {
    this->SmoothPositionOverTime = false;
    this->MaxPositionSpeed = 0.00f;
    this->MaxPositionDistance = 0.00f;
    this->SmoothRotationOverTime = false;
    this->MaxDegreesSpeed = 0.00f;
    this->MaxDegreesDistance = 0.00f;
}

