#include "MapStation.h"
#include "Net/UnrealNetwork.h"

void AMapStation::SetCameraDrawEnabled(bool bInDrawEnabled) {
}


void AMapStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMapStation, bEnabled);
}

AMapStation::AMapStation() {
    this->bEnabled = true;
    this->CurrentRTIndex = 0;
    this->RenderTargetCycleTime = 10.00f;
    this->LastRenderTargetChangeTime = 0.00f;
    this->SecurityCameraMaterial = NULL;
    this->SecurityCameraMID = NULL;
}

