#include "OEIVoiceOverComponent.h"

void UOEIVoiceOverComponent::Stop(float FadeOutDuration) const {
}

void UOEIVoiceOverComponent::Resume() const {
}

void UOEIVoiceOverComponent::Prepare(const FVoiceOverData& Data, const FVoiceOverLoadFinishedDynamicDelegate& LoadingFinished) const {
}

void UOEIVoiceOverComponent::Play(const FVoiceOverData& Data, float StartTime, const FVoiceOverPlaybackStartedDynamicDelegate& PlaybackStarted) const {
}

void UOEIVoiceOverComponent::Pause() const {
}

void UOEIVoiceOverComponent::CancelPrepared() const {
}

UOEIVoiceOverComponent::UOEIVoiceOverComponent() {
    this->AudioComponent = NULL;
    this->FacialAnimationComponent = NULL;
}

