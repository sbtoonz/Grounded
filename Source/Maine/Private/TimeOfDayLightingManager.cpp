#include "TimeOfDayLightingManager.h"
#include "PhotoModeHelperComponent.h"

class UDirectionalLightComponent;
class USoundCue;
class UPostProcessComponent;

void ATimeOfDayLightingManager::UnregisterStencilMaskRenderer(int32 ObjectID, int32 StencilValue) {
}

void ATimeOfDayLightingManager::StopMusicForTimelapse() {
}

void ATimeOfDayLightingManager::SetCutsceneDOF(float DOFBlurRadius) {
}

void ATimeOfDayLightingManager::RegisterStencilMaskRenderer(int32 ObjectID, int32 StencilValue) {
}

void ATimeOfDayLightingManager::OnGameRest(float RestDuration) {
}


float ATimeOfDayLightingManager::NativeGetNormalizedTime() const {
    return 0.0f;
}

bool ATimeOfDayLightingManager::IsLootShimmerEnabled() const {
    return false;
}

int32 ATimeOfDayLightingManager::GetTimelapseMinute() const {
    return 0;
}

float ATimeOfDayLightingManager::GetTimelapseLightingLerp() const {
    return 0.0f;
}

float ATimeOfDayLightingManager::GetTimelapseLerp() const {
    return 0.0f;
}

int32 ATimeOfDayLightingManager::GetTimelapseHour() const {
    return 0;
}

UDirectionalLightComponent* ATimeOfDayLightingManager::GetSunLight_Implementation() const {
    return NULL;
}

USoundCue* ATimeOfDayLightingManager::GetSoundCueForWakeupTime(float Time) {
    return NULL;
}

UPostProcessComponent* ATimeOfDayLightingManager::GetPostProcessMain_Implementation() const {
    return NULL;
}

int32 ATimeOfDayLightingManager::GetPhotoModeHour() const {
    return 0;
}

float ATimeOfDayLightingManager::GetNormalizedPhotoModeTime() const {
    return 0.0f;
}


void ATimeOfDayLightingManager::EndRestTimelapse() {
}

void ATimeOfDayLightingManager::BeginRestTimelapse() {
}

ATimeOfDayLightingManager::ATimeOfDayLightingManager() {
    this->PhotoModeTime = 0.00f;
    this->PhotoModeAzimuthOffset = 0.00f;
    this->CurrentFrameNormalizedTime = 0.00f;
    this->TimelapseSoundMix = NULL;
    this->TimelapseMusicStopOffset = 2.00f;
    this->PhotoModeHelperComponent = CreateDefaultSubobject<UPhotoModeHelperComponent>(TEXT("PhotoModeHelperComponent"));
    this->bIsTimelapseActive = false;
    this->TimelapseStartGameTimeSeconds = 0.00f;
    this->TimelapseDuration = 6.50f;
    this->TimelapseLightingDuration = 4.50f;
    this->TimelapseStartTime = 0.00f;
    this->TimelapseCurrentTime = 0.00f;
    this->TimelapseTargetTime = 0.00f;
    this->TimelapseLerp = 0.00f;
    this->TimelapseLightingLerp = 0.00f;
}

