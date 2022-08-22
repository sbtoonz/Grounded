#include "ParticleAttachmentVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

void AParticleAttachmentVolume::OnBeginPlay() {
}

bool AParticleAttachmentVolume::IsVolumeReachableByPhotoMode() const {
    return false;
}

bool AParticleAttachmentVolume::IsNiagaraActivationAllowed_Implementation() const {
    return false;
}

bool AParticleAttachmentVolume::IsLocalPlayerInVolume() const {
    return false;
}

AParticleAttachmentVolume::AParticleAttachmentVolume() {
    this->NiagaraParticleSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraParticleSystem"));
    this->MaterialParameterCollection = NULL;
    this->OffsetFromActorForward = 0.00f;
    this->DistanceToSurfaceLerp = 400.00f;
    this->LerpWhenInside = true;
    this->UseXYDistance = true;
    this->AlignParticleSystemWithPlayer = true;
    this->LimitToSurfaceMaterial = true;
    this->ParticleVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ParticleVolume"));
}

