#include "TutorialData.h"

FTutorialData::FTutorialData() {
    this->TutorialDisplayTime = ETutorialDisplayTime::FixedTime;
    this->LogType = ETutorialLogType::AlwaysShow;
    this->bShowEvenWhenTutorialsDisabled = false;
}

