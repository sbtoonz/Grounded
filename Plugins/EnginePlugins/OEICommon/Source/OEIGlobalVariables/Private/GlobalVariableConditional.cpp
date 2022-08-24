#include "GlobalVariableConditional.h"

FGlobalVariableConditional::FGlobalVariableConditional() {
    this->Operator = EComparisonOperator::Equals;
    this->VariableValue = 0;
    this->bDefaultReturnValue = false;
}

