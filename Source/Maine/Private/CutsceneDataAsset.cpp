#include "CutsceneDataAsset.h"

UCutsceneDataAsset::UCutsceneDataAsset() {
    this->TargetType = ECutsceneTargetType::None;
    this->bProvideInitialFOV = true;
    this->InitialFOV = 90.00f;
}

