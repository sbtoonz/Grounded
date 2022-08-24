#include "UpgradeCollectible.h"
#include "Components/SphereComponent.h"

class AActor;
class UPrimitiveComponent;

void AUpgradeCollectible::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AUpgradeCollectible::AUpgradeCollectible() {
    this->bPartyUpgrade = false;
    this->UpgradePoints = 1;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

