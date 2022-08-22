#include "WidgetManager.h"

class UWindowWidget;
class AActor;
class UItem;
class UHaulingComponent;
class UWidgetPlayerProxy;
class UInteractionWidget;

void UWidgetManager::TryCloseInteractableWidget(AActor* InteractableActor) {
}

void UWidgetManager::TogglePauseMenu() {
}

void UWidgetManager::SwapItemSlots(UItem* Item1, int32 Index1, UItem* Item2, int32 Index2) {
}

void UWidgetManager::ShowPauseMenu() {
}

void UWidgetManager::SetPauseMenuActive(bool bState) {
}

void UWidgetManager::RemoveProxyItemsForRecipe(FDataTableRowHandle RecipeRowHandle) {
}

void UWidgetManager::RemoveProxyItem(UItem* Item, int32 Count) {
}

void UWidgetManager::ProxyUnequipItem(UItem* Item) {
}

void UWidgetManager::ProxyEquipItem(UItem* Item) {
}

void UWidgetManager::OnUsingGamepadChanged(bool IsUsingGamepad) {
}

void UWidgetManager::OnPlayerProximityInvetoriesChanged() {
}

void UWidgetManager::OnPlayerInventoryChanged() {
}

void UWidgetManager::OnPlayerHaulingChanged(UHaulingComponent* Sender) {
}

void UWidgetManager::OnPlayerEquipmentChanged() {
}


void UWidgetManager::HidePauseMenu() {
}

UWindowWidget* UWidgetManager::GetTopWindow() const {
    return NULL;
}

UWidgetPlayerProxy* UWidgetManager::GetOwningPlayerProxy() {
    return NULL;
}

int32 UWidgetManager::GetNumWindowsOpen() const {
    return 0;
}

bool UWidgetManager::GetHideHUD() const {
    return false;
}

UWindowWidget* UWidgetManager::GetActiveWindowOfType(TSoftClassPtr<UWindowWidget> WidgetClass) {
    return NULL;
}

void UWidgetManager::DefragProxyInventory(bool SingleItem) {
}

UWindowWidget* UWidgetManager::CreateWindowWidget(TSoftClassPtr<UWindowWidget> WidgetClass) {
    return NULL;
}

UInteractionWidget* UWidgetManager::CreateInteractionWidget(AActor* Interactable, TSoftClassPtr<UInteractionWidget> WidgetClass) {
    return NULL;
}


void UWidgetManager::CloseWindowOfType(TSoftClassPtr<UWindowWidget> WidgetClass) {
}

void UWidgetManager::CloseWindow(UWindowWidget* Window) {
}

void UWidgetManager::CloseAllWindowWidgets() {
}

void UWidgetManager::CloseActiveWindowWidget() {
}

UWidgetManager::UWidgetManager() {
    this->OwningPlayerProxy = NULL;
    this->OwningPlayerController = NULL;
    this->OwningPlayerCharacter = NULL;
}

