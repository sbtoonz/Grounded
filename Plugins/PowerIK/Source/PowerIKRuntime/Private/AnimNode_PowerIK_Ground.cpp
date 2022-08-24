#include "AnimNode_PowerIK_Ground.h"

FAnimNode_PowerIK_Ground::FAnimNode_PowerIK_Ground() {
    this->FeetDeltaSmoothSpeed = 0.00f;
    this->RootRotationMultiplier = 0.00f;
    this->MaxSquashIterations = 0;
    this->MaxStretchIterations = 0;
    this->MaxFinalIterations = 0;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.00f;
    this->DebugDrawSize = 0.00f;
}

