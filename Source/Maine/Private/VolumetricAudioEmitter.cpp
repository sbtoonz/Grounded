#include "VolumetricAudioEmitter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent

UAudioComponent* AVolumetricAudioEmitter::GetAudioComponent() const {
    return NULL;
}

AVolumetricAudioEmitter::AVolumetricAudioEmitter() {
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
}

