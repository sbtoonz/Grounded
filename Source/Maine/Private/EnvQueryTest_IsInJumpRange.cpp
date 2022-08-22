#include "EnvQueryTest_IsInJumpRange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Item -FallbackName=EnvQueryContext_Item

UEnvQueryTest_IsInJumpRange::UEnvQueryTest_IsInJumpRange() {
    this->From = UEnvQueryContext_Item::StaticClass();
    this->To = NULL;
}

