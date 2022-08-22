#include "InteriorTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class UPrimitiveComponent;
class AActor;

void AInteriorTrigger::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AInteriorTrigger::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AInteriorTrigger::AInteriorTrigger() {
    this->Box1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Box1"));
    this->Box2 = CreateDefaultSubobject<UBoxComponent>(TEXT("Box2"));
}

