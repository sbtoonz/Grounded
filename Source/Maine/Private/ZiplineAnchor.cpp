#include "ZiplineAnchor.h"

float UZiplineAnchor::GetMaxRange() const {
    return 0.0f;
}

bool UZiplineAnchor::AnyZiplineAttached() const {
    return false;
}

UZiplineAnchor::UZiplineAnchor() {
    this->SelectModePawn = NULL;
    this->AbsMinAllowedAngleDot = 1.00f;
    this->MaxRange = 0.00f;
}

