#include "MusicManager.h"

class UMusicTrackData;

void UMusicManager::SetScriptedTrack(UMusicTrackData* TrackData) {
}

void UMusicManager::OnLoadComplete() {
}

void UMusicManager::ClearScriptedTrack() {
}

UMusicManager::UMusicManager() {
    this->CurrentTrack = NULL;
    this->CurrentOverlayTrack = NULL;
    this->ScriptedTrack = NULL;
    this->DefaultMusicSettings = NULL;
    this->LevelMusicSettings = NULL;
    this->OverrideMusicSettings = NULL;
    this->MusicComponent = NULL;
    this->OverlayMusicComponent = NULL;
    this->IsMoviePlaying = false;
    this->TimelapseStartTime = -1.00f;
}

