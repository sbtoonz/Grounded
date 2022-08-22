#include "ParticleAttachmentBlockingVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AParticleAttachmentBlockingVolume::AParticleAttachmentBlockingVolume() {
    this->InnerBlockingVolume = CreateDefaultSubobject<USphereComponent>(TEXT("InnerBlockingVolume"));
    this->OuterBlockingVolume = CreateDefaultSubobject<USphereComponent>(TEXT("OuterBlockingVolume"));
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->Type = EParticleBlockingVolumeType::SphereFade;
}

