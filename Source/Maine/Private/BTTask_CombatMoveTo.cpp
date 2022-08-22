#include "BTTask_CombatMoveTo.h"

UBTTask_CombatMoveTo::UBTTask_CombatMoveTo() {
    this->ReevaluateTime = 1.00f;
    this->FacingAngleTolerance = 25.00f;
    this->TargetMoveDistanceFail = 400.00f;
}

