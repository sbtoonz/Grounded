#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EControlSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ControlOptions.generated.h"

UCLASS(BlueprintType)
class MAINE_API UControlOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EControlSet ControlSet;
    
    UControlOptions();
    UFUNCTION(BlueprintCallable)
    void UnbindGame();
    
    UFUNCTION(BlueprintCallable)
    void SetSprintToggle(bool bNewSprintToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetSensitivityY(float NewSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetSensitivityX(float NewSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetSensitivity(FVector2D NewSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertY(bool NewInvertY);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertX(bool NewInvertX);
    
    UFUNCTION(BlueprintCallable)
    void SetGlideToggle(bool bNewGlideToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchToggle(bool bNewCrouchToggle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Save() const;
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintPure)
    bool GetSprintToggle() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSensitivity() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInvertY() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInvertX() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGlideToggle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCrouchToggle() const;
    
    UFUNCTION(BlueprintCallable)
    void BindGame();
    
};

