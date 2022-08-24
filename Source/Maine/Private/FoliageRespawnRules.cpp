#include "FoliageRespawnRules.h"

FFoliageRespawnRules::FFoliageRespawnRules() {
    this->RespawnOnlyOnRest = false;
    this->RespawnWhenRemoved = false;
    this->IgnorePlayerDistanceCheckOnRest = false;
    this->MinimumInGameHoursGoneRequired = 0.00f;
    this->MinimumDistanceAwayFromPlayersRequired = 0.00f;
}

