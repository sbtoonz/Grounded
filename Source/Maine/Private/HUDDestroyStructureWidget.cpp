#include "HUDDestroyStructureWidget.h"

void UHUDDestroyStructureWidget::NativeUpdateData() {
}

void UHUDDestroyStructureWidget::InitSupportTextColors(FSlateColor NormalColor, FSlateColor WarningColor) {
}

UHUDDestroyStructureWidget::UHUDDestroyStructureWidget() {
    this->StructureContainer = NULL;
    this->FragileText = NULL;
    this->SupportCount = NULL;
    this->CountThrobber = NULL;
    this->DangerIcon = NULL;
    this->RecycleWarningStop = NULL;
    this->RecycleWarning = NULL;
}

