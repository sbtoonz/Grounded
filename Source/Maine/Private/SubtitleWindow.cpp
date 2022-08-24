#include "SubtitleWindow.h"

class APhotoPawn;

bool USubtitleWindow::ShouldShowSubtitles() {
    return false;
}

void USubtitleWindow::OnSubtitleVerbosityChanged(ESubtitleVerbositySettings SubtitleVerbosity) {
}

void USubtitleWindow::OnPhotoModeExited() {
}

void USubtitleWindow::OnPhotoModeEntered(APhotoPawn* PhotoPawn) {
}

void USubtitleWindow::OnGameUIShowSubtitlesChanged(bool bShowSubtitles) {
}


USubtitleWindow::USubtitleWindow() {
}

