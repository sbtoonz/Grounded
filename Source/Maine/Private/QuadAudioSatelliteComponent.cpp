#include "QuadAudioSatelliteComponent.h"

UQuadAudioSatelliteComponent::UQuadAudioSatelliteComponent() {
    this->FadeInDuration = 2.00f;
    this->FadeOutDuration = 5.00f;
    this->SatelliteType = EQuadAudioSatelliteType::FrontLeft;
    this->CurrentAudioComponent = NULL;
}

