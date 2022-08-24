#include "RigUnit_PowerIK.h"

FRigUnit_PowerIK::FRigUnit_PowerIK() {
    this->RootRotationMultiplier = 0.00f;
    this->MaxSquashIterations = 0;
    this->MaxStretchIterations = 0;
    this->MaxFinalIterations = 0;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.00f;
}

