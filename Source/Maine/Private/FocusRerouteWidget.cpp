#include "FocusRerouteWidget.h"

UFocusRerouteWidget::UFocusRerouteWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ChildInterationStyle = EFocusRerouterChildIterationStyle::Forward;
}

