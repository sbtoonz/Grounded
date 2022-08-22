#include "FrankenlineDial.h"

AFrankenlineDial::AFrankenlineDial() {
    this->Axis = EFrankenlineAxis::X;
    this->SpeedMultiplier = 0.50f;
    this->FrankenlineMaster = NULL;
}

