#include "PowerIKGroundCollision.h"

FPowerIKGroundCollision::FPowerIKGroundCollision() {
    this->CollisionChannel = ECC_WorldStatic;
    this->TraceComplex = false;
    this->RayCastUp = 0.00f;
    this->RayCastDown = 0.00f;
}

