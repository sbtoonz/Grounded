#include "OEISubtitleManagerWidget.h"

void UOEISubtitleManagerWidget::SetShowCinematicSubtitles(bool bVisible) {
}

UOEISubtitleManagerWidget::UOEISubtitleManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SubtitleVerticalBox = NULL;
    this->MasterSubtitleData = NULL;
    this->SubtitleEntryClass = NULL;
    this->CurrentSubtitleData = NULL;
}

