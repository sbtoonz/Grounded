#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "StaminaReadoutWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class MAINE_API UStaminaReadoutWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float LastStamina;
    
    UPROPERTY(BlueprintReadWrite)
    float CurrentDisplayedStamina;
    
    UPROPERTY(BlueprintReadOnly)
    float StaminaRatio;
    
public:
    UStaminaReadoutWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateStaminaAnim();
    
    UFUNCTION()
    void CheckStaminaRatio(float NewRatio);
    
};

