#include "SMInstancerMeshID.h"

FSMInstancerMeshID::FSMInstancerMeshID() {
    this->Mesh = NULL;
    this->bUseDefaultCollision = false;
    this->MaxDrawDistance = 0.00f;
    this->bOverrideLightMapRes = false;
    this->OverriddenLightMapRes = 0;
    this->UseEmissiveForStaticLighting = false;
    this->EmissiveBoost = 0.00f;
    this->CastShadow = false;
    this->LightmapType = ELightmapType::Default;
    this->bCastFarShadow = false;
    this->bHiddenShadow = false;
    this->bVisible = false;
    this->bActorHiddenInGame = false;
    this->bNeverDistanceCull = false;
    this->bAllowCullDistanceVolume = false;
    this->bFillCollisionUnderneathForNavmesh = false;
    this->Mobility = EComponentMobility::Static;
}

