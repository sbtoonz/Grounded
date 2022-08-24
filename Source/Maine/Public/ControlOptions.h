#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EControlSet.h"
#include "UObject/NoExportTypes.h"
#include "ControlOptions.generated.h"

UCLASS(Blueprintable)
class MAINE_API UControlOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSprintToggle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGlideToggle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCrouchToggle() const;
    
    UFUNCTION(BlueprintCallable)
    void BindGame();
    
};

