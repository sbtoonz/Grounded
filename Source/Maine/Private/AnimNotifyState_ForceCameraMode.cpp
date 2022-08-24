#include "AnimNotifyState_ForceCameraMode.h"

UAnimNotifyState_ForceCameraMode::UAnimNotifyState_ForceCameraMode() {
    this->ForcedMode = ECameraDisplayMode::ThirdPerson;
    this->BlendTime = 0.00f;
}

