#include "OEIMoviePlayerBase.h"

class UObject;

void UOEIMoviePlayerBase::StopMovie(bool bWasSkipped) {
}

void UOEIMoviePlayerBase::StartDelayedPlayback() {
}

void UOEIMoviePlayerBase::SetLooping(bool bShouldLoop) {
}

void UOEIMoviePlayerBase::ResumeMovie() {
}

void UOEIMoviePlayerBase::PlayMovieFromMediaObjectDelayed(UObject* InMediaObject, float DelayTime) {
}

void UOEIMoviePlayerBase::PlayMovieFromMediaObject(UObject* InMediaObject) {
}

void UOEIMoviePlayerBase::PauseMovie() {
}

void UOEIMoviePlayerBase::OnMovieSourceOpened(const FString& OpenedUrl) {
}

void UOEIMoviePlayerBase::OnMovieFinished() {
}

void UOEIMoviePlayerBase::ClearMovie() {
}

UOEIMoviePlayerBase::UOEIMoviePlayerBase() : UUserWidget(FObjectInitializer::Get()) {
    this->MovieDisplay = NULL;
    this->MovieOverlay = NULL;
    this->bShouldLoopVideo = false;
}

