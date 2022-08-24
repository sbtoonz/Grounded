#include "VolumetricAudioEmitter.h"
#include "Components/AudioComponent.h"

UAudioComponent* AVolumetricAudioEmitter::GetAudioComponent() const {
    return NULL;
}

AVolumetricAudioEmitter::AVolumetricAudioEmitter() {
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
}

