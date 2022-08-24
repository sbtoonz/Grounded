#include "HUDCrosshairWidget.h"

class UInteractableInterface;
class IInteractableInterface;
class AController;


void UHUDCrosshairWidget::OnPlayerAttackTargetChanged(TScriptInterface<IInteractableInterface> NewInteractable) {
}

void UHUDCrosshairWidget::OnCharacterControllerChanged(AController* NewController) {
}


void UHUDCrosshairWidget::OnAttackResolutionChanged(EAttackResolutionType AttackResolution) {
}

UHUDCrosshairWidget::UHUDCrosshairWidget() {
    this->MostRecentAttackOutcome = EAttackResolutionType::WontHit;
}

