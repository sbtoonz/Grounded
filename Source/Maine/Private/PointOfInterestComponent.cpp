#include "PointOfInterestComponent.h"

class UBaseLookTriggerComponent;
class UPointOfInterestDataAsset;
class ASurvivalPlayerController;

void UPointOfInterestComponent::PlayBanter() {
}

void UPointOfInterestComponent::OnLookTriggered(UBaseLookTriggerComponent* Sender, FLookTriggeredParams Params) {
}

UPointOfInterestDataAsset* UPointOfInterestComponent::GetPointOfInterestData() const {
    return NULL;
}

void UPointOfInterestComponent::Discover(ASurvivalPlayerController* Instigator) {
}

UPointOfInterestComponent::UPointOfInterestComponent() {
    this->PointOfInterestData = NULL;
    this->bSubscribeAutomatically = true;
}

