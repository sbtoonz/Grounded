#include "ActorLiteData.h"
#include "Templates/SubclassOf.h"

class UComponentLiteData;

UComponentLiteData* UActorLiteData::GetComponentData(TSubclassOf<UComponentLiteData> DataClass) const {
    return NULL;
}

UActorLiteData::UActorLiteData() {
    this->LODActorClass = NULL;
    this->InitialLifeSpan = 0.00f;
    this->RootComponentMobility = EComponentMobility::Static;
    this->bMeshComponentSimulatePhysics = false;
}

