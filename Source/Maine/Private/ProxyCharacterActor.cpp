#include "ProxyCharacterActor.h"

class UNavigationPath;

void UProxyCharacterActor::UpdateHomeLocation() {
}

void UProxyCharacterActor::OnNavigationPathUpdated(UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent) {
}

void UProxyCharacterActor::MarkDesiredActionUnreachable(bool bObstructed) {
}

FVector UProxyCharacterActor::GetWaveDestination() const {
    return FVector{};
}

FVector UProxyCharacterActor::GetSearchOrigin() const {
    return FVector{};
}

FVector UProxyCharacterActor::GetHomeLocation() const {
    return FVector{};
}

UProxyCharacterActor::UProxyCharacterActor() {
    this->CurrentNavigationPath = NULL;
    this->InterestCore = NULL;
}

