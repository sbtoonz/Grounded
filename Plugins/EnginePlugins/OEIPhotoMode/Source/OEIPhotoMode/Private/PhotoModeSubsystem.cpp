#include "PhotoModeSubsystem.h"

class UPhotoModeUIDelegates;
class APlayerController;
class ACharacter;
class APawn;
class APhotoPawn;
class UMaterialParameterCollection;
class UObject;

void UPhotoModeSubsystem::ToggleTIme() {
}

bool UPhotoModeSubsystem::TogglePhotoMode(APlayerController* PlayerController) {
    return false;
}

void UPhotoModeSubsystem::ShowPoseableClone() {
}

void UPhotoModeSubsystem::ShowOriginalPawn() {
}

void UPhotoModeSubsystem::SetPoseableClone(ACharacter* InClone) {
}

void UPhotoModeSubsystem::SetPhotoModeQualityCVars(bool Reset) {
}

void UPhotoModeSubsystem::SetPhotoModeConfig(FPhotoModeConfig& InConfig) {
}

void UPhotoModeSubsystem::ResumeTime() {
}

void UPhotoModeSubsystem::PauseTime() {
}

bool UPhotoModeSubsystem::OnRequestExitPhotoMode(APlayerController* PlayerController) {
    return false;
}

bool UPhotoModeSubsystem::OnRequestEnterPhotoMode(APlayerController* PlayerController, APawn* InstigatingPossessedPawn) {
    return false;
}

bool UPhotoModeSubsystem::IsTimePaused() const {
    return false;
}

bool UPhotoModeSubsystem::IsInPhotoMode() const {
    return false;
}

void UPhotoModeSubsystem::HidePoseableClone() {
}

void UPhotoModeSubsystem::HideOriginalPawn() {
}

UPhotoModeUIDelegates* UPhotoModeSubsystem::GetUIDelegatesObject() const {
    return NULL;
}

FPhotoModeValues UPhotoModeSubsystem::GetPrePhotoModeSettingValues() {
    return FPhotoModeValues{};
}

ACharacter* UPhotoModeSubsystem::GetPoseableClone() const {
    return NULL;
}

FString UPhotoModeSubsystem::GetPhotoOutputPath() const {
    return TEXT("");
}

FPhotoModeUIOptions UPhotoModeSubsystem::GetPhotoModeUIOptions() const {
    return FPhotoModeUIOptions{};
}

APhotoPawn* UPhotoModeSubsystem::GetPhotoModePawn() const {
    return NULL;
}

UMaterialParameterCollection* UPhotoModeSubsystem::GetPhotoModeMPC() const {
    return NULL;
}

FPhotoModeGeneralOptions UPhotoModeSubsystem::GetPhotoModeGeneralOptions() const {
    return FPhotoModeGeneralOptions{};
}

FString UPhotoModeSubsystem::GetPhotoBaseFilename() const {
    return TEXT("");
}

APawn* UPhotoModeSubsystem::GetOriginalPawn() const {
    return NULL;
}

ACharacter* UPhotoModeSubsystem::GetGlobalPoseableClone(const UObject* WorldContextObject) {
    return NULL;
}

APhotoPawn* UPhotoModeSubsystem::GetGlobalPhotoModePawn(UObject* WorldContextObject) {
    return NULL;
}

APawn* UPhotoModeSubsystem::GetGlobalOriginalPawn(UObject* WorldContextObject) {
    return NULL;
}

APlayerController* UPhotoModeSubsystem::GetGlobalActivatingPlayerController(UObject* WorldContextObject) {
    return NULL;
}

APlayerController* UPhotoModeSubsystem::GetActivatingPlayerController() const {
    return NULL;
}

bool UPhotoModeSubsystem::ExitPhotoMode(APlayerController* PlayerController) {
    return false;
}

bool UPhotoModeSubsystem::EnterPhotoMode(APlayerController* PlayerController) {
    return false;
}

APhotoPawn* UPhotoModeSubsystem::ChangePawnType(EPhotoPawnType NewType) {
    return NULL;
}

UPhotoModeSubsystem::UPhotoModeSubsystem() {
    this->UserCameraSpeedMultiplier = 1.00f;
    this->PhotoPawn = NULL;
    this->PoseableClone = NULL;
}

