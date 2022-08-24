#include "TerminalConditional.h"

FTerminalConditional::FTerminalConditional() {
    this->ConditionalLogic = ELogicalOperator::And;
    this->WidgetState = ETerminalWidgetState::Waiting;
    this->StateDisablesInteraction = false;
    this->ToggleComponent = NULL;
}

