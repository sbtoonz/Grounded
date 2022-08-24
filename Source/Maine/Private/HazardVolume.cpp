#include "HazardVolume.h"

class AActor;

void AHazardVolume::OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AHazardVolume::OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

AHazardVolume::AHazardVolume() {
    this->Volume = NULL;
}

