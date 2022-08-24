#include "SurvivalWorldSettings.h"

float ASurvivalWorldSettings::PerformSurfaceTrace(FVector WorldLocation) const {
    return 0.0f;
}

float ASurvivalWorldSettings::GetSurfaceElevation(FVector Location) const {
    return 0.0f;
}

ASurvivalWorldSettings::ASurvivalWorldSettings() {
    this->MusicSettings = NULL;
    this->ElevationResolution = 2500.00f;
}

