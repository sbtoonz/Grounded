#include "ChatterEvent.h"

FChatterEvent::FChatterEvent() {
    this->Cooldown = 0.00f;
    this->OnInterrupt = EChatterInterruptionType::Interrupt;
    this->InterruptionLevel = EChatterInterruptionLevel::All;
    this->OnQueued = EChatterQueuedAction::Queue;
    this->MaxWaitTime = 0.00f;
    this->GruntGroup = EGruntGroup::None;
}

