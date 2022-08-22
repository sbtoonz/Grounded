#include "BTTask_MaineMoveTo.h"

UBTTask_MaineMoveTo::UBTTask_MaineMoveTo() {
    this->MovementSpeed = EMovementSpeed::Walk;
    this->MaxMoveDuration = 0.00f;
    this->RandomDeviation = 0.00f;
    this->SprintAfterDistance = 0.00f;
    this->MaxInefficiency = 0.00f;
    this->bAllowBreadcrumbs = false;
    this->bAbortOnInterestChanged = false;
}

