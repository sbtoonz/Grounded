#include "AttractionComponentLiteData.h"

UAttractionComponentLiteData::UAttractionComponentLiteData() {
    this->bForceRuntimeActionAlloc = false;
    this->bProjectToGround = false;
    this->bForceNoTrack = false;
    this->GeneratedLocationType = EGeneratedLocationType::NavMesh;
    this->SlotCount = 0;
    this->RestrictedToClassLiteData = NULL;
}

