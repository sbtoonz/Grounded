#include "GlobalLiteData.h"

class AActor;
class UActorLiteData;

UActorLiteData* UGlobalLiteData::GetLiteDataFor(TSoftClassPtr<AActor> Actor) const {
    return NULL;
}

UGlobalLiteData::UGlobalLiteData() {
}

