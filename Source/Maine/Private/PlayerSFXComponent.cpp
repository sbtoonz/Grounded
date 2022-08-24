#include "PlayerSFXComponent.h"

class USurvivalComponent;

void UPlayerSFXComponent::TriggerStarvationSFXUpdate() {
}

void UPlayerSFXComponent::StopSFX() {
}

void UPlayerSFXComponent::SetSurvivalComponent(USurvivalComponent* InComponent) {
}

UPlayerSFXComponent::UPlayerSFXComponent() {
    this->DrowningTimerSFX = NULL;
    this->CriticalDrowningTimerSFX = NULL;
    this->DrowningTimerBreathLeft = 15.00f;
    this->CriticalDrowningTimerBreathLeft = 2.00f;
    this->SwimHeartbeatTimeThreshold = 9.00f;
    this->HeartbeatSFX = NULL;
    this->HeartbeatVolumeCurve = NULL;
    this->HeartbeatPitchCurve = NULL;
    this->StarvationMix = NULL;
    this->StarvingSFX = NULL;
    this->StarvingReverbEffect = NULL;
    this->StarvationReverbSendLevelCurve = NULL;
    this->StarvationReverbName = TEXT("FX_Starvation");
    this->StarvationTimerStart = 30.00f;
}

