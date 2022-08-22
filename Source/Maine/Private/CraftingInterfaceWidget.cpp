#include "CraftingInterfaceWidget.h"

void UCraftingInterfaceWidget::OnSelectionChanged() {
}

void UCraftingInterfaceWidget::OnPageOpened() {
}

UCraftingInterfaceWidget::UCraftingInterfaceWidget() {
    this->WorkbenchTab = NULL;
    this->ModelViewer = NULL;
    this->CraftingRequirements = NULL;
    this->WarningContainer = NULL;
    this->CraftEquip = NULL;
    this->Craft = NULL;
    this->CraftMany = NULL;
    this->PlaceBlueprint = NULL;
    this->HotCraft = NULL;
    this->HotCraftMany = NULL;
    this->JumpToEntry = NULL;
    this->ItemCount = NULL;
    this->ItemDescriptionBox = NULL;
    this->KnownRecipesUsedIn = NULL;
    this->DangerLoopImage = NULL;
    this->CraftingRecipes = NULL;
}

