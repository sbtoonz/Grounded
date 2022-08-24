#include "InteractionWidget.h"

class AActor;


AActor* UInteractionWidget::GetInteractableActor() const {
    return NULL;
}

UInteractionWidget::UInteractionWidget() {
    this->bCloseOnInteract = true;
    this->InteractableActor = NULL;
}

