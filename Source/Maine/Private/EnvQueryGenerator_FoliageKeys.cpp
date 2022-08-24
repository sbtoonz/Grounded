#include "EnvQueryGenerator_FoliageKeys.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_FoliageKeys::UEnvQueryGenerator_FoliageKeys() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

