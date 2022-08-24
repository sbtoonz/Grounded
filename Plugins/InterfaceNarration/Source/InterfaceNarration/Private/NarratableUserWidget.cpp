#include "NarratableUserWidget.h"

ENarratableWidgetLevel UNarratableUserWidget::GetNarrationLevel_Implementation() const {
    return ENarratableWidgetLevel::None;
}

void UNarratableUserWidget::GetNarration_Implementation(TArray<FNarrationChunk>& Chunks, bool bVerbose) const {
}

UNarratableUserWidget::UNarratableUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bNarrateOnlyWhenFocused = true;
    this->bNarrateOnlyChanged = true;
    this->bNarrateItemIndex = false;
}

