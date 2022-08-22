#include "MapLegendEntryWidget.h"

class UBaseMapEntryWidget;


void UMapLegendEntryWidget::UpdateVisibility(UBaseMapEntryWidget* EntryWidget) {
}


void UMapLegendEntryWidget::UpdateCurrentEntryVisibility() {
}

void UMapLegendEntryWidget::ToggleCurrentEntryVisibility(bool IsVisible) {
}





void UMapLegendEntryWidget::RefreshEntry() {
}

void UMapLegendEntryWidget::OnPreviousButtonClicked() {
}

void UMapLegendEntryWidget::OnNextButtonClicked() {
}

void UMapLegendEntryWidget::GotoPreviousEntry() {
}

void UMapLegendEntryWidget::GotoNextEntry() {
}

void UMapLegendEntryWidget::GotoEntry(UBaseMapEntryWidget* EntryWidget) {
}

void UMapLegendEntryWidget::GotoCurrentEntry() {
}

int32 UMapLegendEntryWidget::GetNumEntries() const {
    return 0;
}

EMapEntryType UMapLegendEntryWidget::GetMapEntryType() const {
    return EMapEntryType::None;
}

TArray<UBaseMapEntryWidget*> UMapLegendEntryWidget::GetEntryWidgets() {
    return TArray<UBaseMapEntryWidget*>();
}

UMapLegendEntryWidget::UMapLegendEntryWidget() {
    this->PreviousButton = NULL;
    this->NextButton = NULL;
    this->Image = NULL;
    this->TextElement = NULL;
    this->NumberTextElement = NULL;
    this->AlphaWhenHidden = 0.20f;
    this->EntryIndex = 0;
}

