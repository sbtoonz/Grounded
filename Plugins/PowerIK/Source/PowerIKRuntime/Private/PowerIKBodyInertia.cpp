#include "PowerIKBodyInertia.h"

FPowerIKBodyInertia::FPowerIKBodyInertia() {
    this->ApplyInertiaToBody = false;
    this->SmoothFactor = 0.00f;
    this->UseSpring = false;
    this->SpringStrength = 0.00f;
    this->SpringDamping = 0.00f;
}

