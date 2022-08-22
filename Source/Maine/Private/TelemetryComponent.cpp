#include "TelemetryComponent.h"

void UTelemetryComponent::OnPlayerMove(const FVector& Location, const FString& MapName) {
}

UTelemetryComponent::UTelemetryComponent() {
    this->MinMoveTelemetry = 1000.00f;
    this->bEnableTelemetryTick = true;
}

