#include "PowerIKEffector.h"

FPowerIKEffector::FPowerIKEffector() {
    this->PositionSpace = ES_Additive;
    this->RotationSpace = ES_Additive;
    this->PullWeight = 0.00f;
    this->NormalizePulling = false;
    this->RotateBone = false;
    this->RotateLimb = false;
    this->DeltaSmoothSpeed = 0.00f;
    this->AngularDeltaSmoothSpeed = 0.00f;
    this->AffectsCenterOfGravity = false;
    this->Alpha = 0.00f;
}

