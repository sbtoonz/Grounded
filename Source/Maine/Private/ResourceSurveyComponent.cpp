#include "ResourceSurveyComponent.h"
#include "Net/UnrealNetwork.h"

class UObject;
class UTexture2D;

void UResourceSurveyComponent::UnregisterManualSource(UObject* Source) {
}

void UResourceSurveyComponent::ToggleScanEverything() {
}

void UResourceSurveyComponent::ShowSurveyingInterface() {
}

void UResourceSurveyComponent::RegisterManualSource(UObject* Source) {
}

void UResourceSurveyComponent::OnRep_SurveyedResource() {
}

void UResourceSurveyComponent::OnRep_ActiveOrigins() {
}

void UResourceSurveyComponent::MulticastReplicateDataChunk_Implementation(int32 StartIndex, const TArray<uint8>& Buffer) {
}

void UResourceSurveyComponent::MulticastNotifyEmptyRescan_Implementation() {
}

FDataTableRowHandle UResourceSurveyComponent::GetSurveyedResource() const {
    return FDataTableRowHandle{};
}

UTexture2D* UResourceSurveyComponent::GetSurveyedRegionTexture() const {
    return NULL;
}

TArray<FDataTableRowHandle> UResourceSurveyComponent::GetSurveyableItems() const {
    return TArray<FDataTableRowHandle>();
}

float UResourceSurveyComponent::GetLastScanWorldHours() const {
    return 0.0f;
}

FString UResourceSurveyComponent::GetLastScanPlayerName() const {
    return TEXT("");
}

UTexture2D* UResourceSurveyComponent::GetHeatmapTexture() const {
    return NULL;
}

void UResourceSurveyComponent::ActivateAllSurveyors() {
}

void UResourceSurveyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UResourceSurveyComponent, SurveyedResource);
    DOREPLIFETIME(UResourceSurveyComponent, LastScanWorldHours);
    DOREPLIFETIME(UResourceSurveyComponent, LastScanPlayerName);
    DOREPLIFETIME(UResourceSurveyComponent, ActiveOrigins);
}

UResourceSurveyComponent::UResourceSurveyComponent() {
    this->BucketSize = 1000.00f;
    this->BucketColorCap = 12;
    this->HeatmapTexture = NULL;
    this->RegionsTexture = NULL;
    this->LastScanRealTime = 0.00f;
    this->LastScanWorldHours = 0.00f;
    this->ScanInterval = 10.00f;
}

