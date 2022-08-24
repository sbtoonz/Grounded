#include "PhotoModeStatics.h"

class APhotoPawn;
class UObject;
class UAnimMontage;
class ACharacter;
class UTexture;

void UPhotoModeStatics::TakePhotoWithPhotoPawn(UObject* WorldContextObject) {
}

void UPhotoModeStatics::SetVignetteValue(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetTonemapperGamma(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetSceneFringeIntensity(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetPhotoModeValues(UObject* WorldContextObject, const FPhotoModeValues& Values) {
}

void UPhotoModeStatics::SetMotionBlurAmount(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetFOV(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetFilmGrainIntensity(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetFilmbackWidth(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetFilmbackHeight(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetExponentialHeightFogViewDistance(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetDOFFstop(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetDOFFocusDistance(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetColorGradingProfile(UObject* WorldContextObject, const FColorGradingProfile& Profile) {
}

void UPhotoModeStatics::SetColorGradingLUT(UObject* WorldContextObject, UTexture* ColorGradingLUT) {
}

void UPhotoModeStatics::SetColorGradingIntensityValue(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetCameraRoll(UObject* WorldContextObject, float Value) {
}

void UPhotoModeStatics::SetAnimMontagePose(ACharacter* Character, UAnimMontage* AnimMontage, float BlendValue) {
}

void UPhotoModeStatics::OpenPhotoDirectoryInExplorer(UObject* WorldContextObject) {
}

float UPhotoModeStatics::GetVignetteValue(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetTonemapperGamma(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetSceneFringeIntensity(UObject* WorldContextObject) {
    return 0.0f;
}

void UPhotoModeStatics::GetPhotoModeValues(UObject* WorldContextObject, FPhotoModeValues& Values) {
}

float UPhotoModeStatics::GetOriginalPawnDistanceToCamera(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetMotionBlurAmount(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetFOV(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetFilmGrainIntensity(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetFilmbackWidth(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetFilmbackHeight(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetExponentialHeightFogViewDistance(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetDOFFstop(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetDOFFocusDistance(UObject* WorldContextObject) {
    return 0.0f;
}

FColorGradingProfile UPhotoModeStatics::GetColorGradingProfile(UObject* WorldContextObject) {
    return FColorGradingProfile{};
}

UTexture* UPhotoModeStatics::GetColorGradingLUT(UObject* WorldContextObject) {
    return NULL;
}

float UPhotoModeStatics::GetColorGradingIntensityValue(UObject* WorldContextObject) {
    return 0.0f;
}

float UPhotoModeStatics::GetCameraRoll(UObject* WorldContextObject) {
    return 0.0f;
}

APhotoPawn* UPhotoModeStatics::ChangePhotoPawnType(UObject* WorldContextObject) {
    return NULL;
}

UPhotoModeStatics::UPhotoModeStatics() {
}

