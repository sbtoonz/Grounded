#include "AnimNotify_PlayCharacterSound.h"

UAnimNotify_PlayCharacterSound::UAnimNotify_PlayCharacterSound() {
    this->SoundType = ECharacterAudioType::Character;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bFollow = true;
}

