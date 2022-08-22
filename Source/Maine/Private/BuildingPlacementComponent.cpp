#include "BuildingPlacementComponent.h"
#include "Net/UnrealNetwork.h"
#include "ActorPoolComponent.h"

class ABuilding;

void UBuildingPlacementComponent::ServerSetRepeatPlacementMode_Implementation(bool bRepeatMode) {
}
bool UBuildingPlacementComponent::ServerSetRepeatPlacementMode_Validate(bool bRepeatMode) {
    return true;
}

void UBuildingPlacementComponent::ServerSetPlacementRotation_Implementation(float InPendingRotation, float InActualWorldRotationRadZ) {
}
bool UBuildingPlacementComponent::ServerSetPlacementRotation_Validate(float InPendingRotation, float InActualWorldRotationRadZ) {
    return true;
}

void UBuildingPlacementComponent::ServerSetFlipPlacementMode_Implementation(bool bFlipMode) {
}
bool UBuildingPlacementComponent::ServerSetFlipPlacementMode_Validate(bool bFlipMode) {
    return true;
}

void UBuildingPlacementComponent::ServerSetAlternatePlacementMode_Implementation(bool bAlternateMode) {
}
bool UBuildingPlacementComponent::ServerSetAlternatePlacementMode_Validate(bool bAlternateMode) {
    return true;
}

void UBuildingPlacementComponent::ServerHandleAcceptPlacement_Implementation(float InPendingRotation, float InActualWorldRotationRadZ) {
}
bool UBuildingPlacementComponent::ServerHandleAcceptPlacement_Validate(float InPendingRotation, float InActualWorldRotationRadZ) {
    return true;
}

void UBuildingPlacementComponent::ServerExitBuildingPlacement_Implementation(bool bSuccess) {
}
bool UBuildingPlacementComponent::ServerExitBuildingPlacement_Validate(bool bSuccess) {
    return true;
}

void UBuildingPlacementComponent::ServerEnterPlaceBuildingMode_Implementation(FDataTableRowHandle BuildingData, EBuildingPlacementFlags Flags) {
}
bool UBuildingPlacementComponent::ServerEnterPlaceBuildingMode_Validate(FDataTableRowHandle BuildingData, EBuildingPlacementFlags Flags) {
    return true;
}

void UBuildingPlacementComponent::OnRep_PendingRelocate() {
}

void UBuildingPlacementComponent::OnRep_PendingBuilding() {
}

void UBuildingPlacementComponent::OnRep_IsPlacingBuilding() {
}

void UBuildingPlacementComponent::MulticastHandleBuildingPlacementSuccessEffects_Implementation(FVector Location) {
}

void UBuildingPlacementComponent::MulticastClearCustomizationCameraView_Implementation(ABuilding* Building) {
}

bool UBuildingPlacementComponent::IsRelocatingBuilding() const {
    return false;
}

bool UBuildingPlacementComponent::IsPlacementModeValid() const {
    return false;
}

bool UBuildingPlacementComponent::GetRepeatPlacementMode() const {
    return false;
}

FDataTableRowHandle UBuildingPlacementComponent::GetPendingBuildingRowHandle() const {
    return FDataTableRowHandle{};
}

bool UBuildingPlacementComponent::GetPendingBuildingHasUnlockedVariants() const {
    return false;
}

ABuilding* UBuildingPlacementComponent::GetPendingBuilding() const {
    return NULL;
}

bool UBuildingPlacementComponent::GetIsPlacingBuilding() const {
    return false;
}

bool UBuildingPlacementComponent::GetFlipPlacementMode() const {
    return false;
}

bool UBuildingPlacementComponent::GetCurrentPlacementHasFlipMode() const {
    return false;
}

bool UBuildingPlacementComponent::GetCurrentPlacementHasAlternativeMode() const {
    return false;
}

FString UBuildingPlacementComponent::GetCurrentPlacementErrorString() const {
    return TEXT("");
}

int32 UBuildingPlacementComponent::GetCurrentPlacementError() const {
    return 0;
}

bool UBuildingPlacementComponent::GetAlternatePlacementMode() const {
    return false;
}

void UBuildingPlacementComponent::ExitPlaceBuildingMode(bool bSuccess) {
}

void UBuildingPlacementComponent::EnterRelocateMode(ABuilding* Target) {
}

void UBuildingPlacementComponent::EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable) {
}

void UBuildingPlacementComponent::ClientWarnRelocateCancelled_Implementation() {
}

void UBuildingPlacementComponent::ClientWarnPlacementCanceledByCombat_Implementation() {
}

void UBuildingPlacementComponent::ClientEnterRelocateMode_Implementation(ABuilding* Target) {
}

void UBuildingPlacementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBuildingPlacementComponent, IsPlacingBuilding);
    DOREPLIFETIME(UBuildingPlacementComponent, PendingBuilding);
    DOREPLIFETIME(UBuildingPlacementComponent, PendingRelocate);
    DOREPLIFETIME(UBuildingPlacementComponent, PendingRotation);
}

UBuildingPlacementComponent::UBuildingPlacementComponent() {
    this->IsPlacingBuilding = false;
    this->SnapPool = CreateDefaultSubobject<UActorPoolComponent>(TEXT("SnapPool"));
    this->BaseSnapObject = NULL;
    this->PendingBuilding = NULL;
    this->PendingRelocate = NULL;
    this->BuildingActor = NULL;
    this->BuildingActorFlipped = NULL;
    this->BuildingActorDiagonal = NULL;
    this->BuildingActorWall = NULL;
    this->BuildingActorCeiling = NULL;
    this->PendingRotation = 0.00f;
    this->PlacedBuildingLocationLerpTime = 0.10f;
    this->PlacedBuildingRotationLerpTime = 0.10f;
    this->LerpCurve = NULL;
    this->FreeBuildingPlacementDistance = 300.00f;
    this->FreeBuildingGroundDistance = 300.00f;
    this->DistanceScoreCurve = NULL;
    this->PerpendicularDistanceScoreCurve = NULL;
    this->SocketMatchScoreCurve = NULL;
    this->PersistentSnapMatchScoreCurve = NULL;
    this->ValidSlotScore = 0.00f;
    this->BuildingWallMountPlacementDistance = 300.00f;
    this->BuildingRotateSpeed = 120.00f;
    this->GroundSnapDistance = 0;
    this->WallMaxTranslateCells = 1;
    this->RelocateVisuals = NULL;
    this->RelocateVisualsInstance = NULL;
    this->BuildingRelocateSuccessEffect = NULL;
    this->BuildingRelocateSuccesAudio = NULL;
}

