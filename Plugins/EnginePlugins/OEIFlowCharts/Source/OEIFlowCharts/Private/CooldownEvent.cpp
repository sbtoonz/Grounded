#include "CooldownEvent.h"

FCooldownEvent::FCooldownEvent() {
    this->Cooldown = 0.00f;
    this->GameStartCooldown = 0.00f;
    this->Priority = 0;
    this->MaxSimultaneousVO = 0;
    this->bPlayIfOffScreen = false;
}

