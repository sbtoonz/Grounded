#include "MusicTrackData.h"

UMusicTrackData::UMusicTrackData() {
    this->FadeInTime = 1.00f;
    this->FadeOutTime = 1.00f;
    this->FadeCurve = EAudioFaderCurve::Linear;
    this->ImmediateEndOnLoad = false;
}

