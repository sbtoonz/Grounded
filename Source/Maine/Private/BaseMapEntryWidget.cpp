#include "BaseMapEntryWidget.h"


bool UBaseMapEntryWidget::HasWorldPosition() const {
    return false;
}

FVector2D UBaseMapEntryWidget::GetWorldPosition2D() {
    return FVector2D{};
}

EMapEntryType UBaseMapEntryWidget::GetMapEntryType() const {
    return EMapEntryType::None;
}

FString UBaseMapEntryWidget::GetEntryName() {
    return TEXT("");
}


bool UBaseMapEntryWidget::CanToggleVisibility() const {
    return false;
}

UBaseMapEntryWidget::UBaseMapEntryWidget() {
}

