#include "MovieSkipComponent.h"

class APlayerState;

void UMovieSkipComponent::ServerSkipRequestCanceled_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::ServerOnMovieStarted_Implementation(FName MovieName) {
}

void UMovieSkipComponent::ServerOnMovieFinished_Implementation(FName MovieName) {
}

void UMovieSkipComponent::ServerBeginRequestSkip_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::RemoveSkippingPlayer(APlayerState* Player) {
}

void UMovieSkipComponent::MulticastSkipRequestSucceeded_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::MulticastSkipRequestCanceled_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::MulticastOnMovieStarted_Implementation(FName MovieName) {
}

void UMovieSkipComponent::MulticastOnMovieFinished_Implementation(FName MovieName) {
}

void UMovieSkipComponent::MulticastBeginRequestSkip_Implementation(APlayerState* Player) {
}

void UMovieSkipComponent::MulticastAllSkipped_Implementation() {
}

bool UMovieSkipComponent::IsPlayerRequestingSkip(APlayerState* Player) const {
    return false;
}

float UMovieSkipComponent::GetSkipProgress(APlayerState* Player) const {
    return 0.0f;
}

bool UMovieSkipComponent::DidPlayerSuccessfullySkip(APlayerState* Player) const {
    return false;
}

void UMovieSkipComponent::AddSkippingPlayer(APlayerState* Player) {
}

UMovieSkipComponent::UMovieSkipComponent() {
    this->HoldToSkip = true;
    this->HoldToSkipTime = 2.00f;
}

