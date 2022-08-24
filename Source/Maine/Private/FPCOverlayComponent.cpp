#include "FPCOverlayComponent.h"

void UFPCOverlayComponent::UpdatePositionForDynamicFOVChange() {
}

void UFPCOverlayComponent::UpdatePositionForAspectRatioChange() {
}

void UFPCOverlayComponent::SetOverlay(FName ConfigName, int32 MeshVariant) {
}

void UFPCOverlayComponent::RemoveOverlay() {
}

UFPCOverlayComponent::UFPCOverlayComponent() {
    this->OverlayRootComponent = NULL;
    this->OverlayRootComponentDefaultForwardOffset = 9.00f;
    this->ConfigData = NULL;
}

