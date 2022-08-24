#include "InteriorTrigger.h"
#include "Components/BoxComponent.h"

class AActor;
class UPrimitiveComponent;

void AInteriorTrigger::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AInteriorTrigger::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AInteriorTrigger::AInteriorTrigger() {
    this->Box1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Box1"));
    this->Box2 = CreateDefaultSubobject<UBoxComponent>(TEXT("Box2"));
}

