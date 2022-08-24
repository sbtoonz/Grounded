#include "CreditsWidget.h"

void UCreditsWidget::StopCredits(bool bForced) {
}

void UCreditsWidget::StartCredits() {
}



bool UCreditsWidget::IsPlaying() const {
    return false;
}

UCreditsWidget::UCreditsWidget() {
    this->ScrollSpeed = 120.00f;
    this->AcceleratedScrollSpeed = 1000.00f;
    this->WidgetsPerSecond = 100;
    this->CreditsAsset = NULL;
    this->CreditsScrollBox = NULL;
    this->CreditsVerticalBox = NULL;
    this->OnCreditsStartGlobalVariableValue = 0;
    this->OnCreditsSkippedGlobalVariableValue = 0;
    this->OnCreditsEndedGlobalVariableValue = 0;
    this->CreditsAssetToUse = NULL;
}

