#include "EnvQueryTest_IsJumpClear.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Item -FallbackName=EnvQueryContext_Item

UEnvQueryTest_IsJumpClear::UEnvQueryTest_IsJumpClear() {
    this->From = UEnvQueryContext_Querier::StaticClass();
    this->To = UEnvQueryContext_Item::StaticClass();
}

