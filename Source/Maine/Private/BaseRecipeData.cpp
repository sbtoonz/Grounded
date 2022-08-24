#include "BaseRecipeData.h"

FBaseRecipeData::FBaseRecipeData() {
    this->Visibility = ERecipeVisibility::Visible;
    this->bWasCut = false;
    this->bHideInCraftingMenu = false;
    this->bQuestCritical = false;
}

