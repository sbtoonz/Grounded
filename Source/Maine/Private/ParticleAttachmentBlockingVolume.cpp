#include "ParticleAttachmentBlockingVolume.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"

AParticleAttachmentBlockingVolume::AParticleAttachmentBlockingVolume() {
    this->InnerBlockingVolume = CreateDefaultSubobject<USphereComponent>(TEXT("InnerBlockingVolume"));
    this->OuterBlockingVolume = CreateDefaultSubobject<USphereComponent>(TEXT("OuterBlockingVolume"));
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->Type = EParticleBlockingVolumeType::SphereFade;
}

