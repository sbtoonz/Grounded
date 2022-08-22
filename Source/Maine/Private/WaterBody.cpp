#include "WaterBody.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent

void AWaterBody::UpdateMeshVisibility() {
}


bool AWaterBody::IsPlayerAboveWater() const {
    return false;
}

float AWaterBody::GetWaterSurfaceWorldHeight() const {
    return 0.0f;
}

float AWaterBody::GetLocalPlayerDistanceToWater() const {
    return 0.0f;
}

AWaterBody::AWaterBody() {
    this->DepthImpostorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DepthImpostorMeshComponent"));
    this->ImpostorRelativeScale = 0.90f;
    this->StaticMeshToTile = NULL;
    this->PostProcessVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("PostProcessVolume"));
    this->PostProcessVolumeHeight = 100;
    this->UnderwaterPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("UnderwaterPostProcess"));
    this->UnderwaterPostProcessMaterial = NULL;
    this->BaseCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BaseCollider"));
    this->BaseCollisionVolumeHeight = 100;
    this->CameraCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("CameraCollider"));
    this->CameraCollisionVolumeHeight = 100;
}

