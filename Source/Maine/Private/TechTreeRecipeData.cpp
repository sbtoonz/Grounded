#include "TechTreeRecipeData.h"

FTechTreeRecipeData::FTechTreeRecipeData() {
    this->UnlockType = ETechTreeUnlockType::None;
    this->Cost = 0;
    this->RequiredTechTreeUnlocks = 0;
    this->bRecommended = false;
}

