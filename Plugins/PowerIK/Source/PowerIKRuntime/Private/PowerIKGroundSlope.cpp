#include "PowerIKGroundSlope.h"

FPowerIKGroundSlope::FPowerIKGroundSlope() {
    this->MaxGroundAngle = 0.00f;
    this->MaxNormalAngularSpeed = 0.00f;
    this->ScaleStride = false;
    this->UphillStrideScale = 0.00f;
    this->DownhillStrideScale = 0.00f;
    this->SidehillStrideScale = 0.00f;
    this->SidehillPushOuterFeet = 0.00f;
    this->Lean = false;
    this->UphillLean = 0.00f;
    this->DownhillLean = 0.00f;
    this->SidehillLean = 0.00f;
    this->CounterLean = false;
    this->UphillCounterLean = 0.00f;
    this->DownhillCounterLean = 0.00f;
    this->SidehillCounterLean = 0.00f;
    this->MoveRoot = false;
    this->UphillVertOffset = 0.00f;
    this->UphillHorizOffset = 0.00f;
    this->DownhillVertOffset = 0.00f;
    this->DownhillHorizOffset = 0.00f;
    this->SidehillHorizOffset = 0.00f;
    this->SidehillVertOffset = 0.00f;
    this->RotateFootToGround = false;
    this->PitchFootAmount = 0.00f;
    this->RollFootAmount = 0.00f;
    this->FootAngleDeltaSmoothSpeed = 0.00f;
    this->OffsetFeetPositions = false;
    this->StaticFootOffset = 0.00f;
}

