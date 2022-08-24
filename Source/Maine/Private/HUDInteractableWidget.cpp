#include "HUDInteractableWidget.h"

class UHealthComponent;
class UInteractableInterface;
class IInteractableInterface;



void UHUDInteractableWidget::OnPlayerInteractableChanged(TScriptInterface<IInteractableInterface> NewInteractable) {
}

void UHUDInteractableWidget::OnPlayerAttackTargetChanged(TScriptInterface<IInteractableInterface> NewTarget) {
}

void UHUDInteractableWidget::OnEquipmentChanged() {
}

void UHUDInteractableWidget::OnAttackResolutionChanged(EAttackResolutionType AttackResolution) {
}

UHealthComponent* UHUDInteractableWidget::GetCurrentTargetHealth() const {
    return NULL;
}

EAttackResolutionType UHUDInteractableWidget::GetCurrentAttackResolution() const {
    return EAttackResolutionType::WontHit;
}

UHUDInteractableWidget::UHUDInteractableWidget() {
}

