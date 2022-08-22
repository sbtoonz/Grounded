#include "ScreenEffectData.h"

UScreenEffectData::UScreenEffectData() {
    this->MaterialParameterCollection = NULL;
    this->PostProcessMaterial = NULL;
    this->DisplayType = EScreenEffectType::Instant;
    this->MaterialParameterIntensityScalar = 1.00f;
    this->ChromaticAberrationIntensityScalar = 1.00f;
}

