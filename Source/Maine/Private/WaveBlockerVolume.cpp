#include "WaveBlockerVolume.h"

class UPrimitiveComponent;
class AActor;

void AWaveBlockerVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWaveBlockerVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

int32 AWaveBlockerVolume::NumOverlappingPlayers() const {
    return 0;
}

AWaveBlockerVolume::AWaveBlockerVolume() {
}

