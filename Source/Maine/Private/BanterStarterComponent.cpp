#include "BanterStarterComponent.h"

class ASurvivalPlayerController;
class UBaseLookTriggerComponent;

void UBanterStarterComponent::StartBanter(ASurvivalPlayerController* Instigator) {
}

void UBanterStarterComponent::OnLookTriggered(UBaseLookTriggerComponent* Sender, FLookTriggeredParams Params) {
}

UBanterStarterComponent::UBanterStarterComponent() {
    this->BanterStartNode = 0;
    this->bSubscribeAutomatically = true;
}

