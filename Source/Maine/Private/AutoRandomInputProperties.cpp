#include "AutoRandomInputProperties.h"

FAutoRandomInputProperties::FAutoRandomInputProperties() {
    this->bEnable = false;
    this->bAxis = false;
    this->MinAxisDeltaSpeed = 0.00f;
    this->MaxAxisDeltaSpeed = 0.00f;
    this->bHold = false;
    this->MinHoldTime = 0.00f;
    this->MaxHoldTime = 0.00f;
    this->MinTriggerTime = 0.00f;
    this->MaxTriggerTime = 0.00f;
}

