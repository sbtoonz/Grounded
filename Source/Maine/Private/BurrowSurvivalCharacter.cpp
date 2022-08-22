#include "BurrowSurvivalCharacter.h"
#include "BurrowComponent.h"

class UParticleSystemComponent;
class UAudioComponent;

void ABurrowSurvivalCharacter::SetBurrowParticleComponent(UParticleSystemComponent* PSC) {
}

void ABurrowSurvivalCharacter::SetBurrowAudioComponent(UAudioComponent* AudioComponent) {
}

void ABurrowSurvivalCharacter::HandleBurrowStateChanged(EBurrowState BurrowState) {
}

ABurrowSurvivalCharacter::ABurrowSurvivalCharacter() {
    this->SightEnableDelay = 0.00f;
    this->BurrowComponent = CreateDefaultSubobject<UBurrowComponent>(TEXT("BurrowComponent"));
}

