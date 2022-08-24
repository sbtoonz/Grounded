#include "GlobalBuildingData.h"

class UObject;

FIntVector UGlobalBuildingData::RotateSnapCentered(FIntVector Snap, FBuildingGridKey Origin, float Angle) const {
    return FIntVector{};
}

FIntVector UGlobalBuildingData::RotateSnap(FIntVector Snap, FBuildingGridKey Origin, float Angle) const {
    return FIntVector{};
}

FBuildingGridKey UGlobalBuildingData::RotateSlotCentered(FBuildingGridKey Slot, FBuildingGridKey Origin, float Angle) const {
    return FBuildingGridKey{};
}

FBuildingGridKey UGlobalBuildingData::RotateSlot(FBuildingGridKey Slot, FBuildingGridKey Origin, float Angle) const {
    return FBuildingGridKey{};
}

FVector UGlobalBuildingData::GridToLocal(FIntVector Position) const {
    return FVector{};
}

int32 UGlobalBuildingData::GetWeight(const FGameplayTag& Class) const {
    return 0;
}

int32 UGlobalBuildingData::GetSturdiness(const FGameplayTag& Class) const {
    return 0;
}

FVector UGlobalBuildingData::GetSnapOffset() const {
    return FVector{};
}

FBox UGlobalBuildingData::GetSlotDebugShape(FBuildingGridKey GridLocation, FQuat& Rotation) const {
    return FBox{};
}

FBox UGlobalBuildingData::GetSlotBounds(FBuildingGridKey GridLocation) const {
    return FBox{};
}

int32 UGlobalBuildingData::GetMaxWeight() const {
    return 0;
}

int32 UGlobalBuildingData::GetMaxSturdiness() const {
    return 0;
}

int32 UGlobalBuildingData::GetMaxCozinessValue() const {
    return 0;
}

int32 UGlobalBuildingData::GetMaxCozinessLevel() const {
    return 0;
}

int32 UGlobalBuildingData::GetEffectiveCozinessValue(int32 InCoziness, int32 InStructural) const {
    return 0;
}

int32 UGlobalBuildingData::GetCozinessLevel(int32 InCoziness, int32 InStructural) const {
    return 0;
}

void UGlobalBuildingData::DrawDebugSnap(const UObject* WorldContextObject, const FTransform& GridTransform, FIntVector Location) const {
}

void UGlobalBuildingData::DrawDebugCell(const UObject* WorldContextObject, const FTransform& GridTransform, const FBuildingGridKey& Key, FColor Color) const {
}

UGlobalBuildingData::UGlobalBuildingData() {
    this->BuildingUnderConstructionMaterial = NULL;
    this->BuildingUnderConstructionInvalidMaterial = NULL;
    this->BuildingDestroySFX = NULL;
    this->BuildingDemolishSFX = NULL;
    this->BuildingAddItemSFX = NULL;
    this->BuildingPlaceSFX = NULL;
    this->BuildingCancelSFX = NULL;
    this->BuildingCompleteContructionSFX = NULL;
    this->FacingHelperMesh = NULL;
    this->GridBuildingMovedCue = NULL;
    this->BuildingGridPrefab = NULL;
    this->LadderSplinePrefab = NULL;
    this->DamageWiggleAmplitude = NULL;
    this->FragileWiggleAmplitude = NULL;
    this->CancelDissolveAmount = NULL;
    this->BuildingDestroyTime = 2.00f;
    this->DefaultFullCell = NULL;
    this->DefaultFullWall = NULL;
    this->DefaultFullFloor = NULL;
    this->BuildSoundIntensity = 0.00f;
    this->BuildSoundRange = 0.00f;
    this->StructureCozinessCap = 0.10f;
    this->CozinessCheckRadius = 2000.00f;
    this->EmbedInGroundProtrusion = 0.10f;
}

