#include "ContextMenuWidget.h"

class UContextMenuEntryWidget;

void UContextMenuWidget::SetFocusFirst() {
}

void UContextMenuWidget::NotifyOptionSelected(FGameplayTag Action) {
}

UContextMenuEntryWidget* UContextMenuWidget::AddEntry(const FContextEntry& Data) {
    return NULL;
}

UContextMenuWidget::UContextMenuWidget() {
    this->ContextContainer = NULL;
    this->ContextMenuClass = NULL;
}

