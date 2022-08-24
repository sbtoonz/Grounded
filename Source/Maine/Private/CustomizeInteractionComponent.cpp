#include "CustomizeInteractionComponent.h"

class UCustomPropertyComponent;
class AActor;
class ASurvivalPlayerCharacter;

void UCustomizeInteractionComponent::ShowCustomizationUI(UCustomPropertyComponent* CustomPropertyComponent) {
}

void UCustomizeInteractionComponent::ServerSetCustomPropertyComponentInUse_Implementation(ASurvivalPlayerCharacter* CustomizingPlayer, UCustomPropertyComponent* Component, bool InUse) {
}

void UCustomizeInteractionComponent::ServerOnCustomPropertyComponentChanged_Implementation(UCustomPropertyComponent* CustomPropertyComponent, FName PropertyName, float PropertyValue) {
}

void UCustomizeInteractionComponent::OnCustomizeUIClosed(AActor* InteractableActor) {
}

UCustomizeInteractionComponent::UCustomizeInteractionComponent() {
    this->WidgetClass = NULL;
}

