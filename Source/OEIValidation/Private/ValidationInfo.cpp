#include "ValidationInfo.h"

FValidationInfo::FValidationInfo() {
    this->ValidationObject = NULL;
    this->TestResult = false;
    this->Level = EValidationLevel::CriticalError;
    this->WiP = false;
}

