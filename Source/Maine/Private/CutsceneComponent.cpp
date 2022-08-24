#include "CutsceneComponent.h"

class UObject;
class UCutsceneDataAsset;
class UWindowWidget;
class AActor;
class ALevelSequenceActor;

void UCutsceneComponent::StartCutscene(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor) {
}

void UCutsceneComponent::PlayMovie(UObject* InMediaObject, float Delay) {
}

void UCutsceneComponent::OnMovieWidgetClosed(UWindowWidget* Sender) {
}

void UCutsceneComponent::OnMovieFinished(bool bWasSkipped) {
}

void UCutsceneComponent::MulticastStartCutscene_Implementation(UCutsceneDataAsset* CutsceneData, AActor* TriggerActor) {
}

ALevelSequenceActor* UCutsceneComponent::GetCurrentSequence() const {
    return NULL;
}

UCutsceneComponent::UCutsceneComponent() {
    this->ActiveMovieWidget = NULL;
}

