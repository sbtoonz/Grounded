#include "AnimNode_PowerIK.h"

FAnimNode_PowerIK::FAnimNode_PowerIK() {
    this->RootRotationMultiplier = 0.00f;
    this->SmoothingMaxSpeedMultiplier = 0.00f;
    this->SmoothingMaxDistanceMultiplier = 0.00f;
    this->MaxSquashIterations = 0;
    this->MaxStretchIterations = 0;
    this->MaxFinalIterations = 0;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.00f;
    this->DebugDrawSize = 0.00f;
}

