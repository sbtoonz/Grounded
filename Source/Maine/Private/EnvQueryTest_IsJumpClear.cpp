#include "EnvQueryTest_IsJumpClear.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"

UEnvQueryTest_IsJumpClear::UEnvQueryTest_IsJumpClear() {
    this->From = UEnvQueryContext_Querier::StaticClass();
    this->To = UEnvQueryContext_Item::StaticClass();
}

