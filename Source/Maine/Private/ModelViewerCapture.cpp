#include "ModelViewerCapture.h"

class UStaticMesh;








void AModelViewerCapture::SetInspectionStaticMesh(UStaticMesh* Mesh) {
}

void AModelViewerCapture::SetInspectionItemData(const FDataTableRowHandle& ItemDataHandle) {
}

void AModelViewerCapture::SetInspectionBuildingData(const FDataTableRowHandle& BuildingDataHandle) {
}

void AModelViewerCapture::InitializeRotation(bool bInAutoRotate, bool bInAllowRotationY, float InStartingRotationX, float InStartingRotationY) {
}

void AModelViewerCapture::Cleanup_Implementation() {
}

AModelViewerCapture::AModelViewerCapture() {
    this->bAutoRotate = false;
    this->bAllowRotationY = true;
    this->StartingRotationX = 0.00f;
    this->StartingRotationY = 0.00f;
}

