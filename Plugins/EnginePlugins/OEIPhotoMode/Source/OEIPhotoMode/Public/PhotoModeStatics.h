#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhotoModeValues.h"
#include "ColorGradingProfile.h"
#include "PhotoModeStatics.generated.h"

class APhotoPawn;
class UObject;
class UAnimMontage;
class ACharacter;
class UTexture;

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhotoModeStatics();
    UFUNCTION(BlueprintCallable)
    static void TakePhotoWithPhotoPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetVignetteValue(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTonemapperGamma(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSceneFringeIntensity(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPhotoModeValues(UObject* WorldContextObject, const FPhotoModeValues& Values);
    
    UFUNCTION(BlueprintCallable)
    static void SetMotionBlurAmount(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFOV(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFilmGrainIntensity(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFilmbackWidth(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFilmbackHeight(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetExponentialHeightFogViewDistance(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDOFFstop(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDOFFocusDistance(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorGradingProfile(UObject* WorldContextObject, const FColorGradingProfile& Profile);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorGradingLUT(UObject* WorldContextObject, UTexture* ColorGradingLUT);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorGradingIntensityValue(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraRoll(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimMontagePose(ACharacter* Character, UAnimMontage* AnimMontage, float BlendValue);
    
    UFUNCTION(BlueprintCallable)
    static void OpenPhotoDirectoryInExplorer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVignetteValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTonemapperGamma(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSceneFringeIntensity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetPhotoModeValues(UObject* WorldContextObject, FPhotoModeValues& Values);
    
    UFUNCTION(BlueprintCallable)
    static float GetOriginalPawnDistanceToCamera(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMotionBlurAmount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFOV(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFilmGrainIntensity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetFilmbackWidth(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetFilmbackHeight(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetExponentialHeightFogViewDistance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDOFFstop(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDOFFocusDistance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColorGradingProfile GetColorGradingProfile(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture* GetColorGradingLUT(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetColorGradingIntensityValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCameraRoll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static APhotoPawn* ChangePhotoPawnType(UObject* WorldContextObject);
    
};

