#include "PhotoModeComponent.h"
#include "Net/UnrealNetwork.h"

class APlayerController;
class APawn;
class UAnimMontage;
class AActor;
class ACharacter;
class AGameModeBase;
class APhotoPawn;
class UInputComponent;

ACharacter* UPhotoModeComponent::SpawnPoseableClone(APlayerController* ActivatingController, APawn* OriginalPawn) {
    return NULL;
}

void UPhotoModeComponent::ServerShowPoseableClone_Implementation(ACharacter* PoseableClone) {
}

void UPhotoModeComponent::ServerShowOriginalPawn_Implementation(APawn* OriginalPawn) {
}

void UPhotoModeComponent::ServerShowEquipment_Implementation(ACharacter* Character, FName AssociatedTag) {
}

void UPhotoModeComponent::ServerSetPhotoModePose_Implementation(ACharacter* Clone, UAnimMontage* Montage, float BlendValue) {
}

void UPhotoModeComponent::ServerSetIsReadyToEnterPhotoMode_Implementation(bool Ready) {
}

void UPhotoModeComponent::ServerPreSpawnPhotoModePoseableClone_Implementation(APawn* OriginalPawn) {
}

void UPhotoModeComponent::ServerPrePhotoModeEntered_Implementation(APlayerController* PlayerController) {
}

void UPhotoModeComponent::ServerPostSpawnPhotoModePoseableClone_Implementation(APawn* OriginalPawn, ACharacter* Clone, FPhotoModeCharacterCollisionInfo CollisionInfo) {
}

void UPhotoModeComponent::ServerPhotoModeSpawnPoseableClone_Implementation(APlayerController* ActivatingController, APawn* OriginalPawn) {
}

void UPhotoModeComponent::ServerOnPostLogin_Implementation(AGameModeBase* GameMode, APlayerController* NewPlayer) {
}

void UPhotoModeComponent::ServerOnPhotoModeExited_Implementation() {
}

void UPhotoModeComponent::ServerOnCharacterYawOffsetChanged_Implementation(AActor* Actor, FTransform Transform) {
}

void UPhotoModeComponent::ServerHidePoseableClone_Implementation(ACharacter* PoseableClone) {
}

void UPhotoModeComponent::ServerHideOriginalPawn_Implementation(APawn* OriginalPawn) {
}

void UPhotoModeComponent::ServerHideEquipment_Implementation(ACharacter* Character, FName AssociatedTag) {
}

void UPhotoModeComponent::ServerExitPhotoModeAsGroup_Implementation(APawn* InstigatingPawn) {
}

void UPhotoModeComponent::ServerEnterPhotoModeAsGroup_Implementation(APlayerController* InstigatingController) {
}

void UPhotoModeComponent::ServerDestroyPhotoModePoseableClone_Implementation(ACharacter* Clone) {
}

void UPhotoModeComponent::MulticastSetPhotoModePose_Implementation(ACharacter* Clone, UAnimMontage* Montage, float BlendValue) {
}

void UPhotoModeComponent::MulticastSetEquipmentVisibility_Implementation(ACharacter* Character, FName AssociatedTag, bool Visible) {
}

void UPhotoModeComponent::MulticastSetCharacterVisibility_Implementation(ACharacter* Character, bool Visible) {
}

void UPhotoModeComponent::MulticastOnCharacterYawOffsetChanged_Implementation(AActor* Actor, FTransform Transform) {
}

void UPhotoModeComponent::MulticastExitPhotoModeAsGroup_Implementation(APawn* InstigatingPawn) {
}

void UPhotoModeComponent::MulticastEnterPhotoModeAsGroup_Implementation(APawn* InstigatingPossessedPawn) {
}

EPhotoModeEntryAllowedResult UPhotoModeComponent::IsPhotoModeEntryAllowed() {
    return EPhotoModeEntryAllowedResult::Allowed;
}

void UPhotoModeComponent::EnterPhotoMode() {
}

void UPhotoModeComponent::ClientSetPoseableCloneOnMatchingClient_Implementation(APlayerController* OwningController, ACharacter* InClone, FPhotoModeCharacterCollisionInfo CollisionInfo) {
}

void UPhotoModeComponent::ClientPrePhotoModeEntered_Implementation(APlayerController* PlayerController) {
}

void UPhotoModeComponent::ClientOnPhotoPawnSetupInputs_Implementation(APhotoPawn* PhotoPawn, UInputComponent* InputComponent) {
}

void UPhotoModeComponent::ClientOnPhotoModeGroupEntryUnallowed_Implementation(EPhotoModeEntryAllowedResult Reason) {
}

void UPhotoModeComponent::ClientOnPhotoModeExited_Implementation() {
}

void UPhotoModeComponent::ClientOnPhotoModeEntered_Implementation(APhotoPawn* PhotoPawn) {
}

bool UPhotoModeComponent::CheckIsReadyToEnterPhotoMode() {
    return false;
}

void UPhotoModeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhotoModeComponent, IsPhotoModeClone);
}

UPhotoModeComponent::UPhotoModeComponent() {
    this->CachedTransformValid = false;
    this->IsReadyToEnterPhotoMode = false;
    this->ClientReadyCheckEnable = true;
    this->WereInputsSetup = false;
    this->IsPhotoModeClone = false;
}

