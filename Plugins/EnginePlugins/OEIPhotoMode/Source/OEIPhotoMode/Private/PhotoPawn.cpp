#include "PhotoPawn.h"
#include "CineCameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

void APhotoPawn::TakePhoto_Implementation() {
}

bool APhotoPawn::SwapInputAxisBinding(const FName OldAxisName, const FName NewAxisName) {
    return false;
}

void APhotoPawn::RequestScreenshot_Implementation() {
}

void APhotoPawn::OnPhotoTakenXbox() {
}

void APhotoPawn::OnPhotoTaken(int32 Width, int32 Height, const TArray<FColor>& Colors) {
}

EPhotoPawnType APhotoPawn::GetPhotoPawnType() const {
    return EPhotoPawnType::Base;
}

FVector APhotoPawn::GetCameraLocation() const {
    return FVector{};
}

FVector APhotoPawn::GetCameraForwardVector() const {
    return FVector{};
}

void APhotoPawn::ExitPhotoMode_Implementation() {
}

void APhotoPawn::ChangeCameraType_Implementation() {
}

void APhotoPawn::BrowsePhotos_Implementation() {
}

APhotoPawn::APhotoPawn() {
    this->SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->CameraComponent = CreateDefaultSubobject<UCineCameraComponent>(TEXT("Camera"));
    this->BaseSpeedMultiplier = 3.50f;
    this->ShutterEffectFloatCurve = NULL;
    this->CameraShutterPPM = NULL;
    this->ShutterEffectDuration = 0.80f;
    this->ShutterEffectStartTime = 0.00f;
    this->ShutterActive = false;
    this->DidUnregisterFromPerception = false;
}

