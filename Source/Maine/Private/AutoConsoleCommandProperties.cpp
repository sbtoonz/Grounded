#include "AutoConsoleCommandProperties.h"

FAutoConsoleCommandProperties::FAutoConsoleCommandProperties() {
    this->bEnable = false;
    this->bTriggerRegularly = false;
    this->bOneTimeTrigger = false;
    this->ExecuteWaitTime = 0.00f;
    this->bTriggerAfterTravel = false;
}

