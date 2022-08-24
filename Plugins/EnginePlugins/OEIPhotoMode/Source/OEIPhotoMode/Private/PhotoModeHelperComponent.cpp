#include "PhotoModeHelperComponent.h"

class APlayerController;

void UPhotoModeHelperComponent::OnPhotoModePrePause() {
}

void UPhotoModeHelperComponent::OnPhotoModePreEntered(APlayerController* InController) {
}

void UPhotoModeHelperComponent::OnPhotoModeExit() {
}

void UPhotoModeHelperComponent::ForceLOD(int32 ForcedLOD) {
}

UPhotoModeHelperComponent::UPhotoModeHelperComponent() {
    this->PhotoModePoseSet = NULL;
}

