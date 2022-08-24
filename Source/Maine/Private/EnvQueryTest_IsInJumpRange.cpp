#include "EnvQueryTest_IsInJumpRange.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"

UEnvQueryTest_IsInJumpRange::UEnvQueryTest_IsInJumpRange() {
    this->From = UEnvQueryContext_Item::StaticClass();
    this->To = NULL;
}

