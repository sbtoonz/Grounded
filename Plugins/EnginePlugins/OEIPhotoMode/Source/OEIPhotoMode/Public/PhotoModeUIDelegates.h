#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Types/SlateEnums.h"
#include "PhotoModeUIDelegates.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeUIDelegates : public UObject {
    GENERATED_BODY()
public:
    UPhotoModeUIDelegates();
    UFUNCTION(BlueprintCallable)
    void SetCharacterVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void OnVignetteValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnTonemapperGammaChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnSceneFringeSliderChanged(float Value);
    
    UFUNCTION()
    void OnPoseSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnPoseBlendValueChanged(float Value);
    
    UFUNCTION()
    void OnLUTSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnHideCharacterChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnFOVValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnFogViewDistanceChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnFilmGrainSliderChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnDOFFstopChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnDOFFocusDistanceChanged(float Value);
    
    UFUNCTION()
    void OnColorGradingProfileSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnColorGradingProfileIntensityChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnColorGradingIntensityValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterYawOffsetChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraTiltSliderChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraSpeedChanged(float Value);
    
};

