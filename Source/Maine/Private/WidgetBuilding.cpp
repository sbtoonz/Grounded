#include "WidgetBuilding.h"
#include "WidgetInteractComponent.h"

AWidgetBuilding::AWidgetBuilding() {
    this->WidgetInteractionComponent = CreateDefaultSubobject<UWidgetInteractComponent>(TEXT("WidgetInteractionComponent"));
}

