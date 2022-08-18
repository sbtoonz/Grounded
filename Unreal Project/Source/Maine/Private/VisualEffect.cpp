#include "VisualEffect.h"

UVisualEffect::UVisualEffect() {
    this->ParticleSystem = NULL;
    this->VFXBlueprint = NULL;
    this->bAttachedToActor = true;
    this->SocketMeshType = EVisualEffectMeshType::None;
    this->ShadowCastingEnabled = true;
    this->bInheritScale = false;
}

