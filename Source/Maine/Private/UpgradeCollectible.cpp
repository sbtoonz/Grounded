#include "UpgradeCollectible.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

class UPrimitiveComponent;
class AActor;

void AUpgradeCollectible::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AUpgradeCollectible::AUpgradeCollectible() {
    this->bPartyUpgrade = false;
    this->UpgradePoints = 1;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

