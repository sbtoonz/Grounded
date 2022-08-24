#include "HUDMarkerData.h"
#include "Net/UnrealNetwork.h"

class UBaseLODActor;
class AActor;

void UHUDMarkerData::SetIconVariant(int32 Variant) {
}

void UHUDMarkerData::SetDisplayName(const FString& NewName) {
}

void UHUDMarkerData::SetColorVariant(int32 Variant) {
}

void UHUDMarkerData::SetColor(FColor NewColor) {
}

void UHUDMarkerData::HandleLODActorConvertedToProxy(UBaseLODActor* Sender) {
}

void UHUDMarkerData::HandleLODActorConvertedToFull(UBaseLODActor* Sender) {
}

void UHUDMarkerData::HandleHUDMarkerChanged() {
}

bool UHUDMarkerData::GetShowDistance() const {
    return false;
}

bool UHUDMarkerData::GetShouldShow() const {
    return false;
}

UBaseLODActor* UHUDMarkerData::GetReferencedLODActor() const {
    return NULL;
}

AActor* UHUDMarkerData::GetReferencedActor() const {
    return NULL;
}

FDataTableRowHandle UHUDMarkerData::GetQuestData() const {
    return FDataTableRowHandle{};
}

int32 UHUDMarkerData::GetMarkerVariant() const {
    return 0;
}

EHUDMarkerType UHUDMarkerData::GetMarkerType() const {
    return EHUDMarkerType::None;
}

int32 UHUDMarkerData::GetMarkerColorVariant() const {
    return 0;
}

FVector UHUDMarkerData::GetLocation() const {
    return FVector{};
}

float UHUDMarkerData::GetLifeTimeRemaining() const {
    return 0.0f;
}

FString UHUDMarkerData::GetDisplayName() const {
    return TEXT("");
}

FColor UHUDMarkerData::GetColor() const {
    return FColor{};
}

FDataTableRowHandle UHUDMarkerData::GetAdditionalData() const {
    return FDataTableRowHandle{};
}

void UHUDMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHUDMarkerData, ReferenceActor);
    DOREPLIFETIME(UHUDMarkerData, AdditionalDataRowHandle);
    DOREPLIFETIME(UHUDMarkerData, QuestData);
    DOREPLIFETIME(UHUDMarkerData, Location);
    DOREPLIFETIME(UHUDMarkerData, MarkerType);
    DOREPLIFETIME(UHUDMarkerData, MarkerListIndex);
    DOREPLIFETIME(UHUDMarkerData, MarkerTypeVariant);
    DOREPLIFETIME(UHUDMarkerData, MarkerTypeColorVariant);
    DOREPLIFETIME(UHUDMarkerData, DisplayName);
    DOREPLIFETIME(UHUDMarkerData, Color);
    DOREPLIFETIME(UHUDMarkerData, ShowDistance);
    DOREPLIFETIME(UHUDMarkerData, bIsCharacter);
    DOREPLIFETIME(UHUDMarkerData, LifeTimeRemaining);
}

UHUDMarkerData::UHUDMarkerData() {
    this->MarkerType = EHUDMarkerType::None;
    this->MarkerListIndex = 255;
    this->MarkerTypeVariant = 0;
    this->MarkerTypeColorVariant = 0;
    this->ShowDistance = false;
    this->bIsCharacter = false;
    this->bShowOnlyNearby = false;
    this->LifeTimeRemaining = -1.00f;
}

