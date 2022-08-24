#include "GlobalVariableConditionalsBP.h"

bool UGlobalVariableConditionalsBP::IsGlobalValue(FGuid Variable, EComparisonOperator Operator, int32 Value, EBoolResult& OutResult) {
    return false;
}

bool UGlobalVariableConditionalsBP::CompareGlobals(FGuid Variable1, EComparisonOperator Operator, FGuid Variable2, EBoolResult& OutResult) {
    return false;
}

UGlobalVariableConditionalsBP::UGlobalVariableConditionalsBP() {
}

