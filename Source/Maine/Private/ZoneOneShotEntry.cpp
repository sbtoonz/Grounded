#include "ZoneOneShotEntry.h"

FZoneOneShotEntry::FZoneOneShotEntry() {
    this->StartHourOfDay = 0;
    this->EndHourOfDay = 0;
    this->UseCurveForProbability = false;
    this->Probability = 0.00f;
    this->UseCurveForRetriggerTime = false;
}

