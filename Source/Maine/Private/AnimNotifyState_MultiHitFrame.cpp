#include "AnimNotifyState_MultiHitFrame.h"

UAnimNotifyState_MultiHitFrame::UAnimNotifyState_MultiHitFrame() {
    this->HitFrameType = EHitFrameType::OneHitByTarget;
    this->ActualAttack = NULL;
    this->UseSecondaryDamageData = false;
    this->SecondaryDamageDataIndex = 0;
}

