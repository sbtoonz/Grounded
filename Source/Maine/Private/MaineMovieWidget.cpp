#include "MaineMovieWidget.h"

class APlayerState;

void UMaineMovieWidget::OnPlayerCanceledSkip(APlayerState* Player) {
}

void UMaineMovieWidget::OnMovieOpened() {
}

void UMaineMovieWidget::OnMovieFailed() {
}

void UMaineMovieWidget::OnAllPlayersSkipped() {
}

UMaineMovieWidget::UMaineMovieWidget() {
    this->MoviePlayer = NULL;
    this->SkipWidgets = NULL;
    this->ProgressBarOne = NULL;
    this->ProgressBarTwo = NULL;
    this->ProgressBarThree = NULL;
    this->ProgressBarFour = NULL;
    this->ShowSkipWidgets = NULL;
}

