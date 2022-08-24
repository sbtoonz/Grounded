#include "SMInstancerWidget.h"

USMInstancerWidget::USMInstancerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InstanceButton = NULL;
    this->InstanceAllButton = NULL;
    this->DeinstanceButton = NULL;
    this->DeinstanceAllButton = NULL;
    this->Config = NULL;
}

