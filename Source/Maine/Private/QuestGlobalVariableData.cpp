#include "QuestGlobalVariableData.h"

FQuestGlobalVariableData::FQuestGlobalVariableData() {
    this->TriggerStartGlobalComparisonOperator = EComparisonOperator::Equals;
    this->TriggerStartGlobalValue = 0;
    this->TriggerCompleteGlobalComparisonOperator = EComparisonOperator::Equals;
    this->TriggerCompleteGlobalValue = 0;
    this->OnStartGlobalVariableValue = 0;
    this->OnCompleteGlobalVariableValue = 0;
}

